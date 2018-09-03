
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
    Provides high level control over Vulkan shader module compilation.
    */
    class ShaderModule::Compiler final
    {
    private:
        VkShaderStageFlagBits mStage { VK_SHADER_STAGE_ALL_GRAPHICS };
        std::vector<uint32_t> mSpirv;

    public:
        /*!
        Constructs an instance of ShaderModule::Compiler.
        @param [in] stage This ShaderModule::Compiler's VkShaderStageFlagBits
        @param [in] source This ShaderModule::Compiler's glsl source
        */
        Compiler(
            VkShaderStageFlagBits stage,
            const std::string& source
        );

        /*!
        Constructs an instance of ShaderModule::Compiler.
        @param [in] stage This ShaderModule::Compiler's VkShaderStageFlagBits
        @param [in] lineOffset The line offset to use for error reporting
        @param [in] source This ShaderModule::Compiler's glsl source
        */
        Compiler(
            VkShaderStageFlagBits stage,
            int lineOffset,
            const std::string& source
        );

    public:
        /*
        Gets this ShaderModule::Compiler's VkShaderStage.
        @return This ShaderModule::Compiler's VkShaderStage
        */
        VkShaderStageFlagBits get_stage() const;

        /*
        Gets this ShaderModule::Compiler's SPIR-V code.
        @return This ShaderModule::Compiler's SPIR-V code
        */
        dst::Span<const uint32_t> get_spirv() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
