
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Callback.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

#include <memory>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {

    class Window;

namespace Vulkan {

    /**
     * Provides high level control over a Vulkan SurfaceKHR.
     */
    class SurfaceKHR final
        : public Object<VkSurfaceKHR>
    {
        friend class PhysicalDevice;

    private:
        VkSurfaceFormatKHR mFormat;
        VkPresentModeKHR mPresentMode;
        std::vector<VkSurfaceFormatKHR> mFormats;
        std::vector<VkPresentModeKHR> mPresentModes;

    private:
        SurfaceKHR(PhysicalDevice& physicalDevice, std::shared_ptr<Window>& window);

    private:
        PhysicalDevice* mPhysicalDevice { nullptr };
        std::shared_ptr<Instance> mInstance;
        std::shared_ptr<Window> mWindow;

    public:
        /**
         * Callback executed when this SurfaceKHR is resized.
         * @param [in] The SurfaceKHR being resized
         */
        Callback<SurfaceKHR, const SurfaceKHR&> on_resized;

    public:
        /**
         * Destroys this instance of SurfaceKHR.
         */
        ~SurfaceKHR();

    public:
        /**
         * Gets this SurfaceKHR's PhysicalDevice.
         * @return This SurfaceKHR's PhysicalDevice
         */
        const PhysicalDevice& physical_device() const;

        /**
         * Gets this SurfaceKHR's Window.
         * @return This SurfaceKHR's Window
         */
        const Window& window() const;

        /**
         * Gets this SurfaceKHR's VkSurfaceCapabilitiesKHR.
         * @return This SurfaceKHR's VkSurfaceCapabilitiesKHR
         */
        VkSurfaceCapabilitiesKHR capabilities() const;

        /**
         * Gets this SurfaceKHR's VkSurfaceFormatKHR.
         * @return This SurfaceKHR's VkSurfaceFormatKHR
         */
        const VkSurfaceFormatKHR& format() const;

        /**
         * Gets this SurfaceKHR's VkSurfaceFormatKHRs.
         * @return This SurfaceKHR's VkSurfaceFormatKHRs
         */
        const std::vector<VkSurfaceFormatKHR>& formats() const;

        /**
         * Gets this SurfaceKHR's VkPresentModeKHR.
         * @return This SurfaceKHR's VkPresentModeKHR
         */
        const VkPresentModeKHR& present_mode() const;

        /**
         * Gets this SurfaceKHR's VkPresentModeKHRs.
         * @return This SurfaceKHR's VkPresentModeKHRs
         */
        const std::vector<VkPresentModeKHR>& present_modes() const;

        /**
         * Gets this SurfaceKHR's VkSurfaceTransformFlagBitsKHR.
         * @return This SurfaceKHR's VkSurfaceTransformFlagBitsKHR
         */
        VkSurfaceTransformFlagBitsKHR transform_flags() const;

        /**
         * TODO : Documentation.
         */
        bool presentation_supported(size_t queueFamilyIndex) const;

    private:
        void on_window_resized(const Window& window);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
