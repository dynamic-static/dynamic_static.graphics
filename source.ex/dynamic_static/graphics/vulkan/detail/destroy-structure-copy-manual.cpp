
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
#include "dynamic_static/graphics/vulkan/generated/destroy-structure-copy.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
    // NOPE : Union has const char* member
}

template <>
void destroy_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.rasterizationSamples / 32, obj.pSampleMask, pAllocator);
}

template <>
void destroy_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.codeSize / sizeof(uint32_t), obj.pCode, pAllocator);
}

template <>
void destroy_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

template <>
void destroy_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    (void)obj;
    (void)pAllocator;
}

} // namespace detail
} // namespace vk
} // namespace dst
