
/*
==========================================
    Licensed under the MIT license
    Copyright (c) 2017 Dynamic_Static
        Patrick Purcell
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

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
        mBindings.resize(info.bindingCount);
        for (size_t i = 0; i < info.bindingCount; ++i) {
            mBindings[i] = info.pBindings[i];
        }

        name("Descriptor::Set::Layout");
    }

    Descriptor::Set::Layout::~Layout()
    {
        if (mHandle) {
            vkDestroyDescriptorSetLayout(device(), mHandle, nullptr);
        }
    }

    gsl::span<const VkDescriptorSetLayoutBinding> Descriptor::Set::Layout::get_bindings() const
    {
        return mBindings;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
