
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/RenderTarget.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ImageView.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    RenderTarget::RenderTarget(
        const std::shared_ptr<RenderPass>& renderPass,
        const VkExtent2D& extent
    )
        : mRenderPass { renderPass }
    {
        // TODO : This needs more attention to deal with more complicated
        //  RenderPasses, but it does the job for now.  The arrays that are
        //  created here for Image attachments and VkClearValues just assume
        //  that the actual layout matches the order that the attachment
        //  descriptions were in at RenderPass creation time.

        const auto& attachmentDescriptions = get_render_pass().get_attachment_descriptions();
        mClearValues.reserve(attachmentDescriptions.size());
        mAttachments.reserve(attachmentDescriptions.size());
        for (const auto& attachmentDescription : attachmentDescriptions) {
            Image::CreateInfo imageCreateInfo { };
            imageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
            imageCreateInfo.extent.width = extent.width;
            imageCreateInfo.extent.height = extent.height;
            imageCreateInfo.extent.depth = 1;
            imageCreateInfo.format = attachmentDescription.format;
            imageCreateInfo.samples = attachmentDescription.samples;
            VkClearValue clearValue { };
            switch (imageCreateInfo.format) {
                case VK_FORMAT_D16_UNORM:
                case VK_FORMAT_X8_D24_UNORM_PACK32:
                case VK_FORMAT_D32_SFLOAT:
                    clearValue.depthStencil = { 1, 0 };
                    imageCreateInfo.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                    if (attachmentDescription.storeOp == VK_ATTACHMENT_STORE_OP_STORE) {
                        imageCreateInfo.usage |= VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
                    }
                    break;
                case VK_FORMAT_S8_UINT:
                    clearValue.depthStencil = { 1, 0 };
                    imageCreateInfo.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                    if (attachmentDescription.stencilStoreOp == VK_ATTACHMENT_STORE_OP_STORE) {
                        imageCreateInfo.usage |= VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
                    }
                    break;
                case VK_FORMAT_D16_UNORM_S8_UINT:
                case VK_FORMAT_D24_UNORM_S8_UINT:
                case VK_FORMAT_D32_SFLOAT_S8_UINT:
                    clearValue.depthStencil = { 1, 0 };
                    imageCreateInfo.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
                    if (attachmentDescription.storeOp == VK_ATTACHMENT_STORE_OP_STORE ||
                        attachmentDescription.stencilStoreOp == VK_ATTACHMENT_STORE_OP_STORE) {
                        imageCreateInfo.usage |= VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
                    }
                    break;
                default:
                    imageCreateInfo.usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
                    if (attachmentDescription.storeOp == VK_ATTACHMENT_STORE_OP_STORE) {
                        imageCreateInfo.usage |= VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
                    }
                    break;
            }
            mAttachments.push_back(get_render_pass().get_device().create<Image>(imageCreateInfo));
            mClearValues.push_back(clearValue);
        }
        DeviceMemory::allocate_multi_resource_memory(mAttachments, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        // TODO : Scratch pad memory...
        std::vector<VkImageView> attachmentViews;
        attachmentViews.reserve(mAttachments.size());
        for (auto& attachment : mAttachments) {
            attachmentViews.push_back(attachment->get_view());
        }
        Framebuffer::CreateInfo framebufferCreateInfo { };
        framebufferCreateInfo.renderPass = *renderPass;
        framebufferCreateInfo.attachmentCount = (uint32_t)attachmentViews.size();
        framebufferCreateInfo.pAttachments = attachmentViews.data();
        framebufferCreateInfo.width = extent.width;
        framebufferCreateInfo.height = extent.height;
        mFramebuffer = renderPass->get_device().create<Framebuffer>(framebufferCreateInfo);
    }

    RenderPass& RenderTarget::get_render_pass()
    {
        assert(mRenderPass);
        return *mRenderPass;
    }

    const RenderPass& RenderTarget::get_render_pass() const
    {
        assert(mRenderPass);
        return *mRenderPass;
    }

    dst::Span<const std::shared_ptr<Image>> RenderTarget::get_attachments() const
    {
        return mAttachments;
    }

    Framebuffer& RenderTarget::get_framebuffer()
    {
        assert(mFramebuffer);
        return *mFramebuffer;
    }

    const Framebuffer& RenderTarget::get_framebuffer() const
    {
        assert(mFramebuffer);
        return *mFramebuffer;
    }

    VkExtent2D RenderTarget::get_extent() const
    {
        return get_framebuffer().get_extent();
    }

    VkViewport RenderTarget::get_viewport() const
    {
        VkViewport viewport { };
        viewport.width = (float)get_extent().width;
        viewport.height = (float)get_extent().height;
        viewport.minDepth = 0;
        viewport.maxDepth = 1;
        return viewport;
    }

    VkRect2D RenderTarget::get_scissor() const
    {
        VkRect2D scissor { };
        scissor.extent = get_extent();
        return scissor;
    }

    dst::Span<VkClearValue> RenderTarget::get_clear_values()
    {
        return mClearValues;
    }

    dst::Span<const VkClearValue> RenderTarget::get_clear_values() const
    {
        return mClearValues;
    }

    VkRenderPassBeginInfo RenderTarget::get_render_pass_begin_info() const
    {
        RenderPass::BeginInfo beginInfo { };
        beginInfo.renderPass = get_render_pass();
        beginInfo.framebuffer = get_framebuffer();
        beginInfo.renderArea.extent = get_framebuffer().get_extent();
        beginInfo.clearValueCount = (uint32_t)mClearValues.size();
        beginInfo.pClearValues = mClearValues.data();
        return beginInfo;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
