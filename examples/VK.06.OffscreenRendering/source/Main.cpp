
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders a box and its reflection using an offscreen RenderTarget.
// Based on https://github.com/SaschaWillems/Vulkan/tree/master/offscreen

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Camera.hpp"
#include "Dynamic_Static/Graphics/FreeCameraController.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/System/Window.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>
#include <utility>

struct UniformBuffer final
{
    glm::mat4 world;
    glm::mat4 view;
    glm::mat4 projection;
};

class VulkanExample06OffscreenRendering final
    : public dst::vlkn::Application
{
private:
    dst::vlkn::Command::Buffer* mReflectionCommandBuffer { nullptr };
    std::shared_ptr<dst::vlkn::RenderPass> mReflectionRenderPass;
    std::unique_ptr<dst::vlkn::RenderTarget> mReflectionRenderTarget;
    std::shared_ptr<dst::vlkn::Semaphore> mReflectionSemaphore;
    std::shared_ptr<dst::vlkn::Sampler> mSampler;

    std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mNonReflectiveSurfaceDescriptorSetLayout;
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mNonReflectiveSurfacePipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mNonReflectiveSurfacePipeline;
    std::shared_ptr<dst::vlkn::Descriptor::Pool> mNonReflectiveSurfaceDescriptorPool;

    std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mReflectiveSurfaceDescriptorSetLayout;
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mReflectiveSurfacePipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mReflectiveSurfacePipeline;
    std::shared_ptr<dst::vlkn::Descriptor::Pool> mReflectiveSurfaceDescriptorPool;

    float t { };
    bool animate { true };
    dst::vlkn::Mesh mCubeMesh;
    glm::quat mCubeRotation { };
    std::shared_ptr<dst::vlkn::Buffer> mCubeUniformBuffer;
    dst::vlkn::Descriptor::Set* mCubeDescriptorSet { nullptr };
    std::shared_ptr<dst::vlkn::Buffer> mCubeReflectionUniformBuffer;
    dst::vlkn::Descriptor::Set* mCubeReflectionDescriptorSet { nullptr };

    dst::vlkn::Mesh mFloorMesh;
    std::shared_ptr<dst::vlkn::Buffer> mFloorUniformBuffer;
    dst::vlkn::Descriptor::Set* mFloorDescriptorSet { nullptr };

    dst::gfx::Camera mCamera;
    dst::gfx::FreeCameraController mCameraController;

public:
    VulkanExample06OffscreenRendering()
    {
        set_name("Dynamic_Static VK.06.OffscreenRendering");
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
    void setup() override
    {
        // NOTE : This "configuration" is dumb...but it'll do for now.
        mDepthEnabled = true;

        dst::vlkn::Application::setup();
        create_reflection_command_buffer_and_semaphore();
        create_reflection_render_pass_and_target();
        create_non_reflective_surface_layouts_and_pipeline();
        create_reflective_surface_layouts_and_pipeline();
        create_non_reflective_surface_descriptor_pool();
        create_reflective_surface_descriptor_pool();
        create_meshes();
        create_uniform_buffers();
        write_cube_descriptor_sets();
        write_floor_descriptor_set();

        mCamera.get_transform().translation = glm::vec3 { 0, 2, 7 };
        mCameraController.camera = &mCamera;
    }

    void create_reflection_command_buffer_and_semaphore()
    {
        using namespace dst::vlkn;
        mReflectionCommandBuffer = mCommandPool->allocate<Command::Buffer>();
        mReflectionSemaphore = mDevice->create<Semaphore>();
    }

    void create_reflection_render_pass_and_target()
    {
        using namespace dst::vlkn;
        auto colorAttachmentDescription = RenderPass::AttachmentDescription;
        colorAttachmentDescription.format = mRenderPass->format();
        colorAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        colorAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        colorAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        colorAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        VkAttachmentReference colorAttachmentReference { };
        colorAttachmentReference.attachment = 0;
        colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

        auto depthAttachmentDescription = RenderPass::AttachmentDescription;
        depthAttachmentDescription.format = mRenderPass->depth_format();
        depthAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        depthAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        depthAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        VkAttachmentReference depthAttachmentReference { };
        depthAttachmentReference.attachment = 1;
        depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

        std::array<VkAttachmentDescription, 2> attachmentDescriptions {
            colorAttachmentDescription,
            depthAttachmentDescription,
        };

        VkSubpassDescription subpassDescription { };
        subpassDescription.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpassDescription.colorAttachmentCount = 1;
        subpassDescription.pColorAttachments = &colorAttachmentReference;
        subpassDescription.pDepthStencilAttachment = &depthAttachmentReference;

        std::array<VkSubpassDependency, 2> dependencies;
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
        renderPassInfo.attachmentCount = static_cast<uint32_t>(attachmentDescriptions.size());
        renderPassInfo.pAttachments = attachmentDescriptions.data();
        renderPassInfo.subpassCount = 1;
        renderPassInfo.pSubpasses = &subpassDescription;
        renderPassInfo.dependencyCount = static_cast<uint32_t>(dependencies.size());
        renderPassInfo.pDependencies = dependencies.data();
        mReflectionRenderPass = mDevice->create<RenderPass>(renderPassInfo);
        mReflectionRenderTarget = std::make_unique<RenderTarget>(*mReflectionRenderPass, 1024, 1024);
        mSampler = mDevice->create<Sampler>();
    }

    void create_non_reflective_surface_layouts_and_pipeline()
    {
        using namespace dst::vlkn;
        VkDescriptorSetLayoutBinding uniformBufferLayoutBinding { };
        uniformBufferLayoutBinding.binding = 0;
        uniformBufferLayoutBinding.descriptorCount = 1;
        uniformBufferLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        uniformBufferLayoutBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

        auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
        descriptorSetLayoutInfo.bindingCount = 1;
        descriptorSetLayoutInfo.pBindings = &uniformBufferLayoutBinding;
        mNonReflectiveSurfaceDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mNonReflectiveSurfaceDescriptorSetLayout->handle();
        mNonReflectiveSurfacePipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

        mNonReflectiveSurfacePipeline = create_pipeline(
            *mRenderPass,
            *mNonReflectiveSurfaceDescriptorSetLayout,
            *mNonReflectiveSurfacePipelineLayout,
            VK_CULL_MODE_NONE,
            R"(

                #version 450

                layout(binding = 0)
                uniform UniformBuffer
                {
                    mat4 world;
                    mat4 view;
                    mat4 projection;
                } ubo;

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
                    gl_Position = ubo.projection * ubo.view * ubo.world * vec4(vsPosition, 1);
                    fsTexCoord = vsTexCoord;
                    fsColor = vsColor;
                }

            )",
            R"(

                #version 450

                layout(location = 0) in vec2 fsTexCoord;
                layout(location = 1) in vec4 fsColor;

                layout(location = 0) out vec4 fragColor;

                void main()
                {
                    fragColor = fsColor;
                }

            )"
        );
    }

    void create_reflective_surface_layouts_and_pipeline()
    {
        using namespace dst::vlkn;
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

        auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
        descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBindings.size());
        descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBindings.data();
        mReflectiveSurfaceDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mReflectiveSurfaceDescriptorSetLayout->handle();
        mReflectiveSurfacePipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

        mReflectiveSurfacePipeline = create_pipeline(
            *mRenderPass,
            *mReflectiveSurfaceDescriptorSetLayout,
            *mReflectiveSurfacePipelineLayout,
            VK_CULL_MODE_BACK_BIT,
            R"(

                #version 450

                layout(binding = 0)
                uniform UniformBuffer
                {
                    mat4 world;
                    mat4 view;
                    mat4 projection;
                } ubo;

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec2 vsTexCoord;
                layout(location = 2) in vec4 vsColor;

                layout(location = 0) out vec4 fsPosition;
                layout(location = 1) out vec2 fsTexCoord;
                layout(location = 2) out vec4 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    fsPosition = ubo.projection * ubo.view * ubo.world * vec4(vsPosition, 1);
                    gl_Position = fsPosition;
                    fsTexCoord = vsTexCoord;
                    fsColor = vsColor;
                }

            )",
            R"(

                #version 450

                layout(binding = 1) uniform sampler2D reflectionImage;

                layout(location = 0) in vec4 fsPosition;
                layout(location = 1) in vec2 fsTexCoord;
                layout(location = 2) in vec4 fsColor;

                layout(location = 0) out vec4 fragColor;

                void main()
                {
                    vec2 reflectionTexCoord = fsPosition.xy * (1.0 / fsPosition.w);
                    reflectionTexCoord += vec2(1);
                    reflectionTexCoord *= 0.5;

                    vec4 reflection = texture(reflectionImage, reflectionTexCoord);
                    reflection.a *= 0.34;
                    reflection.rgb *= reflection.a;
                    reflection.rgb *= step(0.001, dot(fsTexCoord, vec2(0.5)));

                    fragColor.rb = fsTexCoord * (1 - reflection.a);
                    fragColor.g = dot(fragColor.rb, vec2(0.5)) * 0.5;
                    fragColor.rgb += reflection.rgb;
                    fragColor.a = 1;
                }

            )"
        );
    }

    std::shared_ptr<dst::vlkn::Pipeline> create_pipeline(
        dst::vlkn::RenderPass& renderPass,
        dst::vlkn::Descriptor::Set::Layout& descriptorSetLayout,
        dst::vlkn::Pipeline::Layout& pipelineLayout,
        VkCullModeFlags cullMode,
        const std::string& vertexShaderSource,
        const std::string& fragmentShaderSource
    )
    {
        using namespace dst::vlkn;
        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            vertexShaderSource
        );

        auto fragmentShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            fragmentShaderSource
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_create_info(),
            fragmentShader->pipeline_stage_create_info(),
        };

        auto vertexBindingDescription = binding_description<VertexPositionTexCoordColor>();
        auto vertexAttributeDescriptions = attribute_descriptions<VertexPositionTexCoordColor>();
        auto vertexInputState = Pipeline::VertexInputStateCreateInfo;
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        auto depthStencilInfo = Pipeline::DepthStencilStateCreateInfo;
        depthStencilInfo.depthTestEnable = VK_TRUE;
        depthStencilInfo.depthWriteEnable = VK_TRUE;
        depthStencilInfo.depthCompareOp = VK_COMPARE_OP_LESS;

        auto rasterizationInfo = Pipeline::RasterizationStateCreateInfo;
        rasterizationInfo.cullMode = cullMode;

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.pVertexInputState = &vertexInputState;
        pipelineInfo.pDepthStencilState = &depthStencilInfo;
        pipelineInfo.pRasterizationState = &rasterizationInfo;
        pipelineInfo.layout = pipelineLayout;
        pipelineInfo.renderPass = renderPass;
        return mDevice->create<Pipeline>(pipelineInfo);
    }

    void create_non_reflective_surface_descriptor_pool()
    {
        using namespace dst::vlkn;
        VkDescriptorPoolSize descriptorPoolSize;
        descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorPoolSize.descriptorCount = 2;

        auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
        descriptorPoolInfo.poolSizeCount = 1;
        descriptorPoolInfo.pPoolSizes = &descriptorPoolSize;
        descriptorPoolInfo.maxSets = 2;
        mNonReflectiveSurfaceDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

        auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
        descriptorSetInfo.descriptorPool = *mNonReflectiveSurfaceDescriptorPool;
        descriptorSetInfo.descriptorSetCount = 1;
        descriptorSetInfo.pSetLayouts = &mNonReflectiveSurfaceDescriptorSetLayout->handle();
        // TODO : Need to be able to allocate multiple sets at once...
        mNonReflectiveSurfaceDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);
        mNonReflectiveSurfaceDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);
    }

    void create_reflective_surface_descriptor_pool()
    {
        using namespace dst::vlkn;
        std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
        descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorPoolSizes[0].descriptorCount = 1;
        descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSizes[1].descriptorCount = 1;

        auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
        descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
        descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
        descriptorPoolInfo.maxSets = 1;
        mReflectiveSurfaceDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

        auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
        descriptorSetInfo.descriptorPool = *mReflectiveSurfaceDescriptorPool;
        descriptorSetInfo.descriptorSetCount = 1;
        descriptorSetInfo.pSetLayouts = &mReflectiveSurfaceDescriptorSetLayout->handle();
        mReflectiveSurfaceDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);
    }

    void create_meshes()
    {
        using namespace dst::vlkn;
        auto cubeBuffers = create_box_primitive({ 1, 1, 1 }, dst::Color::White, dst::Color::Black);
        mCubeMesh.write<VertexPositionTexCoordColor, uint16_t>(*mCommandPool, *mGraphicsQueue, cubeBuffers.first, cubeBuffers.second);

        auto floorBuffers = create_box_primitive({ 6, 0.25f, 6 }, dst::Color::Transparent, dst::Color::Black);
        mFloorMesh.write<VertexPositionTexCoordColor, uint16_t>(*mCommandPool, *mGraphicsQueue, floorBuffers.first, floorBuffers.second);
    }

    void create_uniform_buffers()
    {
        using namespace dst::vlkn;
        auto uniformBufferInfo = Buffer::CreateInfo;
        uniformBufferInfo.size = sizeof(UniformBuffer);
        uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        auto uniformMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;
        mCubeUniformBuffer = mDevice->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
        mCubeReflectionUniformBuffer = mDevice->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
        mFloorUniformBuffer = mDevice->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
    }

    void write_cube_descriptor_sets()
    {
        mCubeDescriptorSet = mNonReflectiveSurfaceDescriptorPool->sets()[0].get();
        VkDescriptorBufferInfo descriptorBufferInfo { };
        descriptorBufferInfo.buffer = *mCubeUniformBuffer;
        descriptorBufferInfo.offset = 0;
        descriptorBufferInfo.range = sizeof(UniformBuffer);

        VkWriteDescriptorSet uniformDescriptorWrite { };
        uniformDescriptorWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        uniformDescriptorWrite.dstSet = *mCubeDescriptorSet;
        uniformDescriptorWrite.dstArrayElement = 0;
        uniformDescriptorWrite.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        uniformDescriptorWrite.descriptorCount = 1;
        uniformDescriptorWrite.pBufferInfo = &descriptorBufferInfo;
        vkUpdateDescriptorSets(
            *mDevice,
            1,
            &uniformDescriptorWrite,
            0,
            nullptr
        );

        mCubeReflectionDescriptorSet = mNonReflectiveSurfaceDescriptorPool->sets()[1].get();
        descriptorBufferInfo.buffer = *mCubeReflectionUniformBuffer;
        uniformDescriptorWrite.dstSet = *mCubeReflectionDescriptorSet;
        vkUpdateDescriptorSets(
            *mDevice,
            1,
            &uniformDescriptorWrite,
            0,
            nullptr
        );
    }

    void write_floor_descriptor_set()
    {
        mFloorDescriptorSet = mReflectiveSurfaceDescriptorPool->sets()[0].get();

        VkDescriptorBufferInfo descriptorBufferInfo { };
        descriptorBufferInfo.buffer = *mFloorUniformBuffer;
        descriptorBufferInfo.offset = 0;
        descriptorBufferInfo.range = sizeof(UniformBuffer);

        VkWriteDescriptorSet uniformDescriptorWrite { };
        uniformDescriptorWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        uniformDescriptorWrite.dstSet = *mFloorDescriptorSet;
        uniformDescriptorWrite.dstBinding = 0;
        uniformDescriptorWrite.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        uniformDescriptorWrite.descriptorCount = 1;
        uniformDescriptorWrite.pBufferInfo = &descriptorBufferInfo;

        VkDescriptorImageInfo descriptorImageInfo { };
        descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        descriptorImageInfo.imageView = *mReflectionRenderTarget->colorAttachment->view();
        descriptorImageInfo.sampler = *mSampler;

        VkWriteDescriptorSet samplerDescriptorWrite { };
        samplerDescriptorWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        samplerDescriptorWrite.dstSet = *mFloorDescriptorSet;
        samplerDescriptorWrite.dstBinding = 1;
        samplerDescriptorWrite.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        samplerDescriptorWrite.descriptorCount = 1;
        samplerDescriptorWrite.pImageInfo = &descriptorImageInfo;

        std::array<VkWriteDescriptorSet, 2> descriptorWrites {
            uniformDescriptorWrite,
            samplerDescriptorWrite,
        };

        vkUpdateDescriptorSets(
            *mDevice,
            static_cast<uint32_t>(descriptorWrites.size()),
            descriptorWrites.data(),
            0,
            nullptr
        );
    }

    void update(const dst::Clock& clock, const dst::sys::Input& input) override
    {
        if (input.get_keyboard().down(dst::sys::Keyboard::Key::Escape)) {
            stop();
        }

        if (input.get_mouse().down(dst::sys::Mouse::Button::Left)) {
            mWindow->set_cursor_mode(dst::sys::Window::CursorMode::Disabled);
            mCameraController.lookEnabled = true;
        } else {
            mWindow->set_cursor_mode(dst::sys::Window::CursorMode::Normal);
            mCameraController.lookEnabled = false;
        }

        mCameraController.update(clock, input);

        if (input.get_keyboard().pressed(dst::sys::Keyboard::Key::OEM_Tilde)) {
            animate = !animate;
        }

        float dt = 0;
        if (input.get_keyboard().down(dst::sys::Keyboard::Key::RightArrow) || animate) {
            dt = clock.elapsed<dst::Second<float>>();
        } else
        if (input.get_keyboard().down(dst::sys::Keyboard::Key::LeftArrow)) {
            dt = -clock.elapsed<dst::Second<float>>();
        }

        t += dt;

        UniformBuffer ubo;
        ubo.view = mCamera.view();

        auto swapChainExtent = mSwapchain->extent();
        float swapChainWidth = static_cast<float>(swapChainExtent.width);
        float swapChainHeight = static_cast<float>(swapChainExtent.height);
        if (swapChainWidth && swapChainHeight) {
            mCamera.set_aspect_ratio(swapChainWidth / swapChainHeight);
        }

        ubo.projection = mCamera.projection();

        auto cubeRotationY = glm::angleAxis(glm::radians(90.0f * dt), glm::vec3 { 0, 1, 0 });
        auto cubeRotationZ = glm::angleAxis(glm::radians(45.0f * dt), glm::vec3 { 0, 0, 1 });
        mCubeRotation = glm::normalize(cubeRotationY * mCubeRotation * cubeRotationZ);

        float anchor = 1.5f;
        float amplitude = 0.5f;
        float frequency = 3;
        float wobble = amplitude * std::sin(frequency * t);
        auto cubeToWorld = glm::translate(glm::vec3 { 0, anchor + wobble, 0 }) * glm::toMat4(mCubeRotation);

        ubo.world = cubeToWorld;
        mCubeUniformBuffer->write<UniformBuffer>(gsl::make_span(&ubo, 1));
        ubo.world = glm::mat4 { 1 };
        mFloorUniformBuffer->write<UniformBuffer>(gsl::make_span(&ubo, 1));
        ubo.world = glm::scale(glm::vec3 { 1, -1, 1 }) * cubeToWorld;
        mCubeReflectionUniformBuffer->write<UniformBuffer>(gsl::make_span(&ubo, 1));
    }

    void render(const dst::Clock& clock) override
    {
        // NOTE : render(), record_command_buffer(), and mRecordCommandBuffers are dumb...
        //        Recording needs to be handled in a more sensible way.  Application needs
        //        to be refactored in general anyway.
        using namespace dst::vlkn;
        if (mSwapchain->valid() && mRecordCommandBuffers) {
            std::array<VkClearValue, 2> clearValues;
            clearValues[0].color = { 0, 0, 0, 0 };
            clearValues[1].depthStencil = { 1, 0 };
            auto renderPassBeginInfo = RenderPass::BeginInfo;
            renderPassBeginInfo.renderPass = *mReflectionRenderPass;
            renderPassBeginInfo.framebuffer = *mReflectionRenderTarget->framebuffer;
            VkExtent2D extent;
            extent.width = mReflectionRenderTarget->extent().width;
            extent.height = mReflectionRenderTarget->extent().height;
            renderPassBeginInfo.renderArea.extent = extent;
            renderPassBeginInfo.clearValueCount = static_cast<uint32_t>(clearValues.size());
            renderPassBeginInfo.pClearValues = clearValues.data();

            mReflectionCommandBuffer->begin();
            mReflectionCommandBuffer->begin_render_pass(renderPassBeginInfo);

            VkViewport viewport { };
            viewport.width = static_cast<float>(extent.width);
            viewport.height = static_cast<float>(extent.height);
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            mReflectionCommandBuffer->set_viewport(viewport);

            VkRect2D scissor { };
            scissor.extent = extent;
            mReflectionCommandBuffer->set_scissor(scissor);

            mReflectionCommandBuffer->bind_descriptor_set(*mCubeReflectionDescriptorSet, *mNonReflectiveSurfacePipelineLayout);
            mReflectionCommandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mNonReflectiveSurfacePipeline);
            mCubeMesh.draw(*mReflectionCommandBuffer);

            mReflectionCommandBuffer->end_render_pass();
            mReflectionCommandBuffer->end();
        }
    }

    void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override
    {
        commandBuffer.bind_descriptor_set(*mCubeDescriptorSet, *mNonReflectiveSurfacePipelineLayout);
        commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mNonReflectiveSurfacePipeline);
        mCubeMesh.draw(commandBuffer);

        commandBuffer.bind_descriptor_set(*mFloorDescriptorSet, *mReflectiveSurfacePipelineLayout);
        commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mReflectiveSurfacePipeline);
        mFloorMesh.draw(commandBuffer);
    }

    void submit_command_buffer() override
    {
        if (mSwapchain->valid()) {
            // NOTE : Like render() and record_command_buffer(), submit_command_buffer()
            //        needs to be reworked when Application is refactored...
            using namespace dst::vlkn;
            auto submitInfo = Queue::SubmitInfo;
            submitInfo.commandBufferCount = 1;
            submitInfo.pCommandBuffers = &mReflectionCommandBuffer->handle();
            submitInfo.signalSemaphoreCount = 1;
            submitInfo.pSignalSemaphores = &mReflectionSemaphore->handle();
            mGraphicsQueue->submit(submitInfo);

            std::array<VkSemaphore, 2> waitSemaphores {
                *mReflectionSemaphore,
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

int main()
{
    try {
        VulkanExample06OffscreenRendering app;
        app.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
