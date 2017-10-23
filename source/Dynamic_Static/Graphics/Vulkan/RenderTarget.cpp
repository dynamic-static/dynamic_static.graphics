
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/RenderTarget.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {
    RenderTarget::RenderTarget(RenderPass & renderPass, uint32_t width, uint32_t height)
        : RenderTarget(renderPass, width, height, renderPass.format(), renderPass.depth_format())
    {
    }

    RenderTarget::RenderTarget(RenderPass& renderPass, uint32_t width, uint32_t height, VkFormat format, VkFormat depthFormat)
        : RenderTarget(
            CreateInfo {
                &renderPass,
                { width, height, 1 },
                format,
                depthFormat,
                VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT
            }
        )
    {
    }

    RenderTarget::RenderTarget(const CreateInfo& info)
    {
        assert(info.renderPass);
        assert(info.format);
        auto& device = info.renderPass->device();

        auto imageInfo = Image::CreateInfo;
        imageInfo.imageType = VK_IMAGE_TYPE_2D;
        imageInfo.extent = info.extent;
        imageInfo.format = info.format;
        imageInfo.usage = info.usage;
        colorAttachment = device.create<Image>(imageInfo);

        auto memoryRequirements = colorAttachment->memory_requirements();
        auto memoryInfo = Memory::AllocateInfo;
        memoryInfo.allocationSize = memoryRequirements.size;
        memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
            memoryRequirements.memoryTypeBits,
            VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
        );

        colorAttachmentMemory = device.allocate<Memory>(memoryInfo);
        colorAttachment->bind_memory(colorAttachmentMemory);
        colorAttachment->create<Image::View>();

        if (info.depthFormat != VK_FORMAT_UNDEFINED) {
            imageInfo.format = info.depthFormat;
            imageInfo.usage = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
            depthAttachment = device.create<Image>(imageInfo);

            memoryRequirements = depthAttachment->memory_requirements();
            memoryInfo.allocationSize = memoryRequirements.size;
            memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
                memoryRequirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
            );

            depthAttachmentMemory = device.allocate<Memory>(memoryInfo);
            depthAttachment->bind_memory(depthAttachmentMemory);
            depthAttachment->create<Image::View>();
        }

        uint32_t attachmentCount = 1;
        std::array<VkImageView, 2> attachments { };
        attachments[0] = *colorAttachment->view();
        if (depthAttachment) {
            attachments[1] = *depthAttachment->view();
            ++attachmentCount;
        }

        auto framebufferInfo = Framebuffer::CreateInfo;
        framebufferInfo.renderPass = *info.renderPass;
        framebufferInfo.attachmentCount = attachmentCount;
        framebufferInfo.pAttachments = attachments.data();
        framebufferInfo.width = info.extent.width;
        framebufferInfo.height = info.extent.height;
        framebuffer = device.create<Framebuffer>(framebufferInfo);
    }

    VkFormat RenderTarget::format() const
    {
        return colorAttachment ? colorAttachment->format() : VK_FORMAT_UNDEFINED;
    }

    VkFormat RenderTarget::depth_format() const
    {
        return depthAttachment ? depthAttachment->format() : VK_FORMAT_UNDEFINED;
    }

    const VkExtent3D& RenderTarget::extent() const
    {
        static const VkExtent3D extent { };
        return colorAttachment ? colorAttachment->extent() : extent;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
