
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DescriptorSetLayout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace dst {
namespace gfx {
namespace vk {

    DescriptorSetLayout::DescriptorSetLayout(
        const std::shared_ptr<Device>& device,
        DescriptorSetLayout::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("DescriptorSetLayout");
        dst_vk(vkCreateDescriptorSetLayout(get_device(), &createInfo, nullptr, &mHandle));
    }

    DescriptorSetLayout::~DescriptorSetLayout()
    {
        if (mHandle) {
            vkDestroyDescriptorSetLayout(get_device(), mHandle, nullptr);
        }
    }

} // namespace vk
} // namespace gfx
} // namespace dst
