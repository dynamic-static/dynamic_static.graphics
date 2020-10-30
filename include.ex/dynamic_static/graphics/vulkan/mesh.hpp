
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/default.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

#include <filesystem>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
class Mesh final
{
public:
    /**
    TODO : Documentation
    */
    Mesh() = default;

    std::vector<Managed<VkBuffer>> mVertexBuffers; //!< TODO : Documentation
    Managed<VkBuffer> mIndexBuffer;                //!< TODO : Documentation
};

} // namespace vk
} // namespace dst
