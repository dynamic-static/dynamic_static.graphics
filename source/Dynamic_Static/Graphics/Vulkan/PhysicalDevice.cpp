
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

#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VulkanHppInclude.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    PhysicalDevice::PhysicalDevice(Instance& instance, VkPhysicalDevice handle)
        : mInstance { &instance }
    {
        mHandle = handle;
        vkGetPhysicalDeviceFeatures(mHandle, &mFeatures);
        vkGetPhysicalDeviceProperties(mHandle, &mProperties);
        vkGetPhysicalDeviceMemoryProperties(mHandle, &mMemoryProperties);

        uint32_t queueFamilyCount;
        vkGetPhysicalDeviceQueueFamilyProperties(mHandle, &queueFamilyCount, nullptr);

        name(mProperties.deviceName);
    }

    PhysicalDevice::~PhysicalDevice()
    {
    }

    Instance& PhysicalDevice::instance()
    {
        assert(mInstance);
        return *mInstance;
    }

    const Instance& PhysicalDevice::instance() const
    {
        assert(mInstance);
        return *mInstance;
    }

    const PhysicalDevice::Features& PhysicalDevice::features() const
    {
        return mFeatures;
    }

    const PhysicalDevice::Properties& PhysicalDevice::properties() const
    {
        return mProperties;
    }

    const PhysicalDevice::MemoryProperties& PhysicalDevice::memory_properties() const
    {
        return mMemoryProperties;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static

namespace Dynamic_Static {

    std::string to_string(VkPhysicalDeviceType physicalDeviceType)
    {
        return ::vk::to_string(::vk::PhysicalDeviceType(physicalDeviceType));
    }

} // namespace Dynamic_Static
