
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

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <string>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Shader Module.
     */
    class ShaderModule final
        : public Object<VkShaderModule>
    {
        friend class Device;

    public:
        class Compiler;

        /**
         * TODO : Documentation.
         */
        enum class Source
        {
            File,
            Code,
        };

        /**
         * Configuration paramaters for ShaderModule construction.
         */
        struct Info final
            : VkShaderModuleCreateInfo
        {
            /**
             * Constructs an instance of ShaderModule::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                codeSize = 0;
                pCode = nullptr;
            }
        };

    private:
        std::shared_ptr<Device> mDevice;

    private:
        ShaderModule(
            const std::shared_ptr<Device>& device,
            Source source,
            VkShaderStageFlagBits stage,
            const std::string& compile
        );

    public:
        /**
         * Destroys this instance of ShaderModule.
         */
        ~ShaderModule();

    public:
        /**
         * Gets this ShaderModule's Device.
         * @return This ShaderModule's Device
         */
        Device& device();

        /**
         * Gets this ShaderModule's Device.
         * @return This ShaderModule's Device
         */
        const Device& device() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
