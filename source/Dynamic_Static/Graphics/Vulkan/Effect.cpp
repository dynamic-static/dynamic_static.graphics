
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Effect.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionTexCoordColor.hpp"

#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Effect::Effect(
        Device& device,
        uint32_t width,
        uint32_t height,
        VkFormat format,
        VkFormat depthFormat,
        const std::string& vertexShaderSource,
        const std::string& fragmentShaderSource
    )
    {
        create_render_pass(device, format, depthFormat);
        create_render_target(width, height, format, depthFormat);
        create_descriptor_set_layout(device);
        create_pipeline_layout(device);
        create_pipeline(device, vertexShaderSource, fragmentShaderSource);
        create_descriptor_pool(device);
        create_descriptor_set();
        create_sampler(device);
    }

    void Effect::create_render_pass(Device& device, VkFormat format, VkFormat depthFormat)
    {
        std::array<VkAttachmentDescription, 2> attachmentDescriptions { };
        VkAttachmentReference colorAttachmentReference { };
        VkAttachmentReference depthAttachmentReference { };

        attachmentDescriptions[0].format = format;
        attachmentDescriptions[0].samples = VK_SAMPLE_COUNT_1_BIT;
        attachmentDescriptions[0].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        attachmentDescriptions[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        attachmentDescriptions[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachmentDescriptions[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachmentDescriptions[0].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        attachmentDescriptions[0].finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        colorAttachmentReference.attachment = 0;
        colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

        if (depthFormat) {
            attachmentDescriptions[1].format = depthFormat;
            attachmentDescriptions[1].samples = VK_SAMPLE_COUNT_1_BIT;
            attachmentDescriptions[1].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            attachmentDescriptions[1].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
            attachmentDescriptions[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            attachmentDescriptions[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            attachmentDescriptions[1].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            attachmentDescriptions[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
            depthAttachmentReference.attachment = 1;
            depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        }

        VkSubpassDescription subpassDescription { };
        subpassDescription.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpassDescription.colorAttachmentCount = 1;
        subpassDescription.pColorAttachments = &colorAttachmentReference;
        subpassDescription.pDepthStencilAttachment = depthFormat ? &depthAttachmentReference : nullptr;

        std::array<VkSubpassDependency, 2> dependencies { };
        dependencies[0].srcSubpass = VK_SUBPASS_EXTERNAL;
        dependencies[0].dstSubpass = 0;
        dependencies[0].srcStageMask = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
        dependencies[0].dstStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
        dependencies[0].srcAccessMask = VK_ACCESS_MEMORY_READ_BIT;
        dependencies[0].dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
        dependencies[0].dependencyFlags = VK_DEPENDENCY_BY_REGION_BIT;

        dependencies[1].srcSubpass = 0;
        dependencies[1].dstSubpass = VK_SUBPASS_EXTERNAL;
        dependencies[1].srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
        dependencies[1].dstStageMask = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
        dependencies[1].srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT | VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
        dependencies[1].dstAccessMask = VK_ACCESS_MEMORY_READ_BIT;
        dependencies[1].dependencyFlags = VK_DEPENDENCY_BY_REGION_BIT;

        auto renderPassInfo = RenderPass::CreateInfo;
        renderPassInfo.attachmentCount = depthFormat ? 2 : 1;
        renderPassInfo.pAttachments = attachmentDescriptions.data();
        renderPassInfo.subpassCount = 1;
        renderPassInfo.pSubpasses = &subpassDescription;
        renderPassInfo.dependencyCount = static_cast<uint32_t>(dependencies.size());
        renderPassInfo.pDependencies = dependencies.data();
        renderPass = device.create<RenderPass>(renderPassInfo);
    }

    void Effect::create_render_target(uint32_t width, uint32_t height, VkFormat format, VkFormat depthFormat)
    {
        renderTarget = std::make_unique<RenderTarget>(*renderPass, width, height, format, depthFormat);
    }

    void Effect::create_descriptor_set_layout(Device& device)
    {
        VkDescriptorSetLayoutBinding uniformBufferLayoutBinding { };
        uniformBufferLayoutBinding.binding = 0;
        uniformBufferLayoutBinding.descriptorCount = 1;
        uniformBufferLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        uniformBufferLayoutBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

        VkDescriptorSetLayoutBinding samplerLayoutBinding { };
        samplerLayoutBinding.binding = 1;
        samplerLayoutBinding.descriptorCount = 1;
        samplerLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        samplerLayoutBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

        std::array<VkDescriptorSetLayoutBinding, 2> descriptorSetLayoutBindings {
            uniformBufferLayoutBinding,
            samplerLayoutBinding,
        };

        Descriptor::Set::Layout::CreateInfo descriptorSetLayoutInfo;
        descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBindings.size());
        descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBindings.data();
        descriptorSetLayout = device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
    }

    void Effect::create_pipeline_layout(Device& device)
    {
        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &descriptorSetLayout->handle();
        pipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);
    }

    void Effect::create_pipeline(Device& device, const std::string& vertexShaderSource, const std::string& fragmentShaderSource)
    {
        auto vertexShader = device.create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            vertexShaderSource
        );

        auto fragmentShader = device.create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            fragmentShaderSource
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_create_info(),
            fragmentShader->pipeline_stage_create_info(),
        };

        auto vertexBidingingDescription = binding_description<VertexPositionTexCoordColor>();
        auto vertexAttributeDescriptions = attribute_descriptions<VertexPositionTexCoordColor>();
        auto vertexInputInfo = Pipeline::VertexInputStateCreateInfo;
        vertexInputInfo.vertexBindingDescriptionCount = 1;
        vertexInputInfo.pVertexBindingDescriptions = &vertexBidingingDescription;
        vertexInputInfo.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
        vertexInputInfo.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.pVertexInputState = &vertexInputInfo;
        pipelineInfo.layout = *pipelineLayout;
        pipelineInfo.renderPass = *renderPass;
        pipelineInfo.subpass = 0;
        pipeline = device.create<Pipeline>(pipelineInfo);
    }

    void Effect::create_descriptor_pool(Device& device)
    {
        std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
        descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
        descriptorPoolSizes[0].descriptorCount = 1;
        descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSizes[1].descriptorCount = 1;

        auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
        descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
        descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
        descriptorPoolInfo.maxSets = 1;
        descriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);
    }

    void Effect::create_descriptor_set()
    {
        auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
        descriptorSetInfo.descriptorPool = *descriptorPool;
        descriptorSetInfo.descriptorSetCount = 1;
        descriptorSetInfo.pSetLayouts = &descriptorSetLayout->handle();
        descriptorSet = descriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);
    }

    void Effect::create_sampler(Device& device)
    {
        sampler = device.create<Sampler>();
    }

    void Effect::write_descriptor_set(Image& image)
    {
        VkDescriptorBufferInfo descriptorBufferInfo { };
        descriptorBufferInfo.buffer = *uniformBuffer;
        descriptorBufferInfo.offset = 0;
        descriptorBufferInfo.range = VK_WHOLE_SIZE;

        VkDescriptorImageInfo descriptorImageInfo { };
        descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        descriptorImageInfo.imageView = *image.view();
        descriptorImageInfo.sampler = *sampler;

        std::array<VkWriteDescriptorSet, 2> descriptorWrites { };
        descriptorWrites[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        descriptorWrites[0].dstSet = *descriptorSet;
        descriptorWrites[0].dstBinding = 0;
        descriptorWrites[0].dstArrayElement = 0;
        descriptorWrites[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
        descriptorWrites[0].descriptorCount = 1;
        descriptorWrites[0].pBufferInfo = &descriptorBufferInfo;

        descriptorWrites[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        descriptorWrites[1].dstSet = *descriptorSet;
        descriptorWrites[1].dstBinding = 1;
        descriptorWrites[1].dstArrayElement = 0;
        descriptorWrites[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorWrites[1].descriptorCount = 1;
        descriptorWrites[1].pImageInfo = &descriptorImageInfo;

        vkUpdateDescriptorSets(
            descriptorPool->device(),
            static_cast<uint32_t>(descriptorWrites.size()),
            descriptorWrites.data(),
            0,
            nullptr
        );
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
