
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
    struct VertexPositionColor final
    {
        dst::Vector3 position;
        dst::Color color;
    };

    /**
     * TODO : Documentation.
     */
    template <>
    inline auto attribute_descriptions<VertexPositionColor>(uint32_t binding)
    {
        return create_attribute_descriptions<dst::Vector3, dst::Color>(binding);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
