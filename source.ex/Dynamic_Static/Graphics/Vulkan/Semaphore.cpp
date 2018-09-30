
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Semaphore.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace dst {
namespace gfx {
namespace vk {

    Semaphore::Semaphore(
        const std::shared_ptr<Device>& device,
        Semaphore::CreateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("Semaphore");
        dst_vk(vkCreateSemaphore(get_device(), &createInfo, nullptr, &mHandle));
    }

    Semaphore::~Semaphore()
    {
        if (mHandle) {
            vkDestroySemaphore(get_device(), mHandle, nullptr);
        }
    }

} // namespace vk
} // namespace gfx
} // namespace dst
