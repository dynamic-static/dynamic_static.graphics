
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Primitives/Quad.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    std::pair<
        std::vector<VertexPositionTexCoord>,
        std::vector<uint16_t>
    >
    create_quad_primitive(const glm::vec2& dimensions)
    {
        std::vector<VertexPositionTexCoord> vertices;

        std::vector<uint16_t> indices;

        return std::make_pair(std::move(vertices), std::move(indices));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
