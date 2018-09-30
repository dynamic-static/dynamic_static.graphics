
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DescriptorPool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace dst {
namespace gfx {
namespace vk {

    DescriptorPool::DescriptorPool(
        const std::shared_ptr<Device>& device,
        DescriptorPool::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("DescriptorPool");
        createInfo.flags |= VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
        mFlags = createInfo.flags;
        dst_vk(vkCreateDescriptorPool(get_device(), &createInfo, nullptr, &mHandle));
    }

    DescriptorPool::~DescriptorPool()
    {
        if (mHandle) {
            vkDestroyDescriptorPool(get_device(), mHandle, nullptr);
        }
    }

    VkDescriptorPoolCreateFlags DescriptorPool::get_create_flags() const
    {
        return mFlags;
    }

} // namespace vk
} // namespace gfx
} // namespace dst
