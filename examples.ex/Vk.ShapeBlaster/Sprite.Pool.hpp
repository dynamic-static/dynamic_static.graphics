
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Sprite.hpp"

#include "Dynamic_Static.Graphics.hpp"

#include <array>
#include <cassert>
#include <memory>

namespace ShapeBlaster {

    class Sprite::Pool final
        : dst::NonCopyable
    {
    private:
        class Resource final
        {
        public:
            std::shared_ptr<dst::vk::Image> image;
            std::shared_ptr<dst::vk::DescriptorSet> descriptorSet;
            std::string filePath;
            int index { 0 };
            int total { 0 };
            int available { 0 };
        };

        struct CameraUbo final
        {
            glm::mat4 projectionFromWorld { glm::identity<glm::mat4>() };
        };

        std::shared_ptr<dst::vk::Sampler> mSampler;
        std::shared_ptr<dst::vk::Buffer> mInstanceBuffer;
        std::shared_ptr<dst::vk::Buffer> mUniformBuffer;
        std::shared_ptr<dst::vk::Pipeline> mPipeline;
        std::shared_ptr<dst::vk::DescriptorSet> mDescriptorSet;
        std::vector<Resource> mResources;

    public:
        Pool(
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass,
            dst::Span<const Sprite::CreateInfo> createInfos
        )
        {
            assert(device);
            assert(renderPass);
            create_resources(device, createInfos);
            create_pipeline(device, renderPass);
            create_descriptor_sets(device);
        }

    public:
        inline Sprite check_out(int id)
        {
            Sprite sprite;
            sprite.mPool = this;
            return sprite;
        }

        inline void check_in(Sprite&& sprite)
        {
            sprite.mPool = nullptr;
        }

        inline void update(const dst::gfx::Camera& camera)
        {
            CameraUbo cameraUbo { };
            cameraUbo.projectionFromWorld = camera.get_projection() * camera.get_view();
            mUniformBuffer->write<CameraUbo>(cameraUbo);
        }

        inline void record_draw_cmds(const dst::vk::CommandBuffer& commandBuffer)
        {
            auto bindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            vkCmdBindPipeline(commandBuffer, bindPoint, *mPipeline);
            auto vkPipelineLayout = mPipeline->get_layout().get_handle();
            auto vkDescriptorSet = mDescriptorSet->get_handle();
            vkCmdBindDescriptorSets(commandBuffer, bindPoint, vkPipelineLayout, 0, 1, &vkDescriptorSet, 0, nullptr);
            for (const auto& resource : mResources) {
                vkDescriptorSet = resource.descriptorSet->get_handle();
                vkCmdBindDescriptorSets(commandBuffer, bindPoint, vkPipelineLayout, 1, 1, &vkDescriptorSet, 0, nullptr);
                VkDeviceSize offset = 0;
                auto vkInstanceBuffer = mInstanceBuffer->get_handle();
                vkCmdBindVertexBuffers(commandBuffer, 0, 1, &vkInstanceBuffer, &offset);
                vkCmdDraw(commandBuffer, 6, resource.total, 0, 0);
            }
        }

    private:
        inline void create_resources(
            const std::shared_ptr<dst::vk::Device>& device,
            dst::Span<const Sprite::CreateInfo> createInfos
        )
        {
            assert(device);
            using namespace dst::vk;
            int totalSpriteCount = 0;
            mResources.resize(createInfos.size());
            std::vector<dst::sys::Image> sysImages(createInfos.size());
            std::vector<Image*> imagePointers(createInfos.size());
            for (int i = 0; i < createInfos.size(); ++i) {
                auto filePath = createInfos[i].filePath;
                auto count = createInfos[i].count;
                auto& sysImage = sysImages[i];
                auto& resource = mResources[i];
                sysImage.read_png(filePath);
                Image::CreateInfo imageCreateInfo { };
                imageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
                imageCreateInfo.extent.width = (uint32_t)sysImage.get_width();
                imageCreateInfo.extent.height = (uint32_t)sysImage.get_height();
                imageCreateInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
                imageCreateInfo.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
                resource.image = device->create<Image>(imageCreateInfo);
                resource.filePath = filePath;
                totalSpriteCount += count;
                resource.total = count;
                resource.available = count;
                resource.index = totalSpriteCount;
                imagePointers[i] = resource.image.get();
            }
            DeviceMemory::allocate_multi_resource_memory(imagePointers, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
            for (int i = 0; i < createInfos.size(); ++i) {
                mResources[i].image->write_ex(sysImages[i].get_data());
            }

            Buffer::CreateInfo bufferCreateInfo { };
            bufferCreateInfo.size = sizeof(CameraUbo);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            mUniformBuffer = device->create<Buffer>(bufferCreateInfo);
            bufferCreateInfo.size = totalSpriteCount * sizeof(VertexPositionColor);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
            mInstanceBuffer = device->create<Buffer>(bufferCreateInfo);
            std::array<Buffer*, 2> bufferPointers { };
            bufferPointers[0] = mUniformBuffer.get();
            bufferPointers[1] = mInstanceBuffer.get();
            auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            DeviceMemory::allocate_multi_resource_memory(bufferPointers, memoryProperties);
            mUniformBuffer->get_memory()->map();

            mSampler = device->create<Sampler>();
        }

        inline void create_pipeline(
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass
        )
        {
            assert(device);
            assert(renderPass);
            using namespace dst::vk;
            std::array<std::shared_ptr<ShaderModule>, 2> shaderModules { };
            static const int Vertex = 0;
            shaderModules[Vertex] = device->create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                __LINE__,
                R"(
                    #version 450

                    const vec3 Positions[4] = vec3[](
                        vec3(-0.5,  0.5, 0),
                        vec3( 0.5,  0.5, 0),
                        vec3( 0.5, -0.5, 0),
                        vec3(-0.5, -0.5, 0)
                    );

                    const vec2 Texcoords[4] = vec2[](
                        vec2(0, 0),
                        vec2(1, 0),
                        vec2(1, 1),
                        vec2(0, 1)
                    );

                    const int Indices[6] = int[](
                        0, 1, 2,
                        2, 3, 0
                    );

                    layout(set = 0, binding = 0)
                    uniform CameraUbo
                    {
                        mat4 projectionFromWorld;
                    } camera;

                    layout(location = 0) in vec3 vsPosition;
                    layout(location = 1) in vec4 vsColor;

                    layout(location = 0) out vec2 fsTexcoord;
                    layout(location = 1) out vec4 fsColor;
                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                        int index = Indices[gl_VertexIndex];
                        vec4 position = vec4(vsPosition + Positions[index], 1);
                        gl_Position = camera.projectionFromWorld * position;
                        fsTexcoord = Texcoords[index];
                        fsColor = vsColor;
                        fsColor += vec4(1,1,1,1);
                    }
                )"
            );
            static const int Fragment = 1;
            shaderModules[Fragment] = device->create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                __LINE__,
                R"(
                    #version 450

