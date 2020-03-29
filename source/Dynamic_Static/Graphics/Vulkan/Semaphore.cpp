
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Semaphore.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Semaphore::Semaphore(const std::shared_ptr<Device>& device)
        : DeviceChild(device)
    {
        VkSemaphoreCreateInfo info { };
        info.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
        info.pNext = nullptr;
        info.flags = 0;
        validate(vkCreateSemaphore(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Semaphore");
    }

    Semaphore::~Semaphore()
    {
        device().wait_idle();
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
