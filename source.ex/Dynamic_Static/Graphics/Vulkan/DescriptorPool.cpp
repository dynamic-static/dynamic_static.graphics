
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

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    DescriptorPool::DescriptorPool(
        const std::shared_ptr<Device>& device,
        DescriptorPool::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("DescriptorPool");
        dst_vk(vkCreateDescriptorPool(get_device(), &createInfo, nullptr, &mHandle));
    }

    DescriptorPool::~DescriptorPool()
    {
        if (mHandle) {
            vkDestroyDescriptorPool(get_device(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
