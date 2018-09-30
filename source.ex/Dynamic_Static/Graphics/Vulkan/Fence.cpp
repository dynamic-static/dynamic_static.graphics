
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Fence.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace dst {
namespace gfx {
namespace vk {

    Fence::Fence(
        const std::shared_ptr<Device>& device,
        Fence::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("Fence");
        mCreateFlags = createInfo.flags;
        dst_vk(vkCreateFence(get_device(), &createInfo, nullptr, &mHandle));
    }

    Fence::~Fence()
    {
        if (mHandle) {
            vkDestroyFence(get_device(), mHandle, nullptr);
        }
    }

    VkFenceCreateFlags Fence::get_create_flags() const
    {
        return mCreateFlags;
    }

    void Fence::wait(bool reset) const
    {
        dst_vk(vkWaitForFences(get_device(), 1, &mHandle, VK_TRUE, UINT64_MAX));
        if (reset) {
            dst_vk(vkResetFences(get_device(), 1, &mHandle));
        }
    }

} // namespace vk
} // namespace gfx
} // namespace dst
