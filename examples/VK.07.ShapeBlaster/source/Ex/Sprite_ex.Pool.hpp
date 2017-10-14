
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Sprite_ex.hpp"
#include "Sprite_ex.Pipeline.hpp"

#include "Dynamic_Static/Core/Memory.hpp"
#include "Dynamic_Static/Core/NonCopyable.hpp"
#include "Dynamic_Static/Graphics/Camera.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"
#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <array>
#include <string>
#include <utility>

namespace ShapeBlaster_ex {

    class Sprite::Pool final
        : dst::NonCopyable
    {
    private:
        using UniformBufferDeleter = std::function<void(Sprite::UniformBuffer*)>;

    private:
        Sprite::Pipeline* mPipeline { nullptr };
        std::shared_ptr<dst::vlkn::Buffer> mUniformBuffer;
        size_t mHostStorageAlignment { 0 };
        size_t mHostStorageSize { 0 };
        std::unique_ptr<Sprite::UniformBuffer, UniformBufferDeleter> mHostStorage;
        std::shared_ptr<dst::vlkn::Image> mImage;
        std::shared_ptr<dst::vlkn::Sampler> mSampler;
        std::shared_ptr<dst::vlkn::Descriptor::Pool> mDescriptorPool;
        dst::vlkn::Descriptor::Set* mDescriptorSet { nullptr };
        std::vector<Sprite> mSprites;
        std::vector<Sprite*> mAvailableSprites;

    public:
        Pool(
            dst::vlkn::Queue& queue,
            Sprite::Pipeline& pipeline,
            const std::string& filePath,
            size_t count
        )
            : mPipeline { &pipeline }
            , mSprites(count)
        {
            create_uniform_buffers();
            create_image_and_sampler(queue, filePath);
            create_descriptor_set();
            mAvailableSprites.reserve(mSprites.size());
            for (auto& sprite : mSprites) {
                check_in(&sprite);
            }
        }

    public:
        size_t total_count() const
        {
            return mSprites.size();
        }

        size_t available_count() const
        {
            return mAvailableSprites.size();
        }

        size_t in_use_count() const
        {
            return total_count() - available_count();
        }

        Sprite* check_out()
        {
            Sprite* sprite = nullptr;
            if (!mAvailableSprites.empty()) {
                sprite = mAvailableSprites.back();
                sprite->enabled = true;
                sprite->position = dst::Vector2::Zero;
                sprite->rotation = 0;
                sprite->scale = dst::Vector2::One;
                sprite->color = dst::Color::White;
                sprite->image = mImage.get();
                mAvailableSprites.pop_back();
            }

            return sprite;
        }

        void check_in(Sprite* sprite)
        {
            if (sprite) {
                assert(
                    mSprites.data() <= sprite && sprite < mSprites.data() + mSprites.size() &&
                    "Attempted to check in Sprite that doesn't belong to this Sprite::Pool"
                );

                mAvailableSprites.push_back(sprite);
                sprite->enabled = false;
            }
        }

        void update(const dst::Vector2& renderArea)
        {
            using namespace dst::vlkn;
            auto& device = mPipeline->mPipeline->device();

            for (size_t i = 0; i < mSprites.size(); ++i) {
                if (mSprites[i].enabled) {
                    const auto& sprite = mSprites[i];
                    auto translation = dst::Matrix4x4::create_translation(sprite.position);
                    auto rotation = dst::Matrix4x4::create_rotation(sprite.rotation, dst::Vector3::UnitZ);
                    auto scale = dst::Matrix4x4::create_scale({
                        mImage->extent().width * sprite.scale.x,
                        mImage->extent().height * sprite.scale.y,
                        1
                    });

                    auto view = dst::Matrix4x4::create_view(
                        { 0, 0, 0.5f }, dst::Vector3::Zero, dst::Vector3::UnitY
                    );

                    auto projection = dst::Matrix4x4::create_orhtographic(
                        0, renderArea.x, 0, renderArea.y, -1.0f, 1.0f
                    );

                    uint32_t offset = static_cast<uint32_t>(mHostStorageAlignment * i);
                    auto hostStorageEntry = reinterpret_cast<uint64_t>(mHostStorage.get()) + offset;
                    auto uniformBufferEntry = reinterpret_cast<Sprite::UniformBuffer*>(hostStorageEntry);
                    uniformBufferEntry->wvp = projection * view * translation * rotation * scale;
                    uniformBufferEntry->color = sprite.color;
                }
            }

            // TODO : Move memcpy() into loop...
            memcpy(mUniformBuffer->mapped_ptr(), mHostStorage.get(), mHostStorageSize);
            VkMappedMemoryRange memoryRange { };
            memoryRange.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
            memoryRange.pNext = nullptr;
            memoryRange.memory = *mUniformBuffer->memory();
            memoryRange.offset = 0;
            memoryRange.size = static_cast<VkDeviceSize>(mHostStorageSize);
            vkFlushMappedMemoryRanges(device, 1, &memoryRange);
        }

        void draw(dst::vlkn::Command::Buffer& commandBuffer)
        {
            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline->mPipeline);
            for (size_t i = 0; i < mSprites.size(); ++i) {
                if (mSprites[i].enabled) {
                    uint32_t offset = static_cast<uint32_t>(mHostStorageAlignment * i);
                    vkCmdBindDescriptorSets(
                        commandBuffer,
                        VK_PIPELINE_BIND_POINT_GRAPHICS,
                        *mPipeline->mPipelineLayout,
                        0,
                        1,
                        &mDescriptorSet->handle(),
                        1,
                        &offset
                    );

                    commandBuffer.draw(6, 1);
                }
            }
        }

