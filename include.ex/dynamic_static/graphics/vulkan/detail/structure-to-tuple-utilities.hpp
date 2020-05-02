
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
#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline auto structure_to_tuple(const VulkanStructureType& obj)
{
    return std::forward_as_tuple(obj);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        Span(obj.versionData, 2 * VK_UUID_SIZE)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj)
{
    return std::forward_as_tuple(
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
inline auto structure_to_tuple<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj)
{
    return std::forward_as_tuple(
        obj.sType,
        PNextTupleElementWrapper { obj.pNext },
        obj.flags,
        obj.codeSize,
        Span(obj.pCode, obj.codeSize / sizeof(uint32_t))
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj)
{
    return std::forward_as_tuple(
        obj.matrix[0][0], obj.matrix[0][1], obj.matrix[0][2], obj.matrix[0][3],
        obj.matrix[1][0], obj.matrix[1][1], obj.matrix[1][2], obj.matrix[1][3],
        obj.matrix[2][0], obj.matrix[2][1], obj.matrix[2][2], obj.matrix[2][3]
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
