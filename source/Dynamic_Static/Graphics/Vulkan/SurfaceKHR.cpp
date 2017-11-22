
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/System/Window.hpp"

#if defined(DYNAMIC_STATIC_WINDOWS)
#include "Dynamic_Static/Core/Win32LeanAndMean.hpp"
#endif

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    SurfaceKHR::SurfaceKHR(PhysicalDevice& physicalDevice, std::shared_ptr<dst::sys::Window>& window)
        : mPhysicalDevice { &physicalDevice }
        , mInstance { physicalDevice.instance().shared() }
        , mWindow { window }
    {
        assert(mPhysicalDevice);
        assert(mInstance);
        assert(mWindow);

        #if defined(DYNAMIC_STATIC_WINDOWS)
        VkWin32SurfaceCreateInfoKHR info { };
        info.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
        info.hinstance = GetModuleHandle(nullptr);
        info.hwnd = static_cast<HWND>(window->get_handle());
        validate(vkCreateWin32SurfaceKHR(*mInstance, &info, nullptr, &mHandle));
        #endif

        #if defined(DYNAMIC_STATIC_LINUX)
        VkXlibSurfaceCreateInfoKHR info { };
        info.sType = VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;
        info.dpy = static_cast<Display*>(window->display());
        info.window = static_cast<::Window>(window->x11_window());
        validate(vkCreateXlibSurfaceKHR(*mInstance, &info, nullptr, &mHandle));
        #endif

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
        validate(vkGetPhysicalDeviceSurfaceFormatsKHR(*mPhysicalDevice, mHandle, &formatCount, nullptr));
        mFormats.resize(formatCount);
        validate(vkGetPhysicalDeviceSurfaceFormatsKHR(*mPhysicalDevice, mHandle, &formatCount, mFormats.data()));
        mFormat = mFormats[0];
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

        mWindow->on_resized = std::bind(&SurfaceKHR::on_window_resized, this, std::placeholders::_1);
        name("Surface");
    }

    SurfaceKHR::~SurfaceKHR()
    {
        if (mHandle) {
            assert(mInstance);
            vkDestroySurfaceKHR(*mInstance, mHandle, nullptr);
        }
    }

    const PhysicalDevice& SurfaceKHR::physical_device() const
    {
        assert(mPhysicalDevice);
        return *mPhysicalDevice;
    }

    const dst::sys::Window& SurfaceKHR::window() const
    {
        assert(mWindow);
        return *mWindow;
    }

    VkSurfaceCapabilitiesKHR SurfaceKHR::capabilities() const
    {
        VkSurfaceCapabilitiesKHR capabilities;
        validate(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(*mPhysicalDevice, mHandle, &capabilities));
        return capabilities;
    }

    const VkSurfaceFormatKHR& SurfaceKHR::format() const
    {
        return mFormat;
    }

    const std::vector<VkSurfaceFormatKHR>& SurfaceKHR::formats() const
    {
        return mFormats;
    }

    const VkPresentModeKHR& SurfaceKHR::present_mode() const
    {
        return mPresentMode;
    }

    const std::vector<VkPresentModeKHR>& SurfaceKHR::present_modes() const
    {
        return mPresentModes;
    }

    VkSurfaceTransformFlagBitsKHR SurfaceKHR::transform_flags() const
    {
        // NOTE : Sometimes images must be transformed before they are presented (ie. due to device's orientation).
        //        If the specified transform is other than the current transform, the presentation engine will transform
        //        during the presentation operation...this could have performance implications on some platforms.
        auto surfaceCapabilities = capabilities();
        auto transformFlags = surfaceCapabilities.currentTransform;
        if (surfaceCapabilities.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) {
            transformFlags = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
        }

        return transformFlags;
    }

    bool SurfaceKHR::presentation_supported(size_t queueFamilyIndex) const
    {
        VkBool32 presentationSupported;
        validate(vkGetPhysicalDeviceSurfaceSupportKHR(*mPhysicalDevice, static_cast<uint32_t>(queueFamilyIndex), mHandle, &presentationSupported));
        return presentationSupported ? true : false;
    }

    void SurfaceKHR::on_window_resized(const dst::sys::Window& window)
    {
        on_resized(*this);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
