
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : This example follows along with...
//  https://vulkan-tutorial.com/Texture_mapping

#include "Dynamic_Static.Graphics.hpp"

#include <algorithm>
#include <array>
#include <memory>

class Application final
    : public dst::vk::Application
{
private:
    struct PushConstants final
    {
        glm::mat4 world;
        glm::mat4 view;
        glm::mat4 projection;
    };

    std::shared_ptr<dst::vk::Pipeline> mPipeline;
    std::shared_ptr<dst::vk::Image> mImage;
    std::shared_ptr<dst::vk::Sampler> mSampler;
    std::shared_ptr<dst::vk::DescriptorSet> mDescriptorSet;
    PushConstants mPushConstants;
    float mRotation { 0 };
    dst::vk::Mesh mMesh;

public:
    Application()
    {
        mInfo.pApplicationName = "Dynamic_Static Vk.05.TextureMapping";
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
        create_pipeline();
        create_image_and_sampler();
        create_mesh();
        create_descriptor_sets();
    }

    void create_pipeline()
    {
        using namespace dst::vk;
        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            __LINE__,
            R"(
                #version 450

                layout(push_constant)
                uniform PushConstants
                {
                    mat4 world;
                    mat4 view;
                    mat4 projection;
                } pc;

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec2 vsTexcoord;

                layout(location = 0) out vec2 fsTexcoord;
                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = pc.projection * pc.view * pc.world * vec4(vsPosition, 1);
                    fsTexcoord = vsTexcoord;
                }
            )"
        );
        auto fragmentShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            __LINE__,
            R"(
                #version 450

                layout(binding = 0) uniform sampler2D image;

                layout(location = 0) in vec2 fsTexcoord;

                layout(location = 0) out vec4 fragColor;

                void main()
                {
                    fragColor = texture(image, fsTexcoord);
                }
            )"
        );
        std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages {
            vertexShader->get_pipeline_stage_create_info(),
            fragmentShader->get_pipeline_stage_create_info()
        };
        auto descriptorSetLayoutBindings = fragmentShader->get_descriptor_set_layout_bindings();
        DescriptorSetLayout::CreateInfo descriptorSetLayoutCreateInfo { };
        descriptorSetLayoutCreateInfo.bindingCount = (uint32_t)descriptorSetLayoutBindings[0].size();
        descriptorSetLayoutCreateInfo.pBindings = descriptorSetLayoutBindings[0].data();
        auto descriptorSetLayout = mDevice->create<DescriptorSetLayout>(descriptorSetLayoutCreateInfo);
        auto pushConstantRanges = vertexShader->get_push_constant_ranges();
        auto pipelineLayout = mDevice->create<PipelineLayout>(descriptorSetLayout, pushConstantRanges);

        auto vertexBindingDescription = get_binding_description<VertexPositionTexture>();
        auto vertexAttributeDescriptions = get_attribute_descriptions<VertexPositionTexture>();
        Pipeline::VertexInputStateCreateInfo vertexInputState { };
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = (uint32_t)vertexAttributeDescriptions.size();
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        Pipeline::GraphicsCreateInfo pipelineCreateInfo { };
        pipelineCreateInfo.stageCount = (uint32_t)shaderStages.size();
        pipelineCreateInfo.pStages = shaderStages.data();
        pipelineCreateInfo.pVertexInputState = &vertexInputState;
        pipelineCreateInfo.renderPass = *mSwapchainRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineLayout, pipelineCreateInfo);
    }

    void create_image_and_sampler()
    {
        using namespace dst::vk;
        dst::sys::Image image;
        image.read_png("../../examples/resources/images/turtle.jpg");
        mImage = mDevice->create<Image>(image);
        mSampler = mDevice->create<Sampler>();
    }

    void create_mesh()
    {
        using namespace dst::vk;
        float w = (float)mImage->get_extent().width;
        float h = (float)mImage->get_extent().height;
        float a = 1.0f / std::max(w, h);
        w = w * a * 0.5f;
        h = h * a * 0.5f;
        const std::array<VertexPositionTexture, 4> vertices {
            VertexPositionTexture {{ -w, 0, -h }, { 0, 0 }},
            VertexPositionTexture {{  w, 0, -h }, { 1, 0 }},
            VertexPositionTexture {{  w, 0,  h }, { 1, 1 }},
            VertexPositionTexture {{ -w, 0,  h }, { 0, 1 }},
        };
        const std::array<uint16_t, 6> indices {
            0, 1, 2,
            2, 3, 0,
        };
        mMesh.write<VertexPositionTexture, uint16_t>(mDevice, vertices, indices);
    }

    void create_descriptor_sets()
    {
        using namespace dst::vk;
        VkDescriptorPoolSize descriptorPoolSize { };
        descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSize.descriptorCount = 1;
        DescriptorPool::CreateInfo descriptorPoolCreateInfo { };
        descriptorPoolCreateInfo.poolSizeCount = 1;
        descriptorPoolCreateInfo.pPoolSizes = &descriptorPoolSize;
        descriptorPoolCreateInfo.maxSets = 1;
        auto descriptorPool = mDevice->create<DescriptorPool>(descriptorPoolCreateInfo);
        const auto& descriptorSetLayout = mPipeline->get_layout().get_descriptor_set_layouts()[0];
        mDescriptorSet = descriptorPool->allocate<DescriptorSet>(descriptorSetLayout);

        VkDescriptorImageInfo imageInfo { };
        imageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        imageInfo.imageView = mImage->get_view();
        imageInfo.sampler = *mSampler;
        DescriptorSet::Write write { };
        write.dstSet = *mDescriptorSet;
        write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        write.descriptorCount = 1;
        write.pImageInfo = &imageInfo;
        vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
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
        mRotation += 90.0f * clock.elapsed<dst::Second<float>>();
        mPushConstants.world = glm::toMat4(glm::angleAxis(glm::radians(mRotation), dst::unit_y<glm::vec3>()));
        mPushConstants.view = glm::lookAt({ 0, 2, 2 }, { }, dst::world_up<glm::vec3>());
        mPushConstants.projection = glm::perspective(
            glm::radians(30.0f),
            (float)mSwapchain->get_extent().width /
            (float)mSwapchain->get_extent().height,
            0.01f,
            10.0f
        );
        mPushConstants.projection[1][1] *= -1;
    }

    void record_swapchain_render_pass(
        const dst::Clock& clock,
        const dst::vk::CommandBuffer& commandBuffer
    ) override
    {
        auto bindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        vkCmdBindPipeline(commandBuffer, bindPoint, *mPipeline);
        auto vkPipelineLayout = mPipeline->get_layout().get_handle();
        auto vkDescriptorSet = mDescriptorSet->get_handle();
        vkCmdPushConstants(commandBuffer, vkPipelineLayout, VK_SHADER_STAGE_VERTEX_BIT, 0, sizeof(PushConstants), &mPushConstants);
        vkCmdBindDescriptorSets(commandBuffer, bindPoint, vkPipelineLayout, 0, 1, &vkDescriptorSet, 0, nullptr);
        mMesh.record_draw_cmds(commandBuffer);
    }
};

int main()
{
    Application().start();
    return 0;
}
