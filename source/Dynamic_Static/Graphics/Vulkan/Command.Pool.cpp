
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Command::Pool::Pool(const std::shared_ptr<Device>& device, const VkCommandPoolCreateInfo& info)
        : DeviceChild { device }
    {
        validate(vkCreateCommandPool(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Command::Pool");
    }

    Command::Pool::~Pool()
    {
        if (mHandle) {
            vkDestroyCommandPool(device(), mHandle, nullptr);
        }
    }

    const std::vector<std::unique_ptr<Command::Buffer>>& Command::Pool::buffers() const
    {
        return mBuffers;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
