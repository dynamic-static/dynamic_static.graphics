
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <filesystem>
#include <vector>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
class ShaderReflectionInfo final
{
public:
    std::vector<VkDescriptorSetLayoutBinding> descriptorSetLayoutBindings; //!< TODO : Documentation
    std::vector<VkPushConstantRange> pushConstantRanges;                   //!< TODO : Documentation
};

/**
TODO : Documentation
*/
std::vector<uint32_t> compile_shader_from_file(const std::filesystem::path& filePath);

/**
TODO : Documentation
*/
std::vector<uint32_t> compile_shader_from_source(VkShaderStageFlagBits stage, const char* pSource);

/**
TODO : Documentation
*/
std::vector<uint32_t> compile_shader_from_source(VkShaderStageFlagBits stage, int lineOffset, const char* pSource);

/**
TODO : Documentation
*/
ShaderReflectionInfo reflect_shader(size_t codeSize, const uint32_t* pCode);

} // namespace vk
} // namespace dst
