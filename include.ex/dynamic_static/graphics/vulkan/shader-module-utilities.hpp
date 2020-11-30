
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
*/
class DescriptorSetReflectionInfo final
{
public:
    uint32_t set { };                                                          //!< TODO : Documentation
    std::vector<VkDescriptorSetLayoutBinding> descriptorSetLayoutBindings { }; //!< TODO : Documentation
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
std::vector<DescriptorSetReflectionInfo> reflect_descriptor_set_layout_bindings(size_t codeSize, const uint8_t* pCode, VkShaderStageFlags stageFlags = VK_SHADER_STAGE_ALL);

/**
TODO : Documentation
*/
void add_descriptor_set_layout_binding(std::vector<DescriptorSetReflectionInfo>& descriptorSetReflectionInfos, uint32_t set, const VkDescriptorSetLayoutBinding& descriptorSetLayoutBinding);

/**
TODO : Documentation
*/
void add_descriptor_set_layout_binding(std::vector<VkDescriptorSetLayoutBinding>& descriptorSetLayoutBindings, const VkDescriptorSetLayoutBinding& descriptorSetLayoutBinding);

} // namespace vk
} // namespace dst