                    layout(set = 1, binding = 0) uniform sampler2D image;
                    layout(location = 0) in vec2 fsTexcoord;
                    layout(location = 1) in vec4 fsColor;

                    layout(location = 0) out vec4 fragColor;

                    void main()
                    {
                        fragColor = texture(image, fsTexcoord);
                        fragColor *= fsColor;
                    }
                )"
            );

            std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages { };
            shaderStages[Vertex] = shaderModules[Vertex]->get_pipeline_stage_create_info();
            shaderStages[Fragment] = shaderModules[Fragment]->get_pipeline_stage_create_info();

            VkVertexInputBindingDescription vertexBindingDescription { };
            vertexBindingDescription.stride = sizeof(VertexPositionColor);
            vertexBindingDescription.inputRate = VK_VERTEX_INPUT_RATE_INSTANCE;
            auto vertexAttributeDescriptions = get_attribute_descriptions<VertexPositionColor>();
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
            pipelineCreateInfo.renderPass = *renderPass;
            auto pipelineLayout = device->create<PipelineLayout>(shaderModules);
            mPipeline = device->create<Pipeline>(pipelineLayout, pipelineCreateInfo);
        }

        inline void create_descriptor_sets(const std::shared_ptr<dst::vk::Device>& device)
        {
            using namespace dst::vk;
            std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
            static const int Buffer = 0;
            descriptorPoolSizes[Buffer].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            descriptorPoolSizes[Buffer].descriptorCount = 1;
            static const int Image = 1;
            descriptorPoolSizes[Image].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorPoolSizes[Image].descriptorCount = (uint32_t)mResources.size();
            DescriptorPool::CreateInfo descriptorPoolCreateInfo { };
            descriptorPoolCreateInfo.poolSizeCount = (uint32_t)descriptorPoolSizes.size();
            descriptorPoolCreateInfo.pPoolSizes = descriptorPoolSizes.data();
            descriptorPoolCreateInfo.maxSets = (uint32_t)mResources.size() + 1;
            auto descriptorPool = device->create<DescriptorPool>(descriptorPoolCreateInfo);

            const auto& descriptorSetLayouts = mPipeline->get_layout().get_descriptor_set_layouts();
            mDescriptorSet = descriptorPool->allocate<DescriptorSet>(descriptorSetLayouts[0]);
            DescriptorSet::Write write { };
            VkDescriptorBufferInfo bufferInfo { };
            bufferInfo.buffer = *mUniformBuffer;
            bufferInfo.range = VK_WHOLE_SIZE;
            write.dstSet = *mDescriptorSet;
            write.descriptorCount = 1;
            write.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            write.pBufferInfo = &bufferInfo;
            vkUpdateDescriptorSets(*device, 1, &write, 0, nullptr);

            for (auto& resource : mResources) {
                resource.descriptorSet = descriptorPool->allocate<DescriptorSet>(descriptorSetLayouts[1]);
                VkDescriptorImageInfo imageInfo { };
                imageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                imageInfo.sampler = *mSampler;
                imageInfo.imageView = resource.image->get_view();
                write.dstSet = *resource.descriptorSet;
                write.descriptorCount = 1;
                write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                write.pImageInfo = &imageInfo;
                vkUpdateDescriptorSets(*device, 1, &write, 0, nullptr);
            }
        }
    };

} // namespace ShapeBlaster
