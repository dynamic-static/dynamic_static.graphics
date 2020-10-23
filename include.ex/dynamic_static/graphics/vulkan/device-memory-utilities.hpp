
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/default.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

#include <type_traits>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
struct BindManagedMemoryInfo final
{
    const Managed<VkBuffer>* pBuffer { nullptr }; //!< TODO : Documentation
    const Managed<VkImage>* pImage { nullptr };   //!< TODO : Documentation
};

/**
TODO : Documentation
*/
struct AllocateAndBindManagedMemoryInfo final
{
    uint32_t bindInfoCount { 0 };                        //!< TODO : Documentation
    const BindManagedMemoryInfo* pBindInfos { nullptr }; //!< TODO : Documentation
    VkMemoryPropertyFlags memoryPropertyFlags { 0 };     //!< TODO : Documentation
};

/**
TODO : Documentation
*/
template <typename ManagedHandleType>
inline VkResult get_memory_requirements(const ManagedHandleType& managedHandle, VkMemoryRequirements* pMemoryRequirements)
{
    auto vkResult = VK_ERROR_VALIDATION_FAILED_EXT;
    if (pMemoryRequirements) {
        *pMemoryRequirements = { };
        if (managedHandle) {
            dst_gfx_assert(managedHandle.get<Managed<VkDevice>>());
            if constexpr (std::is_same_v<ManagedHandleType, Managed<VkBuffer>>) {
                vkGetBufferMemoryRequirements(managedHandle.get<Managed<VkDevice>>(), managedHandle, pMemoryRequirements);
                return VK_SUCCESS;
            } else
            if constexpr (std::is_same_v<ManagedHandleType, Managed<VkImage>>) {
                vkGetImageMemoryRequirements(managedHandle.get<Managed<VkDevice>>(), managedHandle, pMemoryRequirements);
                return VK_SUCCESS;
            }
        }
    }
    return VK_ERROR_VALIDATION_FAILED_EXT;
}

/**
TODO : Documentation
*/
VkResult get_memory_requirements(uint32_t bindInfoCount, const BindManagedMemoryInfo* pBindInfos, VkMemoryRequirements* pMemoryRequirements);

/**
TODO : Documentation
*/
VkResult allocate_and_bind_managed_memory(const AllocateAndBindManagedMemoryInfo& allocateAndBindInfo, const VkAllocationCallbacks* pAllocator = nullptr, Managed<VkDeviceMemory>* pMemory = nullptr);

} // namespace vk
} // namespace dst
