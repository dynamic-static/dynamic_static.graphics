
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Vertex.hpp"

#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    struct VertexPositionTexCoordColor final
    {
        glm::vec3 position;
        glm::vec2 texCoord;
        glm::vec4 color;
    };

    /**
     * TODO : Documentation.
     */
    template <>
    inline auto attribute_descriptions<VertexPositionTexCoordColor>(uint32_t binding)
    {
        return create_attribute_descriptions<glm::vec3, glm::vec2, glm::vec4>(binding);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
