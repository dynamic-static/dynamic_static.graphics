
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
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <string>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan shader module.
    */
    class ShaderModule final
        : public Object<VkShaderModule>
        , public SharedObject<ShaderModule>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for ShaderModule construction.
        */
        struct CreateInfo final
            : public VkShaderModuleCreateInfo
        {
            /*!
            Constructs an instance of ShaderModule::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                codeSize = 0;
                pCode = nullptr;
                static_assert(
                    sizeof(ShaderModule::CreateInfo) == sizeof(VkShaderModuleCreateInfo),
                    "sizeof(ShaderModule::CreateInfo) != sizeof(VkShaderModuleCreateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of ShaderModule.
        @param [in] device This ShaderModule's Device
        @param [in] stage This ShaderModule's VkShaderStageFlagBits
        @param [in] source This ShaderModule's glsl source
        */
        ShaderModule(
            const std::shared_ptr<Device>& device,
            VkShaderStageFlagBits stage,
            const std::string& source
        );

        /*!
        Constructs an instance of ShaderModule.
        @param [in] device This ShaderModule's Device
        @param [in] stage This ShaderModule's VkShaderStageFlagBits
        @param [in] lineOffset The line offset to use for error reporting
        @param [in] source This ShaderModule's glsl source
        */
        ShaderModule(
            const std::shared_ptr<Device>& device,
            VkShaderStageFlagBits shaderStageFlag,
            int lineOffset,
            const std::string& source
        );

        /*!
        Constructs an instance of ShaderModule.
        @param [in] device This ShaderModule's Device
        @param [in] createInfo This ShaderModule's ShaderModule::CreateInfo
        */
        ShaderModule(
            const std::shared_ptr<Device>& device,
            ShaderModule::CreateInfo createInfo
        );

    public:
        /*!
        Destroys this instance of ShaderModule.
        */
        ~ShaderModule();

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
