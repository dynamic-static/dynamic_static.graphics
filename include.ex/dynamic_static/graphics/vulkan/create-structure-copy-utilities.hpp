
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

namespace dst {
namespace gfx {
namespace vk {

/**
TODO : Documentation
*/
template <typename VkStructureType>
VkStructureType create_structure_copy(const VkStructureType& obj)
{
    return obj;
}

namespace detail {

inline void create_dynamic_string_array_copy()
{

}

inline void create_dynamic_array_copy()
{

}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
