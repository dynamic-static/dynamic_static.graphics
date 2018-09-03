
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

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Reperesents a vertex with a position and color.
    */
    struct VertexPositionColor final
    {
        glm::vec3 position; //!< This vertex's position
        glm::vec4 color;    //!< This vertex's color
    };

    /*
    TODO : Documentation.
    */
    template <>
    inline auto get_attribute_descriptions<VertexPositionColor>(uint32_t binding)
    {
        return create_attribute_descriptions<
            glm::vec3,
            glm::vec4
        >(binding);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
