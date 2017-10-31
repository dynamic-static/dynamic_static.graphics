
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <string>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Shader Module.
     */
    class ShaderModule final
        : public Object<VkShaderModule>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        class Compiler;
        class Reflector;

        /**
         * TODO : Documentation.
         */
        enum class Source
        {
            File,
            Code,
        };

        /**
         * Default ShaderModule creation parameters.
         */
        static constexpr VkShaderModuleCreateInfo CreateInfo {
            /* sType    */ VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,
            /* pNext    */ nullptr,
            /* flags    */ 0,
            /* codeSize */ 0,
            /* pCode    */ nullptr,
        };

    private:
        VkShaderStageFlagBits mStage { VK_SHADER_STAGE_ALL_GRAPHICS };
        std::vector<VkDescriptorSetLayoutBinding> mDescriptorSetLayoutBindings;
        std::vector<VkPushConstantRange> mPushConstantRanges;

    private:
        ShaderModule(
            const std::shared_ptr<Device>& device,
            VkShaderStageFlagBits stage,
            Source source,
            const std::string& compile
        );

    public:
        /**
         * Destroys this instance of ShaderModule.
         */
        ~ShaderModule();

    public:
        /**
         * Gets this ShaderModule's VkPipelineShaderStageCreateInfo.
         * @return This ShaderModule's VkPipelineShaderStageCreateInfo
         */
        VkPipelineShaderStageCreateInfo pipeline_stage_create_info() const;

        /**
         * Gets this ShaderModule's VkDescriptorSetLayoutCreateInfo.
         * @return This ShaderModule's VkDescriptorSetLayoutCreateInfo
         */
        VkDescriptorSetLayoutCreateInfo descriptor_set_layout_create_info() const;

        /**
         * Gets this ShaderModules's VkPushConstantRanges.
         * @return This ShaderModule's VkPushConstantRanges
         */
        const std::vector<VkPushConstantRange>& push_constant_ranges() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
