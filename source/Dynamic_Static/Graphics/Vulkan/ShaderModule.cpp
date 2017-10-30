
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
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.Compiler.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.Reflector.hpp"

#include <utility>

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
        auto info = CreateInfo;
        if (source == Source::File) {
            std::string extension = dst::to_lower(dst::Path::extension(compile));
            if (extension == ".spv") {
                auto spirv = dst::File::read_bytes(compile);
                info.codeSize = spirv.size() * sizeof(spirv[0]);
                info.pCode = reinterpret_cast<uint32_t*>(spirv.data());
                validate(vkCreateShaderModule(DeviceChild::device(), &info, nullptr, &mHandle));
                gsl::span<const uint32_t> span(info.pCode, info.codeSize / sizeof(uint32_t));
                mDescriptorSetLayoutBindings = std::move(Reflector::get_descriptor_set_layout_bindings(span));
            } else {
                auto spirv = Compiler::compile_from_file(compile);
                info.codeSize = spirv.size();
                info.pCode = spirv.data();
                validate(vkCreateShaderModule(DeviceChild::device(), &info, nullptr, &mHandle));
                gsl::span<const uint32_t> span(info.pCode, info.codeSize / sizeof(uint32_t));
                mDescriptorSetLayoutBindings = std::move(Reflector::get_descriptor_set_layout_bindings(span));
            }
        } else {
            auto spirv = Compiler::compile_from_source(mStage, compile);
            info.codeSize = spirv.size() * sizeof(spirv[0]);
            info.pCode = reinterpret_cast<uint32_t*>(spirv.data());
            validate(vkCreateShaderModule(DeviceChild::device(), &info, nullptr, &mHandle));
            gsl::span<const uint32_t> span(info.pCode, info.codeSize / sizeof(uint32_t));
            mDescriptorSetLayoutBindings = std::move(Reflector::get_descriptor_set_layout_bindings(span));
        }

        for (auto& binding : mDescriptorSetLayoutBindings) {
            binding.stageFlags = stage;
        }

        name("ShaderModule");
    }

    ShaderModule::~ShaderModule()
    {
        if (mHandle) {
            vkDestroyShaderModule(device(), mHandle, nullptr);
        }
    }

    VkPipelineShaderStageCreateInfo ShaderModule::pipeline_stage_create_info() const
    {
        auto info = Pipeline::ShaderStageCreateInfo;
        info.stage = mStage;
        info.module = mHandle;
        return info;
    }

    VkDescriptorSetLayoutCreateInfo ShaderModule::descriptor_set_layout_create_info() const
    {
        auto info = Descriptor::Set::Layout::CreateInfo;
        info.bindingCount = static_cast<uint32_t>(mDescriptorSetLayoutBindings.size());
        info.pBindings = mDescriptorSetLayoutBindings.data();
        return info;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
