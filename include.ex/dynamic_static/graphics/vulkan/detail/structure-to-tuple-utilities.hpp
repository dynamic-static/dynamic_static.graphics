
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
#include "dynamic_static/graphics/vulkan/detail/comparison-operators-utilities.hpp"
#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace vk {
namespace detail {

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline auto to_tuple(const VulkanStructureType& obj)
{
    return std::forward_as_tuple(obj);
}

} // namespace detail
} // namespace vk
} // namespace dst
