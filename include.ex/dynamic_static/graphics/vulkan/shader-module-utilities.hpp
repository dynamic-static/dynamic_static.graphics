
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/default.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

#include <filesystem>
#include <vector>

namespace dst {
namespace vk {

/**
TODO : Documentation
TODO : This structure desperately needs a refactor...
*/
class ShaderReflectionInfo final
{
public:
    Managed<VkPipelineShaderStageCreateInfo> pipelineShaderStageCreateInfo { get_default<VkPipelineShaderStageCreateInfo>() }; //!< TODO : Docuemntation
    std::vector<std::pair<uint32_t, std::vector<VkDescriptorSetLayoutBinding>>> descriptorSetLayoutBindings;                   //!< TODO : Documentation
    std::vector<VkPushConstantRange> pushConstantRanges;                                                                       //!< TODO : Documentation
};

/**
TODO : Documentation
*/
std::vector<uint32_t> compile_glsl_to_spirv(const std::filesystem::path& filePath);

/**
TODO : Documentation
*/
std::vector<uint32_t> compile_glsl_to_spirv(VkShaderStageFlagBits stage, const char* pSource);

/**
TODO : Documentation
*/
std::vector<uint32_t> compile_glsl_to_spirv(VkShaderStageFlagBits stage, int lineOffset, const char* pSource);

/**
TODO : Documentation
*/
ShaderReflectionInfo reflect_shader(const Managed<VkShaderModule>& shaderModule);

} // namespace vk
} // namespace dst
