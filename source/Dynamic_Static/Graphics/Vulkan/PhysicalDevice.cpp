
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
        mQueueFamilyProperties.resize(queueFamilyCount);
        vkGetPhysicalDeviceQueueFamilyProperties(mHandle, &queueFamilyCount, mQueueFamilyProperties.data());

        name(mProperties.deviceName);
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

    const VkPhysicalDeviceFeatures& PhysicalDevice::features() const
    {
        return mFeatures;
    }

    const VkPhysicalDeviceProperties& PhysicalDevice::properties() const
    {
        return mProperties;
    }

    const VkPhysicalDeviceMemoryProperties& PhysicalDevice::memory_properties() const
    {
        return mMemoryProperties;
    }

    uint32_t PhysicalDevice::find_memory_type_index(
        uint32_t memoryTypeFilter,
        VkMemoryPropertyFlags memoryPropertyFlags
    ) const
    {
        int32_t memoryTypeIndex = -1;
        for (int32_t i = 0; i < static_cast<int32_t>(mMemoryProperties.memoryTypeCount); ++i) {
            if (memoryTypeFilter & (1 << i)) {
                if ((mMemoryProperties.memoryTypes[i].propertyFlags & memoryPropertyFlags) == memoryPropertyFlags) {
                    memoryTypeIndex = i;
                    break;
                }
            }
        }

        if (memoryTypeIndex == -1) {
            throw std::runtime_error("Failed to find supported Memory type index");
        }

        return static_cast<uint32_t>(memoryTypeIndex);
    }

    std::vector<size_t> PhysicalDevice::find_queue_families(VkQueueFlags queueFlags) const
    {
        std::vector<size_t> queueFamilyIndices;
        for (size_t i = 0; i < mQueueFamilyProperties.size(); ++i) {
            if (mQueueFamilyProperties[i].queueFlags & queueFlags &&
                mQueueFamilyProperties[i].queueCount > 0) {
                queueFamilyIndices.push_back(i);
            }
        }

        return queueFamilyIndices;
    }

    VkFormat PhysicalDevice::find_supported_format(
        const gsl::span<VkFormat>& candidates,
        VkImageTiling tiling,
        VkFormatFeatureFlags features)
    {
        VkFormat format = VK_FORMAT_UNDEFINED;
        for (auto candidate : candidates) {
            VkFormatProperties properties;
            vkGetPhysicalDeviceFormatProperties(mHandle, candidate, &properties);
            if (tiling == VK_IMAGE_TILING_LINEAR &&
                (properties.linearTilingFeatures & features) == features) {
                format = candidate;
            } else
            if (tiling == VK_IMAGE_TILING_OPTIMAL &&
                (properties.optimalTilingFeatures & features) == features) {
                format = candidate;
            }
        }

        // TODO : throw?
        return format;
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
