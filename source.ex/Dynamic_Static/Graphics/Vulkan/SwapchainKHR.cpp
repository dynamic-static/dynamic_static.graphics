
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Fence.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Semaphore.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"

#include <algorithm>
#include <array>
#include <functional>
#include <string>
#include <vector>

namespace dst {
namespace gfx {
namespace vk {


    SwapchainKHR::SwapchainKHR(
        const std::shared_ptr<Device>& device,
        const std::shared_ptr<SurfaceKHR>& surface,
        CreateInfo createInfo,
        bool vsyncEnabled
    )
        : DeviceChild(device)
        , SurfaceKHRChild(surface)
        , mCreateInfo { createInfo }
        , mVsyncEnabled { vsyncEnabled }
    {
        set_name(get_surface().get_window().get_name() + " SwapchainKHR");
        get_surface().on_resize = std::bind(&SwapchainKHR::on_surface_resize, this, std::placeholders::_1);
        create_vk_resources();
    }

    SwapchainKHR::~SwapchainKHR()
    {
        destroy_vk_resources();
    }

    const VkExtent2D& SwapchainKHR::get_extent() const
    {
        return mCreateInfo.imageExtent;
    }

    bool SwapchainKHR::is_valid() const
    {

        return mHandle && get_extent() == get_surface().get_capabilities().currentExtent;
    }

    VkFormat SwapchainKHR::get_format() const
    {
        return mCreateInfo.imageFormat;
    }

    VkColorSpaceKHR SwapchainKHR::get_color_space() const
    {
        return mCreateInfo.imageColorSpace;
    }

    VkPresentModeKHR SwapchainKHR::get_present_mode() const
    {
        return mCreateInfo.presentMode;
    }

    VkSurfaceTransformFlagBitsKHR SwapchainKHR::get_surface_transform_flag() const
    {
        return mCreateInfo.preTransform;
    }

    VkCompositeAlphaFlagBitsKHR SwapchainKHR::get_composite_alpha_flag() const
    {
        return mCreateInfo.compositeAlpha;
    }

    VkImageUsageFlags SwapchainKHR::get_image_usage_flags() const
    {
        return mCreateInfo.imageUsage;
    }

    Span<Image> SwapchainKHR::get_images()
    {
        return mImages;
    }

    Span<const Image> SwapchainKHR::get_images() const
    {
        return mImages;
    }

    VkResult SwapchainKHR::acquire_next_image(
        uint64_t timeout,
        VkSemaphore semaphore,
        VkFence fence,
        uint32_t* pImageIndex
    )
    {
        auto result = dst_vk(vkAcquireNextImageKHR(
            get_device(), mHandle, timeout, semaphore, fence, &mCurrentImageIndex
        ));
        if (pImageIndex) {
            *pImageIndex = mCurrentImageIndex;
        }
        return result;
    }

    uint32_t SwapchainKHR::get_current_image_index() const
    {
        return mCurrentImageIndex;
    }

    bool SwapchainKHR::vsync_enabled() const
    {
        return mVsyncEnabled;
    }

    void SwapchainKHR::vsync_enabled(bool vsyncEnabled)
    {
        if (mVsyncEnabled != vsyncEnabled) {
            mVsyncEnabled = vsyncEnabled;
        }
    }

    void SwapchainKHR::validate()
    {
        if (!is_valid()) {
            create_vk_resources();
        }
    }

