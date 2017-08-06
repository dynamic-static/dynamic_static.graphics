
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Dynamic_Static/Core/FileSystem.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"
#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <memory>
#include <string>

namespace ShapeBlaster {

    class Art final
    {
    public:
        std::shared_ptr<dst::vlkn::Image> playerImage;
        std::shared_ptr<dst::vlkn::Image> seekerImage;
        std::shared_ptr<dst::vlkn::Image> wandererImage;
        std::shared_ptr<dst::vlkn::Image> bulletImage;
        std::shared_ptr<dst::vlkn::Image> pointerImage;

    public:
        void load(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue
        )
        {
            playerImage = create_image(device, commandPool, queue, "Player.png");
            seekerImage = create_image(device, commandPool, queue, "Seeker.png");
            wandererImage = create_image(device, commandPool, queue, "Wanderer.png");
            bulletImage = create_image(device, commandPool, queue, "Bullet.png");
            pointerImage = create_image(device, commandPool, queue, "Pointer.png");
        }

    private:
        template <typename FuncType>
        static void process_transient_command_buffer(
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue,
            const FuncType& f
        )
        {
            auto commandBuffer = commandPool.allocate_transient<Command::Buffer>();
            Command::Buffer::BeginInfo beginInfo;
            beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            commandBuffer->begin(beginInfo);
            f(*commandBuffer);
            commandBuffer->end();
            Queue::SubmitInfo submitInfo;
            submitInfo.commandBufferCount = 1;
            submitInfo.pCommandBuffers = &commandBuffer->handle();
            queue.submit(submitInfo);
            queue.wait_idle();
        }

        static VkImageMemoryBarrier create_layout_transition_barrier(
            dst::vlkn::Image& image,
            VkImageLayout oldLayout,
            VkImageLayout newLayout
        )
        {
            VkImageMemoryBarrier barrier { };
            barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
            barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
            barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            barrier.subresourceRange.baseMipLevel = 0;
            barrier.subresourceRange.levelCount = 1;
            barrier.subresourceRange.baseArrayLayer = 0;
            barrier.subresourceRange.layerCount = 1;
            barrier.oldLayout = oldLayout;
            barrier.newLayout = newLayout;
            barrier.image = image;

            if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) {
                barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
                barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
            } else
            if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
                barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
                barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            } else
            if (oldLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL && newLayout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
                barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
                barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            } else
            if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED && newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
                barrier.srcAccessMask = 0;
                barrier.dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
            } else {
                throw std::invalid_argument("Unsupported layout transition");
            }

            return barrier;
        }

        std::shared_ptr<dst::vlkn::Image> create_image(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue,
            const std::string& fileName
        )
        {
            using namespace dst::vlkn;
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto filePath = dst::Path::combine(resourcePath, fileName);
            auto imageCache = dst::gfx::ImageReader::read_file(filePath);

            Buffer::Info stagingBufferInfo;
            stagingBufferInfo.size = static_cast<VkDeviceSize>(imageCache.data().size_bytes());
            stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto stagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, stagingMemoryProperties);
            stagingBuffer->write<uint8_t>(imageCache.data());

            Image::Info imageInfo;
            imageInfo.imageType = VK_IMAGE_TYPE_2D;
            imageInfo.extent.width = imageCache.width();
            imageInfo.extent.height = imageCache.height();
            imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
            imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
            imageInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
            imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            auto image = device.create<Image>(imageInfo);

            Memory::Info memoryInfo;
            auto memoryRequirements = image->memory_requirements();
            memoryInfo.allocationSize = memoryRequirements.size;
            memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
                memoryRequirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
            );

            auto memory = device.allocate<Memory>(memoryInfo);
            image->bind_memory(memory);

            process_transient_command_buffer(
                commandPool,
                queue,
                [&](Command::Buffer& commandBuffer)
                {
                    auto barrier = create_layout_transition_barrier(
                        *image,
                        VK_IMAGE_LAYOUT_PREINITIALIZED,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL
                    );

                    vkCmdPipelineBarrier(
                        commandBuffer,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        0,
                        0, nullptr,
                        0, nullptr,
                        1, &barrier
                    );

                    VkBufferImageCopy copyRegion { };
                    copyRegion.bufferOffset = 0;
                    copyRegion.bufferRowLength = 0;
                    copyRegion.bufferImageHeight = 0;
                    copyRegion.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                    copyRegion.imageSubresource.mipLevel = 0;
                    copyRegion.imageSubresource.baseArrayLayer = 0;
                    copyRegion.imageSubresource.layerCount = 1;
                    copyRegion.imageOffset = { 0, 0, 0 };
                    copyRegion.imageExtent = image->extent();
                    vkCmdCopyBufferToImage(
                        commandBuffer,
                        *stagingBuffer,
                        *image,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                        1,
                        &copyRegion
                    );

                    barrier = create_layout_transition_barrier(
                        *image,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                        VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL
                    );

                    vkCmdPipelineBarrier(
                        commandBuffer,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        0,
                        0, nullptr,
                        0, nullptr,
                        1, &barrier
                    );
                }
            );

            image->create<Image::View>();
            return image;
        }
    };

} // ShapeBlaster
