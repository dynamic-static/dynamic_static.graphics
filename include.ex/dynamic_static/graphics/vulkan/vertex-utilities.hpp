
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/math.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <array>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
template <typename VertexType>
inline VkVertexInputBindingDescription get_vertex_input_binding_description(uint32_t binding = 0)
{
    VkVertexInputBindingDescription vertexInputBindingDescription { };
    vertexInputBindingDescription.binding = binding;
    vertexInputBindingDescription.stride = sizeof(VertexType);
    vertexInputBindingDescription.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
    return vertexInputBindingDescription;
}

/**
TODO : Documentation
*/
template <typename ...VertexAttributeTypes>
inline std::array<VkVertexInputAttributeDescription, sizeof...(VertexAttributeTypes)> get_vertex_input_attribute_descriptions(uint32_t binding = 0)
{
    size_t offset = 0;
    std::array<size_t, sizeof...(VertexAttributeTypes)> sizes { sizeof(VertexAttributeTypes)... };
    std::array<VkVertexInputAttributeDescription, sizeof...(VertexAttributeTypes)> vertexInputAttributeDescriptions { };
    for (size_t i = 0; i < descriptions.size(); ++i) {
        vertexInputAttributeDescriptions[i].binding = binding;
        vertexInputAttributeDescriptions[i].location = static_cast<uint32_t>(i);
        vertexInputAttributeDescriptions[i].offset = static_cast<uint32_t>(offset);
        // TODO : Loop over types and set formats appropriately
        // TODO : Provide template so that custom types can supply a format
        switch (sizes[i]) {
            case sizeof(float): vertexInputAttributeDescriptions[i].format = VK_FORMAT_R32_SFLOAT; break;
            case sizeof(glm::vec2): vertexInputAttributeDescriptions[i].format = VK_FORMAT_R32G32_SFLOAT; break;
            case sizeof(glm::vec3): vertexInputAttributeDescriptions[i].format = VK_FORMAT_R32G32B32_SFLOAT; break;
            case sizeof(glm::vec4): vertexInputAttributeDescriptions[i].format = VK_FORMAT_R32G32B32A32_SFLOAT; break;
        }
        offset += sizes[i];
    }
    return vertexInputAttributeDescriptions;
}

} // namespace vk
} // namespace dst
