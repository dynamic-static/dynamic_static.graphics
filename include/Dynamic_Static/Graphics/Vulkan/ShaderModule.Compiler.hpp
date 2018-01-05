
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    class ShaderModule::Compiler final
    {
    public:
        /**
         * Compiles a shader from a given file path.
         * @param [in] filePath The path to the shader source to compile
         * @return The compiled SPIR-V bytecode
         */
        static std::vector<uint32_t> compile_from_file(
            const std::string& filePath
        );

        /**
         * Compiles a shader from source.
         * @param [in] stage  The shader stage
         * @param [in] source The shader source to compile
         * @return The compiled SPIR-V bytecode
         */
        static std::vector<uint32_t> compile_from_source(
            VkShaderStageFlagBits stage,
            const std::string& source
        );

        /**
         * Compiles a shader from source.
         * @param [in] stage      The shader stage
         * @param [in] lineOffset The number of lines to offset the shader source
         * @param [in] source     The shader source to compile
         * @return The compiled SPIR-V bytecode
         */
        static std::vector<uint32_t> compile_from_source(
            VkShaderStageFlagBits stage,
            int lineOffset,
            const std::string& source
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