    void SwapchainKHR::create_vk_resources()
    {
        const auto& surfaceCapabilites = get_surface().get_capabilities();
        if (surfaceCapabilites.currentExtent.width &&
            surfaceCapabilites.currentExtent.height) {
            if (surfaceCapabilites.currentExtent.width == (uint32_t)-1) {
                mCreateInfo.imageExtent.width = get_surface().get_window().get_resolution().x;
                mCreateInfo.imageExtent.height = get_surface().get_window().get_resolution().y;
            } else {
                mCreateInfo.imageExtent = surfaceCapabilites.currentExtent;
            }

            const auto& surfaceFormats = get_surface().get_formats();
            mCreateInfo.imageFormat = surfaceFormats[0].format;
            mCreateInfo.imageColorSpace = surfaceFormats[0].colorSpace;
            if (surfaceFormats.size() == 1 && surfaceFormats[0].format == VK_FORMAT_UNDEFINED) {
                mCreateInfo.imageColorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
                mCreateInfo.imageFormat = VK_FORMAT_R8G8B8A8_UNORM;
            } else {
                for (const auto& surfaceFormat : surfaceFormats) {
                    if (surfaceFormat.format == VK_FORMAT_R8G8B8A8_UNORM) {
                        mCreateInfo.imageFormat = surfaceFormat.format;
                        break;
                    }
                }
            }

            mCreateInfo.presentMode = VK_PRESENT_MODE_FIFO_KHR;
            if (!mVsyncEnabled) {
                for (auto presentMode : get_surface().get_present_modes()) {
                    if (presentMode == VK_PRESENT_MODE_MAILBOX_KHR) {
                        mCreateInfo.presentMode = presentMode;
                        break;
                    }
                    if (presentMode == VK_PRESENT_MODE_IMMEDIATE_KHR) {
                        mCreateInfo.presentMode = presentMode;
                    }
                }
            }

            if (surfaceCapabilites.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) {
                mCreateInfo.preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
            } else {
                mCreateInfo.preTransform = surfaceCapabilites.currentTransform;
            }

            mCreateInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
            std::array<VkCompositeAlphaFlagBitsKHR, 4> compositeAlphaFlags {
                VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
                VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
                VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
                VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
            };
            for (auto compositeAlphaFlag : compositeAlphaFlags) {
                if (surfaceCapabilites.supportedCompositeAlpha & compositeAlphaFlag) {
                    mCreateInfo.compositeAlpha = compositeAlphaFlag;
                    break;
                }
            }

            mCreateInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
            if (surfaceCapabilites.supportedUsageFlags & VK_IMAGE_USAGE_TRANSFER_SRC_BIT) {
                mCreateInfo.imageUsage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
            }
            if (surfaceCapabilites.supportedUsageFlags & VK_IMAGE_USAGE_TRANSFER_DST_BIT) {
                mCreateInfo.imageUsage |= VK_IMAGE_USAGE_TRANSFER_DST_BIT;
            }

            mCreateInfo.minImageCount = surfaceCapabilites.minImageCount + 1;
            if (surfaceCapabilites.maxImageCount > 0) {
                mCreateInfo.minImageCount = std::min(mCreateInfo.minImageCount, surfaceCapabilites.maxImageCount);
            }

            mCreateInfo.surface = get_surface();
            mCreateInfo.oldSwapchain = mHandle;
            VkSwapchainKHR swapchain = VK_NULL_HANDLE;
            dst_vk(vkCreateSwapchainKHR(get_device(), &mCreateInfo, nullptr, &swapchain));
            destroy_vk_resources();
            mHandle = swapchain;

            uint32_t imageCount = 0;
            dst_vk(vkGetSwapchainImagesKHR(get_device(), mHandle, &imageCount, nullptr));
            std::vector<VkImage> images(imageCount);
            dst_vk(vkGetSwapchainImagesKHR(get_device(), mHandle, &imageCount, images.data()));
            Image::CreateInfo imageCreateInfo { };
            imageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
            imageCreateInfo.format = mCreateInfo.imageFormat;
            imageCreateInfo.extent.width = mCreateInfo.imageExtent.width;
            imageCreateInfo.extent.height = mCreateInfo.imageExtent.height;
            imageCreateInfo.arrayLayers = mCreateInfo.imageArrayLayers;
            imageCreateInfo.usage = mCreateInfo.imageUsage;
            imageCreateInfo.sharingMode = mCreateInfo.imageSharingMode;
            mImages.clear();
            mImages.reserve(images.size());
            for (int i = 0; i < images.size(); ++i) {
                mImages.push_back(Image(get_device().get_shared_ptr(), imageCreateInfo, images[i]));
                mImages.back().set_name(get_name() + " Image[" + std::to_string(i) + "]");
                mImages.back().create<ImageView>();
            }
        }
    }

    void SwapchainKHR::destroy_vk_resources()
    {
        for (auto& image : mImages) {
            image.mHandle = VK_NULL_HANDLE;
        }
        if (mHandle) {
            vkDestroySwapchainKHR(get_device(), mHandle, nullptr);
            mHandle = VK_NULL_HANDLE;
        }
    }

    void SwapchainKHR::on_surface_resize(const SurfaceKHR& surface)
    {
        on_resize(*this);
    }

} // namespace vk
} // namespace gfx
} // namespace dst
