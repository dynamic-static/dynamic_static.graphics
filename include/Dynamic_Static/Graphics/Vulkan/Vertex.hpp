
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    template <typename VertexType>
    inline VkVertexInputBindingDescription binding_description(uint32_t binding = 0)
    {
        VkVertexInputBindingDescription description;
        description.binding = binding;
        description.stride = sizeof(VertexType);
        description.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
        return description;
    }

    /**
     * TODO : Documentation.
     */
    template <typename ...VertexAttributeTypes>
    inline std::array<VkVertexInputAttributeDescription, sizeof...(VertexAttributeTypes)>
        create_attribute_descriptions(uint32_t binding = 0)
    {
        size_t offset = 0;
        std::array<size_t, sizeof...(VertexAttributeTypes)> sizes { sizeof(VertexAttributeTypes)... };
        std::array<VkVertexInputAttributeDescription, sizeof...(VertexAttributeTypes)> descriptions { };
        for (size_t i = 0; i < descriptions.size(); ++i) {
            descriptions[i].binding = binding;
            descriptions[i].location = static_cast<uint32_t>(i);
            descriptions[i].offset = static_cast<uint32_t>(offset);
            switch (sizes[i]) {
                case sizeof(float) : descriptions[i].format = VK_FORMAT_R32_SFLOAT; break;
                case sizeof(Vector2) : descriptions[i].format = VK_FORMAT_R32G32_SFLOAT; break;
                case sizeof(Vector3) : descriptions[i].format = VK_FORMAT_R32G32B32_SFLOAT; break;
                case sizeof(Vector4) : descriptions[i].format = VK_FORMAT_R32G32B32A32_SFLOAT; break;
            }

            offset += sizes[i];
        }

        return descriptions;
    }

    /**
     * TODO : Documentation.
     */
    template <typename VertexType>
    inline auto attribute_descriptions(uint32_t binding = 0)
    {
        static_assert("attribute_descriptions() must be specialized for the given vertex type.");
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
