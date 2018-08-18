
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDeviceChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan surface.
    */
    class SurfaceKHR final
        : public Object<VkSurfaceKHR>
        , public SharedObject<SurfaceKHR>
        , public PhysicalDeviceChild
    {
    private:
        std::shared_ptr<sys::Window> mWindow;
        std::vector<VkSurfaceFormatKHR> mFormats;
        std::vector<VkPresentModeKHR> mPresentModes;

    public:
        /*
        * Callback executed when this SurfaceKHR is resized.
        * @param [in] This SurfaceKHR
        */
        Callback<SurfaceKHR, const SurfaceKHR&> on_resize;

    private:
        /*
        * Creates an instance of SurfaceKHR.
        * @param [in] physicalDevice This SurfaceKHR's PhysicalDevice
        * @param [in] window This SurfaceKHR's Window
        */
        SurfaceKHR(
            PhysicalDevice* physicalDevice,
            const std::shared_ptr<sys::Window>& window
        );

    public:
        /*
        * Destroys this instance of SurfaceKHR.
        */
        ~SurfaceKHR();

    public:
        /*
        * Gets this SurfaceKHR's Window.
        * @return This SurfaceKHR's Window
        */
        sys::Window& get_window();

        /*
        * Gets this SurfaceKHR's Window.
        * @return This SurfaceKHR's Window
        */
        const sys::Window& get_window() const;

        /*
        * Gets this SurfaceKHR's VkSurfaceFormatKHRs.
        * @return This SurfaceKHR's VkSurfaceFormatKHRs
        */
        const std::vector<VkSurfaceFormatKHR>& get_formats() const;

        /*
        * Gets this SurfaceKHR's VkPresentModeKHRs.
        * @return This SurfaceKHR's VkPresentModeKHRs
        */
        const std::vector<VkPresentModeKHR>& get_present_modes() const;

        /*
        * Gets this SurfaceKHR's VkSurfaceCapabilitiesKHR.
        * @return This SurfaceKHR's VkSurfaceCapabilitiesKHR
        */
        VkSurfaceCapabilitiesKHR get_capabilities() const;

    private:
        void on_window_resize(const sys::IWindow& window) const;

    private:
        friend class PhysicalDevice;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
