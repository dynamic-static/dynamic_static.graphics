
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders an action arcade game
// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559s

#pragma once

#include "BlackHole_ex.hpp"
#include "Bullet_ex.hpp"
#include "Entity_ex.Manager.hpp"
#include "Entity_ex.Spawner.hpp"
#include "Player_ex.hpp"
#include "Seeker_ex.hpp"
#include "Sprite_ex.hpp"
#include "Sprite_ex.Pipeline.hpp"
#include "Sprite_ex.Pool.hpp"
#include "Wanderer_ex.hpp"

#include "Dynamic_Static/Core/FileSystem.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Effects/Bloom.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ImGui/ImGui.hpp"

#include <memory>
#include <stdexcept>
#include <string>
#include <utility>
#include <unordered_map>

namespace ShapeBlaster_ex {

    class Game final
        : public dst::vlkn::Application
    {
    private:
        struct EffectPipeline final
        {
            std::shared_ptr<dst::vlkn::RenderTarget> inputTarget;
            std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> descriptorSetLayout;
            std::shared_ptr<dst::vlkn::Pipeline::Layout> pipelineLayout;
            std::shared_ptr<dst::vlkn::Pipeline> pipeline;
            std::shared_ptr<dst::vlkn::Descriptor::Pool> descriptorPool;
            dst::vlkn::Descriptor::Set* descriptorSet { nullptr };
        };

        struct GaussianBlurSettings final
        {
            dst::Vector2 axis;
            float weight { 1 };
            float strength { 1.5f };
        } mBlurSettings;

        struct BloomCombineSettings final
        {
            float bloomIntensity { 1.25f };
            float baseIntensity { 1 };
            float bloomSaturation { 1 };
            float baseSaturation { 1 };
        } mBloomCombineSettings;

        float mExtractLuminanceThreshold { 0.25f };

        struct BloomSettings final
        {
            float threshold { 0.25f };

            struct GaussianBlurSettings final
            {
                dst::Vector2 axis;
                float weight { 1 };
                float strength { 1.5f };
            } gaussianBlur;

            struct Combine final
            {
                float baseIntensity { 1 };
                float baseSaturation { 1 };
                float bloomIntensity { 1.25f };
                float bloomSaturation { 1 };
            } combine;
        } mBloomSettings;

        std::shared_ptr<dst::vlkn::RenderPass> mEffectRenderPass;
        std::shared_ptr<dst::vlkn::Sampler> mEffectSampler;
        std::shared_ptr<dst::vlkn::Semaphore> mEffectSemaphore;
        dst::vlkn::Command::Buffer* mEffectCommandBuffer { nullptr };
        EffectPipeline mExtractLuminanceEffect;
        EffectPipeline mGaussianBlurHorizontalEffect;
        EffectPipeline mGaussianBlurVerticalEffect;
        EffectPipeline mBloomCombineEffect;

        dst::vlkn::ImGUI mGui;
        std::string mGameStatusMessage;
        Sprite* mPointerSprite { nullptr };
        Sprite::Pipeline mSpritePipeline;
        std::unordered_map<std::string, std::unique_ptr<Sprite::Pool>> mSpritePools;
        Entity::Spawner mEntitySpawner;
        Entity::Manager<
            Player,
            Bullet,
            Seeker,
            Wanderer,
            BlackHole
        > mEntityManager;

    public:
        Game()
        {
            name("Dynamic_Static VK.08.ShapeBlaster");
            mClearColor = dst::Color::Black;
            mDebugFlags =
                0
                #if defined(DYNAMIC_STATIC_WINDOWS)
                // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
                // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
                // | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
                // | VK_DEBUG_REPORT_WARNING_BIT_EXT
                // | VK_DEBUG_REPORT_ERROR_BIT_EXT
                #endif
                ;
        }

    private:
        Sprite::Pool* create_sprite_pool(const std::string& fileName, size_t count)
        {
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto filePath = dst::Path::combine(resourcePath, fileName) + ".png";
            auto spritePool = std::make_unique<Sprite::Pool>(*mGraphicsQueue, mSpritePipeline, filePath, count);
            auto result = mSpritePools.insert(std::make_pair(fileName, std::move(spritePool)));
            assert(result.second);
            assert(result.first->second.get());
            return result.first->second.get();
        }

        template <typename EntityType>
        void create_entities(const std::string& fileName, size_t count)
        {
            auto spritePool = create_sprite_pool(fileName, count);
            while (spritePool->available_count() > 0) {
                mEntityManager.create<EntityType>(spritePool->check_out());
            }
        }

        void setup() override
        {
            dst::vlkn::Application::setup();
            mWindow->cursor_mode(dst::gfx::Window::CursorMode::Hidden);
            mGui = dst::vlkn::ImGUI(*mDevice, *mRenderPass, *mGraphicsQueue);
            ImGui::GetIO().DisplaySize = ImVec2(1280, 720);
            ImGui::GetIO().DisplayFramebufferScale = ImVec2(1, 1);

            mSpritePipeline = Sprite::Pipeline(*mDevice, *mRenderPass);
            mPointerSprite = create_sprite_pool("Pointer", 1)->check_out();
            create_entities<Player>("Player", 1);
            create_entities<Bullet>("Bullet", 64);
            create_entities<Seeker>("Seeker", 8);
            create_entities<Wanderer>("Wanderer", 8);
            create_entities<BlackHole>("Black Hole", 4);
            mEntityManager.lock();

            // mBloom = std::make_unique<dst::vlkn::Bloom>(*mDevice, *mRenderPass, 1280, 720);
            create_effect_passes();
        }

        void create_effect_passes()
        {
            using namespace dst::vlkn;
            create_effect_render_pass();
            mEffectSampler = mDevice->create<Sampler>();
            mEffectSemaphore = mDevice->create<Semaphore>();
            mEffectCommandBuffer = mCommandPool->allocate<Command::Buffer>();
            uint32_t width = 1280;
            uint32_t height = 720;

            mExtractLuminanceEffect = create_effect_pipline<float>(
                width, height, nullptr,
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
                        fragmentColor.rgb =
                            (fragmentColor.rgb - vec3(pushConstants.threshold)) /
                            (vec3(1)           - vec3(pushConstants.threshold));
                    }

                )"
            );

