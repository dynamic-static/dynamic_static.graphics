
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
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
        VkFormatFeatureFlags features
    ) const
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

    size_t PhysicalDevice::uniform_buffer_alignment(size_t elementSize) const
    {
        size_t alignment = properties().limits.minUniformBufferOffsetAlignment;
        return (elementSize / alignment) * alignment + ((elementSize % alignment) > 0 ? alignment : 0);
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
