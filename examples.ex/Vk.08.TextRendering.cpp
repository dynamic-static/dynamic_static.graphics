
/*
==========================================
  Copyright (c) 2018-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static.Graphics.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>

class Application final
    : public dst::vk::Application
{
private:
    struct UniformBuffer final
    {
        glm::mat4 pvw;
    };

private:
    dst::sys::Font mFont;
    dst::gfx::Camera mCamera;
    dst::gfx::FreeCamerController mCameraController;
    std::shared_ptr<dst::vk::Image> mImage;
    std::shared_ptr<dst::vk::Sampler> mSampler;
    std::shared_ptr<dst::vk::Buffer> mUniformBuffer;
    std::shared_ptr<dst::vk::Pipeline> mPipeline;
    std::shared_ptr<dst::vk::DescriptorSet> mDescriptorSet;
    std::vector<dst::vk::VertexPositionColorTexture> mVertices;
    std::vector<uint16_t> mIndices;
    dst::sys::Text::Layout mTextLayout;
    dst::vk::Mesh mMesh;

public:
    Application()
    {
        mInfo.pApplicationName = "Vk.08.TextRendering";
        mCamera.transform.translation = glm::vec3 { 0, 0, 7 };
        mCameraController.camera = &mCamera;
    }

private:
    void create_instance(
        std::vector<const char*>& layers,
        std::vector<const char*>& extensions,
        VkDebugReportFlagsEXT debugReportFlags
    ) override
    {
        dst::vk::Application::create_instance(
            layers,
            extensions,
            debugReportFlags
            // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_ERROR_BIT_EXT
        );
    }

    void create_resources() override
    {
        using namespace dst::vk;
        mFont.read_ttf("../../examples/resources/fonts/OpenSans-Regular.ttf", 64);
        mImage = mDevice->create<Image>(mFont.get_image(), VK_FORMAT_R8_UNORM);
        mSampler = mDevice->create<Sampler>();
        Buffer::CreateInfo uniformBufferCreateInfo { };
        uniformBufferCreateInfo.size = sizeof(UniformBuffer);
        uniformBufferCreateInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        mUniformBuffer = mDevice->create<Buffer>(uniformBufferCreateInfo);
        DeviceMemory::allocate_resource_memory(
            mUniformBuffer,
            VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT
        );

        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            __LINE__,
            R"(
                #version 450

                layout(set = 0, binding = 0)
                uniform UniformBuffer
                {
                    mat4 pvw;
                } ubo;

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec4 vsColor;
                layout(location = 2) in vec2 vsTexcoord;
                layout(location = 0) out vec4 fsColor;
                layout(location = 1) out vec2 fsTexcoord;
                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = ubo.pvw * vec4(vsPosition, 1);
                    fsColor = vsColor;
                    fsTexcoord = vsTexcoord;
                }

            )"
        );
        auto fragmentShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            __LINE__,
            R"(
                #version 450

                layout(set = 0, binding = 1) uniform sampler2D image;
                layout(location = 0) in vec4 fsColor;
                layout(location = 1) in vec2 fsTexcoord;
                layout(location = 0) out vec4 fragColor;

                void main()
                {
                    fragColor = texture(image, fsTexcoord).rrrr * fsColor;
                }
            )"
        );
        std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages { };
        shaderStages[0] = vertexShader->get_pipeline_stage_create_info();
        shaderStages[1] = fragmentShader->get_pipeline_stage_create_info();
        auto vertexDescriptorBindings = vertexShader->get_descriptor_set_layout_bindings();
        auto fragmentDescriptorBindings = fragmentShader->get_descriptor_set_layout_bindings();
        std::vector<VkDescriptorSetLayoutBinding> descriptorSetLayoutBindings;
        dst::append(descriptorSetLayoutBindings, vertexShader->get_descriptor_set_layout_bindings()[0]);
        dst::append(descriptorSetLayoutBindings, fragmentShader->get_descriptor_set_layout_bindings()[0]);
        DescriptorSetLayout::CreateInfo descriptorSetLayoutCreateInfo { };
        descriptorSetLayoutCreateInfo.bindingCount = (uint32_t)descriptorSetLayoutBindings.size();
        descriptorSetLayoutCreateInfo.pBindings = descriptorSetLayoutBindings.data();
        auto descriptorSetLayout = mDevice->create<DescriptorSetLayout>(descriptorSetLayoutCreateInfo);
        auto pipelineLayout = mDevice->create<PipelineLayout>(descriptorSetLayout);

        auto vertexBindingDescription = get_binding_description<VertexPositionColorTexture>();
        auto vertexAttributeDescriptions = get_attribute_descriptions<VertexPositionColorTexture>();
        Pipeline::VertexInputStateCreateInfo vertexInputState { };
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = (uint32_t)vertexAttributeDescriptions.size();
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        Pipeline::RasterizationStateCreateInfo rasterizationState { };
        rasterizationState.cullMode = VK_CULL_MODE_NONE;

        Pipeline::ColorBlendAttachmentState colorBlendAttachmentState { };
        colorBlendAttachmentState.blendEnable = VK_TRUE;
        Pipeline::ColorBlendStateCreateInfo colorBlendCreateInfo { };
        colorBlendCreateInfo.attachmentCount = 1;
        colorBlendCreateInfo.pAttachments = &colorBlendAttachmentState;

        Pipeline::GraphicsCreateInfo pipelineCreateInfo { };
        pipelineCreateInfo.stageCount = (uint32_t)shaderStages.size();
        pipelineCreateInfo.pStages = shaderStages.data();
        pipelineCreateInfo.pVertexInputState = &vertexInputState;
        pipelineCreateInfo.pRasterizationState = &rasterizationState;
        pipelineCreateInfo.pColorBlendState = &colorBlendCreateInfo;
        pipelineCreateInfo.renderPass = *mSwapchainRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineLayout, pipelineCreateInfo);

        std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
        descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorPoolSizes[0].descriptorCount = 1;
        descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSizes[1].descriptorCount = 1;
        DescriptorPool::CreateInfo descriptorPoolCreateInfo { };
        descriptorPoolCreateInfo.poolSizeCount = (uint32_t)descriptorPoolSizes.size();
        descriptorPoolCreateInfo.pPoolSizes = descriptorPoolSizes.data();
        descriptorPoolCreateInfo.maxSets = 1;
        auto descriptorPool = mDevice->create<DescriptorPool>(descriptorPoolCreateInfo);
        mDescriptorSet = descriptorPool->allocate<DescriptorSet>(descriptorSetLayout);

        VkDescriptorBufferInfo bufferInfo { };
        bufferInfo.buffer = *mUniformBuffer;
        bufferInfo.range = VK_WHOLE_SIZE;
        VkDescriptorImageInfo imageInfo { };
        imageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        imageInfo.imageView = mImage->get_view();
        imageInfo.sampler = *mSampler;
        std::array<DescriptorSet::Write, 2> writes { };
        writes[0].dstSet = *mDescriptorSet;
        writes[0].dstBinding = 0;
        writes[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        writes[0].descriptorCount = 1;
        writes[0].pBufferInfo = &bufferInfo;
        writes[1].dstSet = *mDescriptorSet;
        writes[1].dstBinding = 1;
        writes[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        writes[1].descriptorCount = 1;
        writes[1].pImageInfo = &imageInfo;
        vkUpdateDescriptorSets(*mDevice, (uint32_t)writes.size(), writes.data(), 0, nullptr);
    }

    void update(
        const dst::Clock& clock,
        const dst::sys::Input& input
    ) override
    {
        using namespace dst::sys;
        if (input.keyboard.down(Keyboard::Key::Escape)) {
            stop();
        }
        if (input.mouse.down(dst::sys::Mouse::Button::Left)) {
            mWindow->set_cursor_mode(dst::sys::Window::CursorMode::Disabled);
            mCameraController.lookEnabled = true;
        } else {
            mWindow->set_cursor_mode(dst::sys::Window::CursorMode::Visible);
            mCameraController.lookEnabled = false;
        }
        mCameraController.update(clock, input);
        auto swapchainExtent = mSwapchain->get_extent();
        if (swapchainExtent.height) {
            mCamera.aspectRatio = (float)swapchainExtent.width / (float)swapchainExtent.height;
        }
        UniformBuffer ubo { };
        ubo.pvw = mCamera.get_projection() * mCamera.get_view();
        mUniformBuffer->write<UniformBuffer>(ubo);
    }

    void record_swapchain_render_pass(
        const dst::Clock& clock,
        const dst::vk::CommandBuffer& commandBuffer
    ) override
    {
        using namespace dst::vk;
        mVertices.clear();
        mIndices.clear();
        static int score;
        std::string text = "Score : " + std::to_string(score++);
        // std::string text = "The quick brown fox.";
        glm::vec3 offset { -10, 0, 1 };
        dst::sys::Text::Layout::Info layoutInfo { };
        mTextLayout.scale = glm::vec2 { 0.05f, 0.05f };
        mTextLayout.process(
            mFont, text,
            [&](
                const dst::sys::Glyph& glyph,
                const glm::vec4& color,
                const auto& vertices,
                const auto& texcoords,
                const auto& indices
            )
            {
                for (int i = 0; i < 4; ++i) {
                    VertexPositionColorTexture vertex;
                    vertex.position.x = vertices[i].x;
                    vertex.position.y = vertices[i].y;
                    vertex.position.z = 0;
                    vertex.texoord.x = texcoords[i].x;
                    vertex.texoord.y = texcoords[i].y;
                    vertex.color = color;
                    mVertices.push_back(vertex);
                }
                for (auto index : indices) {
                    mIndices.push_back(index);
                }
            },
            &layoutInfo
        );
        // auto color0 = dst::Color::Green;
        // auto color1 = dst::Color::Purple;
        // for (auto& vertex : mVertices) {
        //     float t = vertex.position.x / layoutInfo.get_extent().x;
        //     vertex.color.r = dst::lerp(color0.r, color1.r, t);
        //     vertex.color.g = dst::lerp(color0.g, color1.g, t);
        //     vertex.color.b = dst::lerp(color0.b, color1.b, t);
        //     vertex.color.a = dst::lerp(color0.a, color1.a, t);
        //     // vertex.color *= mTextLayout.color;
        //     vertex.position += offset;
        // }
        mMesh.rewrite<VertexPositionColorTexture, uint16_t>(mDevice, mVertices, mIndices);
        auto bindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        vkCmdBindPipeline(commandBuffer, bindPoint, *mPipeline);
        auto vkPipelineLayout = mPipeline->get_layout().get_handle();
        auto vkDescriptorSet = mDescriptorSet->get_handle();
        vkCmdBindDescriptorSets(commandBuffer, bindPoint, vkPipelineLayout, 0, 1, &vkDescriptorSet, 0, nullptr);
        mMesh.record_draw_cmds(commandBuffer);
    }
};

int main()
{
    Application().start();
    return 0;
}
