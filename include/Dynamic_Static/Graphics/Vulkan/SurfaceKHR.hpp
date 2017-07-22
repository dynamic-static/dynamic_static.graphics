
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

#pragma once

#include "Dynamic_Static/Core/Collection.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

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
         * Gets this SurfaceKHR's VkSurfaceFormatKHR.
         * @return This SurfaceKHR's VkSurfaceFormatKHR
         */
        const dst::Collection<VkSurfaceFormatKHR> formats() const;

        /**
         * Gets this SurfaceKHR's VkPresentModeKHR.
         * @return This SurfaceKHR's VkPresentModeKHR
         */
        const VkPresentModeKHR& present_mode() const;

        /**
         * Gets this SurfaceKHR's VkPresentModeKHRs.
         * @return This SurfaceKHR's VkPresentModeKHRs
         */
        const dst::Collection<VkPresentModeKHR> present_modes() const;

        /**
         * Gets this SurfaceKHR's VkSurfaceTransformFlagBitsKHR.
         * @return This SurfaceKHR's VkSurfaceTransformFlagBitsKHR
         */
        VkSurfaceTransformFlagBitsKHR transform_flags() const;

        /**
         * TODO : Documentation.
         */
        bool presentation_supported(size_t queueFamilyIndex) const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
