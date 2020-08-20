
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <cstdlib>

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

/**
Creates a deep copy of a given VulkanStructureType
@param <VulkanStructureType> The type of Vulkan structure to create a deep copy of
@param [in] obj A const reference to the VulkanStructureType to create a deep copy of
@param [in](optional = nullptr) pAllocationCallbacks A const pointer to a VkAllocationCallbacks structure to use while copying the given VulkanStructureType
@return The deep copy of the given VulkanStructureType
    @note Any VulkanStructureType copied via create_structure_copy<>() must be destroyed via destroy_structure_copy<>()
    @note Managed<VulkanStructureType> should be preferred over direct useage of create_structure_copy<>()/destroy_structure_copy<>()
    @note If pAllocationCallbacks is null any allocations will use malloc()
    @note If pAllocationCallbacks is not null the call to destroy_structure_copy<>() must provide a compatible VkAllocationCallbacks structure
*/
template <typename VulkanStructureType>
inline VulkanStructureType create_structure_copy(
    const VulkanStructureType& obj,
    const VkAllocationCallbacks* pAllocationCallbacks = nullptr
)
{
    (void)pAllocationCallbacks;
    return obj;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void destroy_structure_copy(
    const VulkanStructureType& obj,
    const VkAllocationCallbacks* pAllocationCallbacks = nullptr
)
{
    (void)obj;
    (void)pAllocationCallbacks;
}

/**
TODO : Documentation
*/
inline const VkAllocationCallbacks* validate_allocation_callbacks(const VkAllocationCallbacks* pAllocationCallbacks)
{
    static const VkAllocationCallbacks sAllocationCallbacks {
        nullptr,
        [](void*, size_t size, size_t, VkSystemAllocationScope) { return malloc(size); },
        nullptr,
        [](void*, void* pMemory) { free(pMemory); },
        nullptr,
        nullptr,
    };
    return pAllocationCallbacks ? pAllocationCallbacks : &sAllocationCallbacks;
}

/**
TODO : Documentation
*/
template <size_t Count, typename VulkanStructureType>
inline void create_static_array_copy(
    VulkanStructureType* pDst,
    const VulkanStructureType* pSrc
)
{
    for (size_t i = 0; i < Count; ++i) {
        pDst[i] = create_structure_copy(pSrc[i]);
    }
}

/**
TODO : Documentation
*/
template <size_t Count, typename VulkanStructureType>
inline void destroy_static_array_copy(const VulkanStructureType* pObjs)
{
    for (size_t i = 0; i < Count; ++i) {
        destroy_structure_copy(pObjs[i]);
    }
}

/**
TODO : Documentation
*/
template <size_t Count>
inline void create_static_string_copy(char* pDst, const char* pSrc)
{
    memcpy(pDst, pSrc, Count);
}

/**
TODO : Documentation
*/
inline char* create_dynamic_string_copy(
    const char* pStr,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    char* pResult = nullptr;
    if (pStr) {
        pAllocationCallbacks = validate_allocation_callbacks(pAllocationCallbacks);
        auto count = strlen(pStr) + 1;
        pResult = (char*)pAllocationCallbacks->pfnAllocation(
            pAllocationCallbacks->pUserData,
            sizeof(char) * count,
            0,
            VK_SYSTEM_ALLOCATION_SCOPE_OBJECT
        );
        memcpy(pResult, pStr, count);
    }
    return pResult;
}

/**
TODO : Documentation
*/
inline void destroy_dynamic_string_copy(
    const char* pStr,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    pAllocationCallbacks = validate_allocation_callbacks(pAllocationCallbacks);
    pAllocationCallbacks->pfnFree(pAllocationCallbacks->pUserData, (void*)pStr);
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline VulkanStructureType* create_dynamic_array_copy(
    size_t count,
    const VulkanStructureType* pObjs,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    VulkanStructureType* pResult = nullptr;
    if (count && pObjs) {
        pAllocationCallbacks = validate_allocation_callbacks(pAllocationCallbacks);
        pResult = (VulkanStructureType*)pAllocationCallbacks->pfnAllocation(
            pAllocationCallbacks->pUserData,
            sizeof(VulkanStructureType) * count,
            0,
            VK_SYSTEM_ALLOCATION_SCOPE_OBJECT
        );
        for (uint32_t i = 0; i < count; ++i) {
            pResult[i] = create_structure_copy(pObjs[i], pAllocationCallbacks);
        }
    }
    return pResult;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void destroy_dynamic_array_copy(
    size_t count,
    const VulkanStructureType* pObjs,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    if (count && pObjs) {
        pAllocationCallbacks = validate_allocation_callbacks(pAllocationCallbacks);
        for (size_t i = 0; i < count; ++i) {
            destroy_structure_copy(pObjs[i], pAllocationCallbacks);
        }
        pAllocationCallbacks->pfnFree(pAllocationCallbacks->pUserData, (void*)pObjs);
    }
}

/**
TODO : Documentation
*/
template <>
inline void* create_dynamic_array_copy<void>(
    size_t byteCount,
    const void* pData,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    return create_dynamic_array_copy(byteCount, (const uint8_t*)pData, pAllocationCallbacks);
}

/**
TODO : Documentation
*/
template <>
inline void destroy_dynamic_array_copy<void>(
    size_t byteCount,
    const void* pData,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    destroy_dynamic_array_copy(byteCount, (const uint8_t*)pData, pAllocationCallbacks);
}

/**
TODO : Documentation
*/
inline char** create_dynamic_string_array_copy(
    // TODO : size_t
    uint32_t count,
    const char* const* ppStrs,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    char** ppResult = nullptr;
    if (count && ppStrs) {
        pAllocationCallbacks = validate_allocation_callbacks(pAllocationCallbacks);
        ppResult = (char**)pAllocationCallbacks->pfnAllocation(
            pAllocationCallbacks->pUserData,
            sizeof(char*) * count,
            0,
            VK_SYSTEM_ALLOCATION_SCOPE_OBJECT
        );
        for (uint32_t i = 0; i < count; ++i) {
            ppResult[i] = create_dynamic_string_copy(ppStrs[i], pAllocationCallbacks);
        }
    }
    return ppResult;
}

/**
TODO : Documentation
*/
inline void destroy_dynamic_string_array_copy(
    // TODO : size_t
    uint32_t count,
    const char* const* ppStrs,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    if (count && ppStrs) {
        pAllocationCallbacks = validate_allocation_callbacks(pAllocationCallbacks);
        for (uint32_t i = 0; i < count; ++i) {
            destroy_dynamic_string_copy(ppStrs[i], pAllocationCallbacks);
        }
        destroy_dynamic_array_copy(count, ppStrs, pAllocationCallbacks);
    }
}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
