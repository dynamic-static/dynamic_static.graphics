
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    class RenderTarget final
    {
        // TODO : This thing needs alot of work, but it's doing the job for now.

    public:
        struct CreateInfo final
        {
            RenderPass* renderPass { nullptr };
            VkExtent3D extent { 1, 1, 1 };
            VkFormat format { VK_FORMAT_UNDEFINED };
            VkFormat depthFormat { VK_FORMAT_UNDEFINED };
            VkImageUsageFlags usage { VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT };
        };

    public:
        std::shared_ptr<Framebuffer> framebuffer;
        std::shared_ptr<Image> colorAttachment;
        std::shared_ptr<Memory> colorAttachmentMemory;
        std::shared_ptr<Image> depthAttachment;
        std::shared_ptr<Memory> depthAttachmentMemory;

    public:
        /**
         * TODO : Documentation.
         */
        RenderTarget(RenderPass& renderPass, uint32_t width, uint32_t height);

        /**
         * TODO : Documentation.
         */
        RenderTarget(RenderPass& renderPass, uint32_t width, uint32_t height, VkFormat format, VkFormat depthFormat = VK_FORMAT_UNDEFINED);

        /**
         * TODO : Documentation.
         */
        RenderTarget(const CreateInfo& info);

    public:
        /**
         * TODO : Documentation.
         */
        VkFormat format() const;

        /**
         * TODO : Documentation.
         */
        VkFormat depth_format() const;

        /**
         * TODO : Documentation.
         */
        const VkExtent3D& extent() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
