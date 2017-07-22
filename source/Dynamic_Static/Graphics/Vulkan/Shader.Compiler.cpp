
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Shader.Compiler.hpp"
#include "Dynamic_Static/Core/StringUtilities.hpp"
#include "Dynamic_Static/Core/FileSystem/File.hpp"
#include "Dynamic_Static/Core/FileSystem/Path.hpp"

#include <map>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    std::vector<uint32_t> Shader::Compiler::compile_from_file(
        const std::string& filePath
    )
    {
        // static const std::map<std::string, VkShaderStageFlagBits> sExtensionToStage {
        //     { ".vert", VK_SHADER_STAGE_VERTEX_BIT },
        //     { ".tesc", VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT },
        //     { ".tese", VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT },
        //     { ".geom", VK_SHADER_STAGE_GEOMETRY_BIT },
        //     { ".frag", VK_SHADER_STAGE_FRAGMENT_BIT },
        //     { ".comp", VK_SHADER_STAGE_COMPUTE_BIT },
        // 
        //     { ".vs", VK_SHADER_STAGE_VERTEX_BIT },
        //     { ".tc", VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT },
        //     { ".te", VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT },
        //     { ".gs", VK_SHADER_STAGE_GEOMETRY_BIT },
        //     { ".fs", VK_SHADER_STAGE_FRAGMENT_BIT },
        //     { ".cs", VK_SHADER_STAGE_COMPUTE_BIT },
        // };
        // 
        // auto extension = dst::Path::extension(filePath);
        // auto itr = sExtensionToStage.find(dst::to_lower(extension));
        // return compile_from_source(
        //     itr != sExtensionToStage.end() ? itr->second : VK_SHADER_STAGE_ALL,
        //     dst::File::read_string(filePath),
        //     dst::Path::file_name(filePath)
        // );

        return std::vector<uint32_t>();
    }

    std::vector<uint32_t> Shader::Compiler::compile_from_source(
        VkShaderStageFlagBits stage,
        const std::string& source,
        const std::string& tag
    )
    {
        // std::string tagCopy;
        // shaderc_shader_kind shaderKind;
        // switch (stage) {
        //     case VK_SHADER_STAGE_VERTEX_BIT:
        //         shaderKind = shaderc_vertex_shader;
        //         tagCopy = "Stage Vertex";
        //         break;
        // 
        //     case VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT:
        //         shaderKind = shaderc_tess_control_shader;
        //         tagCopy = "Stage Tesselation Control";
        //         break;
        // 
        //     case VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT:
        //         shaderKind = shaderc_tess_evaluation_shader;
        //         tagCopy = "Stage Tesselation Evaluation";
        //         break;
        // 
        //     case VK_SHADER_STAGE_GEOMETRY_BIT:
        //         shaderKind = shaderc_geometry_shader;
        //         tagCopy = "Stage Geometry";
        //         break;
        // 
        //     case VK_SHADER_STAGE_FRAGMENT_BIT:
        //         shaderKind = shaderc_fragment_shader;
        //         tagCopy = "Stage Fragment";
        //         break;
        // 
        //     case VK_SHADER_STAGE_COMPUTE_BIT:
        //         shaderKind = shaderc_compute_shader;
        //         tagCopy = "Stage Compute";
        //         break;
        // 
        //     default:
        //         shaderKind = shaderc_glsl_infer_from_source;
        //         tagCopy = "Stage Unknown";
        // }
        // 
        // shaderc::CompileOptions options;
        // shaderc::Compiler compiler;
        // return compiler.CompileGlslToSpv(
        //     source.c_str(),
        //     source.length(),
        //     shaderKind,
        //     tag.empty() ? tagCopy.c_str() : tag.c_str(),
        //     "main",
        //     options
        // );

        return std::vector<uint32_t>();
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
