
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

#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Image::Image(const std::shared_ptr<Device>& device, const Info& info)
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

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
