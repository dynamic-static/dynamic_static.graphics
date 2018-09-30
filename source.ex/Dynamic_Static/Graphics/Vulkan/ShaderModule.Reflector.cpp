
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.Reflector.hpp"

#include "spirv_glsl.hpp"

namespace dst {
namespace gfx {
namespace vk {

    static void process_binding(
        VkDescriptorType descriptorType,
        const spirv_cross::CompilerGLSL& glsl,
        const spirv_cross::Resource& resource,
        std::vector<std::vector<VkDescriptorSetLayoutBinding>>& descriptorSets
    )
    {
        VkDescriptorSetLayoutBinding binding { };
        binding.descriptorType = descriptorType;
        binding.descriptorCount = 1; // TODO : How is count reflected?
        binding.binding = glsl.get_decoration(resource.id, spv::DecorationBinding);
        auto setIndex = glsl.get_decoration(resource.id, spv::DecorationDescriptorSet);
        descriptorSets.resize(std::max<size_t>(descriptorSets.size(), setIndex + 1));
        descriptorSets[setIndex].push_back(binding);
        #if 0
        std::cout
            << "{ "
            << typeName
            << "[name:" << resource.name << "]"
            << "[id:" << resource.id << "]"
            << "[type_id:" << resource.type_id << "]"
            << "[base_type_id:" << resource.base_type_id << "]"
            << " }"
            << std::endl;
        #endif
    }

    ShaderModule::Reflector::Reflector(dst::Span<const uint32_t> spirv)
    {
        // NOTE : More info on SPIRV-Cross reflection can be found at...
        //  https://www.khronos.org/assets/uploads/developers/library/2016-vulkan-devday-uk/4-Using-spir-v-with-spirv-cross.pdf
        spirv_cross::CompilerGLSL glsl(spirv.data(), spirv.size());
        spirv_cross::ShaderResources resources = glsl.get_shader_resources();
        for (const auto& resource : resources.uniform_buffers) {
            process_binding(VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, glsl, resource, mDescriptorSetLayoutBindings);
        }
        for (const auto& resource : resources.sampled_images) {
            process_binding(VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, glsl, resource, mDescriptorSetLayoutBindings);
        }
        if (!resources.push_constant_buffers.empty()) {
            auto id = resources.push_constant_buffers[0].id;
            auto ranges = glsl.get_active_buffer_ranges(id);
            mPushConstantRanges.push_back({ });
            for (const auto& range : ranges) {
                mPushConstantRanges.back().size += (uint32_t)range.range;
            }
        }
    }

    const std::vector<std::vector<VkDescriptorSetLayoutBinding>>& ShaderModule::Reflector::get_descriptor_set_layout_bindings() const
    {
        return mDescriptorSetLayoutBindings;
    }

    dst::Span<const VkPushConstantRange> ShaderModule::Reflector::get_push_constant_ranges() const
    {
        return mPushConstantRanges;
    }

} // namespace vk
} // namespace gfx
} // namespace dst
