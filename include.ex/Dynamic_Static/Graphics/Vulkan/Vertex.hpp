
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

#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    TODO : Documentation
    */
    template <typename VertexType>
    inline VkVertexInputBindingDescription get_binding_description(
        uint32_t binding = 0,
        VkVertexInputRate inputRate = VK_VERTEX_INPUT_RATE_VERTEX
    )
    {
        VkVertexInputBindingDescription bindingDescription { };
        bindingDescription.binding = binding;
        bindingDescription.stride = sizeof(VertexType);
        bindingDescription.inputRate = inputRate;
        return bindingDescription;
    }

    /*!
    TODO : Documentation
    */
    template <typename ...VertexAttributeTypes>
    inline std::array<VkVertexInputAttributeDescription, sizeof...(VertexAttributeTypes)>
        create_attribute_descriptions(uint32_t binding = 0)
    {
        constexpr auto attributeCount = sizeof...(VertexAttributeTypes);
        std::array<size_t, attributeCount> sizes { sizeof(VertexAttributeTypes)... };
        std::array<VkVertexInputAttributeDescription, attributeCount> descriptions { };
        uint32_t offset = 0;
        for (size_t i = 0; i < attributeCount; ++i) {
            descriptions[i].binding = binding;
            descriptions[i].location = (uint32_t)i;
            descriptions[i].offset = offset;
            switch (sizes[i]) {
                case sizeof(float) : descriptions[i].format = VK_FORMAT_R32_SFLOAT; break;
                case sizeof(glm::vec2) : descriptions[i].format = VK_FORMAT_R32G32_SFLOAT; break;
                case sizeof(glm::vec3) : descriptions[i].format = VK_FORMAT_R32G32B32_SFLOAT; break;
                case sizeof(glm::vec4) : descriptions[i].format = VK_FORMAT_R32G32B32A32_SFLOAT; break;
            }
            offset += (uint32_t)sizes[i];
        }
        return descriptions;
    }

    /*!
    TODO : Documentation
    */
    template <typename VertexType>
    inline auto get_attribute_descriptions(uint32_t binding = 0)
    {
        static_assert(false, "create_attribute_descriptions() must be specialized for the given VertexType");
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
