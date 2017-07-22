
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

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Shader.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    class Shader::Compiler final
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
         * @param [in] tag    The tag to use for error reporting (optional = <stage>)
         * @return The compiled SPIR-V bytecode
         */
        static std::vector<uint32_t> compile_from_source(
            VkShaderStageFlagBits stage,
            const std::string& source,
            const std::string& tag = std::string()
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
