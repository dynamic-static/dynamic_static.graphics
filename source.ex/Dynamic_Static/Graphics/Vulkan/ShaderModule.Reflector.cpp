
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

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    static VkDescriptorSetLayoutBinding process_shader_resource(
        const std::string& typeName,
        const spirv_cross::CompilerGLSL& glsl,
        const spirv_cross::Resource& resource
    )
    {
        VkDescriptorSetLayoutBinding binding { };
        binding.descriptorCount = 1;
        binding.binding = glsl.get_decoration(resource.id, spv::DecorationBinding);
        #if 1
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
        return binding;
    }

    static void process_uniform_buffers(
        const spirv_cross::CompilerGLSL& glsl,
        const spirv_cross::ShaderResources& resources,
        std::vector<VkDescriptorSetLayoutBinding>& bindings
    )
    {
        bindings.reserve(bindings.size() + resources.uniform_buffers.size());
        for (const auto& resource : resources.uniform_buffers) {
            auto binding = process_shader_resource("UniformBuffer", glsl, resource);
            binding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            bindings.push_back(binding);
        }
    }

    ShaderModule::Reflector::Reflector(dst::Span<const uint32_t> spirv)
    {
        // NOTE : More info on SPIRV-Cross reflection can be found at...
        //  https://www.khronos.org/assets/uploads/developers/library/2016-vulkan-devday-uk/4-Using-spir-v-with-spirv-cross.pdf
        spirv_cross::CompilerGLSL glsl(spirv.data(), spirv.size());
        spirv_cross::ShaderResources resources = glsl.get_shader_resources();
        process_uniform_buffers(glsl, resources, mDescriptorSetLayoutBindings);
        if (!resources.push_constant_buffers.empty()) {
            auto id = resources.push_constant_buffers[0].id;
            auto ranges = glsl.get_active_buffer_ranges(id);
            mPushConstantRanges.push_back({ });
            for (const auto& range : ranges) {
                mPushConstantRanges.back().size += (uint32_t)range.range;
            }
        }
    }

    dst::Span<const VkDescriptorSetLayoutBinding> ShaderModule::Reflector::get_descriptor_set_layout_bindings() const
    {
        return mDescriptorSetLayoutBindings;
    }

    dst::Span<const VkPushConstantRange> ShaderModule::Reflector::get_push_constant_ranges() const
    {
        return mPushConstantRanges;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
