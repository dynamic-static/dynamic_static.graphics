
/*
==========================================
    Licensed under the MIT license
    Copyright (c) 2017 Dynamic_Static
        Patrick Purcell
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders a quad using vertex and index buffers
// Based on https://vulkan-tutorial.com/Vertex_buffers

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/System/Window.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>

class ExampleVertexBuffer final
    : public dst::vlkn::Application
{
private:
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mPipeline;
    std::shared_ptr<dst::vlkn::Buffer> mVertexBuffer;
    std::shared_ptr<dst::vlkn::Buffer> mIndexBuffer;
    size_t mIndexCount { 0 };

public:
    ExampleVertexBuffer()
    {
        set_name("Dynamic_Static Vulkan VertexBuffer");
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
        dst::vlkn::Application::setup();
        create_pipeline();
        create_vertex_and_index_buffers();
    }

    void create_pipeline()
    {
        using namespace dst::vlkn;
        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec4 vsColor;

                layout(location = 0) out vec3 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = vec4(vsPosition, 1);
                    fsColor = vsColor.rgb;
                }

            )"
        );

        auto fragmentShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(location = 0) in vec3 fsColor;

                layout(location = 0) out vec4 fragColor;

                void main()
                {
                    fragColor = vec4(fsColor, 1);
                }

            )"
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_create_info(),
            fragmentShader->pipeline_stage_create_info()
        };

        auto vertexBindingDescription = binding_description<VertexPositionColor>();
        auto vertexAttributeDescriptions = attribute_descriptions<VertexPositionColor>();
        auto vertexInputState = Pipeline::VertexInputStateCreateInfo;
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        mPipelineLayout = mDevice->create<Pipeline::Layout>();
        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.pVertexInputState = &vertexInputState;
        pipelineInfo.layout = *mPipelineLayout;
        pipelineInfo.renderPass = *mRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineInfo);
    }

    void create_vertex_and_index_buffers()
    {
        using namespace dst::vlkn;
        const std::array<VertexPositionColor, 4> vertices {
            VertexPositionColor { { -0.5f, -0.5f, 0 }, { dst::Color::OrangeRed } },
            VertexPositionColor { {  0.5f, -0.5f, 0 }, { dst::Color::BlueViolet } },
            VertexPositionColor { {  0.5f,  0.5f, 0 }, { dst::Color::DodgerBlue } },
            VertexPositionColor { { -0.5f,  0.5f, 0 }, { dst::Color::Goldenrod } },
        };

        const std::array<uint16_t, 6> indices {
            0, 1, 2,
            2, 3, 0,
        };

        mIndexCount = indices.size();

        auto vertexBufferInfo = Buffer::CreateInfo;
        vertexBufferInfo.size = static_cast<VkDeviceSize>(sizeof(vertices[0]) * vertices.size());
        vertexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
        auto vertexBufferMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        mVertexBuffer = mDevice->create<Buffer>(vertexBufferInfo, vertexBufferMemoryProperties);

        auto indexBufferInfo = Buffer::CreateInfo;
        indexBufferInfo.size = static_cast<VkDeviceSize>(sizeof(indices[0]) * indices.size());
        indexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
        auto indexBufferMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        mIndexBuffer = mDevice->create<Buffer>(indexBufferInfo, indexBufferMemoryProperties);

        auto stagingBufferInfo = Buffer::CreateInfo;
        stagingBufferInfo.size = std::max(vertexBufferInfo.size, indexBufferInfo.size);
        stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto stagingBufferMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        auto stagingBuffer = mDevice->create<Buffer>(stagingBufferInfo, stagingBufferMemoryProperties);

        stagingBuffer->write<VertexPositionColor>(vertices);
        mGraphicsQueue->process_immediate(
            [&](Command::Buffer& commandBuffer)
            {
                commandBuffer.copy_buffer(*stagingBuffer, *mVertexBuffer, vertexBufferInfo.size);
            }
        );

        stagingBuffer->write<uint16_t>(indices);
        mGraphicsQueue->process_immediate(
            [&](Command::Buffer& commandBuffer)
            {
                commandBuffer.copy_buffer(*stagingBuffer, *mIndexBuffer, vertexBufferInfo.size);
            }
        );
    }

    void update(const dst::Clock& clock, const dst::sys::Input& input) override
    {
        if (input.keyboard.down(dst::sys::Keyboard::Key::Escape)) {
            stop();
        }
    }

    void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override
    {
        commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline);
        commandBuffer.bind_vertex_buffer(*mVertexBuffer);
        commandBuffer.bind_index_buffer(*mIndexBuffer);
        commandBuffer.draw_indexed(mIndexCount);
    }
};

int main()
{
    try {
        ExampleVertexBuffer app;
        app.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
