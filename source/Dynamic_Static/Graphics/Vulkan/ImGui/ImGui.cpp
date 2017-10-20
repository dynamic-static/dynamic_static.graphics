
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/ImGui/ImGui.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Image.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"
#include "Dynamic_Static/Graphics/Vulkan/RenderPass.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Sampler.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Vertex.hpp"

#include <algorithm>
#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    template <>
    inline auto attribute_descriptions<ImDrawVert>(uint32_t binding)
    {
        std::array<VkVertexInputAttributeDescription, 3> attributes { };

        uint32_t offset = 0;
        attributes[0].binding = 0;
        attributes[0].location = 0;
        attributes[0].offset = offset;
        attributes[0].format = VK_FORMAT_R32G32_SFLOAT;
        offset += sizeof(ImVec2);

        attributes[1].binding = 0;
        attributes[1].location = 1;
        attributes[1].offset = offset;
        attributes[1].format = VK_FORMAT_R32G32_SFLOAT;
        offset += sizeof(ImVec2);

        attributes[2].binding = 0;
        attributes[2].location = 2;
        attributes[2].offset = offset;
        attributes[2].format = VK_FORMAT_R8G8B8A8_UNORM;

        return attributes;
    }

    ImGUI::ImGUI(Device& device, RenderPass& renderPass, Queue& queue)
    {
        ///////////////
        // Create Image
        int fontWidth = 0;
        int fontHeight = 0;
        unsigned char* fontData = nullptr;
        ImGui::GetIO().Fonts->GetTexDataAsRGBA32(&fontData, &fontWidth, &fontHeight);
        VkDeviceSize fontSize = fontWidth * fontHeight * 4 * sizeof(unsigned char);

        auto imageInfo = Image::CreateInfo;
        imageInfo.imageType = VK_IMAGE_TYPE_2D;
        imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
        imageInfo.extent.width = fontWidth;
        imageInfo.extent.height = fontHeight;
        imageInfo.usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
        mFontImage = device.create<Image>(imageInfo);
        auto fontImageMemoryRequirements = mFontImage->memory_requirements();
        auto fontImageMemoryInfo = Memory::AllocateInfo;
        fontImageMemoryInfo.allocationSize = fontImageMemoryRequirements.size;
        fontImageMemoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
            fontImageMemoryRequirements.memoryTypeBits,
            VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
        );

        mFontImage->bind_memory(device.allocate<Memory>(fontImageMemoryInfo));
        mFontImage->create<Image::View>();

        auto stagingBufferInfo = Buffer::CreateInfo;
        stagingBufferInfo.size = fontSize;
        stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto stagingBufferMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, stagingBufferMemoryProperties);
        stagingBuffer->write<unsigned char>(gsl::make_span(fontData, fontSize));
        queue.process_immediate(
            [&](Command::Buffer& commandBuffer)
            {
                auto oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                auto newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
                auto layoutTransition = Image::create_layout_transition(*mFontImage, oldLayout, newLayout);
                vkCmdPipelineBarrier(
                    commandBuffer,
                    layoutTransition.srcStage,
                    layoutTransition.dstStage,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &layoutTransition.barrier
                );

                VkBufferImageCopy copyRegion { };
                copyRegion.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                copyRegion.imageSubresource.layerCount = 1;
                copyRegion.imageExtent.width = fontWidth;
                copyRegion.imageExtent.height = fontHeight;
                copyRegion.imageExtent.depth = 1;
                vkCmdCopyBufferToImage(
                    commandBuffer,
                    *stagingBuffer,
                    *mFontImage,
                    newLayout,
                    1,
                    &copyRegion
                );

                oldLayout = newLayout;
                newLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                layoutTransition = Image::create_layout_transition(*mFontImage, oldLayout, newLayout);
                vkCmdPipelineBarrier(
                    commandBuffer,
                    layoutTransition.srcStage,
                    layoutTransition.dstStage,
                    0,
                    0, nullptr,
                    0, nullptr,
                    1, &layoutTransition.barrier
                );
            }
        );

        /////////////////
        // Create Sampler
        auto samplerInfo = Sampler::CreateInfo;
        samplerInfo.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        samplerInfo.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        samplerInfo.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        samplerInfo.borderColor = VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
        mSampler = device.create<Sampler>(samplerInfo);

        //////////////////////////
        // Create Descriptor::Pool
        VkDescriptorPoolSize descriptorPoolSize { };
        descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSize.descriptorCount = 1;
        auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
        descriptorPoolInfo.poolSizeCount = 1;
        descriptorPoolInfo.pPoolSizes = &descriptorPoolSize;
        descriptorPoolInfo.maxSets = 2;
        mDescriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);

        /////////////////////////////////
        // Create Descriptor::Set::Layout
        VkDescriptorSetLayoutBinding binding { };
        binding.binding = 0;
        binding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        binding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
        binding.descriptorCount = 1;
        auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
        descriptorSetLayoutInfo.bindingCount = 1;
        descriptorSetLayoutInfo.pBindings = &binding;
        mDescriptorSetLayout = device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

        /////////////////////////
        // Create Descriptor::Set
        auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
        descriptorSetInfo.descriptorPool = *mDescriptorPool;
        descriptorSetInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        descriptorSetInfo.descriptorSetCount = 1;
        mDescriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

        VkDescriptorImageInfo descriptorImageInfo { };
        descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        descriptorImageInfo.imageView = *mFontImage->view();
        descriptorImageInfo.sampler = *mSampler;
        VkWriteDescriptorSet writeDescriptorSet { };
        writeDescriptorSet.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        writeDescriptorSet.dstSet = *mDescriptorSet;
        writeDescriptorSet.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        writeDescriptorSet.descriptorCount = 1;
        writeDescriptorSet.pImageInfo = &descriptorImageInfo;
        vkUpdateDescriptorSets(device, 1, &writeDescriptorSet, 0, nullptr);

        //////////////////////////
        // Create Pipeline::Layout
        VkPushConstantRange pushConstantRange { };
        pushConstantRange.size = sizeof(PushConstants);
        pushConstantRange.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        pipelineLayoutInfo.pushConstantRangeCount = 1;
        pipelineLayoutInfo.pPushConstantRanges = &pushConstantRange;
        mPipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

        //////////////////
        // Create Pipeline
        auto vertexShader = device.create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(location = 0) in vec2 inPosition;
                layout(location = 1) in vec2 inTexCoord;
                layout(location = 2) in vec4 inColor;

                layout(push_constant) uniform PushConstants
                {
                    vec2 translation;
                    vec2 scale;
                } pushConstants;

                layout(location = 0) out vec2 outTexCoord;
                layout(location = 1) out vec4 outColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = vec4(inPosition * pushConstants.scale + pushConstants.translation, 0, 1);
                    outTexCoord = inTexCoord;
                    outColor = inColor;
                }

            )"
        );

        auto fragmentShader = device.create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(binding = 0) uniform sampler2D image;

                layout(location = 0) in vec2 inTexCoord;
                layout(location = 1) in vec4 inColor;

                layout(location = 0) out vec4 outColor;

                void main()
                {
                    outColor = texture(image, inTexCoord) * inColor;
                }

            )"
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_create_info(),
            fragmentShader->pipeline_stage_create_info(),
        };

        auto vertexBindingDescription = binding_description<ImDrawVert>();
        auto vertexAttributeDescriptions = attribute_descriptions<ImDrawVert>();
        auto vertexInputState = Pipeline::VertexInputStateCreateInfo;
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        auto rasterizationInfo = Pipeline::RasterizationStateCreateInfo;
        rasterizationInfo.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
        rasterizationInfo.cullMode = VK_CULL_MODE_NONE;

        auto colorBlendStateInfo = Pipeline::ColorBlendAttachmentState;
        colorBlendStateInfo.blendEnable = VK_TRUE;
        colorBlendStateInfo.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        auto blendStateInfo = Pipeline::ColorBlendStateCreateInfo;
        blendStateInfo.attachmentCount = 1;
        blendStateInfo.pAttachments = &colorBlendStateInfo;

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.pVertexInputState = &vertexInputState;
        pipelineInfo.pRasterizationState = &rasterizationInfo;
        pipelineInfo.pColorBlendState = &blendStateInfo;
        pipelineInfo.layout = *mPipelineLayout;
        pipelineInfo.renderPass = renderPass;
        mPipeline = device.create<Pipeline>(pipelineInfo);
    }

    void ImGUI::begin_frame(
        const dst::Clock& clock,
        const dst::Input& input,
        const dst::Vector2& displayArea
    )
    {
        ImGuiIO& io = ImGui::GetIO();
        io.DeltaTime = clock.elapsed<dst::Second<float>>();
        io.MousePos.x = input.mouse().position().x;
        io.MousePos.y = input.mouse().position().y;
        io.MouseDown[0] = input.mouse().down(dst::Mouse::Button::Left);
        io.MouseDown[1] = input.mouse().down(dst::Mouse::Button::Right);
        io.MouseWheel += static_cast<float>(input.mouse().scroll());
        io.KeyAlt = input.keyboard().down(dst::Keyboard::Key::Alt);
        io.KeyCtrl =
            input.keyboard().down(dst::Keyboard::Key::LeftControl) ||
            input.keyboard().down(dst::Keyboard::Key::RightControl);
        io.KeyShift =
            input.keyboard().down(dst::Keyboard::Key::LeftShift) ||
            input.keyboard().down(dst::Keyboard::Key::RightShift);
        io.KeySuper =
            input.keyboard().down(dst::Keyboard::Key::LeftWindow) ||
            input.keyboard().down(dst::Keyboard::Key::RightWindow);
        ImGui::NewFrame();
    }

    bool ImGUI::end_frame()
    {
        ImGui::Render();
        bool recordCommandBuffers = false;
        ImDrawData* imDrawData = ImGui::GetDrawData();
        if (imDrawData) {
            if (!mVertexBuffer || mVertexCount < imDrawData->TotalVtxCount) {
                auto bufferInfo = Buffer::CreateInfo;
                mVertexCount = imDrawData->TotalVtxCount;
                bufferInfo.size = mVertexCount * sizeof(ImDrawVert);
                bufferInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
                auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;
                mVertexBuffer = mPipeline->device().create<Buffer>(bufferInfo, memoryProperties);
                recordCommandBuffers = true;
            }

            if (!mIndexBuffer || mIndexCount < imDrawData->TotalIdxCount) {
                auto bufferInfo = Buffer::CreateInfo;
                mIndexCount = imDrawData->TotalIdxCount;
                bufferInfo.size = mIndexCount * sizeof(ImDrawIdx);
                bufferInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
                auto memoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;
                mIndexBuffer = mPipeline->device().create<Buffer>(bufferInfo, memoryProperties);
                recordCommandBuffers = true;
            }

            ImDrawVert* vertexPtr = reinterpret_cast<ImDrawVert*>(mVertexBuffer->map());
            ImDrawIdx* indexPtr = reinterpret_cast<ImDrawIdx*>(mIndexBuffer->map());
            for (size_t i = 0; i < imDrawData->CmdListsCount; ++i) {
                ImDrawList* cmdList = imDrawData->CmdLists[i];
                if (cmdList) {
                    memcpy(vertexPtr, cmdList->VtxBuffer.Data, cmdList->VtxBuffer.Size * sizeof(ImDrawVert));
                    memcpy(indexPtr, cmdList->IdxBuffer.Data, cmdList->IdxBuffer.Size * sizeof(ImDrawIdx));
                    vertexPtr += cmdList->VtxBuffer.Size;
                    indexPtr += cmdList->IdxBuffer.Size;
                }
            }

            mVertexBuffer->flush();
            mIndexBuffer->flush();
        }

        return true; // recordCommandBuffers;
    }

    void ImGUI::draw(Command::Buffer& commandBuffer)
    {
        if (mVertexBuffer && mIndexBuffer) {
            auto& io = ImGui::GetIO();
            commandBuffer.bind_descriptor_set(*mDescriptorSet, *mPipelineLayout);
            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline);
            commandBuffer.bind_vertex_buffer(*mVertexBuffer);
            commandBuffer.bind_index_buffer(*mIndexBuffer);

            VkViewport viewport { };
            viewport.width = io.DisplaySize.x;
            viewport.height = io.DisplaySize.y;
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            commandBuffer.set_viewport(viewport);

            mPushConstants.translation = dst::Vector2(-1);
            mPushConstants.scale.x = 2.0f / io.DisplaySize.x;
            mPushConstants.scale.y = 2.0f / io.DisplaySize.y;
            vkCmdPushConstants(commandBuffer, *mPipelineLayout, VK_SHADER_STAGE_VERTEX_BIT, 0, sizeof(PushConstants), &mPushConstants);

            ImDrawData* imDrawData = ImGui::GetDrawData();
            if (imDrawData) {
                size_t scissorIndex = 0;
                int32_t vertexOffset = 0;
                int32_t indexOffset = 0;
                for (int32_t i = 0; i < imDrawData->CmdListsCount; ++i) {
                    ImDrawList* cmdList = imDrawData->CmdLists[i];
                    for (int32_t j = 0; j < cmdList->CmdBuffer.Size; ++j) {
                        const auto& cmd = cmdList->CmdBuffer[j];
                        VkRect2D scissor { };
                        scissor.offset.x = std::max(static_cast<int32_t>(cmd.ClipRect.x), 0);
                        scissor.offset.y = std::max(static_cast<int32_t>(cmd.ClipRect.y), 0);
                        scissor.extent.width = static_cast<uint32_t>(cmd.ClipRect.z - cmd.ClipRect.x);
                        scissor.extent.height = static_cast<uint32_t>(cmd.ClipRect.w - cmd.ClipRect.y);
                        commandBuffer.set_scissor(scissor);
                        commandBuffer.draw_indexed(cmd.ElemCount, 1, indexOffset, vertexOffset, 0);
                        indexOffset += cmd.ElemCount;
                    }

                    vertexOffset += cmdList->VtxBuffer.Size;
                }
            }
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
