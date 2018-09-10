
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
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over Vulkan shader module reflection.
    */
    class ShaderModule::Reflector final
    {
    private:
        std::vector<std::vector<VkDescriptorSetLayoutBinding>> mDescriptorSetLayoutBindings;
        std::vector<VkPushConstantRange> mPushConstantRanges;

    public:
        /*!
        Constructs an instance of ShaderModule::Reflector.
        @param [in] spirv This ShaderModule::Reflector's SPIR-V code
        */
        Reflector(dst::Span<const uint32_t> spirv);

    public:
        /*
        Gets this ShaderModule::Reflector's VkDescriptorSetLayoutBindings.
        @return This ShaderModule::Reflector's VkDescriptorSetLayoutBindings
        */
        const std::vector<std::vector<VkDescriptorSetLayoutBinding>>& get_descriptor_set_layout_bindings() const;

        /*
        Gets this ShaderModule::Reflector's VkPushConstantRange.
        @return This ShaderModule::Reflector's VkPushConstantRange
        */
        dst::Span<const VkPushConstantRange> get_push_constant_ranges() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
