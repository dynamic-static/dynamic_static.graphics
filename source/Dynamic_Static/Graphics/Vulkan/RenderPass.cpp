
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    constexpr VkAttachmentDescription RenderPass::AttachmentDescription;
    constexpr VkRenderPassCreateInfo RenderPass::CreateInfo;
    constexpr VkRenderPassBeginInfo RenderPass::BeginInfo;

    RenderPass::RenderPass(
        const std::shared_ptr<Device>& device,
        const VkRenderPassCreateInfo& info
    )
        : DeviceChild(device)
    {
        // NOTE : This currently handles only very simple RenderPasses...
        auto colorAttachments = info.pSubpasses->pColorAttachments;
        if (colorAttachments && info.attachmentCount > colorAttachments[0].attachment) {
            mFormat = info.pAttachments[colorAttachments[0].attachment].format;
        }

        auto depthAttachment = info.pSubpasses->pDepthStencilAttachment;
        if (depthAttachment && info.attachmentCount > depthAttachment->attachment) {
            mDepthFormat = info.pAttachments[depthAttachment->attachment].format;
        }

        validate(vkCreateRenderPass(DeviceChild::device(), &info, nullptr, &mHandle));
        name("RenderPass");
    }

    RenderPass::~RenderPass()
    {
        if (mHandle) {
            vkDestroyRenderPass(device(), mHandle, nullptr);
        }
    }

    VkFormat RenderPass::format() const
    {
        return mFormat;
    }

    VkFormat RenderPass::depth_format() const
    {
        return mDepthFormat;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
