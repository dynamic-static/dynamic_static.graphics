
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/RenderTarget.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    RenderTarget::RenderTarget(RenderPass & renderPass, uint32_t width, uint32_t height, VkFormat format, VkFormat depthFormat)
    {
        // auto& device = renderPass.device();
        // 
        // auto imageInfo = Image::CreateInfo;
        // imageInfo.imageType = VK_IMAGE_TYPE_2D;
        // imageInfo.extent.width = width;
        // imageInfo.extent.height = height;
        // imageInfo.format = format;
        // imageInfo.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
        // colorAttachment = device.create<Image>(imageInfo);
        // 
        // if (depthFormat != VK_FORMAT_UNDEFINED) {
        // 
        // }
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
        return colorAttachment ? colorAttachment->extent() : VkExtent3D { };
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
