
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {
    ShaderModule::ShaderModule(
        const std::shared_ptr<Device>& device,
        VkShaderStageFlagBits stage,
        const std::string& source
    )
        : ShaderModule(device, stage, 0, source)
    {
    }

    ShaderModule::ShaderModule(
        const std::shared_ptr<Device>& device,
        VkShaderStageFlagBits shaderStageFlag,
        int lineOffset,
        const std::string& source
    )
        : DeviceChild(device)
    {
        set_name("ShaderModule");
        ShaderModule::CreateInfo createInfo { };
        dst_vk(vkCreateShaderModule(get_device(), &createInfo, nullptr, &mHandle));
    }

    ShaderModule::ShaderModule(
        const std::shared_ptr<Device>& device,
        ShaderModule::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("ShaderModule");
        dst_vk(vkCreateShaderModule(get_device(), &createInfo, nullptr, &mHandle));
    }

    ShaderModule::~ShaderModule()
    {
        if (mHandle) {
            vkDestroyShaderModule(get_device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
