
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

#include <functional>

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
        set_name(get_window().get_name() + " SurfaceKHR");
        get_window().on_resize = std::bind(&SurfaceKHR::on_window_resize, this, std::placeholders::_1);

        #ifdef DYNAMIC_STATIC_WINDOWS
        VkWin32SurfaceCreateInfoKHR surfaceCreateInfo { };
        surfaceCreateInfo.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
        surfaceCreateInfo.hinstance = GetModuleHandle(nullptr);
        surfaceCreateInfo.hwnd = get_window().get_hwnd();
        dst_vk(vkCreateWin32SurfaceKHR(get_instance(), &surfaceCreateInfo, nullptr, &mHandle));
        #endif

        uint32_t formatCount;
        dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(get_physical_device(), mHandle, &formatCount, nullptr));
        mFormats.resize(formatCount);
        dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(get_physical_device(), mHandle, &formatCount, mFormats.data()));

        uint32_t presentModeCount;
        dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(get_physical_device(), mHandle, &presentModeCount, nullptr));
        mPresentModes.resize(presentModeCount);
        dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(get_physical_device(), mHandle, &presentModeCount, mPresentModes.data()));
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

    const std::vector<VkSurfaceFormatKHR>& SurfaceKHR::get_formats() const
    {
        return mFormats;
    }

    const std::vector<VkPresentModeKHR>& SurfaceKHR::get_present_modes() const
    {
        return mPresentModes;
    }

    VkSurfaceCapabilitiesKHR SurfaceKHR::get_capabilities() const
    {
        VkSurfaceCapabilitiesKHR capabilities { };
        dst_vk(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(get_physical_device(), mHandle, &capabilities));
        return capabilities;
    }

    void SurfaceKHR::on_window_resize(const sys::Window& window) const
    {
        on_resize(*this);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
