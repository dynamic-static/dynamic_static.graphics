
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/CommandPool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    CommandPool::CommandPool(
        const std::shared_ptr<Device>& device,
        CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("CommandPool");
        dst_vk(vkCreateCommandPool(get_device(), &createInfo, nullptr, &mHandle));
    }

    CommandPool::~CommandPool()
    {
        if (mHandle) {
            vkDestroyCommandPool(get_device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
