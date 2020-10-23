
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/managed.hpp"
#include "dynamic_static/graphics/vulkan/generated/managed.control-blocks.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <atomic>

namespace dst {
namespace vk {
namespace detail {

template <>
void on_managed_handle_created(Managed<VkInstance>& instance);

template <>
void on_managed_handle_destroyed(Managed<VkInstance>& instance);

template <>
void on_managed_handle_destroyed(Managed<VkPhysicalDevice>& physicalDevice);

template <>
void on_managed_handle_created(Managed<VkDevice>& device);

template <>
void on_managed_handle_destroyed(Managed<VkDevice>& device);

template <>
void on_managed_handle_destroyed(Managed<VkQueue>& queue);

template <>
void on_managed_handle_created(Managed<VkSwapchainKHR>& swapchain);

template <>
void on_managed_handle_destroyed(Managed<VkSwapchainKHR>& swapchain);

template <>
void on_managed_handle_destroyed(Managed<VkImage>& image);

template <>
VkResult bind_memory(Managed<VkBuffer>& buffer, Managed<VkDeviceMemory>& memory, VkDeviceSize memoryOffset);

template <>
VkResult bind_memory(Managed<VkImage>& image, Managed<VkDeviceMemory>& memory, VkDeviceSize memoryOffset);

template <>
VkResult bind_memory(VkDevice vkDevice, uint32_t bindInfoCount, const VkBindBufferMemoryInfo* pBindInfos);

template <>
VkResult bind_memory(VkDevice vkDevice, uint32_t bindInfoCount, const VkBindImageMemoryInfo* pBindInfos);

template <typename LeadManagedHandleType, typename FollowManagedHandleType>
inline void resolve_circular_references(const LeadManagedHandleType& leadManagedHandle)
{
    if (leadManagedHandle) {
        assert(leadManagedHandle.mspControlBlock);
        auto& followManagedHandles = const_cast<std::vector<FollowManagedHandleType>&>(leadManagedHandle.get<std::vector<FollowManagedHandleType>>());
        if (leadManagedHandle.mspControlBlock.use_count() <= followManagedHandles.size() + 1) {
            if (std::all_of(followManagedHandles.begin(), followManagedHandles.end(),
                [](const FollowManagedHandleType& followManagedHandle)
                {
                    assert(followManagedHandle);
                    assert(followManagedHandle.mspControlBlock);
                    return followManagedHandle.mspControlBlock.use_count() <= 2;
                }
            )) {
                for (const auto& followManagedHandle : followManagedHandles) {
                    followManagedHandle.mspControlBlock->set(VK_OBJECT_TYPE_MAX_ENUM /* TODO : Setup VkObject from XML so this can use VK_OBJECT_TYPE_UNKNOWN */);
                    followManagedHandle.mspControlBlock->set(std::move(LeadManagedHandleType()));
                }
            }
        }
    }
}

} // namespace detail
} // namespace vk
} // namespace dst
