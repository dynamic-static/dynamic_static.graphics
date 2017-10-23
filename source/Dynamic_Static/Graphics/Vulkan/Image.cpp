
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"

#include <stdexcept>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Image::Image(const std::shared_ptr<Device>& device, const VkImageCreateInfo& info)
        : DeviceChild(device)
        , mFormat { info.format }
        , mExtent { info.extent }
        , mUsage { info.usage }
    {
        validate(vkCreateImage(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Image");
    }

    Image::Image(SwapchainKHR& swapchain, VkImage handle)
        : DeviceChild(swapchain.device().shared())
        , mSwapchain { &swapchain }
        , mFormat { swapchain.format() }
        , mExtent { swapchain.extent().width, swapchain.extent().height, 1 }
        , mUsage { VK_IMAGE_ASPECT_COLOR_BIT }
    {
        assert(handle);
        mHandle = handle;
    }

    Image::~Image()
    {
        // NOTE : If this Image belongs to a SwapchainKHR, the Vulkan resource
        //        will be destroyed along with the SwapchainKHR that owns it.
        if (mHandle && !mSwapchain) {
            vkDestroyImage(device(), mHandle, nullptr);
        }
    }

    std::shared_ptr<Memory>& Image::memory()
    {
        return mMemory;
    }

    const std::shared_ptr<Memory>& Image::memory() const
    {
        return mMemory;
    }

    const VkExtent3D& Image::extent() const
    {
        return mExtent;
    }

    VkFormat Image::format() const
    {
        return mFormat;
    }

    VkImageUsageFlags Image::usage() const
    {
        return mUsage;
    }

    VkMemoryRequirements Image::memory_requirements() const
    {
        VkMemoryRequirements memoryRequirements;
        vkGetImageMemoryRequirements(device(), mHandle, &memoryRequirements);
        return memoryRequirements;
    }

    const Image::View* Image::view() const
    {
        return mViews.empty() ? nullptr : mViews[0].get();
    }

    const std::vector<std::unique_ptr<Image::View>>& Image::views() const
    {
        return mViews;
    }

    void Image::bind_memory(const std::shared_ptr<Memory>& memory)
    {
        mMemory = memory;
        if (mMemory) {
            // NOTE : This is extremely inflexible...
            validate(vkBindImageMemory(device(), mHandle, *mMemory, 0));
        }
    }

    Image::LayoutTransition Image::create_layout_transition(
        VkImageLayout oldLayout,
        VkImageLayout newLayout
    )
    {
        LayoutTransition layoutTransition { };
        layoutTransition.barrier.image = mHandle;
        layoutTransition.barrier.oldLayout = oldLayout;
        layoutTransition.barrier.newLayout = newLayout;

        // FROM : https://github.com/SaschaWillems/Vulkan/blob/master/base/VulkanTools.cpp
        // NOTE : Source access mask specifies actions that must complete
        //        before this Image transitions out of its old layout.
        switch (oldLayout) {
            case VK_IMAGE_LAYOUT_UNDEFINED:
                // NOTE : Image layout is undefined (or doesn't matter).
                //        Only valid as initial layout.
                //        No flags required...listed for completeness.
                layoutTransition.barrier.srcAccessMask = 0;
                break;

            case VK_IMAGE_LAYOUT_PREINITIALIZED:
                // NOTE : Image is preinitialized by host.
                //        Only valid as intial layout for linear images, preserves contents.
                //        Barrier ensures any host writes are complete.
                layoutTransition.barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
                break;

            case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
                // NOTE : Image is a color attachment.
                //        Barrier ensures any writes are complete.
                layoutTransition.barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
                break;

            case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
                // NOTE : Image is a depth / stencil attachment.
                //        Barrier ensures any writes to depth / stencil buffer are complete.
                layoutTransition.barrier.srcAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
                break;

            case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
                // NOTE : Image is a transfer source.
                //        Barrier ensures any reads are complete.
                layoutTransition.barrier.srcAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
                break;

            case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
                // NOTE : Image is a transfer destination.
                //        Barrier ensures any writes are complete.
                layoutTransition.barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
                break;

            case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
                // NOTE : Image is read in a shader.
                //        Barrier ensures any reads are complete.
                layoutTransition.barrier.srcAccessMask = VK_ACCESS_SHADER_READ_BIT;
                break;

            case VK_IMAGE_LAYOUT_GENERAL:
            case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
            case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR:
            case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR:
            default:
                break;
        }

        // NOTE : Destination access mask specifies actions that must wait
        //        until this Image has transitioned into its new layout.
        switch (newLayout) {
            case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
                // NOTE : Image is a color attachment.
                //        Barrier ensures any writes are complete.
                layoutTransition.barrier.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
                break;

            case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
                // NOTE : Image is a depth / stencil attachment.
                //        Barrier ensures any writes to depth / stencil buffer are complete.
                layoutTransition.barrier.dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
                break;

            case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
                // NOTE : Image is a transfer source.
                //        Barrier ensures any reads are complete.
                layoutTransition.barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
                break;

            case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
                // NOTE : Image is a transfer destination.
                //        Barrier ensures any writes are complete.
                layoutTransition.barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
                break;

            case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
                // NOTE : Image is read in a shader.
                //        Barrier ensures any reads or writes are complete.
                if (!layoutTransition.barrier.srcAccessMask) {
                    layoutTransition.barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT | VK_ACCESS_TRANSFER_WRITE_BIT;
                }

                layoutTransition.barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
                break;

            case VK_IMAGE_LAYOUT_UNDEFINED:
                assert(
                    false &&
                    "VK_IMAGE_LAYOUT_UNDEFINED must only be used as the initialLayout member of VkImageCreateInfo or VkAttachmentDescription, or as the oldLayout in an image transition"
                    ":https://www.khronos.org/registry/vulkan/specs/1.0/man/html/VkImageLayout.html"
                );
                break;

            case VK_IMAGE_LAYOUT_PREINITIALIZED:
                assert(
                    false &&
                    "VK_IMAGE_LAYOUT_PREINITIALIZED must only be used as the initialLayout member of VkImageCreateInfo or VkAttachmentDescription, or as the oldLayout in an image transition"
                    ":https://www.khronos.org/registry/vulkan/specs/1.0/man/html/VkImageLayout.html"
                );
                break;

            case VK_IMAGE_LAYOUT_GENERAL:
            case VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL:
            case VK_IMAGE_LAYOUT_PRESENT_SRC_KHR:
            case VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR:
            default:
                break;
        }

        return layoutTransition;
    }

    Image::LayoutTransition Image::create_layout_transition(
        Image& image,
        VkImageLayout oldLayout,
        VkImageLayout newLayout
    )
    {
        LayoutTransition layoutTransition;
        layoutTransition.barrier.oldLayout = oldLayout;
        layoutTransition.barrier.newLayout = newLayout;
        layoutTransition.barrier.image = image;
        if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED &&
            newLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
            layoutTransition.barrier.srcAccessMask = 0;
            layoutTransition.barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            layoutTransition.srcStage = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT;
            layoutTransition.dstStage = VK_PIPELINE_STAGE_TRANSFER_BIT;
        } else
        if (oldLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL &&
            newLayout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
            layoutTransition.barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            layoutTransition.barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
            layoutTransition.srcStage = VK_PIPELINE_STAGE_TRANSFER_BIT;
            layoutTransition.dstStage = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT;
        } else
        if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED &&
            newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
            layoutTransition.barrier.srcAccessMask = 0;
            layoutTransition.barrier.dstAccessMask =
                VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT |
                VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
            layoutTransition.srcStage = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT;
            layoutTransition.dstStage = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT;
        } else {
            throw std::invalid_argument("Unsupported layout transition");
        }

        return layoutTransition;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
