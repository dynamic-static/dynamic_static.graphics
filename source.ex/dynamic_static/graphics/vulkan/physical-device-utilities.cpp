
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/physical-device-utilities.hpp"

#include <vector>

namespace dst {
namespace vk {

std::optional<uint32_t> get_queue_family_index(VkPhysicalDevice vkPhysicalDevice, VkQueueFlags queueFlags)
{
    std::optional<uint32_t> queueFamilyIndex;
    VkQueueFlags selectedQueueFamilyFlags = 0;
    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(vkPhysicalDevice, &queueFamilyCount, nullptr);
    // TODO : Scratch pad allocator...
    std::vector<VkQueueFamilyProperties> queueFamilyProperties(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(vkPhysicalDevice, &queueFamilyCount, queueFamilyProperties.data());
    for (uint32_t queueFamily_i = 0; queueFamily_i < queueFamilyCount; ++queueFamily_i) {
        if (queueFamilyProperties[queueFamily_i].queueCount) {
            if (queueFamilyProperties[queueFamily_i].queueFlags == queueFlags) {
                return queueFamily_i;
            }
            if (!queueFamilyIndex || queueFamilyProperties[queueFamily_i].queueFlags < selectedQueueFamilyFlags) {
                bool suitable = true;
                for (size_t flagBit_i = 0; flagBit_i < sizeof(VkQueueFlags) * 8; ++flagBit_i) {
                    auto queueFlag = queueFlags & (1 << flagBit_i);
                    if (queueFlag && !(queueFamilyProperties[queueFamily_i].queueFlags & queueFlag)) {
                        suitable = false;
                        break;
                    }
                }
                if (suitable) {
                    queueFamilyIndex = queueFamily_i;
                    selectedQueueFamilyFlags = queueFamilyProperties[queueFamily_i].queueFlags;
                }
            }
        }
    }
    return queueFamilyIndex;
}

Managed<VkQueue> get_device_queue(const Managed<VkDevice>& device, VkQueueFlags queueFlags)
{
    // TODO : This function needs to be reworked to ensure that it returns a VkQueue
    //  that was actually created when the VkDevice was created...it works for now...
    auto queueFamilyIndex = get_queue_family_index(device.get<Managed<VkPhysicalDevice>>(), queueFlags);
    if (queueFamilyIndex.has_value()) {
        for (const auto& queue : device.get<std::vector<Managed<VkQueue>>>()) {
            if (queue.get<Managed<VkDeviceQueueCreateInfo>>()->queueFamilyIndex == queueFamilyIndex.value()) {
                return queue;
            }
        }
    }
    return { };
}

std::optional<uint32_t> get_memory_type_index(VkPhysicalDevice vkPhysicalDevice, uint32_t memoryTypeBits, VkMemoryPropertyFlags memoryPropertyFlags)
{
    VkPhysicalDeviceMemoryProperties physicalDeviceMemoryProperties { };
    vkGetPhysicalDeviceMemoryProperties(vkPhysicalDevice, &physicalDeviceMemoryProperties);
    for (uint32_t i = 0; i < physicalDeviceMemoryProperties.memoryTypeCount; ++i) {
        const auto& memoryType = physicalDeviceMemoryProperties.memoryTypes[i];
        if (memoryTypeBits & (1 << i) && (memoryType.propertyFlags & memoryPropertyFlags) == memoryPropertyFlags) {
            return i;
        }
    }
    return { };
}

} // namespace vk
} // namespace dst
