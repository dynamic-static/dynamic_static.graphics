
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    constexpr VkDescriptorSetLayoutCreateInfo Descriptor::Set::Layout::CreateInfo;

    Descriptor::Set::Layout::Layout(
        const std::shared_ptr<Device>& device,
        const dst::vlkn::ShaderModule& shaderModule
    )
        : Layout(device, shaderModule.descriptor_set_layout_create_info())
    {
    }

    Descriptor::Set::Layout::Layout(
        const std::shared_ptr<Device>& device,
        const VkDescriptorSetLayoutCreateInfo& info
    )
        : DeviceChild(device)
    {
        validate(vkCreateDescriptorSetLayout(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Descriptor::Set::Layout");
    }

    Descriptor::Set::Layout::~Layout()
    {
        if (mHandle) {
            vkDestroyDescriptorSetLayout(device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
