
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
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
        const VkFramebufferCreateInfo& info
    )
        : mDevice { device }
    {
        assert(mDevice);
        vkCreateFramebuffer(*mDevice, &info, nullptr, &mHandle);
        name("Framebuffer");
    }

    Framebuffer::~Framebuffer()
    {
        if (mHandle) {
            vkDestroyFramebuffer(device(), mHandle, nullptr);
        }
    }

    Device& Framebuffer::device()
    {
        assert(mDevice);
        return *mDevice;
    }

    const Device& Framebuffer::device() const
    {
        assert(mDevice);
        return *mDevice;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
