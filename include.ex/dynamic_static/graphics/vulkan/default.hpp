
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/generated/get-stype.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <type_traits>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
struct has_stype final
{
    template <typename T> static std::false_type test(...) { }
    template <typename T> static auto test(int)->decltype(T::sType) { }
    static constexpr bool value { std::is_same<std::true_type, decltype(test<VulkanStructureType>(0))>::value };
};

/**
TODO : Documentation
*/
template <typename VulkanStructuretype>
inline const VulkanStructuretype& get_default()
{
    static const VulkanStructuretype DefaultVulkanStructure =
    []()
    {
        VulkanStructuretype vulkanStructure { };
        if constexpr (has_stype<VulkanStructuretype>::value) {
            vulkanStructure.sType = get_stype<VulkanStructuretype>();
        }
        return vulkanStructure;
    }();
    return DefaultVulkanStructure;
}

template <> const VkPipelineInputAssemblyStateCreateInfo& get_default<VkPipelineInputAssemblyStateCreateInfo>();
template <> const VkViewport& get_default<VkViewport>();
template <> const VkPipelineViewportStateCreateInfo& get_default<VkPipelineViewportStateCreateInfo>();
template <> const VkPipelineRasterizationStateCreateInfo& get_default<VkPipelineRasterizationStateCreateInfo>();
template <> const VkPipelineMultisampleStateCreateInfo& get_default<VkPipelineMultisampleStateCreateInfo>();
template <> const VkPipelineColorBlendAttachmentState& get_default<VkPipelineColorBlendAttachmentState>();
template <> const VkPipelineColorBlendStateCreateInfo& get_default<VkPipelineColorBlendStateCreateInfo>();
template <> const VkPipelineDynamicStateCreateInfo& get_default<VkPipelineDynamicStateCreateInfo>();
template <> const VkGraphicsPipelineCreateInfo& get_default<VkGraphicsPipelineCreateInfo>();

} // namespace vk
} // namespace dst
