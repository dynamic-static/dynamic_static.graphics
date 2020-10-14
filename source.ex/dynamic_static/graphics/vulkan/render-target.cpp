
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/render-target.hpp"

namespace dst {
namespace vk {

RenderTarget::RenderTarget(const Managed<VkRenderPass>& renderPass, const Managed<VkImage>& image)
{
    if (renderPass && image) {
        const auto& device = image.get<Managed<VkDevice>>();
        const auto& imageCreateInfo = image.get<Managed<VkImageCreateInfo>>();
        VkImageViewCreateInfo imageViewCreateInfo { };
        imageViewCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
        imageViewCreateInfo.image = image;
        imageViewCreateInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
        imageViewCreateInfo.format = imageCreateInfo->format;
        imageViewCreateInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        imageViewCreateInfo.subresourceRange.baseMipLevel = 0;
        imageViewCreateInfo.subresourceRange.levelCount = 1;
        imageViewCreateInfo.subresourceRange.baseArrayLayer = 0;
        imageViewCreateInfo.subresourceRange.layerCount = 1;
        Managed<VkImageView> imageView;
        dst_vk(create<Managed<VkImageView>>(device, &imageViewCreateInfo, nullptr, &imageView));
        VkFramebufferCreateInfo framebufferCreateInfo { };
        framebufferCreateInfo.sType = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        framebufferCreateInfo.renderPass = renderPass;
        framebufferCreateInfo.attachmentCount = 1;
        framebufferCreateInfo.pAttachments = &*imageView;
        framebufferCreateInfo.width = image.get<Managed<VkImageCreateInfo>>()->extent.width;
        framebufferCreateInfo.height = image.get<Managed<VkImageCreateInfo>>()->extent.height;
        framebufferCreateInfo.layers = 1;
        dst_vk(create<Managed<VkFramebuffer>>(device, &framebufferCreateInfo, nullptr, &frameBuffer));
    }
}

} // namespace vk
} // namespace dst
