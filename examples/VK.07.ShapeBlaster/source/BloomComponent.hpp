
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

#include <memory>

namespace ShapeBlaster {

    class BloomComponent final
    {
    public:
        static constexpr uint32_t Width { 1280 };
        static constexpr uint32_t Height { 720 };

    public:
        BloomSettings settings;

    private:
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

                auto descriptorSetLayoutInfo = dst::vlkn::Descriptor::Set::Layout::CreateInfo;
                descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBinding.size());
                descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBinding.data();
                descriptorSetLayout = device.create<dst::vlkn::Descriptor::Set::Layout>(descriptorSetLayoutInfo);
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
                    vertexShader->pipeline_stage_info(),
                    fragmentShader->pipeline_stage_info()
                };

                VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo { };
                inputAssemblyInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
                inputAssemblyInfo.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
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
            }
        };

        Resources mBloomExtractionResources;
        Resources mHorizontalBlurResources;
        Resources mVerticalBlurResources;
        Resources mBloomCombineResourecs;

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

        ~BloomComponent()
        {

        }

    public:
        void initialize(dst::vlkn::Device& device)
        {
            VkFormat format = VK_FORMAT_R8G8B8A8_UNORM;
            VkFormat depthFormat = VK_FORMAT_UNDEFINED;

            mBloomExtractionResources.initialize(
                device, format, depthFormat,
                R"(



                )",
                R"(



                )"
            );

            mHorizontalBlurResources.initialize(
                device, format, VK_FORMAT_UNDEFINED,
                R"(



                )",
                R"(



                )"
            );

            mVerticalBlurResources.initialize(
                device, format, VK_FORMAT_UNDEFINED,
                R"(



                )",
                R"(



                )"
            );

            mBloomCombineResourecs.initialize(
                device, format, VK_FORMAT_UNDEFINED,
                R"(



                )",
                R"(



                )"
            );
        }

        void begin()
        {

        }

        void end()
        {

        }
    };

} // namespace ShapeBlaster
