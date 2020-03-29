
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionTexCoord.hpp"

#include <utility>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Generalize primitive creation...
     */
    std::pair<
        std::vector<VertexPositionTexCoord>,
        std::vector<uint16_t>
    >
    create_quad_primitive(const glm::vec2& dimensions);

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
