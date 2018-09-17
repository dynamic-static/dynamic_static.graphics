
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
            std::shared_ptr<dst::vk::Buffer> instanceBuffer;
            std::vector<void*> available;
            int count { 0 };
        };

        struct CameraUbo final
        {
            glm::mat4 projectionFromWorld { glm::identity<glm::mat4>() };
        };

        std::shared_ptr<dst::vk::Sampler> mSampler;
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
            auto& resource = mResources[id];
            if (!resource.available.empty()) {
                sprite.mId = id;
                sprite.mPool = this;
                sprite.mVertex = (Sprite::Vertex*)resource.available.back();
                resource.available.pop_back();
                auto imageExtent = resource.image->get_extent();
                sprite->position = { };
                sprite->rotation = 0;
                sprite->scale = 1;
                sprite->color = dst::Color::White;
                sprite->extent.x = (float)imageExtent.width;
                sprite->extent.y = (float)imageExtent.height;
            }
            return sprite;
        }

        inline void check_in(Sprite&& sprite)
        {
            auto& resource = mResources[sprite.mId];
            resource.available.push_back(sprite.mVertex);
            memset(sprite.mVertex, 0, sizeof(Sprite::Vertex));
            sprite.mId = 0;
            sprite.mPool = nullptr;
            sprite.mVertex = nullptr;
        }

        inline void update(const dst::gfx::Camera& camera)
        {
            using namespace dst::gfx;
            CameraUbo cameraUbo { };
            auto view = glm::lookAt({ 0, 0, 0.5f }, glm::vec3 { }, glm::vec3 { 0, 1, 0 });
            float w = 1280.0f * 0.5f;
            float h = 720.0f * 0.5f;
            auto projection = glm::ortho(-w, w, -h, h, -1.0f, 1.0f);
            cameraUbo.projectionFromWorld = projection * view;
            //cameraUbo.projectionFromWorld = camera.get_projection() * camera.get_view();
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
                VkDeviceSize offset = 0;
                auto vkInstanceBuffer = resource.instanceBuffer->get_handle();
                vkDescriptorSet = resource.descriptorSet->get_handle();
                vkCmdBindDescriptorSets(commandBuffer, bindPoint, vkPipelineLayout, 1, 1, &vkDescriptorSet, 0, nullptr);
                vkCmdBindVertexBuffers(commandBuffer, 0, 1, &vkInstanceBuffer, &offset);
                vkCmdDraw(commandBuffer, 6, resource.count, 0, 0);
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
            mResources.resize(createInfos.size());
            std::vector<dst::sys::Image> sysImages(createInfos.size());
            std::vector<Image*> imagePointers(createInfos.size());
            std::vector<Buffer*> bufferPointers(createInfos.size() + 1);
            for (int i = 0; i < createInfos.size(); ++i) {
                auto filePath = createInfos[i].filePath;
                auto count = createInfos[i].count;
                auto& resource = mResources[i];
                auto& sysImage = sysImages[i];
                sysImage.read_png(filePath);

                Image::CreateInfo imageCreateInfo { };
                imageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
                imageCreateInfo.extent.width = (uint32_t)sysImage.get_width();
                imageCreateInfo.extent.height = (uint32_t)sysImage.get_height();
                imageCreateInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
                imageCreateInfo.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
                resource.image = device->create<Image>(imageCreateInfo);
                resource.count = count;
                resource.available.resize(count);
                imagePointers[i] = resource.image.get();

                Buffer::CreateInfo bufferCreateInfo { };
                bufferCreateInfo.size = resource.count * sizeof(Sprite::Vertex);
                bufferCreateInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
                resource.instanceBuffer = device->create<Buffer>(bufferCreateInfo);
                bufferPointers[i] = resource.instanceBuffer.get();
            }

            DeviceMemory::allocate_multi_resource_memory(imagePointers, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
            for (int i = 0; i < createInfos.size(); ++i) {
                mResources[i].image->write_ex(sysImages[i].get_data());
            }

            Buffer::CreateInfo uniformBufferCreateInfo { };
            uniformBufferCreateInfo.size = sizeof(CameraUbo);
            uniformBufferCreateInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            mUniformBuffer = device->create<Buffer>(uniformBufferCreateInfo);
            bufferPointers.back() = mUniformBuffer.get();
            auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            DeviceMemory::allocate_multi_resource_memory(bufferPointers, memoryProperties);
            const auto& bufferMemory = mUniformBuffer->get_memory();
            auto bufferData = (uint8_t*)bufferMemory->map();
            memset(bufferData, 0, bufferMemory->get_mapped_size());
            for (int resource_i = 0; resource_i < mResources.size(); ++resource_i) {
                auto& resource = mResources[resource_i];
                auto resourceBufferData = bufferData + resource.instanceBuffer->get_memory_offset();
                auto resourceVertexData = (Sprite::Vertex*)resourceBufferData;
                for (int sprite_i = 0; sprite_i < resource.count; ++sprite_i) {
                    resource.available[sprite_i] = &resourceVertexData[sprite_i];
                }
            }

            Sampler::CreateInfo samplerCreateInfo { };
            samplerCreateInfo.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            samplerCreateInfo.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            mSampler = device->create<Sampler>(samplerCreateInfo);
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

                    const vec2 Positions[4] = vec2[](
                        vec2(-0.5,  0.5),
                        vec2( 0.5,  0.5),
                        vec2( 0.5, -0.5),
                        vec2(-0.5, -0.5)
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

                    layout(location = 0) in vec2 vsPosition;
                    layout(location = 1) in float vsRotation;
                    layout(location = 2) in float vsScale;
                    layout(location = 3) in vec4 vsColor;
                    layout(location = 4) in vec2 vsExtent;

                    layout(location = 0) out vec2 fsTexcoord;
                    layout(location = 1) out vec4 fsColor;
                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                        // float c = cos(vsRotation) * vsScale;
                        // float s = sin(vsRotation);
                        // mat2 localToWorld(
                        //      c, s,
                        //     -s, c
                        // );

                        int index = Indices[gl_VertexIndex];
                        vec4 position = vec4(vsPosition + Positions[index] * vsExtent, 0, 1);
                        position.z += vsScale * vsRotation * 0.00001f;
                        gl_Position = camera.projectionFromWorld * position;
                        fsTexcoord = Texcoords[index];
                        fsColor = vsColor;
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
            vertexBindingDescription.stride = sizeof(Sprite::Vertex);
            vertexBindingDescription.inputRate = VK_VERTEX_INPUT_RATE_INSTANCE;
            auto vertexAttributeDescriptions = Sprite::Vertex::get_attribute_descriptions();
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
