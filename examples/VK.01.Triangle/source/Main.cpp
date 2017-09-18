
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders a triangle
// Based on https://vulkan-tutorial.com/Drawing_a_triangle

#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <array>
#include <iostream>
#include <memory>

class VulkanExample01Triangle final
    : public dst::vlkn::Application
{
private:
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mPipeline;

public:
    VulkanExample01Triangle()
    {
        name("Dynamic_Static VK.01.Triangle");
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
        using namespace dst::vlkn;
        dst::vlkn::Application::setup();

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        mPipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(location = 0) out vec3 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                vec2 positions[3] = vec2[](
                    vec2( 0.0, -0.5),
                    vec2( 0.5,  0.5),
                    vec2(-0.5,  0.5)
                );

                vec3 colors[3] = vec3[](
                    vec3(1, 0, 0),
                    vec3(0, 1, 0),
                    vec3(0, 0, 1)
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

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.layout = *mPipelineLayout;
        pipelineInfo.renderPass = *mRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineInfo);
    }

    void update(const dst::Clock& clock, const dst::Input& input) override
    {
        if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
            stop();
        }
    }

    void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override
    {
        size_t vertexCount = 3;
        size_t instanceCount = 1;
        commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline);
        commandBuffer.draw(vertexCount, instanceCount);
    }
};

int main()
{
    try {
        VulkanExample01Triangle app;
        app.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
