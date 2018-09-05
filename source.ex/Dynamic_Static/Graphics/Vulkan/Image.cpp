
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"

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
        dst_vk(vkCreateImage(get_device(), &createInfo, nullptr, &mHandle));
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
