
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : This example follows along with...
//  https://github.com/SaschaWillems/Vulkan/tree/master/examples/offscreen

#include "Dynamic_Static.Graphics.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>

class Application final
    : public dst::vk::Application
{
private:
    class Mesh final
        : public dst::vk::Mesh
    {
    public:
        std::shared_ptr<dst::vk::Buffer> uniformBuffer;
        std::shared_ptr<dst::vk::DescriptorSet> descriptorSet;
        dst::Transform transform;
    };

    struct PushConstants final
    {
        glm::mat4 world;
        glm::mat4 view;
        glm::mat4 projection;
    };

    dst::gfx::Camera mCamera;
    dst::gfx::FreeCamerController mCameraController;

    static constexpr VkExtent2D RenderTargetExtent { 1024, 1024 };
    std::unique_ptr<dst::vk::RenderTarget> mRenderTarget;
    std::shared_ptr<dst::vk::Sampler> mRenderTargetSampler;
    std::shared_ptr<dst::vk::Fence> mRenderTargetCompleteFence;
    std::shared_ptr<dst::vk::Semaphore> mRenderTargetCompleteSemaphore;
    std::shared_ptr<dst::vk::CommandBuffer> mRenderTargetCommandBuffer;

    std::shared_ptr<dst::vk::Pipeline> mFloorPipeline;
    Mesh mFloorMesh;

    std::shared_ptr<dst::vk::Pipeline> mCubePipeline;
    Mesh mCubeMesh;
    float mCubeWobbleAnchor { 1.5f };
    float mCubeWobbleAmplitude { 0.5f };
    float mCubeWobbleFrequency { 3 };
    bool mAnimateCube { true };
    float mTime { 0 };

public:
    Application()
    {
        std::cout
            << std::endl
            << "[Esc]          - Quit" << std::endl
            << "[Q][W][E]" << std::endl
            << "[A][S][D]      - Move camera" << std::endl
            << "[Left Mouse]   - Enable mouse look" << std::endl
            << "[Scroll Wheel] - Zoom camera in and out" << std::endl
            << "[Middle Mouse] - Reset camera zoom" << std::endl
            << "[`]            - Toggle animation" << std::endl
            << "[Left Arrow]   - Rewind animation" << std::endl
            << "[Right Arrow]  - Advance animation" << std::endl
            << std::endl;

        mInfo.pApplicationName = "Dynamic_Static Vk.07.OffScreenRendering";
        mSwapchainDepthFormat = VK_FORMAT_D32_SFLOAT;
        mCamera.transform.translation = glm::vec3 { 0, 2, 7 };
        mCameraController.camera = &mCamera;
    }

private:
    void create_instance(
        std::vector<const char*>& layers,
        std::vector<const char*>& extensions,
        VkDebugReportFlagsEXT debugReportFlags
    ) override
    {
        dst::vk::Application::create_instance(
            layers,
            extensions,
            debugReportFlags
            // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_ERROR_BIT_EXT
        );
    }

    void create_resources() override
    {
        create_render_target_resources();
        create_pipelines();
        create_meshes();
        create_descriptor_set();
    }

    void create_render_target_resources()
    {
        using namespace dst::vk;
        mRenderTarget = std::make_unique<RenderTarget>(mSwapchainRenderPass, RenderTargetExtent);
        mRenderTargetSampler = mDevice->create<Sampler>();

        CommandPool::CreateInfo commandPoolCreateInfo { };
        commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        auto commandPool = mDevice->create<CommandPool>(commandPoolCreateInfo);
        mRenderTargetCommandBuffer = commandPool->allocate<CommandBuffer>();

        Fence::CreateInfo fenceCreateInfo { };
        fenceCreateInfo.flags = VK_FENCE_CREATE_SIGNALED_BIT;
        mRenderTargetCompleteFence = mDevice->create<Fence>(fenceCreateInfo);
        mRenderTargetCompleteSemaphore = mDevice->create<Semaphore>();
    }

    void create_pipelines()
    {
        using namespace dst::vk;
        auto createPipeline =
        [&](VkCullModeFlags cullMode,
            const dst::vk::ShaderModule& vertexShader,
            const dst::vk::ShaderModule& fragmentShader)
        {
            std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages { };
            shaderStages[0] = vertexShader.get_pipeline_stage_create_info();
            shaderStages[1] = fragmentShader.get_pipeline_stage_create_info();
            auto descriptorSetLayoutBindings = fragmentShader.get_descriptor_set_layout_bindings();
            DescriptorSetLayout::CreateInfo descriptorSetLayoutCreateInfo { };
            descriptorSetLayoutCreateInfo.bindingCount = (uint32_t)descriptorSetLayoutBindings.size();
            descriptorSetLayoutCreateInfo.pBindings = descriptorSetLayoutBindings.data();
            auto descriptorSetLayout = mDevice->create<DescriptorSetLayout>(descriptorSetLayoutCreateInfo);
            auto pushConstantRanges = vertexShader.get_push_constant_ranges();
            auto pipelineLayout = mDevice->create<PipelineLayout>(descriptorSetLayout, pushConstantRanges);

            auto vertexBindingDescription = get_binding_description<VertexPositionColorTexture>();
            auto vertexAttributeDescriptions = get_attribute_descriptions<VertexPositionColorTexture>();
            Pipeline::VertexInputStateCreateInfo vertexInputState { };
            vertexInputState.vertexBindingDescriptionCount = 1;
            vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
            vertexInputState.vertexAttributeDescriptionCount = (uint32_t)vertexAttributeDescriptions.size();
            vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

            Pipeline::DepthStencilStateCreateInfo depthStencilState { };
            depthStencilState.depthTestEnable = VK_TRUE;
            depthStencilState.depthWriteEnable = VK_TRUE;
            depthStencilState.depthCompareOp = VK_COMPARE_OP_LESS;

            Pipeline::RasterizationStateCreateInfo rasterizationState { };
            rasterizationState.cullMode = cullMode;

            Pipeline::GraphicsCreateInfo pipelineCreateInfo { };
            pipelineCreateInfo.stageCount = (uint32_t)shaderStages.size();
            pipelineCreateInfo.pStages = shaderStages.data();
            pipelineCreateInfo.pVertexInputState = &vertexInputState;
            pipelineCreateInfo.pDepthStencilState = &depthStencilState;
            pipelineCreateInfo.pRasterizationState = &rasterizationState;
            pipelineCreateInfo.renderPass = *mSwapchainRenderPass;
            return mDevice->create<Pipeline>(pipelineLayout, pipelineCreateInfo);
        };

        mCubePipeline = createPipeline(
            VK_CULL_MODE_NONE,
            *mDevice->create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                __LINE__,
                R"(
                    #version 450

                    layout(push_constant)
                    uniform PushConstants
                    {
                        mat4 world;
                        mat4 view;
                        mat4 projection;
                    } pc;

                    layout(location = 0) in vec3 vsPosition;
                    layout(location = 1) in vec4 vsColor;
                    layout(location = 2) in vec2 vsTexcoord;

                    layout(location = 0) out vec4 fsColor;
                    out gl_PerVertex { vec4 gl_Position; };

                    void main()
                    {
                        gl_Position = pc.projection * pc.view * pc.world * vec4(vsPosition, 1);
                        fsColor = vsColor;
                    }
                )"
            ),
            *mDevice->create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                __LINE__,
                R"(
                    #version 450

                    layout(location = 0) in vec4 fsColor;

                    layout(location = 0) out vec4 fragColor;

                    void main()
                    {
                        fragColor = fsColor;
                    }
                )"
            )
        );

        mFloorPipeline = createPipeline(
            VK_CULL_MODE_BACK_BIT,
            *mDevice->create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                __LINE__,
                R"(
                    #version 450

                    layout(push_constant)
                    uniform PushConstants
                    {
                        mat4 world;
                        mat4 view;
                        mat4 projection;
                    } pc;

                    layout(location = 0) in vec3 vsPosition;
                    layout(location = 1) in vec4 vsColor;
                    layout(location = 2) in vec2 vsTexcoord;

                    layout(location = 0) out vec4 fsPosition;
                    layout(location = 1) out vec4 fsColor;
                    layout(location = 2) out vec2 fsTexcoord;

                    out gl_PerVertex { vec4 gl_Position; };

                    void main()
                    {
                        fsPosition = pc.projection * pc.view * pc.world * vec4(vsPosition, 1);
                        gl_Position = fsPosition;
                        fsTexcoord = vsTexcoord;
                        fsColor = vsColor;
                    }
                )"
            ),
            *mDevice->create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                __LINE__,
                R"(
                    #version 450

                    layout(binding = 1) uniform sampler2D reflectionImage;

                    layout(location = 0) in vec4 fsPosition;
                    layout(location = 1) in vec4 fsColor;
                    layout(location = 2) in vec2 fsTexcoord;

                    layout(location = 0) out vec4 fragColor;

                    void main()
                    {
                        vec2 reflectionTexcoord = fsPosition.xy * (1.0 / fsPosition.w);
                        reflectionTexcoord += vec2(1);
                        reflectionTexcoord *= 0.5;

                        vec4 reflection = texture(reflectionImage, reflectionTexcoord);
                        reflection.a *= 0.34;
                        reflection.rgb *= reflection.a;
                        reflection.rgb *= step(0.001, dot(fsTexcoord, vec2(0.5)));

                        fragColor.rb = fsTexcoord * (1 - reflection.a);
                        fragColor.g = dot(fragColor.rb, vec2(0.5)) * 0.5;
                        fragColor.rgb += reflection.rgb;
                        fragColor.a = 1;
                    }
                )"
            )
        );
    }

    void create_meshes()
    {
        auto createMesh =
        [&](const glm::vec3& extent,
            const glm::vec4& topColor,
            const glm::vec4& bottomColor)
        {
            using namespace dst::vk;
            float w = extent.x * 0.5f;
            float h = extent.y * 0.5f;
            float d = extent.z * 0.5f;
            static const int FaceCount = 6;
            static const int VerticesPerFace = 4;
            static const int IndicesPerFace = 6;
            std::array<VertexPositionColorTexture, FaceCount * VerticesPerFace> vertices {
                // Top
                VertexPositionColorTexture {{ -w, h, -d }, { topColor }, { 0, 1 }},
                VertexPositionColorTexture {{  w, h, -d }, { topColor }, { 1, 1 }},
                VertexPositionColorTexture {{  w, h,  d }, { topColor }, { 1, 0 }},
                VertexPositionColorTexture {{ -w, h,  d }, { topColor }, { 0, 0 }},

                // Left
                VertexPositionColorTexture {{ -w,  h, -d }, { topColor },    { }},
                VertexPositionColorTexture {{ -w,  h,  d }, { topColor },    { }},
                VertexPositionColorTexture {{ -w, -h,  d }, { bottomColor }, { }},
                VertexPositionColorTexture {{ -w, -h, -d }, { bottomColor }, { }},

                // Front
                VertexPositionColorTexture {{ -w,  h, d }, { topColor },    { }},
                VertexPositionColorTexture {{  w,  h, d }, { topColor },    { }},
                VertexPositionColorTexture {{  w, -h, d }, { bottomColor }, { }},
                VertexPositionColorTexture {{ -w, -h, d }, { bottomColor }, { }},

                // Right
                VertexPositionColorTexture {{ w,  h,  d }, { topColor },    { }},
                VertexPositionColorTexture {{ w,  h, -d }, { topColor },    { }},
                VertexPositionColorTexture {{ w, -h, -d }, { bottomColor }, { }},
                VertexPositionColorTexture {{ w, -h,  d }, { bottomColor }, { }},

                // Back
                VertexPositionColorTexture {{  w,  h, -d }, { topColor },    { }},
                VertexPositionColorTexture {{ -w,  h, -d }, { topColor },    { }},
                VertexPositionColorTexture {{ -w, -h, -d }, { bottomColor }, { }},
                VertexPositionColorTexture {{  w, -h, -d }, { bottomColor }, { }},

                // Bottom
                VertexPositionColorTexture {{ -w, -h,  d }, { bottomColor }, { }},
                VertexPositionColorTexture {{  w, -h,  d }, { bottomColor }, { }},
                VertexPositionColorTexture {{  w, -h, -d }, { bottomColor }, { }},
                VertexPositionColorTexture {{ -w, -h, -d }, { bottomColor }, { }},
            };
            int index_i = 0;
            int vertex_i = 0;
            std::array<uint16_t, FaceCount * IndicesPerFace> indices { };
            for (int face_i = 0; face_i < FaceCount; ++face_i) {
                indices[index_i++] = vertex_i + 0;
                indices[index_i++] = vertex_i + 1;
                indices[index_i++] = vertex_i + 2;
                indices[index_i++] = vertex_i + 2;
                indices[index_i++] = vertex_i + 3;
                indices[index_i++] = vertex_i + 0;
                vertex_i += VerticesPerFace;
            }
            Mesh mesh;
            mesh.indexType = VK_INDEX_TYPE_UINT16;
            mesh.indexCount = (uint32_t)indices.size();
            Buffer::CreateInfo bufferCreateInfo { };
            bufferCreateInfo.size = sizeof(vertices);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            mesh.vertexBuffer = mDevice->create<Buffer>(bufferCreateInfo);
            bufferCreateInfo.size = sizeof(indices);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
            mesh.indexBuffer = mDevice->create<Buffer>(bufferCreateInfo);
            std::array<Buffer*, 2> buffers { mesh.vertexBuffer.get(), mesh.indexBuffer.get() };
            DeviceMemory::allocate_multi_resource_memory(buffers, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);

            bufferCreateInfo.size = sizeof(PushConstants);
            bufferCreateInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            mesh.uniformBuffer = mDevice->create<Buffer>(bufferCreateInfo);
            DeviceMemory::allocate_resource_memory(
                mesh.uniformBuffer,
                VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT
            );

            bufferCreateInfo.size = std::max(mesh.vertexBuffer->get_memory_size(), mesh.indexBuffer->get_memory_size());
            bufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto stagingBuffer = mDevice->create<Buffer>(bufferCreateInfo);
            auto stagingBufferMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            DeviceMemory::allocate_resource_memory(stagingBuffer, stagingBufferMemoryProperties);
            auto copyBuffer =
            [&](std::shared_ptr<Buffer>& buffer)
            {
                mDevice->get_queue_families()[0].get_queues()[0].process_immediately(
                    [&](const CommandBuffer& commandBuffer)
                    {
                        VkBufferCopy copy { };
                        copy.size = buffer->get_size();
                        vkCmdCopyBuffer(commandBuffer, *stagingBuffer, *buffer, 1, &copy);
                    }
                );
            };
            stagingBuffer->write<VertexPositionColorTexture>(vertices);
            copyBuffer(mesh.vertexBuffer);
            stagingBuffer->write<uint16_t>(indices);
            copyBuffer(mesh.indexBuffer);
            return mesh;
        };

        mCubeMesh = createMesh({ 1, 1, 1 }, dst::Color::White, dst::Color::Black);
        mFloorMesh = createMesh({ 6, 0.08f, 6 }, dst::Color::Transparent, dst::Color::Black);
    }

    void create_descriptor_set()
    {
        using namespace dst::vk;

        std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
        static const int Image = 0;
        descriptorPoolSizes[Image].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        descriptorPoolSizes[Image].descriptorCount = 1;
        static const int Buffer = 1;
        descriptorPoolSizes[Buffer].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorPoolSizes[Buffer].descriptorCount = 2;
        DescriptorPool::CreateInfo descriptorPoolCreateInfo { };
        descriptorPoolCreateInfo.poolSizeCount = (uint32_t)descriptorPoolSizes.size();
        descriptorPoolCreateInfo.pPoolSizes = descriptorPoolSizes.data();
        descriptorPoolCreateInfo.maxSets = 2;
        auto descriptorPool = mDevice->create<DescriptorPool>(descriptorPoolCreateInfo);

        const auto& descriptorSetLayout = mFloorPipeline->get_layout().get_descriptor_set_layouts()[0];
        mFloorMesh.descriptorSet = descriptorPool->allocate<DescriptorSet>(descriptorSetLayout);




        VkDescriptorImageInfo imageInfo { };
        imageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
        imageInfo.imageView = mRenderTarget->get_attachments()[0]->get_view();
        imageInfo.sampler = *mRenderTargetSampler;
        DescriptorSet::Write write { };
        write.dstSet = *mFloorMesh.descriptorSet;
        write.dstBinding = 1;
        write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        write.descriptorCount = 1;
        write.pImageInfo = &imageInfo;
        vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);


    }

    void update(
        const dst::Clock& clock,
        const dst::sys::Input& input
    ) override
    {
        using namespace dst::sys;
        if (input.keyboard.down(Keyboard::Key::Escape)) {
            stop();
        }
        if (input.keyboard.pressed(Keyboard::Key::OEM_Tilde)) {
            mAnimateCube = !mAnimateCube;
        }
        if (input.mouse.down(dst::sys::Mouse::Button::Left)) {
            mWindow->set_cursor_mode(dst::sys::Window::CursorMode::Disabled);
            mCameraController.lookEnabled = true;
        } else {
            mWindow->set_cursor_mode(dst::sys::Window::CursorMode::Visible);
            mCameraController.lookEnabled = false;
        }
        mCameraController.update(clock, input);
        auto swapchainExtent = mSwapchain->get_extent();
        if (swapchainExtent.height) {
            mCamera.aspectRatio = (float)swapchainExtent.width / (float)swapchainExtent.height;
        }

        auto dt = mAnimateCube ? clock.elapsed<dst::Second<float>>() : 0;
        if (input.keyboard.down(Keyboard::Key::RightArrow)) {
            dt = clock.elapsed<dst::Second<float>>();
        } else
        if (input.keyboard.down(Keyboard::Key::LeftArrow)) {
            dt = -clock.elapsed<dst::Second<float>>();
        }
        mTime += dt;

        auto cubeWobble = mCubeWobbleAmplitude * std::sin(mCubeWobbleFrequency * mTime);
        auto cubeRotationY = glm::angleAxis(glm::radians(90.0f * dt), dst::unit_y<glm::vec3>());
        auto cubeRotationZ = glm::angleAxis(glm::radians(45.0f * dt), dst::unit_z<glm::vec3>());
        mCubeMesh.transform.rotation = glm::normalize(cubeRotationY * mCubeMesh.transform.rotation * cubeRotationZ);
        mCubeMesh.transform.translation = { 0, mCubeWobbleAnchor + cubeWobble, 0 };

        auto floorRotationY = glm::angleAxis(glm::radians(-5 * dt), dst::unit_y<glm::vec3>());
        mFloorMesh.transform.rotation = glm::normalize(floorRotationY * mFloorMesh.transform.rotation);
    }

    void update_graphics(const dst::Clock& clock)
    {
        if (mSwapchain->is_valid()) {
            using namespace dst::vk;
            mRenderTargetCompleteFence->wait();
            mRenderTargetCommandBuffer->begin();
            auto renderPassBeginInfo = mRenderTarget->get_render_pass_begin_info();
            vkCmdBeginRenderPass(*mRenderTargetCommandBuffer, &renderPassBeginInfo, VK_SUBPASS_CONTENTS_INLINE);
            vkCmdBindPipeline(*mRenderTargetCommandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mCubePipeline);
            auto viewport = mRenderTarget->get_viewport();
            vkCmdSetViewport(*mRenderTargetCommandBuffer, 0, 1, &viewport);
            auto scissor = mRenderTarget->get_scissor();
            vkCmdSetScissor(*mRenderTargetCommandBuffer, 0, 1, &scissor);
            PushConstants pushConstants { };
            pushConstants.world = glm::scale(glm::vec3 { 1, -1, 1 }) * mCubeMesh.transform.world_from_local();
            pushConstants.view = mCamera.get_view();
            pushConstants.projection = mCamera.get_projection();
            vkCmdPushConstants(
                *mRenderTargetCommandBuffer,
                mCubePipeline->get_layout(),
                VK_SHADER_STAGE_VERTEX_BIT,
                0,
                sizeof(PushConstants),
                &pushConstants
            );
            mCubeMesh.record_draw_cmds(*mRenderTargetCommandBuffer);
            vkCmdEndRenderPass(*mRenderTargetCommandBuffer);
            mRenderTargetCommandBuffer->end();
        }
    }

    void record_swapchain_render_pass(
        const dst::Clock& clock,
        const dst::vk::CommandBuffer& commandBuffer
    ) override
    {
        // NOTE : It's not really ideal to be using push constants for per
        //  object data (for a number of reasons), but it's not going to hurt
        //  anything in this very simple example.
        PushConstants pushConstants { };
        pushConstants.view = mCamera.get_view();
        pushConstants.projection = mCamera.get_projection();

        vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mCubePipeline);
        pushConstants.world = mCubeMesh.transform.world_from_local();
        vkCmdPushConstants(
            commandBuffer,
            mCubePipeline->get_layout(),
            VK_SHADER_STAGE_VERTEX_BIT,
            0,
            sizeof(PushConstants),
            &pushConstants
        );
        mCubeMesh.record_draw_cmds(commandBuffer);

        vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mFloorPipeline);
        pushConstants.world = mFloorMesh.transform.world_from_local();
        vkCmdPushConstants(
            commandBuffer,
            mFloorPipeline->get_layout(),
            VK_SHADER_STAGE_VERTEX_BIT,
            0,
            sizeof(PushConstants),
            &pushConstants
        );
        vkCmdBindDescriptorSets(
            commandBuffer,
            VK_PIPELINE_BIND_POINT_GRAPHICS,
            mFloorPipeline->get_layout(),
            0,
            1,
            // &mFloorDescriptorSet->get_handle(),
            &mFloorMesh.descriptorSet->get_handle(),
            0,
            nullptr
        );
        mFloorMesh.record_draw_cmds(commandBuffer);
    }

    void submit_swapchain_command_buffer(
        const dst::Clock& clock,
        const dst::vk::CommandBuffer& commandBuffer,
        const dst::vk::Fence& fence
    ) override
    {
        using namespace dst::vk;
        const auto& queue = mDevice->get_queue_families()[0].get_queues()[0];
        VkPipelineStageFlags waitStage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
        Queue::SubmitInfo submitInfo { };
        submitInfo.waitSemaphoreCount = 1;
        submitInfo.pWaitDstStageMask = &waitStage;
        submitInfo.pWaitSemaphores = &mSwapchainImageAcquiredSemaphore->get_handle();
        submitInfo.signalSemaphoreCount = 1;
        submitInfo.pSignalSemaphores = &mRenderTargetCompleteSemaphore->get_handle();
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &mRenderTargetCommandBuffer->get_handle();
        dst_vk(vkQueueSubmit(queue, 1, &submitInfo, *mRenderTargetCompleteFence));

        submitInfo.pWaitSemaphores = &mRenderTargetCompleteSemaphore->get_handle();
        submitInfo.pSignalSemaphores = &mSwapchainRenderCompleteSemphore->get_handle();
        submitInfo.pCommandBuffers = &commandBuffer.get_handle();
        dst_vk(vkQueueSubmit(queue, 1, &submitInfo, fence));
    }
};

int main()
{
    Application().start();
    return 0;
}
