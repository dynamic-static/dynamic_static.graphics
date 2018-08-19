
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan framebuffer.
    */
    class Framebuffer final
        : public Object<VkFramebuffer>
        , public SharedObject<Framebuffer>
        , public DeviceChild
    {
    public:
        /*
        * Configuration parameters for Framebuffer construction.
        */
        struct CreateInfo final
            : public VkFramebufferCreateInfo
        {
            /*
            * Constructs an instance of Framebuffer::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                renderPass = VK_NULL_HANDLE;
                attachmentCount = 0;
                pAttachments = nullptr;
                width = 1;
                height = 1;
                layers = 1;
                static_assert(
                    sizeof(Framebuffer::CreateInfo) == sizeof(VkFramebufferCreateInfo),
                    "sizeof(Framebuffer::CreateInfo) != sizeof(VkFramebufferCreateInfo)"
                );
            }
        };

    private:
        /*
        * Constructs an instance of Framebuffer.
        * @param [in] device This Framebuffer's Device
        * @param [in] createInfo This Framebuffer's Framebuffer::CreateInfo
        */
        Framebuffer(
            const std::shared_ptr<Device>& device,
            Framebuffer::CreateInfo createInfo
        );

    public:
        /*
        * Destroys this instance of Framebuffer.
        */
        ~Framebuffer();

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
