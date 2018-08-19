
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

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

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

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
