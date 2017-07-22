
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

#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"
#include "Dynamic_Static/Core/StringUtilities.hpp"
#include "Dynamic_Static/Core/FileSystem/File.hpp"
#include "Dynamic_Static/Core/FileSystem/Path.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.Compiler.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    ShaderModule::ShaderModule(
        const std::shared_ptr<Device>& device,
        Source source,
        VkShaderStageFlagBits stage,
        const std::string& compile
    )
        : mStage { stage }
        , mDevice { device }
    {
        assert(mDevice);
        // TODO : DRY...
        if (source == Source::File) {
            std::string extension = dst::to_lower(dst::Path::extension(compile));
            if (extension == ".spv") {
                auto spirv = dst::File::read_bytes(compile);
                Info info;
                info.codeSize = spirv.size() * sizeof(spirv[0]);
                info.pCode = reinterpret_cast<uint32_t*>(spirv.data());
                Validate(vkCreateShaderModule(*mDevice, &info, nullptr, &mHandle));
            } else {
                auto spirv = Compiler::compile_from_file(compile);
                Info info;
                info.codeSize = spirv.size();
                info.pCode = spirv.data();
                Validate(vkCreateShaderModule(*mDevice, &info, nullptr, &mHandle));
            }
        } else {
            auto spirv = Compiler::compile_from_source(mStage, compile);
            Info info;
            info.codeSize = spirv.size() * sizeof(spirv[0]);
            info.pCode = reinterpret_cast<uint32_t*>(spirv.data());
            Validate(vkCreateShaderModule(*mDevice, &info, nullptr, &mHandle));
        }

        name("Dynamic_Static::Vulkan::ShaderModule");
    }

    ShaderModule::~ShaderModule()
    {
        if (mHandle) {
            vkDestroyShaderModule(device(), mHandle, nullptr);
        }
    }

    Device& ShaderModule::device()
    {
        assert(mDevice);
        return *mDevice;
    }

    const Device& ShaderModule::device() const
    {
        assert(mDevice);
        return *mDevice;
    }

    VkPipelineShaderStageCreateInfo ShaderModule::pipeline_stage_info() const
    {
        VkPipelineShaderStageCreateInfo info { };
        info.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
        info.pNext = nullptr;
        info.flags = 0;
        info.stage = mStage;
        info.module = mHandle;
        info.pName = "main";
        info.pSpecializationInfo = nullptr;
        return info;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
