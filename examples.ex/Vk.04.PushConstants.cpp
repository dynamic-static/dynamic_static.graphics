
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : This example modifies...
//  https://vulkan-tutorial.com/Uniform_buffers

#include "Dynamic_Static.Graphics.hpp"

#include <algorithm>
#include <array>
#include <memory>

class Application final
    : public dst::vk::Application
{
private:
    struct PushConstants final
    {
        glm::mat4 world;
        glm::mat4 view;
        glm::mat4 projection;
    };

    std::shared_ptr<dst::vk::Pipeline> mPipeline;
    PushConstants mPushConstants;
    float mRotation { 0 };
    dst::vk::Mesh mMesh;

public:
    Application()
    {
        mInfo.pApplicationName = "Dynamic_Static Vk.04.PushConstants";
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
        create_pipeline();
        create_vertex_and_index_buffers();
    }

    void create_pipeline()
    {
        using namespace dst::vk;
        auto vertexShader = mDevice->create<ShaderModule>(
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
                layout(location = 0) out vec4 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = pc.projection * pc.view * pc.world * vec4(vsPosition, 1);
                    fsColor = vsColor;
                }
            )"
        );
        auto fragmentShader = mDevice->create<ShaderModule>(
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
        );
        std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages {
            vertexShader->get_pipeline_stage_create_info(),
            fragmentShader->get_pipeline_stage_create_info()
        };
        auto pushConstantRanges = vertexShader->get_push_constant_ranges();
        auto pipelineLayout = mDevice->create<PipelineLayout>(pushConstantRanges);

        auto vertexBindingDescription = get_binding_description<VertexPositionColor>();
        auto vertexAttributeDescriptions = get_attribute_descriptions<VertexPositionColor>();
        Pipeline::VertexInputStateCreateInfo vertexInputState { };
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = (uint32_t)vertexAttributeDescriptions.size();
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        Pipeline::GraphicsCreateInfo pipelineCreateInfo { };
        pipelineCreateInfo.stageCount = (uint32_t)shaderStages.size();
        pipelineCreateInfo.pStages = shaderStages.data();
        pipelineCreateInfo.pVertexInputState = &vertexInputState;
        pipelineCreateInfo.renderPass = *mSwapchainRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineLayout, pipelineCreateInfo);
    }

    void create_vertex_and_index_buffers()
    {
        using namespace dst::vk;
        const std::array<VertexPositionColor, 4> vertices {
            VertexPositionColor {{ -0.5f, 0, -0.5f }, { dst::Color::DeepSkyBlue }},
            VertexPositionColor {{  0.5f, 0, -0.5f }, { dst::Color::DeepPink }},
            VertexPositionColor {{  0.5f, 0,  0.5f }, { dst::Color::DarkOrange }},
            VertexPositionColor {{ -0.5f, 0,  0.5f }, { dst::Color::FloralWhite }},
        };
        Buffer::CreateInfo vertexBufferCreateInfo { };
        vertexBufferCreateInfo.size = sizeof(vertices);
        vertexBufferCreateInfo.usage = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
        mMesh.vertexBuffer = mDevice->create<Buffer>(vertexBufferCreateInfo);
        auto vertexBufferMemoryRequirements = mMesh.vertexBuffer->get_memory_requirements();

        const std::array<uint16_t, 6> indices {
            0, 1, 2,
            2, 3, 0,
        };
        mMesh.indexType = VK_INDEX_TYPE_UINT16;
        mMesh.indexCount = (int)indices.size();
        Buffer::CreateInfo indexBufferCreateInfo { };
        indexBufferCreateInfo.size = sizeof(indices);
        indexBufferCreateInfo.usage = VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_TRANSFER_DST_BIT;
        mMesh.indexBuffer = mDevice->create<Buffer>(indexBufferCreateInfo);
        auto indexBufferMemoryRequirements = mMesh.indexBuffer->get_memory_requirements();

        std::array<DeviceMemoryResource*, 2> resources {
            mMesh.vertexBuffer.get(), mMesh.indexBuffer.get()
        };
        DeviceMemory::allocate_multi_resource_memory(resources, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);

        Buffer::CreateInfo stagingBufferCreateInfo { };
        stagingBufferCreateInfo.size = std::max(vertexBufferCreateInfo.size, indexBufferCreateInfo.size);
        stagingBufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto stagingBuffer = mDevice->create<Buffer>(stagingBufferCreateInfo);
        auto stagingBufferMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        DeviceMemory::allocate_resource_memory(stagingBuffer, stagingBufferMemoryProperties);
        auto copyBuffer =
        [&](std::shared_ptr<Buffer>& buffer)
        {
            mDevice->get_queue_families()[0].get_queues()[0].process_immediately(
                [&](const CommandBuffer& commandBuffer)
                {
                    VkBufferCopy region { };
                    region.size = buffer->get_memory_size();
                    vkCmdCopyBuffer(commandBuffer, *stagingBuffer, *buffer, 1, &region);
                }
            );
        };
        stagingBuffer->write<VertexPositionColor>(vertices);
        copyBuffer(mMesh.vertexBuffer);
        stagingBuffer->write<uint16_t>(indices);
        copyBuffer(mMesh.indexBuffer);
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
        mRotation += 90.0f * clock.elapsed<dst::Second<float>>();
        mPushConstants.world = glm::toMat4(glm::angleAxis(glm::radians(mRotation), dst::unit_y<glm::vec3>()));
        mPushConstants.view = glm::lookAt({ 0, 2, 2 }, { }, dst::world_up<glm::vec3>());
        mPushConstants.projection = glm::perspective(
            glm::radians(30.0f),
            (float)mSwapchain->get_extent().width /
            (float)mSwapchain->get_extent().height,
            0.01f,
            10.0f
        );
        mPushConstants.projection[1][1] *= -1;
    }

    void record_swapchain_render_pass(
        const dst::Clock& clock,
        const dst::vk::CommandBuffer& commandBuffer
    ) override
    {
        vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline);
        vkCmdPushConstants(
            commandBuffer,
            mPipeline->get_layout(),
            VK_SHADER_STAGE_VERTEX_BIT,
            0,
            sizeof(PushConstants),
            &mPushConstants
        );
        VkDeviceSize offset = 0;
        vkCmdBindVertexBuffers(commandBuffer, 0, 1, &mMesh.vertexBuffer->get_handle(), &offset);
        vkCmdBindIndexBuffer(commandBuffer, *mMesh.indexBuffer, 0, mMesh.indexType);
        vkCmdDrawIndexed(commandBuffer, mMesh.indexCount, 1, 0, 0, 0);
    }
};

int main()
{
    Application().start();
    return 0;
}
