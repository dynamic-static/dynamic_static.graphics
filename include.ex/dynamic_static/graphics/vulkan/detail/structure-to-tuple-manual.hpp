
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/span.hpp"
#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple-utilities.hpp"
#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
#include "dynamic_static/graphics/vulkan/generated/to-tuple.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <tuple>
#include <utility>

namespace dst {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj)
{
    return std::make_tuple(0);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj)
{
    return std::make_tuple(0);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj)
{
    return std::make_tuple(0);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj)
{
    return std::make_tuple(0);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkClearColorValue>(const VkClearColorValue& obj)
{
    return std::make_tuple(
        obj.uint32[0],
        obj.uint32[1],
        obj.uint32[2],
        obj.uint32[3]
    );
}

template <>
inline auto to_tuple<VkClearValue>(const VkClearValue& obj)
{
    return std::tie(obj.color);
}

template <>
inline auto to_tuple<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj)
{
    return std::make_tuple(0);
}

template <>
inline auto to_tuple<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj)
{
    return std::make_tuple(0);
}

template <>
inline auto to_tuple<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj)
{
    return std::make_tuple(obj.uint64);
}

template <>
inline auto to_tuple<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj)
{
    // NOPE : Union has const char* member
    return std::make_tuple(0);
}

template <>
inline auto to_tuple<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj)
{
    return std::make_tuple(0);
}

template <>
inline auto to_tuple<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj)
{
    return std::make_tuple(0);
}

template <>
inline auto to_tuple<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj)
{
    return std::make_tuple(obj.u64);
}

template <>
inline auto to_tuple<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.rasterizationSamples,
        obj.sampleShadingEnable,
        obj.minSampleShading,
        Span(obj.pSampleMask, obj.rasterizationSamples / 32),
        obj.alphaToCoverageEnable,
        obj.alphaToOneEnable
    );
}

template <>
inline auto to_tuple<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.codeSize,
        Span(obj.pCode, obj.codeSize / sizeof(uint32_t))
    );
}

template <>
inline auto to_tuple<VkSpecializationInfo>(const VkSpecializationInfo& obj)
{
    return std::make_tuple(0);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj)
{
    return std::make_tuple(
        obj.matrix[0][0], obj.matrix[0][1], obj.matrix[0][2], obj.matrix[0][3],
        obj.matrix[1][0], obj.matrix[1][1], obj.matrix[1][2], obj.matrix[1][3],
        obj.matrix[2][0], obj.matrix[2][1], obj.matrix[2][2], obj.matrix[2][3]
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj)
{
    return std::make_tuple(0);
}

template <>
inline auto to_tuple<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj)
{
    return std::make_tuple(0);
}

} // namespace detail
} // namespace vk
} // namespace dst
