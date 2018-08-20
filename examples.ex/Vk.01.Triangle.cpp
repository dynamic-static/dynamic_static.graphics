
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static.Graphics.hpp"

#include <memory>

class Vk01Triangle final
    : public dst::vk::Application
{
private:
    std::shared_ptr<dst::vk::Pipeline> mPipeline;

public:
    Vk01Triangle()
    {
        mInfo.pApplicationName = "Dynamic_Static Vk.01.Triangle";
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
        using namespace dst::vk;
        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            __LINE__,
            R"(
                #version 450
                layout(location = 0) out vec4 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                vec2 positions[3] = vec2[](
                    vec2( 0.0, -0.5),
                    vec2( 0.5,  0.5),
                    vec2(-0.5,  0.5)
                );

                vec4 colors[3] = vec4[](
                    vec4(1, 0, 0, 1),
                    vec4(0, 1, 0, 1),
                    vec4(0, 0, 1, 1)
                );

                void main()
                {
                    gl_Position = vec4(positions[gl_VertexIndex], 0, 1);
                    fsColor = colors[gl_VertexIndex];
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
        Pipeline::ShaderStageCreateInfo vertexShaderStage { };
        vertexShaderStage.stage = VK_SHADER_STAGE_VERTEX_BIT;
        vertexShaderStage.module = *vertexShader;
        Pipeline::ShaderStageCreateInfo fragmentShaderStage { };
        fragmentShaderStage.stage = VK_SHADER_STAGE_FRAGMENT_BIT;
        fragmentShaderStage.module = *fragmentShader;
        std::array<Pipeline::ShaderStageCreateInfo, 2> shaderStages {
            vertexShaderStage, fragmentShaderStage
        };
        auto pipelineLayout = mDevice->create<PipelineLayout>(PipelineLayout::CreateInfo { });
        Pipeline::GraphicsCreateInfo pipelineCreateInfo { };
        pipelineCreateInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineCreateInfo.pStages = shaderStages.data();
        pipelineCreateInfo.layout = *pipelineLayout;
        pipelineCreateInfo.renderPass = *mSwapchainRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineCreateInfo);
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
        vkCmdDraw(commandBuffer, 3, 1, 0, 0);
    }
};

int main()
{
    Vk01Triangle vk01Triangle;
    vk01Triangle.start();
    return 0;
}
