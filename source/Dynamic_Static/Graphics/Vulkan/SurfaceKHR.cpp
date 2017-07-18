

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

#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#if defined(DYNAMIC_STATIC_WINDOWS)
#include "Dynamic_Static/Core/Win32LeanAndMean.hpp"
#endif

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    SurfaceKHR::SurfaceKHR(PhysicalDevice& physicalDevice, std::shared_ptr<Window>& window)
        : mPhysicalDevice { &physicalDevice }
        , mInstance { physicalDevice.instance().make_shared() }
        , mWindow { window }
    {
        assert(mPhysicalDevice);
        assert(mInstance);
        assert(mWindow);

        #if defined(DYNAMIC_STATIC_WINDOWS)
        VkWin32SurfaceCreateInfoKHR info;
        info.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
        info.pNext = nullptr;
        info.flags = 0;
        info.hinstance = GetModuleHandle(nullptr);
        info.hwnd = static_cast<HWND>(window->handle());
        Validate(vkCreateWin32SurfaceKHR(*mInstance, &info, nullptr, &mHandle));
        #endif

        Validate(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(*mPhysicalDevice, mHandle, &mCapabilities));

        uint32_t presentModeCount;
        vkGetPhysicalDeviceSurfacePresentModesKHR(*mPhysicalDevice, mHandle, &presentModeCount, nullptr);
        mPresentModes.resize(presentModeCount);
        vkGetPhysicalDeviceSurfacePresentModesKHR(*mPhysicalDevice, mHandle, &presentModeCount, mPresentModes.data());
        mPresentMode = VK_PRESENT_MODE_FIFO_KHR;
        for (const auto& presentMode : mPresentModes) {
            if (presentMode == VK_PRESENT_MODE_MAILBOX_KHR) {
                mPresentMode = presentMode;
                break;
            }
        }

        uint32_t formatCount;
        vkGetPhysicalDeviceSurfaceFormatsKHR(*mPhysicalDevice, mHandle, &formatCount, nullptr);
        mFormats.resize(formatCount);
        vkGetPhysicalDeviceSurfaceFormatsKHR(*mPhysicalDevice, mHandle, &formatCount, mFormats.data());
        if (mFormats.size() == 1 && mFormats[0].format == VK_FORMAT_UNDEFINED) {
            mFormat.colorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
            mFormat.format = VK_FORMAT_R8G8B8A8_UNORM;
        } else {
            for (const auto& format : mFormats) {
                if (format.format == VK_FORMAT_R8G8B8A8_UNORM) {
                    mFormat = format;
                    break;
                }
            }
        }

        name("Dynamic_Static::Vulkan::Surface");
    }

    const PhysicalDevice& SurfaceKHR::physical_device() const
    {
        assert(mPhysicalDevice);
        return *mPhysicalDevice;
    }

    const Window& SurfaceKHR::window() const
    {
        assert(mWindow);
        return *mWindow;
    }

    const VkSurfaceCapabilitiesKHR& SurfaceKHR::capabilities() const
    {
        return mCapabilities;
    }

    const VkSurfaceFormatKHR& SurfaceKHR::format() const
    {
        return mFormat;
    }

    const dst::Collection<VkSurfaceFormatKHR> SurfaceKHR::formats() const
    {
        return mFormats;
    }

    const VkPresentModeKHR& SurfaceKHR::present_mode() const
    {
        return mPresentMode;
    }

    const dst::Collection<VkPresentModeKHR> SurfaceKHR::present_modes() const
    {
        return mPresentModes;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
