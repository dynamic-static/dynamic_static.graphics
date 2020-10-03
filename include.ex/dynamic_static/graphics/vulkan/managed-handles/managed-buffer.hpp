
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
#include "dynamic_static/graphics/vulkan/generated/managed-handles.hpp"

namespace dst {
namespace gfx {
namespace vk {

template <>
class Managed<VkBuffer>
    : public detail::BasicManagedBuffer
{
public:

};

} // namespace vk
} // namespace gfx
} // namespace dst