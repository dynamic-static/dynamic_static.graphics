
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

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <memory>
#include <string>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan physical device.
     */
    class PhysicalDevice final
        : public Object<VkPhysicalDevice>
    {
        friend class Instance;

    public:
        typedef VkPhysicalDeviceType Type;
        typedef VkPhysicalDeviceLimits Limits;
        typedef VkPhysicalDeviceFeatures Features;
        typedef VkPhysicalDeviceProperties Properties;
        typedef VkPhysicalDeviceMemoryProperties MemoryProperties;

    private:
        Instance* mInstance { nullptr };
        Features mFeatures { };
        Properties mProperties { };
        MemoryProperties mMemoryProperties { };

    private:
        PhysicalDevice(Instance* instance, VkPhysicalDevice handle);

    public:
        /**
         * Gets this PhysicalDevice's Instance.
         * @return This PhysicalDevice's Instance
         */
        const Instance& instance() const;

        /**
         * Gets this PhysicalDevice's PhysicalDevice::Features.
         * @return This PhysicalDevice's PhysicalDevice::Features
         */
        const Features& features() const;

        /**
         * Gets this PhysicalDevice's PhysicalDevice::Properties.
         * @return This PhysicalDevice's PhysicalDevice::Properties
         */
        const Properties& properties() const;

        /**
         * Gets this PhysicalDevice's PhysicalDevice::MemoryProperties.
         * @return This PhysicalDevice's PhysicalDevice::MemoryProperties
         */
        const MemoryProperties& memory_properties() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static

namespace Dynamic_Static {
    /**
     * TODO : Documentation.
     */
    std::string to_string(VkPhysicalDeviceType physicalDeviceType);
} // namespace Dynamic_Static
