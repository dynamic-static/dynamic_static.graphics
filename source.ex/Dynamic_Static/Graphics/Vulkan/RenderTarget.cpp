
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
        RenderTarget::CreateInfo createInfo
    )
        : renderPass { renderPass }
    {
        assert(renderPass);
        // TODO : RenderTarget needs work, but it's doing the job for now.
        // TODO : Need to automate attachment creation for a given RenderPass.
        if (createInfo.colorFormat) {
            Image::CreateInfo colorImageCreateInfo { };
            colorImageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
            colorImageCreateInfo.extent = createInfo.extent;
            colorImageCreateInfo.format = createInfo.colorFormat;
            colorImageCreateInfo.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            colorAttachment = renderPass->get_device().create<Image>(colorImageCreateInfo);
        }
        if (createInfo.depthFormat) {
            Image::CreateInfo depthImageCreateInfo { };
            depthImageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
            depthImageCreateInfo.extent = createInfo.extent;
            depthImageCreateInfo.format = createInfo.depthFormat;
            depthImageCreateInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            depthAttachment = renderPass->get_device().create<Image>(depthImageCreateInfo);
        }
        std::array<DeviceMemoryResource*, 2> resources {
            colorAttachment ? colorAttachment.get() : nullptr,
            depthAttachment ? depthAttachment.get() : nullptr,
        };
        DeviceMemory::allocate_resource_memory(resources, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);

        // TODO : This should be flexible enough to handle N attachments.
        //  Scratch pad memory needs to be set up and RenderTarget needs to be
        //  made more flexible in general.
        uint32_t attachmentCount = 0;
        std::array<VkImageView, 2> attachments { };
        auto addAttachment =
        [&](const std::shared_ptr<Image>& image)
        {
            if (image) {
                attachments[attachmentCount++] = image->get_view();
            }
        };
        addAttachment(colorAttachment);
        addAttachment(depthAttachment);
        Framebuffer::CreateInfo framebufferCreateInfo { };
        framebufferCreateInfo.renderPass = *renderPass;
        framebufferCreateInfo.attachmentCount = attachmentCount;
        framebufferCreateInfo.pAttachments = attachments.data();
        framebufferCreateInfo.width = createInfo.extent.width;
        framebufferCreateInfo.height = createInfo.extent.depth;
        framebuffer = renderPass->get_device().create<Framebuffer>(framebufferCreateInfo);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