    private:
        void create_uniform_buffers()
        {
            using namespace dst::vlkn;
            auto& device = mPipeline->mPipeline->device();

            auto elementSize = sizeof(Sprite::UniformBuffer);
            mHostStorageAlignment = device.physical_device().uniform_buffer_alignment(elementSize);
            mHostStorageSize = mHostStorageAlignment * mSprites.size();
            auto hostStorage = reinterpret_cast<Sprite::UniformBuffer*>(dst::aligned_alloc(mHostStorageSize, mHostStorageAlignment));
            mHostStorage = std::unique_ptr<Sprite::UniformBuffer, UniformBufferDeleter>(
                hostStorage,
                [](Sprite::UniformBuffer* ptr)
                {
                    if (ptr) {
                        dst::aligned_free(ptr);
                    }
                }
            );

            auto uniformBufferInfo = Buffer::CreateInfo;
            uniformBufferInfo.size = static_cast<VkDeviceSize>(mHostStorageSize);
            uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            mUniformBuffer = device.create<Buffer>(uniformBufferInfo, memoryProperties);
            mUniformBuffer->map();
        }

        void create_image_and_sampler(dst::vlkn::Queue& queue, const std::string& filePath)
        {
            using namespace dst::vlkn;
            auto& device = mPipeline->mPipeline->device();

            auto imageCache = dst::gfx::ImageReader::read_file(filePath);
            auto imageInfo = Image::CreateInfo;
            imageInfo.imageType = VK_IMAGE_TYPE_2D;
            imageInfo.extent.width = imageCache.width();
            imageInfo.extent.height = imageCache.height();
            imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
            imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
            imageInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            mImage = device.create<Image>(imageInfo);

            auto memoryInfo = Memory::AllocateInfo;
            auto memoryRequirements = mImage->memory_requirements();
            memoryInfo.allocationSize = memoryRequirements.size;
            memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
                memoryRequirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
            );

            mImage->bind_memory(device.allocate<Memory>(memoryInfo));
            mImage->create<Image::View>();

            auto stagingBufferInfo = Buffer::CreateInfo;
            stagingBufferInfo.size = static_cast<VkDeviceSize>(imageCache.data().size_bytes());
            stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, memoryProperties);
            stagingBuffer->write<uint8_t>(imageCache.data());
            queue.process_immediate(
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

            auto samplerInfo = Sampler::CreateInfo;
            samplerInfo.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            samplerInfo.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            mSampler = device.create<Sampler>(samplerInfo);
        }

        void create_descriptor_set()
        {
            using namespace dst::vlkn;
            auto& device = mPipeline->mPipeline->device();

            std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
            descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            descriptorPoolSizes[0].descriptorCount = mSprites.size();
            descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorPoolSizes[1].descriptorCount = mSprites.size();

            auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
            descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
            descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
            descriptorPoolInfo.maxSets = mSprites.size();
            mDescriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);

            auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
            descriptorSetInfo.descriptorPool = *mDescriptorPool;
            descriptorSetInfo.descriptorSetCount = 1;
            descriptorSetInfo.pSetLayouts = &mPipeline->mDescriptorSetLayout->handle();
            mDescriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

            VkDescriptorBufferInfo descriptorBufferInfo { };
            descriptorBufferInfo.buffer = *mUniformBuffer;
            descriptorBufferInfo.offset = 0;
            descriptorBufferInfo.range = VK_WHOLE_SIZE;
            VkWriteDescriptorSet uniformBufferWrite { };
            uniformBufferWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            uniformBufferWrite.dstSet = *mDescriptorSet;
            uniformBufferWrite.dstBinding = 0;
            uniformBufferWrite.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            uniformBufferWrite.descriptorCount = 1;
            uniformBufferWrite.pBufferInfo = &descriptorBufferInfo;

            VkDescriptorImageInfo descriptorImageInfo { };
            descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            descriptorImageInfo.imageView = *mImage->view();
            descriptorImageInfo.sampler = *mSampler;
            VkWriteDescriptorSet samplerWrite { };
            samplerWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            samplerWrite.dstSet = *mDescriptorSet;
            samplerWrite.dstBinding = 1;
            samplerWrite.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            samplerWrite.descriptorCount = 1;
            samplerWrite.pImageInfo = &descriptorImageInfo;

            std::array<VkWriteDescriptorSet, 2> descriptorWrites {
                uniformBufferWrite,
                samplerWrite,
            };

            vkUpdateDescriptorSets(
                device,
                static_cast<uint32_t>(descriptorWrites.size()),
                descriptorWrites.data(),
                0,
                nullptr
            );
        }
    };

} // namespace ShapeBlaster_ex
