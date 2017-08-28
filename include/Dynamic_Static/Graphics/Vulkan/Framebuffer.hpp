
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Framebuffer
     */
    class Framebuffer final
        : public Object<VkFramebuffer>
    {
        friend class Device;

    private:
        std::shared_ptr<Device> mDevice;

    public:
        /**
         * Default Framebuffer creation parameters.
         */
        static constexpr VkFramebufferCreateInfo CreateInfo {
            /* sType           */ VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,
            /* pNext           */ nullptr,
            /* flags           */ 0,
            /* renderPass      */ VK_NULL_HANDLE,
            /* attachmentCount */ 0,
            /* pAttachments    */ nullptr,
            /* width           */ 1,
            /* height          */ 1,
            /* layers          */ 1,
        };

    private:
        Framebuffer(
            const std::shared_ptr<Device>& device,
            const VkFramebufferCreateInfo& info
        );

    public:
        /**
         * Destroys this instance of Framebuffer.
         */
        ~Framebuffer();

    public:
        /**
         * Gets this Framebuffer's Device.
         * @return This Framebuffer's Device
         */
        Device& device();

        /**
         * Gets this Framebuffer's Device.
         * @return This Framebuffer's Device
         */
        const Device& device() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
