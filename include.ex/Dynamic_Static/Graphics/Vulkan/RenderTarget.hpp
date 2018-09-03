
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

#include <memory>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan render target.
    */
    class RenderTarget final
    {
    public:
        std::shared_ptr<RenderPass> mRenderPass;
        std::vector<std::shared_ptr<Image>> mAttachments;
        std::shared_ptr<Framebuffer> mFramebuffer;

    public:
        /*!
        Constructs an instance of RenderTarget.
        @param [in] renderPass This RenderTarget's RenderPass
        @param [in] createInfo This RenderTarget's VkExtent2D
        */
        RenderTarget(
            const std::shared_ptr<RenderPass>& renderPass,
            const VkExtent2D& extent
        );

    public:
        /*!
        Gets this RenderTarget's RenderPass.
        @return This RenderTarget's RenderPass
        */
        RenderPass& get_render_pass();

        /*!
        Gets this RenderTarget's RenderPass.
        @return This RenderTarget's RenderPass
        */
        const RenderPass& get_render_pass() const;

        /*!
        Gets this RenderTarget's Framebuffer.
        @return This RenderTarget's Framebuffer
        */
        Framebuffer& get_framebuffer();

        /*!
        Gets this RenderTarget's Framebuffer.
        @return This RenderTarget's Framebuffer
        */
        const Framebuffer& get_framebuffer() const;

        /*!
        Gets this RenderTarget's attachment Images.
        @return This RenderTarget's attachment Images
        */
        dst::Span<const std::shared_ptr<Image>> get_attachments() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
