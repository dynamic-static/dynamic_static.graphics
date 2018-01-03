
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Effects/ExtractLuminance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderTarget.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Sampler.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"

#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    constexpr float ExtractLuminance::ThresholdDefault;;
    constexpr std::pair<float, float> ExtractLuminance::ThresholdLimits;

    ExtractLuminance::ExtractLuminance(Device& device, RenderPass& renderPass, uint32_t width, uint32_t height)
    {
        create_render_pass(device, renderPass);

        VkDescriptorSetLayoutBinding samplerBinding { };
        samplerBinding.binding = 0;
        samplerBinding.descriptorCount = 1;
        samplerBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        samplerBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

        Descriptor::Set::Layout::CreateInfo descriptorSetLayoutInfo;
        descriptorSetLayoutInfo.bindingCount = 1;
        descriptorSetLayoutInfo.pBindings = &samplerBinding;
        mDescriptorSetLayout = device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

        VkPushConstantRange pushConstantRange { };
        pushConstantRange.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
        pushConstantRange.size = static_cast<uint32_t>(sizeof(float));

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        pipelineLayoutInfo.pushConstantRangeCount = 1;
        pipelineLayoutInfo.pPushConstantRanges = &pushConstantRange;
        mPipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

        auto vertexShader = device.create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(location = 0) out vec2 fsTexCoord;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    fsTexCoord = vec2((gl_VertexIndex << 1) & 2, gl_VertexIndex & 2);
                    gl_Position = vec4(fsTexCoord * 2 - 1, 0, 1);
                }

            )"
        );

        auto fragmentShader = device.create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(binding = 0) uniform sampler2D image;

                layout(location = 0) in vec2 fsTexCoord;

                layout(location = 0) out vec4 fragmentColor;

                layout(push_constant) uniform PushConstants
                {
                    float threshold;
                } pushConstants;

                void main()
                {
                    fragmentColor = texture(image, fsTexCoord);
                    // fragmentColor.rgb =
                    //     (fragmentColor.rgb - vec3(pushConstants.threshold)) /
                    //     (vec3(1)           - vec3(pushConstants.threshold));
                    fragmentColor.g += 1;
                }

            )"
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_create_info(),
            fragmentShader->pipeline_stage_create_info()
        };

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.layout = *mPipelineLayout;
        pipelineInfo.renderPass = *mRenderPass;
        mPipeline = device.create<Pipeline>(pipelineInfo);

        mRenderTarget = std::make_unique<RenderTarget>(*mRenderPass, width, height, mRenderPass->format(), mRenderPass->depth_format());
        mSampler = device.create<Sampler>();

        VkDescriptorPoolSize descriptorPoolSize { };
        descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSize.descriptorCount = 1;
        auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
        descriptorPoolInfo.poolSizeCount = 1;
        descriptorPoolInfo.pPoolSizes = &descriptorPoolSize;
        descriptorPoolInfo.maxSets = 1;
        mDescriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);

        auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
        descriptorSetInfo.descriptorPool = *mDescriptorPool;
        descriptorSetInfo.descriptorSetCount = 1;
        descriptorSetInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        mDescriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

        VkDescriptorImageInfo descriptorImageInfo { };
        descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        descriptorImageInfo.imageView = *mRenderTarget->colorAttachment->view();
        descriptorImageInfo.sampler = *mSampler;
        VkWriteDescriptorSet descriptorWrite { };
        descriptorWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        descriptorWrite.dstSet = *mDescriptorSet;
        descriptorWrite.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorWrite.descriptorCount = 1;
        descriptorWrite.pImageInfo = &descriptorImageInfo;
        vkUpdateDescriptorSets(device, 1, &descriptorWrite, 0, nullptr);
    }

    void ExtractLuminance::create_render_pass(Device& device, RenderPass& renderPass)
    {
        std::array<VkAttachmentDescription, 2> attachmentDescriptions { };
        VkAttachmentReference colorAttachmentReference { };
        VkAttachmentReference depthAttachmentReference { };

        attachmentDescriptions[0].format = renderPass.format();
        attachmentDescriptions[0].samples = VK_SAMPLE_COUNT_1_BIT;
        attachmentDescriptions[0].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        attachmentDescriptions[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        attachmentDescriptions[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        attachmentDescriptions[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        attachmentDescriptions[0].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        attachmentDescriptions[0].finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        colorAttachmentReference.attachment = 0;
        colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

        if (renderPass.depth_format()) {
            attachmentDescriptions[1].format = renderPass.depth_format();
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
        subpassDescription.pDepthStencilAttachment = renderPass.depth_format() ? &depthAttachmentReference : nullptr;

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
        renderPassInfo.attachmentCount = renderPass.depth_format() ? 2 : 1;
        renderPassInfo.pAttachments = attachmentDescriptions.data();
        renderPassInfo.subpassCount = 1;
        renderPassInfo.pSubpasses = &subpassDescription;
        renderPassInfo.dependencyCount = static_cast<uint32_t>(dependencies.size());
        renderPassInfo.pDependencies = dependencies.data();
        mRenderPass = device.create<RenderPass>(renderPassInfo);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static

/*

    Normalized Device Coordinates (NDC)
    -1,-1        1,-1
      +-----------+
      |           |
      |           |
      |           |
      |           |
      +-----------+
    -1,1         1,1

    Texture Coordinates (TC)
     0,0         1,0
      +-----------+
      |           |
      |           |
      |           |
      |           |
      +-----------+
     0,1         1,1

    -1,-1              1,-1
      +-----------------+
      |(NDC)            |
      |                 |
      |       0,0      1,0
      |        +--------+
      |        |(TC)    |
      |        |        |
      |        |        |
      +--------+--------+
    -1,1      0,1      1,1


               u = (i << 1) & 2    v = i & 2
    ========================================
    i = 0 :    (000 << 1) & 010
    u = 0             000 & 010    000 & 010
    v = 0                   000          000
    ========================================
    i = 1 :    (001 << 1) & 010
    u = 2             010 & 010    001 & 010
    v = 0                   010          000
    ========================================
    i = 2 :    (010 << 1) & 010
    u = 0             100 & 010    010 & 010
    v = 2                   000          010

    0,0 (TC)                                        2,0 (TC)
    v0-----------------------+.......................v1
     |                       |                    .
     |                       |                 .
     |                       |              .
     |                       |           .
     |                       |        .
     |                       |     .
     |                       |  .
     +-----------------------+
     .                    . 1,1 (TC)
     .                 .
     .              .
     .           .
     .        .
     .     .
     .  .
    v2
    0,2 (TC)

*/
