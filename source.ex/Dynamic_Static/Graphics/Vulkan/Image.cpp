
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandBuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/QueueFamily.hpp"

#include <utility>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Image::Image(
        const std::shared_ptr<Device>& device,
        Image::CreateInfo createInfo
    )
        : DeviceMemoryResource(device)
        , mCreateInfo { createInfo }
    {
        set_name("Image");
        dst_vk(vkCreateImage(get_device(), &mCreateInfo, nullptr, &mHandle));
    }

    Image::Image(
        const std::shared_ptr<Device>& device,
        Image::CreateInfo createInfo,
        VkImage handle
    )
        : DeviceMemoryResource(device)
        , mCreateInfo { createInfo }
    {
        set_name("Image");
        mHandle = handle;
    }

    Image::Image(
        const std::shared_ptr<Device>& device,
        const sys::Image& image
    )
        : DeviceMemoryResource(device)
    {
        // TODO : This method some work, it's extremely inflexible.
        set_name("Image");
        mCreateInfo.imageType = VK_IMAGE_TYPE_2D;
        mCreateInfo.extent.width = (uint32_t)image.get_width();
        mCreateInfo.extent.height = (uint32_t)image.get_height();
        mCreateInfo.extent.depth = (uint32_t)image.get_depth();
        mCreateInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
        mCreateInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
        mCreateInfo.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
        dst_vk(vkCreateImage(get_device(), &mCreateInfo, nullptr, &mHandle));
        // WHAT : Why won't this compile when just passing "this"?
        Image* pImage = this;
        DeviceMemory::allocate_resource_memory(pImage, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);

        Buffer::CreateInfo bufferCreateInfo { };
        bufferCreateInfo.size = get_memory_requirements().size;
        bufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto stagingBuffer = get_device().create<Buffer>(bufferCreateInfo);
        auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        DeviceMemory::allocate_resource_memory(stagingBuffer, memoryProperties);
        stagingBuffer->write<uint8_t>(image.get_data());
        get_device().get_queue_families()[0].get_queues()[0].process_immediately(
            [&](const CommandBuffer& commandBuffer)
            {
                Image::Barrier barrier { };
                barrier.image = mHandle;
                barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
                barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                barrier.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
                vkCmdPipelineBarrier(
                    commandBuffer,
                    VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                    VK_PIPELINE_STAGE_TRANSFER_BIT,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &barrier
                );

                VkBufferImageCopy copy { };
                copy.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                copy.imageSubresource.layerCount = 1;
                copy.imageExtent = mCreateInfo.extent;
                vkCmdCopyBufferToImage(
                    commandBuffer,
                    *stagingBuffer,
                    mHandle,
                    barrier.newLayout,
                    1,
                    &copy
                );

                barrier.dstAccessMask = 0;
                barrier.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
                barrier.newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                vkCmdPipelineBarrier(
                    commandBuffer,
                    VK_PIPELINE_STAGE_TRANSFER_BIT,
                    VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &barrier
                );
            }
        );
    }

    Image::Image(Image&& other)
        : Object(std::move(other))
        , DeviceMemoryResource(std::move(other))
        , mCreateInfo { std::move(other.mCreateInfo) }
        , mImageViews { std::move(other.mImageViews) }
    {
        for (auto& imageView : mImageViews) {
            imageView.mImage = this;
        }
    }

    Image::~Image()
    {
        if (mHandle) {
            vkDestroyImage(get_device(), mHandle, nullptr);
        }
    }

    Image& Image::operator=(Image&& other)
    {
        if (this != &other) {
            Object::operator=(std::move(other));
            DeviceMemoryResource::operator=(std::move(other));
            mCreateInfo = std::move(other.mCreateInfo);
            mImageViews = std::move(other.mImageViews);
            for (auto& imageView : mImageViews) {
                imageView.mImage = this;
            }
        }
        return *this;
    }

    VkImageCreateFlags Image::get_create_flags() const
    {
        return mCreateInfo.flags;
    }

    VkImageType Image::get_type() const
    {
        return mCreateInfo.imageType;
    }

    VkFormat Image::get_format() const
    {
        return mCreateInfo.format;
    }

    const VkExtent3D& Image::get_extent() const
    {
        return mCreateInfo.extent;
    }

    uint32_t Image::get_mip_level_count() const
    {
        return mCreateInfo.mipLevels;
    }

    uint32_t Image::get_array_layer_count() const
    {
        return mCreateInfo.arrayLayers;
    }

    VkSampleCountFlagBits Image::get_sample_count_flag() const
    {
        return mCreateInfo.samples;
    }

    VkImageTiling Image::get_tiling() const
    {
        return mCreateInfo.tiling;
    }

    VkImageUsageFlags Image::get_usage_flags() const
    {
        return mCreateInfo.usage;
    }

    VkSharingMode Image::get_sharing_mode() const
    {
        return mCreateInfo.sharingMode;
    }

    VkImageAspectFlags Image::get_aspect_mask() const
    {
        return dst::vk::get_aspect_mask(get_format());
    }

    ImageView& Image::get_view()
    {
        if (mImageViews.empty()) {
            create<ImageView>();
        }
        assert(!mImageViews.empty());
        return mImageViews.front();
    }

    Span<ImageView> Image::get_views()
    {
        return mImageViews;
    }

    Span<const ImageView> Image::get_views() const
    {
        return mImageViews;
    }

    VkMemoryRequirements Image::get_memory_requirements() const
    {
        VkMemoryRequirements memoryRequirements { };
        vkGetImageMemoryRequirements(get_device(), mHandle, &memoryRequirements);
        return memoryRequirements;
    }

    void Image::bind_memory(
        const std::shared_ptr<DeviceMemory>& memory,
        VkDeviceSize memoryOffset
    )
    {
        dst_vk(vkBindImageMemory(get_device(), mHandle, *memory, memoryOffset));
        DeviceMemoryResource::bind_memory(memory, memoryOffset);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
