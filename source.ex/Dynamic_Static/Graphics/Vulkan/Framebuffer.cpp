
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Framebuffer::Framebuffer(
        const std::shared_ptr<Device>& device,
        Framebuffer::CreateInfo createInfo
    )
        : DeviceChild(device)
        , mExtent { createInfo.width, createInfo.height }
    {
        set_name("Framebuffer");
        dst_vk(vkCreateFramebuffer(get_device(), &createInfo, nullptr, &mHandle));
    }

    Framebuffer::~Framebuffer()
    {
        if (mHandle) {
            vkDestroyFramebuffer(get_device(), mHandle, nullptr);
        }
    }

    const VkExtent2D& Framebuffer::get_extent() const
    {
        return mExtent;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
