
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Vertex.hpp"

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Reperesents a vertex with a position, color, and texture coordinates.
    */
    struct VertexPositionColorTexture final
    {
        glm::vec3 position; //!< This vertex's position
        glm::vec4 color;    //!< This vertex's color
        glm::vec2 texoord;  //!< This vertex's texcoord
    };

    /*
    TODO : Documentation.
    */
    template <>
    inline auto get_attribute_descriptions<VertexPositionColorTexture>(uint32_t binding)
    {
        return create_attribute_descriptions<
            glm::vec3,
            glm::vec4,
            glm::vec2
        >(binding);
    }

} // namespace vk
} // namespace gfx
} // namespace dst
