
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
namespace vk {
namespace detail {

/**
Creates a deep copy of a given VulkanStructureType
@param <VulkanStructureType> The type of Vulkan structure to create a deep copy of
@param [in] obj A const reference to the VulkanStructureType to create a deep copy of
@param [in](optional = nullptr) pAllocator A const pointer to a VkAllocationCallbacks structure to use while copying the given VulkanStructureType
@return The deep copy of the given VulkanStructureType
    @note Any VulkanStructureType copied via create_structure_copy<>() must be destroyed via destroy_structure_copy<>()
    @note Managed<VulkanStructureType> should be preferred over direct useage of create_structure_copy<>()/destroy_structure_copy<>()
    @note If pAllocator is null any allocations will use malloc()
    @note If pAllocator is not null the call to destroy_structure_copy<>() must provide a compatible VkAllocationCallbacks structure
*/
template <typename VulkanStructureType>
inline VulkanStructureType create_structure_copy(const VulkanStructureType& obj, const VkAllocationCallbacks* pAllocator = nullptr)
{
    (void)pAllocator;
    return obj;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void destroy_structure_copy(const VulkanStructureType& obj, const VkAllocationCallbacks* pAllocator = nullptr)
{
    (void)obj;
    (void)pAllocator;
}

/**
TODO : Documentation
*/
inline const VkAllocationCallbacks* validate_allocation_callbacks(const VkAllocationCallbacks* pAllocator)
{
    static const VkAllocationCallbacks sAllocator {
        nullptr,
        [](void*, size_t size, size_t, VkSystemAllocationScope) { return malloc(size); },
        nullptr,
        [](void*, void* pMemory) { free(pMemory); },
        nullptr,
        nullptr,
    };
    return pAllocator ? pAllocator : &sAllocator;
}

/**
TODO : Documentation
*/
template <size_t Count, typename VulkanStructureType>
inline void create_static_array_copy(    VulkanStructureType* pDst, const VulkanStructureType* pSrc, const VkAllocationCallbacks* pAllocator)
{
    for (size_t i = 0; i < Count; ++i) {
        pDst[i] = create_structure_copy(pSrc[i], pAllocator);
    }
}

/**
TODO : Documentation
*/
template <size_t Count, typename VulkanStructureType>
inline void destroy_static_array_copy(const VulkanStructureType* pObjs, const VkAllocationCallbacks* pAllocator)
{
    for (size_t i = 0; i < Count; ++i) {
        destroy_structure_copy(pObjs[i], pAllocator);
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
inline char* create_dynamic_string_copy(const char* pStr, const VkAllocationCallbacks* pAllocator)
{
    char* pResult = nullptr;
    if (pStr) {
        pAllocator = validate_allocation_callbacks(pAllocator);
        auto count = strlen(pStr) + 1;
        pResult = (char*)pAllocator->pfnAllocation(
            pAllocator->pUserData,
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
inline void destroy_dynamic_string_copy(const char* pStr, const VkAllocationCallbacks* pAllocator)
{
    pAllocator = validate_allocation_callbacks(pAllocator);
    pAllocator->pfnFree(pAllocator->pUserData, (void*)pStr);
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline VulkanStructureType* create_dynamic_array_copy(size_t count, const VulkanStructureType* pObjs, const VkAllocationCallbacks* pAllocator)
{
    VulkanStructureType* pResult = nullptr;
    if (count && pObjs) {
        pAllocator = validate_allocation_callbacks(pAllocator);
        pResult = (VulkanStructureType*)pAllocator->pfnAllocation(
            pAllocator->pUserData,
            sizeof(VulkanStructureType) * count,
            0,
            VK_SYSTEM_ALLOCATION_SCOPE_OBJECT
        );
        for (uint32_t i = 0; i < count; ++i) {
            pResult[i] = create_structure_copy(pObjs[i], pAllocator);
        }
    }
    return pResult;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void destroy_dynamic_array_copy(size_t count, const VulkanStructureType* pObjs, const VkAllocationCallbacks* pAllocator)
{
    if (count && pObjs) {
        pAllocator = validate_allocation_callbacks(pAllocator);
        for (size_t i = 0; i < count; ++i) {
            destroy_structure_copy(pObjs[i], pAllocator);
        }
        pAllocator->pfnFree(pAllocator->pUserData, (void*)pObjs);
    }
}

/**
TODO : Documentation
*/
template <>
inline void* create_dynamic_array_copy<void>(size_t byteCount, const void* pData, const VkAllocationCallbacks* pAllocator)
{
    return create_dynamic_array_copy(byteCount, (const uint8_t*)pData, pAllocator);
}

/**
TODO : Documentation
*/
template <>
inline void destroy_dynamic_array_copy<void>(size_t byteCount, const void* pData, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(byteCount, (const uint8_t*)pData, pAllocator);
}

/**
TODO : Documentation
*/
inline char** create_dynamic_string_array_copy(uint32_t count /* TODO : size_t */, const char* const* ppStrs, const VkAllocationCallbacks* pAllocator)
{
    char** ppResult = nullptr;
    if (count && ppStrs) {
        pAllocator = validate_allocation_callbacks(pAllocator);
        ppResult = (char**)pAllocator->pfnAllocation(
            pAllocator->pUserData,
            sizeof(char*) * count,
            0,
            VK_SYSTEM_ALLOCATION_SCOPE_OBJECT
        );
        for (uint32_t i = 0; i < count; ++i) {
            ppResult[i] = create_dynamic_string_copy(ppStrs[i], pAllocator);
        }
    }
    return ppResult;
}

/**
TODO : Documentation
*/
inline void destroy_dynamic_string_array_copy(uint32_t count /* TODO : size_t */, const char* const* ppStrs, const VkAllocationCallbacks* pAllocator)
{
    if (count && ppStrs) {
        pAllocator = validate_allocation_callbacks(pAllocator);
        for (uint32_t i = 0; i < count; ++i) {
            destroy_dynamic_string_copy(ppStrs[i], pAllocator);
        }
        destroy_dynamic_array_copy(count, ppStrs, pAllocator);
    }
}

} // namespace detail
} // namespace vk
} // namespace dst
