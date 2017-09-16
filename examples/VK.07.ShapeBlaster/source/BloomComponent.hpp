
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "BloomSettings.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.hpp"

#include <memory>

namespace ShapeBlaster {

    class BloomComponent final
    {
    public:
        static constexpr uint32_t Width { 1280 };
        static constexpr uint32_t Height { 720 };

    public:
        BloomSettings settings;

    public:
        struct Resources final
        {
        public:
            std::shared_ptr<dst::vlkn::RenderPass> renderPass;
            std::unique_ptr<dst::vlkn::RenderTarget> renderTarget;
            std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> descriptorSetLayout;
            std::shared_ptr<dst::vlkn::Pipeline> pipeline;
            std::shared_ptr<dst::vlkn::Pipeline::Layout> pipelineLayout;
            std::shared_ptr<dst::vlkn::Buffer> uniformBuffer;
            std::shared_ptr<dst::vlkn::Descriptor::Pool> descriptorPool;
            dst::vlkn::Descriptor::Set* descriptorSet { nullptr };
            std::shared_ptr<dst::vlkn::Sampler> sampler;

        public:
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            void create_render_pass_and_target(dst::vlkn::Device& device, VkFormat format, VkFormat depthFormat)
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
                    attachmentDescriptions[1].storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
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

                auto renderPassInfo = dst::vlkn::RenderPass::CreateInfo;
                renderPassInfo.attachmentCount = depthFormat ? 2 : 1;
                renderPassInfo.pAttachments = attachmentDescriptions.data();
                renderPassInfo.subpassCount = 1;
                renderPassInfo.pSubpasses = &subpassDescription;
                renderPassInfo.dependencyCount = static_cast<uint32_t>(dependencies.size());
                renderPassInfo.pDependencies = dependencies.data();
                renderPass = device.create<dst::vlkn::RenderPass>(renderPassInfo);

                renderTarget = std::make_unique<dst::vlkn::RenderTarget>(
                    *renderPass, Width, Height, format, depthFormat
                );
            }

            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            void create_descriptor_set_layout(dst::vlkn::Device& device)
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

                std::array<VkDescriptorSetLayoutBinding, 2> descriptorSetLayoutBinding {
                    uniformBufferLayoutBinding,
                    samplerLayoutBinding,
                };

