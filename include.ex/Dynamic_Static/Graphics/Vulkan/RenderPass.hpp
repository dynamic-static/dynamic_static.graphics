
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
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan render pass.
    */
    class RenderPass final
        : public Object<VkRenderPass>
        , public SharedObject<RenderPass>
        , public DeviceChild
    {
    public:
        /*
        * Configuration parameters for RenderPass construction.
        */
        struct CreateInfo final
            : public VkRenderPassCreateInfo
        {
            /*
            * Constructs an instance of RenderPass::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                attachmentCount = 0;
                pAttachments = nullptr;
                subpassCount = 0;
                pSubpasses = nullptr;
                dependencyCount = 0;
                pDependencies = nullptr;
                static_assert(
                    sizeof(RenderPass::CreateInfo) == sizeof(VkRenderPassCreateInfo),
                    "sizeof(RenderPass::CreateInfo) != sizeof(VkRenderPassCreateInfo)"
                );
            }
        };

    private:
        std::vector<VkAttachmentDescription> mAttachmentDescriptions;

    private:
        /*
        * Constructs an instance of RenderPass.
        * @param [in] device This RenderPass's Device
        * @param [in] createInfo This RenderPass's RenderPass::CreateInfo
        */
        RenderPass(
            const std::shared_ptr<Device>& device,
            RenderPass::CreateInfo createInfo
        );

    public:
        /*
        * Destroys this instance of RenderPass.
        */
        ~RenderPass();

    public:
        /*
        * Gets this RenderPass's VkAttachmentDescriptions.
        * @return This RenderPass's VkAttachmentDescriptions
        */
        const std::vector<VkAttachmentDescription>& get_attachment_descriptions() const;

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
