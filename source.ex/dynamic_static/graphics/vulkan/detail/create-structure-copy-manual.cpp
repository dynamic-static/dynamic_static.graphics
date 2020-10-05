
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp"
#include "dynamic_static/graphics/vulkan/generated/create-structure-copy.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureInstanceKHR create_structure_copy<VkAccelerationStructureInstanceKHR>(
    const VkAccelerationStructureInstanceKHR& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    (void)pAllocationCallbacks;
    return obj;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureVersionKHR create_structure_copy<VkAccelerationStructureVersionKHR>(
    const VkAccelerationStructureVersionKHR& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    auto result = obj;
    result.pNext = create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.versionData = create_dynamic_array_copy(2 * VK_UUID_SIZE, obj.versionData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkClearColorValue create_structure_copy<VkClearColorValue>(
    const VkClearColorValue& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    (void)pAllocationCallbacks;
    return obj;
}

template <>
VkClearValue create_structure_copy<VkClearValue>(
    const VkClearValue& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    (void)pAllocationCallbacks;
    return obj;
}

template <>
VkPerformanceCounterResultKHR create_structure_copy<VkPerformanceCounterResultKHR>(
    const VkPerformanceCounterResultKHR& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    (void)pAllocationCallbacks;
    return obj;
}

template <>
VkPerformanceValueDataINTEL create_structure_copy<VkPerformanceValueDataINTEL>(
    const VkPerformanceValueDataINTEL& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    (void)obj;
    (void)pAllocationCallbacks;
    // NOPE : Union has const char* member
    return obj;
}

template <>
VkPipelineExecutableStatisticValueKHR create_structure_copy<VkPipelineExecutableStatisticValueKHR>(
    const VkPipelineExecutableStatisticValueKHR& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    (void)pAllocationCallbacks;
    return obj;
}

template <>
VkPipelineMultisampleStateCreateInfo create_structure_copy<VkPipelineMultisampleStateCreateInfo>(
    const VkPipelineMultisampleStateCreateInfo& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    auto result = obj;
    result.pNext = create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pSampleMask = create_dynamic_array_copy(obj.rasterizationSamples / 32, obj.pSampleMask, pAllocationCallbacks);
    return obj;
}

template <>
VkShaderModuleCreateInfo create_structure_copy<VkShaderModuleCreateInfo>(
    const VkShaderModuleCreateInfo& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    auto result = obj;
    result.pNext = create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pCode = create_dynamic_array_copy(obj.codeSize / sizeof(uint32_t), obj.pCode, pAllocationCallbacks);
    return obj;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTransformMatrixKHR create_structure_copy<VkTransformMatrixKHR>(
    const VkTransformMatrixKHR& obj,
    const VkAllocationCallbacks* pAllocationCallbacks
)
{
    (void)pAllocationCallbacks;
    return obj;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

} // namespace detail
} // namespace vk
} // namespace dst
