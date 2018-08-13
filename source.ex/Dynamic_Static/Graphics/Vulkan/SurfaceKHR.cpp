
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    SurfaceKHR::SurfaceKHR(
        PhysicalDevice* physicalDevice,
        const std::shared_ptr<sys::Window>& window
    )
        : PhysicalDeviceChild(physicalDevice)
        , mWindow { window }
    {
        assert(mWindow);
        set_name(window->get_name() + " Surface");
        mWindow->on_resize = std::bind(&SurfaceKHR::on_window_resize, this, std::placeholders::_1);

        #ifdef DYNAMIC_STATIC_WINDOWS
        VkWin32SurfaceCreateInfoKHR surfaceCreateInfo { };
        surfaceCreateInfo.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
        surfaceCreateInfo.hinstance = GetModuleHandle(nullptr);
        surfaceCreateInfo.hwnd = window->get_hwnd();
        dst_vk(vkCreateWin32SurfaceKHR(get_instance(), &surfaceCreateInfo, nullptr, &mHandle));
        #endif

        dst_vk(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(get_physical_device(), mHandle, &mCapabilities));

        uint32_t presentModeCount;
        dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(get_physical_device(), mHandle, &presentModeCount, nullptr));
        mPresentModes.resize(presentModeCount);
        dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(get_physical_device(), mHandle, &presentModeCount, mPresentModes.data()));
        mPresentMode = VK_PRESENT_MODE_FIFO_KHR;
        for (auto presentMode : mPresentModes) {
            if (presentMode == VK_PRESENT_MODE_MAILBOX_KHR) {
                mPresentMode = presentMode;
                break;
            }
        }

        uint32_t formatCount;
        dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(get_physical_device(), mHandle, &formatCount, nullptr));
        mFormats.resize(formatCount);
        dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(get_physical_device(), mHandle, &formatCount, mFormats.data()));
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
    }

    SurfaceKHR::~SurfaceKHR()
    {
        if (mHandle) {
            vkDestroySurfaceKHR(get_instance(), mHandle, nullptr);
        }
    }

    sys::Window& SurfaceKHR::get_window()
    {
        assert(mWindow);
        return *mWindow;
    }

    const sys::Window& SurfaceKHR::get_window() const
    {
        assert(mWindow);
        return *mWindow;
    }

    const VkSurfaceCapabilitiesKHR& SurfaceKHR::get_capabilities() const
    {
        return mCapabilities;
    }

    const std::vector<VkPresentModeKHR>& SurfaceKHR::get_present_modes() const
    {
        return mPresentModes;
    }

    VkPresentModeKHR SurfaceKHR::get_present_mode() const
    {
        return mPresentMode;
    }

    const std::vector<VkSurfaceFormatKHR>& SurfaceKHR::get_formats() const
    {
        return mFormats;
    }

    const VkSurfaceFormatKHR& SurfaceKHR::get_format() const
    {
        return mFormat;
    }

    VkSurfaceTransformFlagsKHR SurfaceKHR::get_transform_flags() const
    {
        return
            mCapabilities.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR ?
            VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR :
            mCapabilities.currentTransform;
    }

    void SurfaceKHR::on_window_resize(const sys::IWindow& window) const
    {
        on_resize(*this);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
