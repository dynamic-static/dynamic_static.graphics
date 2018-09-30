
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

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan render pass.
    */
    class RenderPass final
        : public Object<VkRenderPass>
        , public SharedObject<RenderPass>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for RenderPass construction.
        */
        struct CreateInfo final
            : public VkRenderPassCreateInfo
        {
            /*!
            Constructs an instance of RenderPass::CreateInfo.
            */
            inline CreateInfo()
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

        /*!
        Configuration parameters for beginning RenderPass recording.
        */
        struct BeginInfo final
            : public VkRenderPassBeginInfo
        {
            /*!
            Constructs an instance of RenderPass::BeginInfo.
            */
            inline BeginInfo()
            {
                sType = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
                pNext = nullptr;
                renderPass = VK_NULL_HANDLE;
                framebuffer = VK_NULL_HANDLE;
                renderArea = { };
                clearValueCount = 0;
                pClearValues = nullptr;
                static_assert(
                    sizeof(RenderPass::BeginInfo) == sizeof(VkRenderPassBeginInfo),
                    "sizeof(RenderPass::BeginInfo) != sizeof(VkRenderPassBeginInfo)"
                );
            }
        };

    private:
        std::vector<VkAttachmentDescription> mAttachmentDescriptions;

    private:
        /*!
        Constructs an instance of RenderPass.
        @param [in] device This RenderPass's Device
        @param [in] createInfo This RenderPass's RenderPass::CreateInfo
        */
        RenderPass(
            const std::shared_ptr<Device>& device,
            RenderPass::CreateInfo createInfo
        );

    public:
        /*!
        Destroys this instance of RenderPass.
        */
        ~RenderPass();

    public:
        /*!
        Gets this RenderPass's VkAttachmentDescriptions.
        @return This RenderPass's VkAttachmentDescriptions
        */
        const std::vector<VkAttachmentDescription>& get_attachment_descriptions() const;

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
