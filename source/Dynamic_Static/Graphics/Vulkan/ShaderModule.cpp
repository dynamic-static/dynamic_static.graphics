
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
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
        VkShaderStageFlagBits stage,
        Source source,
        const std::string& compile
    )
        : DeviceChild(device)
        , mStage { stage }
    {
        // TODO : DRY...
        if (source == Source::File) {
            std::string extension = dst::to_lower(dst::Path::extension(compile));
            if (extension == ".spv") {
                auto spirv = dst::File::read_bytes(compile);
                Info info;
                info.codeSize = spirv.size() * sizeof(spirv[0]);
                info.pCode = reinterpret_cast<uint32_t*>(spirv.data());
                validate(vkCreateShaderModule(DeviceChild::device(), &info, nullptr, &mHandle));
            } else {
                auto spirv = Compiler::compile_from_file(compile);
                Info info;
                info.codeSize = spirv.size();
                info.pCode = spirv.data();
                validate(vkCreateShaderModule(DeviceChild::device(), &info, nullptr, &mHandle));
            }
        } else {
            auto spirv = Compiler::compile_from_source(mStage, compile);
            Info info;
            info.codeSize = spirv.size() * sizeof(spirv[0]);
            info.pCode = reinterpret_cast<uint32_t*>(spirv.data());
            validate(vkCreateShaderModule(DeviceChild::device(), &info, nullptr, &mHandle));
        }

        name("ShaderModule");
    }

    ShaderModule::~ShaderModule()
    {
        if (mHandle) {
            vkDestroyShaderModule(device(), mHandle, nullptr);
        }
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
