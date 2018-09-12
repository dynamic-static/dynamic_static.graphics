
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
            std::string filePath;
            int index { 0 };
            int total { 0 };
            int available { 0 };
        };

        std::shared_ptr<dst::vk::Pipeline> mPipeline;
        std::vector<Resource> mResources;
        std::vector<Sprite> mSprites;

    public:
        Pool(
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass,
            dst::Span<const Sprite::CreateInfo> createInfos
        )
        {
            assert(device);
            assert(renderPass);
            using namespace dst::vk;
            create_sprites(device, createInfos);
            // create_pipeline(device, renderPass);
        }

    public:
        inline Sprite* checkout(int id)
        {
            Sprite* sprite = nullptr;

            return sprite;
        }

        inline void record_draw_cmds(const dst::vk::CommandBuffer& commandBuffer)
        {
            auto bindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            vkCmdBindPipeline(commandBuffer, bindPoint, *mPipeline);
            auto vkPipelineLayout = mPipeline->get_layout().get_handle();
            
        }

    private:
        inline void create_sprites(
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
            int resource_i = 0;
            mSprites.resize(totalSpriteCount);
            for (int i = 0; i < mSprites.size(); ++i) {
                if (mResources[resource_i].index <= i) {
                    ++resource_i;
                }
                auto const& resource = mResources[resource_i];
                auto& sprite = mSprites[i];
                sprite.mId = resource_i;
                sprite.mPool = this;
                sprite.mExtent.x = (float)resource.image->get_extent().width;
                sprite.mExtent.y = (float)resource.image->get_extent().height;
            }
        }

        void create_pipeline(
            const std::shared_ptr<dst::vk::Device>& device,
            const std::shared_ptr<dst::vk::RenderPass>& renderPass
        )
        {
            assert(device);
            assert(renderPass);
            using namespace dst::vk;
            auto vertexShader = device->create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                __LINE__,
                R"(
                    #version 450
                )"
            );
            auto fragmentShader = device->create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                __LINE__,
                R"(
                    #version 450
                )"
            );
            std::array<dst::vk::Pipeline::ShaderStageCreateInfo, 2> shaderStages { };
            shaderStages[0] = vertexShader->get_pipeline_stage_create_info();
            shaderStages[1] = fragmentShader->get_pipeline_stage_create_info();
            auto pipelineLayout = device->create<PipelineLayout>();

            dst::vk::Pipeline::ColorBlendAttachmentState colorBlendAttachmentState { };
            colorBlendAttachmentState.blendEnable = VK_TRUE;
            dst::vk::Pipeline::ColorBlendStateCreateInfo colorBlendCreateInfo { };
            colorBlendCreateInfo.attachmentCount = 1;
            colorBlendCreateInfo.pAttachments = &colorBlendAttachmentState;

            dst::vk::Pipeline::GraphicsCreateInfo pipelineCreateInfo { };
            pipelineCreateInfo.stageCount = (uint32_t)shaderStages.size();
            pipelineCreateInfo.pStages = shaderStages.data();
            pipelineCreateInfo.pColorBlendState = &colorBlendCreateInfo;
            pipelineCreateInfo.renderPass = *renderPass;
            mPipeline = device->create<dst::vk::Pipeline>(pipelineLayout, pipelineCreateInfo);
        }
    };

} // namespace ShapeBlaster