                using namespace dst::vlkn;
                auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
                descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBinding.size());
                descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBinding.data();
                descriptorSetLayout = device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
            }

            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            void create_pipeline(
                const std::string& vertexShaderSource,
                const std::string& fragmentShaderSource
            )
            {
                using namespace dst::vlkn;
                auto& device = renderPass->device();

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
                    fragmentShader->pipeline_stage_create_info()
                };

                auto rasterizationInfo = Pipeline::RasterizationStateCreateInfo;
                rasterizationInfo.cullMode = VK_CULL_MODE_NONE;

                auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
                pipelineLayoutInfo.setLayoutCount = 1;
                pipelineLayoutInfo.pSetLayouts = &descriptorSetLayout->handle();
                pipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

                auto vertexInputInfo = VertexPositionTexCoordColor::pipeline_input_state_create_info();
                auto pipelineInfo = Pipeline::GraphicsCreateInfo;
                pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
                pipelineInfo.pStages = shaderStages.data();
                pipelineInfo.pVertexInputState = &vertexInputInfo;
                pipelineInfo.pRasterizationState = &rasterizationInfo;
                pipelineInfo.layout = *pipelineLayout;
                pipelineInfo.renderPass = *renderPass;
                pipelineInfo.subpass = 0;
                pipeline = device.create<Pipeline>(pipelineInfo);
            }

            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            void create_uniform_buffer()
            {

            }

            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            void create_descriptor_pool()
            {
                using namespace dst::vlkn;
                auto& device = renderPass->device();

                VkDescriptorPoolSize poolSize;
                poolSize.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                poolSize.descriptorCount = 1;
                auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
                descriptorPoolInfo.poolSizeCount = 1;
                descriptorPoolInfo.pPoolSizes = &poolSize;
                descriptorPoolInfo.maxSets = 1;
                descriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);

                auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
                descriptorSetInfo.descriptorPool = *descriptorPool;
                descriptorSetInfo.descriptorSetCount = 1;
                descriptorSetInfo.pSetLayouts = &descriptorSetLayout->handle();
                descriptorSet = descriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

                // Update Descriptor::Set
                sampler = device.create<Sampler>();

                VkDescriptorImageInfo imageInfo { };
                imageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
                imageInfo.imageView = *renderTarget->colorAttachment->view();
                imageInfo.sampler = *sampler;

                VkWriteDescriptorSet write { };
                write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
                write.dstSet = *descriptorSet;
                write.dstBinding = 0;
                write.dstArrayElement = 0;
                write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                write.descriptorCount = 1;
                write.pImageInfo = &imageInfo;
                vkUpdateDescriptorSets(
                    device,
                    1,
                    &write,
                    0,
                    nullptr
                );
            }

            ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            void initialize(
                dst::vlkn::Device& device,
                VkFormat format,
                VkFormat depthFormat,
                const std::string& vertexShaderSource,
                const std::string& fragmentShaderSource
            )
            {
                create_render_pass_and_target(device, format, depthFormat);
                create_descriptor_set_layout(device);
                create_pipeline(vertexShaderSource, fragmentShaderSource);
                // TODO : create_uniform_buffer();
                create_descriptor_pool();
            }
        };

        Resources mBloomExtractionResources;
        Resources mGaussianBlurResources;
        Resources mBloomCombineResourecs;

    public:
        dst::vlkn::Mesh mQuad;
        dst::vlkn::Command::Buffer* mCommandBuffer { nullptr };
        std::shared_ptr<dst::vlkn::Semaphore> mSemaphore;

    public:
        BloomComponent()
        {
            // Swap chain...
            // create_offscreen_render_pass()
            // create_render_target()
            // create_non_reflective_descriptor_set_layout()
            // create_offscreen_pipeline()
            // create_offscreen_uniform_buffer()
            // create_offscreen_descriptor_pool()
            // create_offscreen_descriptor_set()
            // create_offscreen_command_buffer()
            // create_offscreen_semaphores()
        }

    public:
        void initialize(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue
        )
        {
            using namespace dst::vlkn;
            mQuad.write<VertexPositionTexCoordColor, uint16_t>(
                commandPool,
                queue,
                std::vector<VertexPositionTexCoordColor> {
                    { { -1, -1, 0 }, { 0, 0 }, { dst::Color::White } },
                    { {  1, -1, 0 }, { 1, 0 }, { dst::Color::White } },
                    { {  1,  1, 0 }, { 1, 1 }, { dst::Color::White } },
                    { { -1,  1, 0 }, { 0, 1 }, { dst::Color::White } },
                },
                std::vector<uint16_t> { 0, 1, 2, 2, 3, 0 }
            );

            mCommandBuffer = commandPool.allocate<dst::vlkn::Command::Buffer>();

            mSemaphore = device.create<dst::vlkn::Semaphore>();

            VkFormat format = VK_FORMAT_B8G8R8A8_UNORM;
            std::array<VkFormat, 3> depthFormats {
                VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT
            };

            auto depthFormat = device.physical_device().find_supported_format(
                depthFormats,
                VK_IMAGE_TILING_OPTIMAL,
                VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
            );

            mBloomExtractionResources.initialize(
                device, format, depthFormat,
                R"(

                    #version 450
                    #extension GL_ARB_separate_shader_objects : enable

                    layout(location = 0) in vec3 vsPosition;
                    layout(location = 1) in vec2 vsTexCoord;
                    layout(location = 2) in vec4 vsColor;

                    layout(location = 0) out vec2 fsTexCoord;
                    layout(location = 1) out vec4 fsColor;

                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                        gl_Position = vec4(vsPosition, 1);
                        fsTexCoord = vsTexCoord;
                        fsColor = vsColor;
                    }

                )",
                R"(

                    #version 450
                    #extension GL_ARB_separate_shader_objects : enable

                    layout(binding = 1) uniform sampler2D image;

                    layout(location = 0) in vec2 fsTexCoord;
                    layout(location = 1) in vec4 fsColor;

                    layout(location = 0) out vec4 fragmentColor;

                    void main()
                    {
                        float threshold = 0.25;
                        fragmentColor = texture(image, fsTexCoord);
                        fragmentColor.rgb = (fragmentColor.rgb - vec3(threshold)) / (vec3(1) - vec3(threshold));
                    }

                )"
            );


            // 
            // mGaussianBlurResources.initialize(
            //     device, format, VK_FORMAT_UNDEFINED,
            //     R"(
            // 
            //         #version 450
            //         #extension GL_ARB_separate_shader_objects : enable
            // 
            //         layout(location = 0) in vec3 vsPosition;
            //         layout(location = 1) in vec2 vsTexCoord;
            //         layout(location = 2) in vec4 vsColor;
            // 
            //         layout(location = 0) out vec2 fsTexCoord;
            //         layout(location = 1) out vec4 fsColor;
            // 
            //         out gl_PerVertex
            //         {
            //             vec4 gl_Position;
            //         };
            // 
            //         void main()
            //         {
            //             gl_Position = vec4(vsPosition, 1);
            //             fsTexCoord = vsTexCoord;
            //             fsColor = vsColor;
            //         }
            // 
            //     )",
            //     R"(
            // 
            //         #version 450
            //         #extension GL_ARB_separate_shader_objects : enable
            // 
            //         layout(binding = 1) uniform sampler2D image;
            // 
            //         layout(location = 0) in vec2 fsTexCoord;
            //         layout(location = 1) in vec4 fsColor;
            // 
            //         layout(location = 0) out vec4 fragmentColor;
            // 
            //         float weights[] {
            //             0.227027,
            //             0.1945946,
            //             0.1216216,
            //             0.054054,
            //             0.016216,
            //         };
            // 
            //         vec3 gaussian_sample(vec2 offset, int weightIndex)
            //         {
            //             float BLUR_STRENGTH = 1;
            //             return
            //                 (texture(image, fsTexCoord + offset) * weights[weightIndex] * BLUR_STRENGTH) +
            //                 (texture(image, fsTexCoord - offset) * weights[weightIndex] * BLUR_STRENGTH);
            //         }
            // 
            //         void main()
            //         {
            //             float BLUR_SCALE = 1;
            //             vec2 offset = 1.0 textureSize(image, 0) * BLUR_SCALE;
            // 
            //             float threshold = 0.25;
            //             fragmentColor = texture(image, fsTexCoord);
            //             fragmentColor.rgb = (fragmentColor.rgb - vec3(threshold)) / (vec3(1) - vec3(threshold));
            //         }
            // 
            //     )"
            // );

            // mBloomCombineResourecs.initialize(
            //     device, format, VK_FORMAT_UNDEFINED,
            //     R"(
            // 
            // 
            // 
            //     )",
            //     R"(
            // 
            // 
            // 
            //     )"
            // );
        }

        void begin()
        {
            using namespace dst::vlkn;

            auto renderPassBeginInfo = RenderPass::BeginInfo;
            const auto& renderTarget = *mBloomExtractionResources.renderTarget;
            renderPassBeginInfo.renderPass = *mBloomExtractionResources.renderPass;
            renderPassBeginInfo.framebuffer = *renderTarget.framebuffer;

            VkExtent2D extent;
            extent.width = renderTarget.extent().width;
            extent.height = renderTarget.extent().height;
            renderPassBeginInfo.renderArea.extent = extent;

            std::array<VkClearValue, 2> clearValues;
            clearValues[0].color = { 0, 0, 0, 0 };
            clearValues[1].depthStencil = { 1, 0 };
            renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
            renderPassBeginInfo.pClearValues = clearValues.data();

            mCommandBuffer->begin();
            mCommandBuffer->begin_render_pass(renderPassBeginInfo);

            VkViewport viewport { };
            viewport.width = static_cast<float>(extent.width);
            viewport.height = static_cast<float>(extent.height);
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            mCommandBuffer->set_viewport(viewport);

            VkRect2D scissor { };
            scissor.extent = extent;
            mCommandBuffer->set_scissor(scissor);
        }

        void end()
        {
            mCommandBuffer->end_render_pass();
            mCommandBuffer->end();
        }
    };

} // namespace ShapeBlaster
