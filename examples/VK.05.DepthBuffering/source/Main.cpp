
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders two textured quads with depth buffering
// Based on https://vulkan-tutorial.com/Depth_buffering

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"
#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/System/Window.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>

struct UniformBuffer final
{
    glm::mat4 world;
    glm::mat4 view;
    glm::mat4 projection;
};

class VulkanExample05DepthBuffering final
    : public dst::vlkn::Application
{
private:
    std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mDescriptorSetLayout;
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mPipeline;
    std::shared_ptr<dst::vlkn::Image> mImage;
    std::shared_ptr<dst::vlkn::Sampler> mSampler;
    std::shared_ptr<dst::vlkn::Buffer> mVertexBuffer;
    std::shared_ptr<dst::vlkn::Buffer> mIndexBuffer;
    size_t mIndexCount { 0 };
    std::shared_ptr<dst::vlkn::Buffer> mUniformBuffer;
    std::shared_ptr<dst::vlkn::Descriptor::Pool> mDescriptorPool;
    dst::vlkn::Descriptor::Set* mDescriptorSet { nullptr };
    float mRotation { 0 };

public:
    VulkanExample05DepthBuffering()
    {
        set_name("Dynamic_Static VK.05.DepthBuffering");
        mDebugFlags =
            0
            #if defined(DYNAMIC_STATIC_WINDOWS)
            // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            // | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            // | VK_DEBUG_REPORT_WARNING_BIT_EXT
            // | VK_DEBUG_REPORT_ERROR_BIT_EXT
            #endif
            ;
    }

private:
    void setup() override
    {
        // NOTE : This "configuration" is dumb...but it'll do for now.
        mDepthEnabled = true;

        dst::vlkn::Application::setup();
        create_descriptor_set_layout();
        create_pipeline();
        create_image_and_sampler();
        create_vertex_and_index_buffers();
        create_uniform_buffer();
        create_descriptor_set();
    }

    void create_descriptor_set_layout()
    {
        using namespace dst::vlkn;
        std::array<VkDescriptorSetLayoutBinding, 2> descriptorSetLayoutBindings { };
        descriptorSetLayoutBindings[0].binding = 0;
        descriptorSetLayoutBindings[0].descriptorCount = 1;
        descriptorSetLayoutBindings[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorSetLayoutBindings[0].stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

        descriptorSetLayoutBindings[1].binding = 1;
        descriptorSetLayoutBindings[1].descriptorCount = 1;
        descriptorSetLayoutBindings[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorSetLayoutBindings[1].stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

        auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
        descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBindings.size());
        descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBindings.data();
        mDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
    }

    void create_pipeline()
    {
        using namespace dst::vlkn;
        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(binding = 0)
                uniform UniformBuffer
                {
                    mat4 world;
                    mat4 view;
                    mat4 projection;
                } ubo;

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec2 vsTexCoord;

                layout(location = 0) out vec2 fsTexCoord;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = ubo.projection * ubo.view * ubo.world * vec4(vsPosition, 1);
                    fsTexCoord = vsTexCoord;
                }

            )"
        );

        auto fragmentShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(binding = 1) uniform sampler2D image;

                layout(location = 0) in vec2 fsTexCoord;

                layout(location = 0) out vec4 fragColor;

                void main()
                {
                    fragColor = texture(image, fsTexCoord);
                }

            )"
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_create_info(),
            fragmentShader->pipeline_stage_create_info(),
        };

        auto vertexBindingDescription = binding_description<VertexPositionTexCoord>();
        auto vertexAttributeDescriptions = attribute_descriptions<VertexPositionTexCoord>();
        auto vertexInputState = Pipeline::VertexInputStateCreateInfo;
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        auto depthStencilInfo = Pipeline::DepthStencilStateCreateInfo;
        depthStencilInfo.depthTestEnable = VK_TRUE;
        depthStencilInfo.depthWriteEnable = VK_TRUE;
        depthStencilInfo.depthCompareOp = VK_COMPARE_OP_LESS;

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        mPipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.pVertexInputState = &vertexInputState;
        pipelineInfo.pDepthStencilState = &depthStencilInfo;
        pipelineInfo.layout = *mPipelineLayout;
        pipelineInfo.renderPass = *mRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineInfo);
    }

    std::shared_ptr<dst::vlkn::Buffer> create_staging_buffer(size_t size)
    {
        using namespace dst::vlkn;
        auto bufferInfo = Buffer::CreateInfo;
        bufferInfo.size = static_cast<VkDeviceSize>(size);
        bufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        return mDevice->create<Buffer>(bufferInfo, memoryProperties);
    }

    void create_image_and_sampler()
    {
        using namespace dst::vlkn;
        auto filePath = "../../../examples/resources/images/turtle.jpg";
        auto imageCache = dst::gfx::ImageReader::read_file(filePath);

        auto imageInfo = Image::CreateInfo;
        imageInfo.imageType = VK_IMAGE_TYPE_2D;
        imageInfo.extent.width = imageCache.width();
        imageInfo.extent.height = imageCache.height();
        imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
        imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
        imageInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        mImage = mDevice->create<Image>(imageInfo);

        auto memoryInfo = Memory::AllocateInfo;
        auto memoryRequirements = mImage->memory_requirements();
        memoryInfo.allocationSize = memoryRequirements.size;
        memoryInfo.memoryTypeIndex = mPhysicalDevice->find_memory_type_index(
            memoryRequirements.memoryTypeBits,
            VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
        );

        mImage->bind_memory(mDevice->allocate<Memory>(memoryInfo));

        auto stagingBuffer = create_staging_buffer(imageCache.data().size_bytes());
        stagingBuffer->write<uint8_t>(imageCache.data());
        mGraphicsQueue->process_immediate(
            [&](Command::Buffer& commandBuffer)
            {
                auto oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                auto newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
                auto layoutTransition = Image::create_layout_transition(*mImage, oldLayout, newLayout);
                vkCmdPipelineBarrier(
                    commandBuffer,
                    layoutTransition.srcStage,
                    layoutTransition.dstStage,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &layoutTransition.barrier
                );

                VkBufferImageCopy copyRegion { };
                copyRegion.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                copyRegion.imageSubresource.layerCount = 1;
                copyRegion.imageExtent.width = imageCache.width();
                copyRegion.imageExtent.height = imageCache.height();
                copyRegion.imageExtent.depth = 1;
                vkCmdCopyBufferToImage(
                    commandBuffer,
                    *stagingBuffer,
                    *mImage,
                    newLayout,
                    1,
                    &copyRegion
                );

                oldLayout = newLayout;
                newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                layoutTransition = Image::create_layout_transition(*mImage, oldLayout, newLayout);
                vkCmdPipelineBarrier(
                    commandBuffer,
                    layoutTransition.srcStage,
                    layoutTransition.dstStage,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &layoutTransition.barrier
                );
            }
        );

        mImage->create<Image::View>();
        mSampler = mDevice->create<Sampler>();
    }

    void create_vertex_and_index_buffers()
    {
        using namespace dst::vlkn;
        float w = static_cast<float>(mImage->extent().width);
        float h = static_cast<float>(mImage->extent().height);
        float a = 1.0f / std::max(w, h);
        w = w * a * 0.5f;
        h = h * a * 0.5f;
        const std::array<VertexPositionTexCoord, 8> vertices {
            VertexPositionTexCoord { { -w,  0.25f, -h }, { 0, 0 } },
            VertexPositionTexCoord { {  w,  0.25f, -h }, { 1, 0 } },
            VertexPositionTexCoord { {  w,  0.25f,  h }, { 1, 1 } },
            VertexPositionTexCoord { { -w,  0.25f,  h }, { 0, 1 } },

            VertexPositionTexCoord { { -w, -0.25f, -h }, { 0, 0 } },
            VertexPositionTexCoord { {  w, -0.25f, -h }, { 1, 0 } },
            VertexPositionTexCoord { {  w, -0.25f,  h }, { 1, 1 } },
            VertexPositionTexCoord { { -w, -0.25f,  h }, { 0, 1 } },
        };

        const std::array<uint16_t, 12> indices {
            0, 1, 2, 2, 3, 0,
            4, 5, 6, 6, 7, 4,
        };

        mIndexCount = indices.size();

        auto vertexBufferInfo = Buffer::CreateInfo;
        vertexBufferInfo.size = static_cast<VkDeviceSize>(sizeof(vertices[0]) * vertices.size());
        vertexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
        auto vertexBufferMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        mVertexBuffer = mDevice->create<Buffer>(vertexBufferInfo, vertexBufferMemoryProperties);

        auto indexBufferInfo = Buffer::CreateInfo;
        indexBufferInfo.size = static_cast<VkDeviceSize>(sizeof(indices[0]) * indices.size());
        indexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
        auto indexBufferMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        mIndexBuffer = mDevice->create<Buffer>(indexBufferInfo, indexBufferMemoryProperties);

        auto stagingBuffer = create_staging_buffer(std::max(vertexBufferInfo.size, indexBufferInfo.size));

        stagingBuffer->write<VertexPositionTexCoord>(vertices);
        mGraphicsQueue->process_immediate(
            [&](Command::Buffer& commandBuffer)
            {
                commandBuffer.copy_buffer(*stagingBuffer, *mVertexBuffer, vertexBufferInfo.size);
            }
        );

        stagingBuffer->write<uint16_t>(indices);
        mGraphicsQueue->process_immediate(
            [&](Command::Buffer& commandBuffer)
            {
                commandBuffer.copy_buffer(*stagingBuffer, *mIndexBuffer, indexBufferInfo.size);
            }
        );
    }

    void create_uniform_buffer()
    {
        using namespace dst::vlkn;
        auto uniformBufferInfo = Buffer::CreateInfo;
        uniformBufferInfo.size = sizeof(UniformBuffer);
        uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        auto uniformMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        mUniformBuffer = mDevice->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
    }

    void create_descriptor_set()
    {
        using namespace dst::vlkn;
        std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes;
        descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorPoolSizes[0].descriptorCount = 1;

        descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSizes[1].descriptorCount = 1;

        auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
        descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
        descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
        descriptorPoolInfo.maxSets = 1;
        mDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

        auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
        descriptorSetInfo.descriptorPool = *mDescriptorPool;
        descriptorSetInfo.descriptorSetCount = 1;
        descriptorSetInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        mDescriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

        VkDescriptorBufferInfo descriptorBufferInfo { };
        descriptorBufferInfo.buffer = *mUniformBuffer;
        descriptorBufferInfo.offset = 0;
        descriptorBufferInfo.range = sizeof(UniformBuffer);

        VkDescriptorImageInfo descriptorImageInfo { };
        descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        descriptorImageInfo.imageView = *mImage->view();
        descriptorImageInfo.sampler = *mSampler;

        std::array<VkWriteDescriptorSet, 2> descriptorWrites { };
        descriptorWrites[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        descriptorWrites[0].dstSet = *mDescriptorSet;
        descriptorWrites[0].dstBinding = 0;
        descriptorWrites[0].dstArrayElement = 0;
        descriptorWrites[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorWrites[0].descriptorCount = 1;
        descriptorWrites[0].pBufferInfo = &descriptorBufferInfo;

        descriptorWrites[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        descriptorWrites[1].dstSet = *mDescriptorSet;
        descriptorWrites[1].dstBinding = 1;
        descriptorWrites[1].dstArrayElement = 0;
        descriptorWrites[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorWrites[1].descriptorCount = 1;
        descriptorWrites[1].pImageInfo = &descriptorImageInfo;
        vkUpdateDescriptorSets(
            *mDevice,
            static_cast<uint32_t>(descriptorWrites.size()),
            descriptorWrites.data(),
            0,
            nullptr
        );
    }

    void update(const dst::Clock& clock, const dst::sys::Input& input) override
    {
        if (input.keyboard.down(dst::sys::Keyboard::Key::Escape)) {
            stop();
        }

        UniformBuffer ubo;
        mRotation += 90.0f * clock.elapsed<dst::Second<float>>();
        ubo.world = glm::toMat4(glm::angleAxis(glm::radians(mRotation), glm::vec3 { 0, 1, 0 }));
        ubo.view = glm::lookAt({ 0, 2, 2 }, glm::vec3 { }, glm::vec3 { 0, 1, 0 });
        ubo.projection = glm::perspective(
            glm::radians(30.0f),
            static_cast<float>(mSwapchain->extent().width) /
            static_cast<float>(mSwapchain->extent().height),
            0.01f,
            10.0f
        );

        ubo.projection[1][1] *= -1;

        mUniformBuffer->write<UniformBuffer>(gsl::make_span(&ubo, 1));
    }

    void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock)
    {
        commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline);
        commandBuffer.bind_descriptor_set(*mDescriptorSet, *mPipelineLayout);
        commandBuffer.bind_vertex_buffer(*mVertexBuffer);
        commandBuffer.bind_index_buffer(*mIndexBuffer);
        commandBuffer.draw_indexed(mIndexCount);
    }
};

int main()
{
    try {
        VulkanExample05DepthBuffering app;
        app.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