            mGaussianBlurHorizontalEffect = create_effect_pipline<GaussianBlurSettings>(
                width, height, nullptr,
                R"(

                    #version 450

                    layout(binding = 0) uniform sampler2D image;

                    layout(location = 0) in vec2 fsTexCoord;

                    layout(location = 0) out vec4 fragmentColor;

                    layout(push_constant) uniform PushConstants
                    {
                        vec2 axis;
                        float scale;
                        float strength;
                    } pushConstants;

                    void main()
                    {
                        float weight[5];
                        weight[0] = 0.227027;
                        weight[1] = 0.1945946;
                        weight[2] = 0.1216216;
                        weight[3] = 0.054054;
                        weight[4] = 0.016216;

                        vec2 texelSize = 1.0 / textureSize(image, 0) * pushConstants.scale;
                        fragmentColor = texture(image, fsTexCoord) * weight[0];
                        for (int i = 1; i < 5; ++i) {
                            fragmentColor += texture(image, fsTexCoord + vec2(texelSize.x * i, 0)) * weight[i] * pushConstants.strength;
                            fragmentColor += texture(image, fsTexCoord - vec2(texelSize.x * i, 0)) * weight[i] * pushConstants.strength;
                        }
                    }

                )"
            );

            mGaussianBlurVerticalEffect = create_effect_pipline<GaussianBlurSettings>(
                width, height, nullptr,
                R"(

                    #version 450

                    layout(binding = 0) uniform sampler2D image;

                    layout(location = 0) in vec2 fsTexCoord;

                    layout(location = 0) out vec4 fragmentColor;

                    layout(push_constant) uniform PushConstants
                    {
                        vec2 axis;
                        float scale;
                        float strength;
                    } pushConstants;

                    void main()
                    {
                        float weight[5];
                        weight[0] = 0.227027;
                        weight[1] = 0.1945946;
                        weight[2] = 0.1216216;
                        weight[3] = 0.054054;
                        weight[4] = 0.016216;

                        vec2 texelSize = 1.0 / textureSize(image, 0) * pushConstants.scale;
                        fragmentColor = texture(image, fsTexCoord) * weight[0];
                        for (int i = 1; i < 5; ++i) {
                            fragmentColor += texture(image, fsTexCoord + vec2(0, texelSize.y * i)) * weight[i] * pushConstants.strength;
                            fragmentColor += texture(image, fsTexCoord - vec2(0, texelSize.y * i)) * weight[i] * pushConstants.strength;
                        }
                    }

                )"
            );

            mBloomCombineEffect = create_effect_pipline<BloomCombineSettings>(
                width, height, mExtractLuminanceEffect.inputTarget.get(),
                R"(

                    #version 450

                    layout(binding = 0) uniform sampler2D image;
                    layout(binding = 1) uniform sampler2D blurredLuminance;

                    layout(location = 0) in vec2 fsTexCoord;

                    layout(location = 0) out vec4 fragmentColor;

                    layout(push_constant) uniform PushConstants
                    {
                        float bloomIntensity;
                        float baseIntensity;
                        float bloomSaturation;
                        float baseSaturation;
                    } pushConstants;

                    vec4 adjust_saturation(vec4 color, float saturation)
                    {
                        float grey = dot(color.rgb, vec3(0.3, 0.59, 0.11));
                        color.rgb = mix(vec3(grey), color.rgb, saturation);
                        return color;
                    }

                    void main()
                    {
                        vec4 base = texture(image, fsTexCoord);
                        vec4 bloom = texture(blurredLuminance, fsTexCoord);
                        // bloom = adjust_saturation(bloom, pushConstants.bloomSaturation) * pushConstants.bloomIntensity;
                        // base = adjust_saturation(base, pushConstants.baseSaturation) * pushConstants.baseIntensity;
                        // base *= (1 - clamp(bloom, 0, 1));
                        bloom *= 1 - base.a;
                        bloom.a *= 0.48;
                        fragmentColor = base + bloom;
                    }

                )"
            );
        }

        void create_effect_render_pass()
        {
            using namespace dst::vlkn;
            std::array<VkAttachmentDescription, 2> attachmentDescriptions { };
            VkAttachmentReference colorAttachmentReference { };
            VkAttachmentReference depthAttachmentReference { };

            attachmentDescriptions[0].format = mRenderPass->format();
            attachmentDescriptions[0].samples = VK_SAMPLE_COUNT_1_BIT;
            attachmentDescriptions[0].loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            attachmentDescriptions[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
            attachmentDescriptions[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            attachmentDescriptions[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            attachmentDescriptions[0].initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            attachmentDescriptions[0].finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            colorAttachmentReference.attachment = 0;
            colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

            if (mRenderPass->depth_format()) {
                attachmentDescriptions[1].format = mRenderPass->depth_format();
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
            subpassDescription.pDepthStencilAttachment = mRenderPass->depth_format() ? &depthAttachmentReference : nullptr;

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
            renderPassInfo.attachmentCount = mRenderPass->depth_format() ? 2 : 1;
            renderPassInfo.pAttachments = attachmentDescriptions.data();
            renderPassInfo.subpassCount = 1;
            renderPassInfo.pSubpasses = &subpassDescription;
            renderPassInfo.dependencyCount = static_cast<uint32_t>(dependencies.size());
            renderPassInfo.pDependencies = dependencies.data();
            mEffectRenderPass = mDevice->create<RenderPass>(renderPassInfo);
        }

        template <typename PushConstantType>
        EffectPipeline create_effect_pipline(
            uint32_t width,
            uint32_t height,
            dst::vlkn::RenderTarget* input,
            const std::string& fragmentShaderSource
        )
        {
            using namespace dst::vlkn;
            EffectPipeline effectPass { };

            VkDescriptorSetLayoutBinding samplerBinding0 { };
            samplerBinding0.binding = 0;
            samplerBinding0.descriptorCount = 1;
            samplerBinding0.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            samplerBinding0.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

            VkDescriptorSetLayoutBinding samplerBinding1 { };
            samplerBinding1.binding = 1;
            samplerBinding1.descriptorCount = 1;
            samplerBinding1.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            samplerBinding1.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

            std::array<VkDescriptorSetLayoutBinding, 2> samplerBindings {
                samplerBinding0,
                samplerBinding1,
            };

            auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
            descriptorSetLayoutInfo.bindingCount = (input ? 2 : 1);
            descriptorSetLayoutInfo.pBindings = samplerBindings.data();
            effectPass.descriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

            VkPushConstantRange pushConstantRange { };
            pushConstantRange.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            pushConstantRange.size = static_cast<uint32_t>(sizeof(PushConstantType));

            auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &effectPass.descriptorSetLayout->handle();
            pipelineLayoutInfo.pushConstantRangeCount = 1;
            pipelineLayoutInfo.pPushConstantRanges = &pushConstantRange;
            effectPass.pipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

            auto vertexShader = mDevice->create<ShaderModule>(
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

            auto fragmentShader = mDevice->create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                ShaderModule::Source::Code,
                fragmentShaderSource
            );

            std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
                vertexShader->pipeline_stage_create_info(),
                fragmentShader->pipeline_stage_create_info()
            };

            auto pipelineInfo = Pipeline::GraphicsCreateInfo;
            pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
            pipelineInfo.pStages = shaderStages.data();
            pipelineInfo.layout = *effectPass.pipelineLayout;
            pipelineInfo.renderPass = *mEffectRenderPass;
            effectPass.pipeline = mDevice->create<Pipeline>(pipelineInfo);

            effectPass.inputTarget = std::make_unique<RenderTarget>(*mEffectRenderPass, width, height, mEffectRenderPass->format(), mEffectRenderPass->depth_format());

            VkDescriptorPoolSize descriptorPoolSize { };
            descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorPoolSize.descriptorCount = (input ? 2 : 1);
            auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
            descriptorPoolInfo.poolSizeCount = 1;
            descriptorPoolInfo.pPoolSizes = &descriptorPoolSize;
            descriptorPoolInfo.maxSets = 1;
            effectPass.descriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

            auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
            descriptorSetInfo.descriptorPool = *effectPass.descriptorPool;
            descriptorSetInfo.descriptorSetCount = 1;
            descriptorSetInfo.pSetLayouts = &effectPass.descriptorSetLayout->handle();
            effectPass.descriptorSet = effectPass.descriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

            VkDescriptorImageInfo descriptorImageInfo0 { };
            descriptorImageInfo0.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            descriptorImageInfo0.imageView = *effectPass.inputTarget->colorAttachment->view();
            descriptorImageInfo0.sampler = *mEffectSampler;

            VkWriteDescriptorSet descriptorWrite0 { };
            descriptorWrite0.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            descriptorWrite0.dstBinding = 0;
            descriptorWrite0.dstSet = *effectPass.descriptorSet;
            descriptorWrite0.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorWrite0.descriptorCount = 1;
            descriptorWrite0.pImageInfo = &descriptorImageInfo0;

            VkDescriptorImageInfo descriptorImageInfo1 { };
            descriptorImageInfo1.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            descriptorImageInfo1.sampler = *mEffectSampler;
            if (input) {
                descriptorImageInfo1.imageView = *input->colorAttachment->view();
            }

            VkWriteDescriptorSet descriptorWrite1 { };
            descriptorWrite1.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            descriptorWrite1.dstBinding = 1;
            descriptorWrite1.dstSet = *effectPass.descriptorSet;
            descriptorWrite1.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorWrite1.descriptorCount = 1;
            descriptorWrite1.pImageInfo = &descriptorImageInfo1;

            std::array<VkWriteDescriptorSet, 2> descriptorWrites {
                descriptorWrite0,
                descriptorWrite1,
            };

            vkUpdateDescriptorSets(*mDevice, (input ? 2 : 1), descriptorWrites.data(), 0, nullptr);

            return effectPass;
        }

        void update(const dst::Clock& clock, const dst::Input& input) override final
        {
            if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
                stop();
            }

            mGameStatusMessage = "Hi Score : 0";
            mWindow->name("Dynamic_Static VK.08.ShapeBlaster        " + mGameStatusMessage);
            auto extent = mSwapchain->extent();
            auto playArea = dst::Vector2(extent.width, extent.height);

            mGui.begin_frame(clock, input, playArea);
            mPointerSprite->position = input.mouse().position();
            mPointerSprite->position.y = playArea.y - mPointerSprite->position.y;
            mPointerSprite->position.x += mPointerSprite->image->extent().width * 0.5f;
            mPointerSprite->position.y -= mPointerSprite->image->extent().height * 0.5f;
            mEntityManager.update(clock, input, playArea);
            mEntitySpawner.update(clock, playArea, mEntityManager);
            for (auto& spritePool : mSpritePools) {
                spritePool.second->update(playArea);
            }

            ImGui::ShowTestWindow();

            if (mGui.end_frame()) {
                force_record_command_buffers();
            }
        }

        void render(const dst::Clock& clock) override final
        {
            // NOTE : render(), record_command_buffer(), and mRecordCommandBuffers are dumb...
            //        Recording needs to be handled in a more sensible way.  Application needs
            //        to be refactored in general anyway.
            using namespace dst::vlkn;
            if (mSwapchain->valid() && mRecordCommandBuffers) {
                mEffectCommandBuffer->begin();

                begin_effect_render_pass(*mExtractLuminanceEffect.inputTarget);
                for (auto& spritePool : mSpritePools) {
                    if (spritePool.first != "Pointer") {
                        spritePool.second->draw(*mEffectCommandBuffer);
                    }
                }
                mEffectCommandBuffer->end_render_pass();

                begin_effect_render_pass(*mGaussianBlurHorizontalEffect.inputTarget);
                vkCmdPushConstants(*mEffectCommandBuffer, *mExtractLuminanceEffect.pipelineLayout, VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(float), &mExtractLuminanceThreshold);
                mEffectCommandBuffer->bind_descriptor_set(*mExtractLuminanceEffect.descriptorSet, *mExtractLuminanceEffect.pipelineLayout);
                mEffectCommandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mExtractLuminanceEffect.pipeline);
                mEffectCommandBuffer->draw(3);
                mEffectCommandBuffer->end_render_pass();

                begin_effect_render_pass(*mGaussianBlurVerticalEffect.inputTarget);
                vkCmdPushConstants(*mEffectCommandBuffer, *mGaussianBlurHorizontalEffect.pipelineLayout, VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(GaussianBlurSettings), &mBlurSettings);
                mEffectCommandBuffer->bind_descriptor_set(*mGaussianBlurHorizontalEffect.descriptorSet, *mGaussianBlurHorizontalEffect.pipelineLayout);
                mEffectCommandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mGaussianBlurHorizontalEffect.pipeline);
                mEffectCommandBuffer->draw(3);
                mEffectCommandBuffer->end_render_pass();

                begin_effect_render_pass(*mBloomCombineEffect.inputTarget);
                vkCmdPushConstants(*mEffectCommandBuffer, *mGaussianBlurVerticalEffect.pipelineLayout, VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(GaussianBlurSettings), &mBlurSettings);
                mEffectCommandBuffer->bind_descriptor_set(*mGaussianBlurVerticalEffect.descriptorSet, *mGaussianBlurVerticalEffect.pipelineLayout);
                mEffectCommandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mGaussianBlurVerticalEffect.pipeline);
                mEffectCommandBuffer->draw(3);
                mEffectCommandBuffer->end_render_pass();

                mEffectCommandBuffer->end();
            }
        }

        void begin_effect_render_pass(const dst::vlkn::RenderTarget& renderTarget)
        {
            using namespace dst::vlkn;
            std::array<VkClearValue, 2> clearValues;
            clearValues[0].color = { 0, 0, 0, 0 };
            clearValues[1].depthStencil = { 1, 0 };
            auto renderPassBeginInfo = RenderPass::BeginInfo;
            renderPassBeginInfo.renderPass = *mEffectRenderPass;
            renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
            renderPassBeginInfo.pClearValues = clearValues.data();

            VkExtent2D extent { };
            extent.width = renderTarget.extent().width;
            extent.height = renderTarget.extent().height;
            renderPassBeginInfo.renderArea.extent = extent;
            renderPassBeginInfo.framebuffer = *renderTarget.framebuffer;
            VkViewport viewport { };
            viewport.width = static_cast<float>(extent.width);
            viewport.height = static_cast<float>(extent.height);
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            VkRect2D scissor { };
            scissor.extent = extent;
            mEffectCommandBuffer->begin_render_pass(renderPassBeginInfo);
            mEffectCommandBuffer->set_viewport(viewport);
            mEffectCommandBuffer->set_scissor(scissor);
        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {
            vkCmdPushConstants(commandBuffer, *mBloomCombineEffect.pipelineLayout, VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(BloomCombineSettings), &mBloomCombineSettings);
            commandBuffer.bind_descriptor_set(*mBloomCombineEffect.descriptorSet, *mBloomCombineEffect.pipelineLayout);
            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mBloomCombineEffect.pipeline);
            commandBuffer.draw(3);

            mGui.draw(commandBuffer);

            VkExtent2D extent { };
            extent.width = mSwapchain->extent().width;
            extent.height = mSwapchain->extent().height;
            VkViewport viewport { };
            viewport.width = static_cast<float>(extent.width);
            viewport.height = static_cast<float>(extent.height);
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            VkRect2D scissor { };
            scissor.extent = extent;
            commandBuffer.set_viewport(viewport);
            commandBuffer.set_scissor(scissor);

            auto itr = mSpritePools.find("Pointer");
            if (itr != mSpritePools.end()) {
                itr->second->draw(commandBuffer);
            }
        }

        void submit_command_buffer() override final
        {
            // NOTE : Like render() and record_command_buffer(), submit_command_buffer()
            //        needs to be reworked when Application is refactored...
            using namespace dst::vlkn;
            if (mSwapchain->valid()) {
                auto submitInfo = Queue::SubmitInfo;
                submitInfo.commandBufferCount = 1;
                submitInfo.pCommandBuffers = &mEffectCommandBuffer->handle();
                submitInfo.signalSemaphoreCount = 1;
                submitInfo.pSignalSemaphores = &mEffectSemaphore->handle();
                mGraphicsQueue->submit(submitInfo);

                std::array<VkSemaphore, 2> waitSemaphores {
                    *mEffectSemaphore,
                    *mImageSemaphore,
                };

                std::array<VkPipelineStageFlags, 2> waitStages {
                    VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                    VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                };

                submitInfo = Queue::SubmitInfo;
                submitInfo.waitSemaphoreCount = static_cast<uint32_t>(waitSemaphores.size());
                submitInfo.pWaitSemaphores = waitSemaphores.data();
                submitInfo.pWaitDstStageMask = waitStages.data();
                submitInfo.commandBufferCount = 1;
                submitInfo.pCommandBuffers = &mCommandPool->buffers()[mImageIndex]->handle();
                submitInfo.signalSemaphoreCount = 1;
                submitInfo.pSignalSemaphores = &mRenderSemaphore->handle();
                mGraphicsQueue->submit(submitInfo);

                auto presentInfo = Queue::PresentInfoKHR;
                presentInfo.waitSemaphoreCount = 1;
                presentInfo.pWaitSemaphores = &mRenderSemaphore->handle();
                presentInfo.swapchainCount = 1;
                presentInfo.pSwapchains = &mSwapchain->handle();
                presentInfo.pImageIndices = &mImageIndex;
                mPresentQueue->present(presentInfo);
            }
        }
    };

} // namespace ShapeBlaster_ex

int main_ex()
{
    try {
        ShapeBlaster_ex::Game game;
        game.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
