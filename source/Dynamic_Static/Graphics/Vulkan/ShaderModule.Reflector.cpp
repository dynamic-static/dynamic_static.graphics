
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.Reflector.hpp"
#include "Dynamic_Static/Core/NotImplementedError.hpp"

#include "spirv_glsl.hpp"

#include <utility>

#include <iostream>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    static VkDescriptorSetLayoutBinding process_shader_resource(const std::string& typeName, const spirv_cross::CompilerGLSL& glsl, const spirv_cross::Resource& resource);
    static std::vector<VkDescriptorSetLayoutBinding> process_uniform_buffers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_storage_buffers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_stage_inputs(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_stage_outputs(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_subpass_inputs(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_storage_images(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_sampled_images(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_atomic_counters(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_push_constant_buffers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_separate_images(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);
    static std::vector<VkDescriptorSetLayoutBinding> process_separate_samplers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources);

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    std::vector<VkDescriptorSetLayoutBinding> ShaderModule::Reflector::get_descriptor_set_layout_bindings(gsl::span<const uint32_t> spirv)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        spirv_cross::CompilerGLSL glsl(spirv.data(), spirv.size());
        spirv_cross::ShaderResources resources = glsl.get_shader_resources();

        auto appendBindings =
        [&](const std::vector<VkDescriptorSetLayoutBinding>& reflectedBindings)
        {
            bindings.reserve(bindings.size() + reflectedBindings.size());
            bindings.insert(std::end(bindings), std::begin(reflectedBindings), std::end(reflectedBindings));
        };

        appendBindings(process_uniform_buffers(glsl, resources));
        appendBindings(process_storage_buffers(glsl, resources));
        appendBindings(process_stage_inputs(glsl, resources));
        appendBindings(process_stage_outputs(glsl, resources));
        appendBindings(process_subpass_inputs(glsl, resources));
        appendBindings(process_storage_images(glsl, resources));
        appendBindings(process_sampled_images(glsl, resources));
        appendBindings(process_atomic_counters(glsl, resources));
        appendBindings(process_push_constant_buffers(glsl, resources));
        appendBindings(process_separate_images(glsl, resources));
        appendBindings(process_separate_samplers(glsl, resources));
        return std::move(bindings);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    static VkDescriptorSetLayoutBinding process_shader_resource(const std::string& typeName, const spirv_cross::CompilerGLSL& glsl, const spirv_cross::Resource& resource)
    {
        VkDescriptorSetLayoutBinding binding { };
        binding.descriptorCount = 1;
        binding.binding = glsl.get_decoration(resource.id, spv::DecorationBinding);
        std::cout
            << "{"
            << typeName
            << "[name:" << resource.name << "]"
            << "[id:" << resource.id << "]"
            << "[type_id:" << resource.type_id << "]"
            << "[base_type_id:" << resource.base_type_id << "]"
            << "}" << std::endl;
        return binding;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_uniform_buffers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.uniform_buffers) {
            auto binding = process_shader_resource("UniformBuffer", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_storage_buffers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.storage_buffers) {
            auto binding = process_shader_resource("StorageBuffer", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_stage_inputs(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.stage_inputs) {
            auto binding = process_shader_resource("StageInput", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_stage_outputs(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.stage_outputs) {
            auto binding = process_shader_resource("StageOutput", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_subpass_inputs(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.subpass_inputs) {
            auto binding = process_shader_resource("SubpassInput", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_storage_images(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.storage_images) {
            auto binding = process_shader_resource("StorageImage", glsl, resource);
            binding.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_sampled_images(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.sampled_images) {
            auto binding = process_shader_resource("SampledImage", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_atomic_counters(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.atomic_counters) {
            auto binding = process_shader_resource("AtomicCounter", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_push_constant_buffers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.push_constant_buffers) {
            auto binding = process_shader_resource("PushConstantBuffer", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_separate_images(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.separate_images) {
            auto binding = process_shader_resource("SeparateImage", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

    static std::vector<VkDescriptorSetLayoutBinding> process_separate_samplers(const spirv_cross::CompilerGLSL& glsl, const spirv_cross::ShaderResources& resources)
    {
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& resource : resources.separate_samplers) {
            auto binding = process_shader_resource("SeparateSampler", glsl, resource);
            bindings.push_back(binding);
        }

        return bindings;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
