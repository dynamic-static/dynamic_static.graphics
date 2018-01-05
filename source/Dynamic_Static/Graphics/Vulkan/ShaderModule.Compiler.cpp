
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.Compiler.hpp"
#include "Dynamic_Static/Core/StringUtilities.hpp"
#include "Dynamic_Static/Core/FileSystem/File.hpp"
#include "Dynamic_Static/Core/FileSystem/Path.hpp"

#include "glslang/Public/ShaderLang.h"
#include "SPIRV/GlslangToSpv.h"

#include <map>
#include <stdexcept>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    extern const TBuiltInResource BuiltInResource;

    class GLSLangInitializer final
    {
    private:
        bool mInitialized { false };

    private:
        GLSLangInitializer()
        {
            mInitialized = glslang::InitializeProcess();
        }

        ~GLSLangInitializer()
        {
            glslang::FinalizeProcess();
        }

    public:
        static bool validate()
        {
            static GLSLangInitializer sGLSLangInitializer;
            return sGLSLangInitializer.mInitialized;
        }
    };

    std::vector<uint32_t> ShaderModule::Compiler::compile_from_file(
        const std::string& filePath
    )
    {
        static const std::map<std::string, VkShaderStageFlagBits> sExtensionToStage {
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

        auto extension = dst::Path::extension(filePath);
        auto itr = sExtensionToStage.find(dst::to_lower(extension));
        return compile_from_source(
            itr != sExtensionToStage.end() ? itr->second : VK_SHADER_STAGE_ALL,
            dst::File::read_string(filePath)
        );
    }

    std::vector<uint32_t> ShaderModule::Compiler::compile_from_source(
        VkShaderStageFlagBits stage,
        const std::string& source
    )
    {
        return compile_from_source(stage, 0, source);
    }

    std::vector<uint32_t> ShaderModule::Compiler::compile_from_source(
        VkShaderStageFlagBits stage,
        int lineOffset,
        const std::string& source
    )
    {
        if (!GLSLangInitializer::validate()) {
            throw std::runtime_error("TODO : what : GLSLangInitializer::validate()");
        }

        EShLanguage eshStage;
        switch (stage) {
            case VK_SHADER_STAGE_VERTEX_BIT:                  eshStage = EShLangVertex; break;
            case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:    eshStage = EShLangTessControl; break;
            case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT: eshStage = EShLangTessEvaluation; break;
            case VK_SHADER_STAGE_GEOMETRY_BIT:                eshStage = EShLangGeometry; break;
            case VK_SHADER_STAGE_FRAGMENT_BIT:                eshStage = EShLangFragment; break;
            case VK_SHADER_STAGE_COMPUTE_BIT:                 eshStage = EShLangCompute; break;
            default: throw std::runtime_error("TODO : what : switch (stage)");
        }

        glslang::TShader shader(eshStage);
        // TODO : This lineOffset is dumb...fix it...
        std::string modifiedSource;
        modifiedSource.reserve(lineOffset + source.size());
        modifiedSource.resize(lineOffset, '\n');
        modifiedSource.append(source);
        const char* sourceCStr[] { modifiedSource.c_str() };
        shader.setStrings(sourceCStr, 1);
        auto messages = static_cast<EShMessages>(EShMsgSpvRules | EShMsgVulkanRules);
        if (!shader.parse(&BuiltInResource, 100, false, messages)) {
            std::string infoLog = shader.getInfoLog();
            std::string debugLog = shader.getInfoDebugLog();
            throw std::runtime_error("PARSE (" + dst::to_string(stage) + ") : " + infoLog);
        }

        glslang::TProgram program;
        program.addShader(&shader);
        if (!program.link(messages)) {
            std::string infoLog = shader.getInfoLog();
            std::string debugLog = shader.getInfoDebugLog();
            throw std::runtime_error("LINK (" + dst::to_string(stage) + ") : " + infoLog);
        }

        std::vector<uint32_t> spirv;
        glslang::GlslangToSpv(*program.getIntermediate(eshStage), spirv);
        return spirv;
    }

    const TBuiltInResource BuiltInResource =
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

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
