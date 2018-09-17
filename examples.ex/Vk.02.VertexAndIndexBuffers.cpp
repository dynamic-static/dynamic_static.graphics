
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// NOTE : This example follows along with...
//  https://vulkan-tutorial.com/Vertex_buffers

#include "Dynamic_Static.Graphics.hpp"

#include <algorithm>
#include <array>
#include <memory>

class Application final
    : public dst::vk::Application
{
private:
    std::shared_ptr<dst::vk::Pipeline> mPipeline;
    dst::vk::Mesh mMesh;

public:
    Application()
    {
        mInfo.pApplicationName = "Vk.02.VertexAndIndexBuffers";
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
        create_mesh();
    }

    void create_pipeline()
    {
        using namespace dst::vk;
        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            __LINE__,
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
            __LINE__,
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
        std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages {
            vertexShader->get_pipeline_stage_create_info(),
            fragmentShader->get_pipeline_stage_create_info()
        };

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
        mPipeline = mDevice->create<Pipeline>(mDevice->create<PipelineLayout>(), pipelineCreateInfo);
    }

    void create_mesh()
    {
        using namespace dst::vk;
        const std::array<VertexPositionColor, 4> vertices {
            VertexPositionColor {{ -0.5f, -0.5f, 0 }, { dst::Color::OrangeRed }},
            VertexPositionColor {{  0.5f, -0.5f, 0 }, { dst::Color::BlueViolet }},
            VertexPositionColor {{  0.5f,  0.5f, 0 }, { dst::Color::DodgerBlue }},
            VertexPositionColor {{ -0.5f,  0.5f, 0 }, { dst::Color::Goldenrod }},
        };
        const std::array<uint16_t, 6> indices {
            0, 1, 2,
            2, 3, 0,
        };
        mMesh.write<VertexPositionColor, uint16_t>(mDevice, vertices, indices);
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
    }

    void record_swapchain_render_pass(
        const dst::Clock& clock,
        const dst::vk::CommandBuffer& commandBuffer
    ) override
    {
        vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline);
        mMesh.record_draw_cmds(commandBuffer);
    }
};

int main()
{
    Application().start();
    return 0;
}
