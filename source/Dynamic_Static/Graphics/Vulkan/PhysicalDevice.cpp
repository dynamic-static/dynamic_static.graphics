
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

#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VulkanHppInclude.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    PhysicalDevice::PhysicalDevice(Instance* instance, VkPhysicalDevice handle)
        : mInstance { instance }
    {
        mHandle = handle;
        vkGetPhysicalDeviceFeatures(mHandle, &mFeatures);
        vkGetPhysicalDeviceProperties(mHandle, &mProperties);
        vkGetPhysicalDeviceMemoryProperties(mHandle, &mMemoryProperties);

        uint32_t queueFamilyCount;
        vkGetPhysicalDeviceQueueFamilyProperties(mHandle, &queueFamilyCount, nullptr);

        name(mProperties.deviceName);
    }

    const Instance& PhysicalDevice::instance() const
    {
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

    #if 0
    std::string to_string(VkSampleCountFlags sampleCountFlags)
    {
        // NOTE : This doesn't work because VkSampleCountFlags is a typedef...
        // TODO : Templatized Flags class like vulkan.hpp
        std::string str;
        if (sampleCountFlags & VK_SAMPLE_COUNT_1_BIT) str += "1 | ";
        if (sampleCountFlags & VK_SAMPLE_COUNT_2_BIT) str += "2 | ";
        if (sampleCountFlags & VK_SAMPLE_COUNT_4_BIT) str += "4 | ";
        if (sampleCountFlags & VK_SAMPLE_COUNT_8_BIT) str += "8 | ";
        if (sampleCountFlags & VK_SAMPLE_COUNT_16_BIT) str += "16 | ";
        if (sampleCountFlags & VK_SAMPLE_COUNT_32_BIT) str += "32 | ";
        if (sampleCountFlags & VK_SAMPLE_COUNT_64_BIT) str += "64 | ";
        if (!str.empty()) {
            str = str.substr(0, str.size() - 3);
        }

        return "{ " + str + " }";
    }
    #endif

} // namespace Dynamic_Static
