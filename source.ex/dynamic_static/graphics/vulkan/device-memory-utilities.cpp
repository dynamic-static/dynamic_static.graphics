
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/device-memory-utilities.hpp"
#include "dynamic_static/graphics/vulkan/physical-device-utilities.hpp"

#include <limits>

namespace dst {
namespace vk {

struct ThisStructNeedsAName final
{
    VkMemoryRequirements memoryRequirements { };
    VkDeviceSize offset { 0 };
};

inline static bool is_valid(const BindManagedMemoryInfo& bindManagedMemoryInfo)
{
    return
        (bindManagedMemoryInfo.pBuffer && *bindManagedMemoryInfo.pBuffer && !bindManagedMemoryInfo.pImage) ||
        (bindManagedMemoryInfo.pImage && *bindManagedMemoryInfo.pImage && !bindManagedMemoryInfo.pBuffer);
}

inline static const Managed<VkDevice>& get_device(const BindManagedMemoryInfo& bindManagedMemoryInfo)
{
    if (bindManagedMemoryInfo.pBuffer) {
        return bindManagedMemoryInfo.pBuffer->get<Managed<VkDevice>>();
    } else
    if (bindManagedMemoryInfo.pImage) {
        return bindManagedMemoryInfo.pImage->get<Managed<VkDevice>>();
    }
    assert(false && "TODO : Error handling");
    static const Managed<VkDevice> NullDevice;
    return NullDevice;
}

VkResult get_memory_requirements(uint32_t bindInfoCount, const BindManagedMemoryInfo* pBindInfos, VkMemoryRequirements* pMemoryRequirements)
{
    auto vkResult = VK_INCOMPLETE;
    if (pMemoryRequirements) {
        if (bindInfoCount && pBindInfos) {
            vkResult = VK_SUCCESS;
            *pMemoryRequirements = { };
            pMemoryRequirements->memoryTypeBits = std::numeric_limits<decltype(pMemoryRequirements->memoryTypeBits)>::max();
            for (auto pBindInfo = pBindInfos; bindInfoCount-- && vkResult == VK_SUCCESS; ++pBindInfo) {
                vkResult = VK_ERROR_VALIDATION_FAILED_EXT;
                if (is_valid(*pBindInfo) && pMemoryRequirements->memoryTypeBits) {
                    VkMemoryRequirements resourceMemoryRequirements { };
                    if (pBindInfo->pBuffer) {
                        vkResult = get_memory_requirements(*pBindInfo->pBuffer, &resourceMemoryRequirements);
                    } else
                    if (pBindInfo->pImage) {
                        vkResult = get_memory_requirements(*pBindInfo->pImage, &resourceMemoryRequirements);
                    }
                    pMemoryRequirements->memoryTypeBits &= resourceMemoryRequirements.memoryTypeBits;
                    pMemoryRequirements->size += pMemoryRequirements->size % resourceMemoryRequirements.alignment;
                    pMemoryRequirements->size += resourceMemoryRequirements.size;
                }
            }
        }
        if (vkResult != VK_SUCCESS) {
            *pMemoryRequirements = { };
        }
    }
    return vkResult;
}

VkResult allocate_and_bind_managed_memory(const AllocateAndBindManagedMemoryInfo& allocateAndBindInfo, const VkAllocationCallbacks* pAllocator, Managed<VkDeviceMemory>* pMemory)
{
    auto vkResult = VK_INCOMPLETE;
    if (allocateAndBindInfo.bindInfoCount && allocateAndBindInfo.pBindInfos) {
        VkMemoryRequirements memoryRequirements { };
        vkResult = get_memory_requirements(allocateAndBindInfo.bindInfoCount, allocateAndBindInfo.pBindInfos, &memoryRequirements);
        if (vkResult == VK_SUCCESS) {
            const auto& device = get_device(allocateAndBindInfo.pBindInfos[0]);
            auto memoryTypeIndex = get_memory_type_index(device.get<Managed<VkPhysicalDevice>>(), memoryRequirements.memoryTypeBits, allocateAndBindInfo.memoryPropertyFlags);
            if (memoryTypeIndex.has_value()) {
                auto memoryAllocateInfo = get_default<VkMemoryAllocateInfo>();
                memoryAllocateInfo.allocationSize = memoryRequirements.size;
                memoryAllocateInfo.memoryTypeIndex = memoryTypeIndex.value();
                Managed<VkDeviceMemory> deviceMemory;
                vkResult = dst_vk(allocate<Managed<VkDeviceMemory>>(device, &memoryAllocateInfo, pAllocator, &deviceMemory));
                if (vkResult == VK_SUCCESS) {
                    
                }
            } else {
                vkResult = VK_INCOMPLETE;
            }
        }
    }
    return vkResult;
}

} // namespace vk
} // namespace dst
