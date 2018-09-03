
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
        /*!
        Configuration parameters for RenderTarget construction.
        */
        struct CreateInfo final
        {
            VkExtent3D extent { 1, 1, 1 };
            VkFormat colorFormat { VK_FORMAT_UNDEFINED };
            VkFormat depthFormat { VK_FORMAT_UNDEFINED };
        };

    public:
        std::shared_ptr<RenderPass> renderPass;
        std::shared_ptr<Framebuffer> framebuffer;
        std::shared_ptr<Image> colorAttachment;
        std::shared_ptr<Image> depthAttachment;

    public:
        /*!
        Constructs an instance of RenderTarget.
        @param [in] renderPass This RenderTarget's RenderPass
        @param [in] createInfo This RenderTarget's RenderTarget::CreateInfo
        */
        RenderTarget(
            const std::shared_ptr<RenderPass>& renderPass,
            RenderTarget::CreateInfo createInfo
        );
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
