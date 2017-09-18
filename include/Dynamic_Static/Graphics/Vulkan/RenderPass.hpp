
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
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

    /**
     * Provides high level control over a Vulkan RenderPass.
     */
    class RenderPass final
        : public Object<VkRenderPass>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Default RenderPass creation parameters.
         */
        static constexpr VkRenderPassCreateInfo CreateInfo {
            /* sType           */ VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,
            /* pNext           */ nullptr,
            /* flags           */ 0,
            /* attachmentCount */ 0,
            /* pAttachments    */ nullptr,
            /* subpassCount    */ 0,
            /* pSubpasses      */ nullptr,
            /* dependencyCount */ 0,
            /* pDependencies   */ nullptr,
        };

        /**
         * Default RenderPass begin parameters.
         */
        static constexpr VkRenderPassBeginInfo BeginInfo {
            /* sType           */ VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,
            /* pNext           */ nullptr,
            /* renderPass      */ VK_NULL_HANDLE,
            /* framebuffer     */ VK_NULL_HANDLE,
            /* renderArea      */ { },
            /* clearValueCount */ 0,
            /* pClearValues    */ nullptr,
        };

    private:
        RenderPass(
            const std::shared_ptr<Device>& device,
            const VkRenderPassCreateInfo& info
        );

    public:
        /**
         * Destroys this instance of RenderPass.
         */
        ~RenderPass();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
