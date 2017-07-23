

/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

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

#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"
#include "Dynamic_Static/Core/Algorithm.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.View.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    SwapchainKHR::SwapchainKHR(
        const std::shared_ptr<Device>& device,
        const std::shared_ptr<SurfaceKHR>& surface
    )
        : mDevice { device }
        , mSurface { surface }
    {
        assert(mDevice);
        assert(mSurface);
        uint32_t min = mSurface->capabilities().minImageCount;
        uint32_t max = mSurface->capabilities().maxImageCount;
        uint32_t imageCount = max ? dst::clamp(min + 1, min, max) : min + 1;

        // TODO : Make configurable...right now we're using VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT which
        //        allows us to render directly into the image, and VK_IMAGE_TRANSFER_DST_BIT which
        //        allows us to use a memory operation to transfer a rendered image into the SwapChain.

        // NOTE : Usage flags define how a given Image may be used in Vulkan.  If we want an image to
        //        be sampled, it must be created with "SAMPLED" usage.  If the Image should be used as
        //        a depth render target, it must be created with "DEPTH and STENCIL" usgae.  An Image
        //        without proper usage enabled cannot be used for a given purpose or the results of
        //        such operations will be undefined.

        // NOTE : For a SwapChain, we want to render (in most cases) into the Image (use it as a render target),
        //        so we must specify "COLOR ATTACHMENT" usage with VK_IMAGE_COLOR_ATTACHMENT_BIT.  In Vulkan this
        //        usage is always available for SwapChains, so we can always set it without any other checks.  For
        //        any other usage we must ensure it's supported...we can do this with the "supportedUsageFlags"
        //        member of our Surface's Capabilities structure.

        VkImageUsageFlags usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
        if (mSurface->capabilities().supportedUsageFlags & VK_IMAGE_USAGE_TRANSFER_DST_BIT) {
            usage |= VK_IMAGE_USAGE_TRANSFER_DST_BIT;
        }

        // FROM : I Am Graphics And So Can You :: Part 3
        //        https://www.fasterthan.life/blog/2017/7/12/i-am-graphics-and-so-can-you-part-3-breaking-ground
        //
        //        // Moment of truth.  If the graphics queue family and present queue family don't match
        //        // then we need to create the swapchain with different information.
        //        if ( vkcontext.graphicsFamilyIdx != vkcontext.presentFamilyIdx ) {
        //            uint32 indices[] = { (uint32)vkcontext.graphicsFamilyIdx, (ui9nt32)vkcontext.presentFamily };
        //
        //            // There are only two sharing modes.  This is the one to use
        //            // if images are not exclusive to one queue.
        //            info.imageSharingMode = VK_SHARING_MODE_CONCURRENT;
        //            info.queueFamilyIndexCount = 2;
        //            info.pQueueFamilyIndices = indices;
        //        } else {
        //            // If the indices are the same, then the queue can have exclusive
        //            // access to the images.
        //            info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
        //        }

        VkSwapchainCreateInfoKHR info { };
        info.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
        info.surface = *mSurface;
        info.minImageCount = imageCount;
        info.imageFormat = mSurface->format().format;
        info.imageColorSpace = surface->format().colorSpace;
        info.imageExtent = surface->capabilities().currentExtent;
        // NOTE : This is the number of views in this SwapChain, 1 for mono, 2 for stereo, etc.
        info.imageArrayLayers = 1;
        info.imageUsage = usage;
        info.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
        info.queueFamilyIndexCount = 0;
        info.pQueueFamilyIndices = nullptr;
        info.preTransform = mSurface->transform_flags();
        // NOTE : Defines how blending should be performed with other windows in the system.
        info.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
        info.presentMode = mSurface->present_mode();
        // NOTE : Setting clipped to true will discard pixels that are obscured by other windows.
        info.clipped = true;
        info.oldSwapchain = mHandle;
        Validate(vkCreateSwapchainKHR(*mDevice, &info, nullptr, &mHandle));

        Validate(vkGetSwapchainImagesKHR(*mDevice, mHandle, &imageCount, nullptr));
        std::vector<VkImage> imageHandles(imageCount);
        Validate(vkGetSwapchainImagesKHR(*mDevice, mHandle, &imageCount, imageHandles.data()));
        for (const auto& handle : imageHandles) {
            std::unique_ptr<Image> image(new Image(*this, handle));
            image->create<Image::View>();
            mImages.push_back(std::move(image));
        }

        name("Dynamic_Static::Vulkan::SwapchainKHR");
    }

    SwapchainKHR::~SwapchainKHR()
    {
        if (mHandle) {
            mImages.clear();
            vkDestroySwapchainKHR(device(), mHandle, nullptr);
        }
    }

    Device& SwapchainKHR::device()
    {
        assert(mDevice);
        return *mDevice;
    }

    const Device& SwapchainKHR::device() const
    {
        assert(mDevice);
        return *mDevice;
    }

    SurfaceKHR& SwapchainKHR::surface()
    {
        assert(mSurface);
        return *mSurface;
    }

    const SurfaceKHR& SwapchainKHR::surface() const
    {
        assert(mSurface);
        return *mSurface;
    }

    const std::vector<std::unique_ptr<Image>>& SwapchainKHR::images() const
    {
        return mImages;
    }

    VkFormat SwapchainKHR::format() const
    {
        return surface().format().format;
    }

    VkExtent2D SwapchainKHR::extent() const
    {
        return surface().capabilities().currentExtent;
    }

    void SwapchainKHR::on_surface_resized()
    {
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
