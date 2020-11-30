
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/shader-module-utilities.hpp"

#include "glslang/Public/ShaderLang.h"
#include "glslang/SPIRV/GlslangToSpv.h"
#if 0
#include "SPIRV-Reflect/spirv_reflect.h"
#endif

#include "spirv_glsl.hpp"

#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <unordered_map>
#include <fstream>

namespace dst {
namespace vk {

class GlslangInitializer final
{
public:
    ~GlslangInitializer()
    {
        glslang::FinalizeProcess();
    }

    static bool validate()
    {
        static GlslangInitializer sGlslangInitializer;
        return sGlslangInitializer.mInitialized;
    }

private:
    GlslangInitializer()
    {
        mInitialized = glslang::InitializeProcess();
    }

    bool mInitialized { false };
};

static const TBuiltInResource& get_built_in_resource();

std::vector<uint32_t> compile_glsl_to_spirv(const std::filesystem::path& filePath)
{
    static const std::unordered_map<std::string, VkShaderStageFlagBits> ExtensionToStage {
        { ".vert", VK_SHADER_STAGE_VERTEX_BIT },
        { ".tesc", VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT },
        { ".tese", VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT },
        { ".geom", VK_SHADER_STAGE_GEOMETRY_BIT },
        { ".frag", VK_SHADER_STAGE_FRAGMENT_BIT },
        { ".comp", VK_SHADER_STAGE_COMPUTE_BIT },

        { ".vs", VK_SHADER_STAGE_VERTEX_BIT },
        { ".tc", VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT },
        { ".te", VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT },
        { ".gs", VK_SHADER_STAGE_GEOMETRY_BIT },
        { ".fs", VK_SHADER_STAGE_FRAGMENT_BIT },
        { ".cs", VK_SHADER_STAGE_COMPUTE_BIT },
    };
    assert(filePath.has_extension() && "TODO : Better file and error handling");
    auto itr = ExtensionToStage.find(filePath.extension().string());
    assert(itr != ExtensionToStage.end() && "TODO : Better file and error handling");
    std::ifstream file(filePath);
    assert(file.is_open() && "TODO : Better file and error handling");
    std::string source(std::istreambuf_iterator<char>(file), { });
    assert(source.empty() && "TODO : Better file and error handling");
    return compile_glsl_to_spirv(itr->second, source.c_str());
}

std::vector<uint32_t> compile_glsl_to_spirv(VkShaderStageFlagBits stage, const char* pSource)
{
    return compile_glsl_to_spirv(stage, 0, pSource);
}

std::vector<uint32_t> compile_glsl_to_spirv(VkShaderStageFlagBits stage, int lineOffset, const char* pSource)
{
    assert(pSource && "TODO : Better file and error handling");
    auto glslangInitialized = GlslangInitializer::validate();
    (void)glslangInitialized;
    assert(glslangInitialized && "TODO : Better file and error handling");
    EShLanguage eshStage;
    switch (stage) {
    case VK_SHADER_STAGE_VERTEX_BIT: eshStage = EShLangVertex; break;
    case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT: eshStage = EShLangTessControl; break;
    case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT: eshStage = EShLangTessEvaluation; break;
    case VK_SHADER_STAGE_GEOMETRY_BIT: eshStage = EShLangGeometry; break;
    case VK_SHADER_STAGE_FRAGMENT_BIT: eshStage = EShLangFragment; break;
    case VK_SHADER_STAGE_COMPUTE_BIT: eshStage = EShLangCompute; break;
    default: assert(false && "TODO : Better file and error handling");
    }
    glslang::TShader shader(eshStage);
    std::string source;
    if (lineOffset) {
        source = std::string(lineOffset, '\n');
        source += pSource;
        pSource = source.c_str();
    }
    shader.setStrings(&pSource, 1);
    auto messages = (EShMessages)(EShMsgSpvRules | EShMsgVulkanRules);
    if (!shader.parse(&get_built_in_resource(), 100, false, messages)) {
        std::cerr << shader.getInfoLog() << '\n';
        std::cerr << shader.getInfoDebugLog() << '\n';
        assert(false && "TODO : Better file and error handling");
    }
    glslang::TProgram program;
    program.addShader(&shader);
    if (!program.link(messages)) {
        std::cerr << shader.getInfoLog() << '\n';
        std::cerr << shader.getInfoDebugLog() << '\n';
        assert(false && "TODO : Better file and error handling");
    }
    std::vector<uint32_t> spirv;
    glslang::GlslangToSpv(*program.getIntermediate(eshStage), spirv);
    return spirv;
}

std::vector<DescriptorSetReflectionInfo> reflect_descriptor_set_layout_bindings(size_t codeSize, const uint8_t* pCode, VkShaderStageFlags stageFlags)
{
    std::vector<DescriptorSetReflectionInfo> descriptorSetReflectionInfos;
    if (codeSize && !(codeSize % 4) && pCode) {
        spirv_cross::CompilerGLSL glsl((const uint32_t*)pCode, codeSize / 4);
        // TODO : Optionally break up active resources based on entry point...
        const auto& resources = glsl.get_shader_resources();
        for (const auto& uniformBuffer : resources.uniform_buffers) {
            VkDescriptorSetLayoutBinding descriptorSetLayoutBinding = get_default<VkDescriptorSetLayoutBinding>();
            descriptorSetLayoutBinding.binding = glsl.get_decoration(uniformBuffer.id, spv::DecorationBinding);
            descriptorSetLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
            descriptorSetLayoutBinding.descriptorCount = 1; // TODO : spv::DecorationArrayStride
            descriptorSetLayoutBinding.stageFlags = stageFlags;
            auto set = glsl.get_decoration(uniformBuffer.id, spv::DecorationDescriptorSet);
            add_descriptor_set_layout_binding(descriptorSetReflectionInfos, set, descriptorSetLayoutBinding);
        }
        for (const auto& sampledImage : resources.sampled_images) {
            VkDescriptorSetLayoutBinding descriptorSetLayoutBinding = get_default<VkDescriptorSetLayoutBinding>();
            descriptorSetLayoutBinding.binding = glsl.get_decoration(sampledImage.id, spv::DecorationBinding);
            descriptorSetLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorSetLayoutBinding.descriptorCount = 1; // TODO : spv::DecorationArrayStride
            descriptorSetLayoutBinding.stageFlags = stageFlags;
            auto set = glsl.get_decoration(sampledImage.id, spv::DecorationDescriptorSet);
            add_descriptor_set_layout_binding(descriptorSetReflectionInfos, set, descriptorSetLayoutBinding);
        }
    } else {
        assert(false && "TODO : Error handling");
    }
    return descriptorSetReflectionInfos;
}

void add_descriptor_set_layout_binding(std::vector<DescriptorSetReflectionInfo>& descriptorSetReflectionInfos, uint32_t set, const VkDescriptorSetLayoutBinding& descriptorSetLayoutBinding)
{
    struct Comparer
    {
        bool operator()(const DescriptorSetReflectionInfo& lhs, uint32_t rhs)
        {
            return lhs.set < rhs;
        }
        bool operator()(uint32_t lhs, const DescriptorSetReflectionInfo& rhs)
        {
            return lhs < rhs.set;
        }
    };
    const auto& begin = descriptorSetReflectionInfos.begin();
    const auto& end = descriptorSetReflectionInfos.end();
    auto itr = std::lower_bound(begin, end, set, Comparer { });
    if (itr == end) {
        itr = descriptorSetReflectionInfos.insert(end, {{ }});
    }
    add_descriptor_set_layout_binding(itr->descriptorSetLayoutBindings, descriptorSetLayoutBinding);
}

void add_descriptor_set_layout_binding(std::vector<VkDescriptorSetLayoutBinding>& descriptorSetLayoutBindings, const VkDescriptorSetLayoutBinding& descriptorSetLayoutBinding)
{
    struct Comparer
    {
        bool operator()(const VkDescriptorSetLayoutBinding& lhs, uint32_t rhs)
        {
            return lhs.binding < rhs;
        }
        bool operator()(uint32_t lhs, const VkDescriptorSetLayoutBinding& rhs)
        {
            return lhs < rhs.binding;
        }
    };
    const auto& begin = descriptorSetLayoutBindings.begin();
    const auto& end = descriptorSetLayoutBindings.end();
    auto itr = std::lower_bound(begin, end, descriptorSetLayoutBinding.binding, Comparer { });
    descriptorSetLayoutBindings.insert(itr, descriptorSetLayoutBinding);
}

static const TBuiltInResource& get_built_in_resource()
{
    static const TBuiltInResource BuiltInResource =
    []()
    {
        TBuiltInResource builtInResource;
        builtInResource.maxLights = 32;
        builtInResource.maxClipPlanes = 6;
        builtInResource.maxTextureUnits = 32;
        builtInResource.maxTextureCoords = 32;
        builtInResource.maxVertexAttribs = 64;
        builtInResource.maxVertexUniformComponents = 4096;
        builtInResource.maxVaryingFloats = 64;
        builtInResource.maxVertexTextureImageUnits = 32;
        builtInResource.maxCombinedTextureImageUnits = 80;
        builtInResource.maxTextureImageUnits = 32;
        builtInResource.maxFragmentUniformComponents = 4096;
        builtInResource.maxDrawBuffers = 32;
        builtInResource.maxVertexUniformVectors = 128;
        builtInResource.maxVaryingVectors = 8;
        builtInResource.maxFragmentUniformVectors = 16;
        builtInResource.maxVertexOutputVectors = 16;
        builtInResource.maxFragmentInputVectors = 15;
        builtInResource.minProgramTexelOffset = -8;
        builtInResource.maxProgramTexelOffset = 7;
        builtInResource.maxClipDistances = 8;
        builtInResource.maxComputeWorkGroupCountX = 65535;
        builtInResource.maxComputeWorkGroupCountY = 65535;
        builtInResource.maxComputeWorkGroupCountZ = 65535;
        builtInResource.maxComputeWorkGroupSizeX = 1024;
        builtInResource.maxComputeWorkGroupSizeY = 1024;
        builtInResource.maxComputeWorkGroupSizeZ = 64;
        builtInResource.maxComputeUniformComponents = 1024;
        builtInResource.maxComputeTextureImageUnits = 16;
        builtInResource.maxComputeImageUniforms = 8;
        builtInResource.maxComputeAtomicCounters = 8;
        builtInResource.maxComputeAtomicCounterBuffers = 1;
        builtInResource.maxVaryingComponents = 60;
        builtInResource.maxVertexOutputComponents = 64;
        builtInResource.maxGeometryInputComponents = 64;
        builtInResource.maxGeometryOutputComponents = 128;
        builtInResource.maxFragmentInputComponents = 128;
        builtInResource.maxImageUnits = 8;
        builtInResource.maxCombinedImageUnitsAndFragmentOutputs = 8;
        builtInResource.maxCombinedShaderOutputResources = 8;
        builtInResource.maxImageSamples = 0;
        builtInResource.maxVertexImageUniforms = 0;
        builtInResource.maxTessControlImageUniforms = 0;
        builtInResource.maxTessEvaluationImageUniforms = 0;
        builtInResource.maxGeometryImageUniforms = 0;
        builtInResource.maxFragmentImageUniforms = 8;
        builtInResource.maxCombinedImageUniforms = 8;
        builtInResource.maxGeometryTextureImageUnits = 16;
        builtInResource.maxGeometryOutputVertices = 256;
        builtInResource.maxGeometryTotalOutputComponents = 1024;
        builtInResource.maxGeometryUniformComponents = 1024;
        builtInResource.maxGeometryVaryingComponents = 64;
        builtInResource.maxTessControlInputComponents = 128;
        builtInResource.maxTessControlOutputComponents = 128;
        builtInResource.maxTessControlTextureImageUnits = 16;
        builtInResource.maxTessControlUniformComponents = 1024;
        builtInResource.maxTessControlTotalOutputComponents = 4096;
        builtInResource.maxTessEvaluationInputComponents = 128;
        builtInResource.maxTessEvaluationOutputComponents = 128;
        builtInResource.maxTessEvaluationTextureImageUnits = 16;
        builtInResource.maxTessEvaluationUniformComponents = 1024;
        builtInResource.maxTessPatchComponents = 120;
        builtInResource.maxPatchVertices = 32;
        builtInResource.maxTessGenLevel = 64;
        builtInResource.maxViewports = 16;
        builtInResource.maxVertexAtomicCounters = 0;
        builtInResource.maxTessControlAtomicCounters = 0;
        builtInResource.maxTessEvaluationAtomicCounters = 0;
        builtInResource.maxGeometryAtomicCounters = 0;
        builtInResource.maxFragmentAtomicCounters = 8;
        builtInResource.maxCombinedAtomicCounters = 8;
        builtInResource.maxAtomicCounterBindings = 1;
        builtInResource.maxVertexAtomicCounterBuffers = 0;
        builtInResource.maxTessControlAtomicCounterBuffers = 0;
        builtInResource.maxTessEvaluationAtomicCounterBuffers = 0;
        builtInResource.maxGeometryAtomicCounterBuffers = 0;
        builtInResource.maxFragmentAtomicCounterBuffers = 1;
        builtInResource.maxCombinedAtomicCounterBuffers = 1;
        builtInResource.maxAtomicCounterBufferSize = 16384;
        builtInResource.maxTransformFeedbackBuffers = 4;
        builtInResource.maxTransformFeedbackInterleavedComponents = 64;
        builtInResource.maxCullDistances = 8;
        builtInResource.maxCombinedClipAndCullDistances = 8;
        builtInResource.maxSamples = 4;
        builtInResource.limits.nonInductiveForLoops = 1;
        builtInResource.limits.whileLoops = 1;
        builtInResource.limits.doWhileLoops = 1;
        builtInResource.limits.generalUniformIndexing = 1;
        builtInResource.limits.generalAttributeMatrixVectorIndexing = 1;
        builtInResource.limits.generalVaryingIndexing = 1;
        builtInResource.limits.generalSamplerIndexing = 1;
        builtInResource.limits.generalVariableIndexing = 1;
        builtInResource.limits.generalConstantMatrixVectorIndexing = 1;
        return builtInResource;
    }();
    return BuiltInResource;
}

} // namespace vk
} // namespace dst
