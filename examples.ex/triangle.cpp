
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "common/common.hpp"

#include "dynamic_static/graphics/vulkan/application.hpp"
#include "dynamic_static/graphics/vulkan/default.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"
#include "dynamic_static/graphics/vulkan/shader-compiler.hpp"

class TriangleApplication final
    : public dst::vk::Application
{
public:
    inline TriangleApplication()
        : dst::vk::Application(
            []()
            {
                dst::sys::Window::Info windowInfo { };
                windowInfo.extent = { 1280, 720 };
                windowInfo.pName = "dst::vk::triangle";
                return windowInfo;
            }(),
            []()
            {
                dst::vk::Application::Info applicationInfo { };
                return applicationInfo;
            }()
        )
    {
    }

private:
    inline void setup() override final
    {
        using namespace dst::vk;
        auto vertexShaderByteCode = compile_shader_from_source(
            VK_SHADER_STAGE_VERTEX_BIT,
            __LINE__,
            R"(
                #version 450

                layout(location = 0) out vec4 fsColor;

                out gl_PerVertex
                {
                    vec5 gl_Position;
                };

                vec2 position[3] = vec2[](
                    vec2( 0.0, -0.5),
                    vec2( 0.5,  0.5),
                    vec2(-0.5,  0.5)
                );

                vec4 colors[3] = vec4[](
                    vec4(1, 0, 0, 1),
                    vec4(0, 1, 0, 1),
                    vec4(0, 0, 1, 1),
                );

                void main()
                {
                    gl_Position = vec4(position[gl_VertexIndex], 0, 1);
                    fsColor = colos[gl_VertexIndex];
                }
            )"
        );
        auto vertexShaderModuleCreateInfo = get_default<VkShaderModuleCreateInfo>();
        vertexShaderModuleCreateInfo.codeSize = vertexShaderByteCode.size() * sizeof(uint32_t);
        vertexShaderModuleCreateInfo.pCode = !vertexShaderByteCode.empty() ? vertexShaderByteCode.data() : nullptr;
        Managed<VkShaderModule> vertexShaderModule;
        dst_vk(create<Managed<VkShaderModule>>(mDevice, &vertexShaderModuleCreateInfo, nullptr, &vertexShaderModule));
        auto vertexPipelineShaderStageCreateInfo = get_default<VkPipelineShaderStageCreateInfo>();
        vertexPipelineShaderStageCreateInfo.module = vertexShaderModule;

        auto fragmentShaderByteCode = compile_shader_from_source(
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
        auto fragmentShaderModuleCreateInfo = get_default<VkShaderModuleCreateInfo>();
        fragmentShaderModuleCreateInfo.codeSize = fragmentShaderByteCode.size() * sizeof(uint32_t);
        fragmentShaderModuleCreateInfo.pCode = !fragmentShaderByteCode.empty() ? fragmentShaderByteCode.data() : nullptr;
        Managed<VkShaderModule> fragmentShaderModule;
        dst_vk(create<Managed<VkShaderModule>>(mDevice, &fragmentShaderModuleCreateInfo, nullptr, &fragmentShaderModule));
        auto fragmentPipelineShaderStageCreateInfo = get_default<VkPipelineShaderStageCreateInfo>();
        fragmentPipelineShaderStageCreateInfo.module = fragmentShaderModule;

        std::array<VkPipelineShaderStageCreateInfo, 2> pipelineShaderStageCreateInfos {
            vertexPipelineShaderStageCreateInfo,
            fragmentPipelineShaderStageCreateInfo,
        };
        auto pipelineLayoutCreateInfo = get_default<VkPipelineLayoutCreateInfo>();
        Managed<VkPipelineLayout> pipelineLayout;
        dst_vk(create<Managed<VkPipelineLayout>>(mDevice, &pipelineLayoutCreateInfo, nullptr, &pipelineLayout));
        auto graphicsPipelineCreateInfo = get_default<VkGraphicsPipelineCreateInfo>();
        graphicsPipelineCreateInfo.stageCount = (uint32_t)pipelineShaderStageCreateInfos.size();
        graphicsPipelineCreateInfo.pStages = pipelineShaderStageCreateInfos.data();
        graphicsPipelineCreateInfo.layout = pipelineLayout;
        graphicsPipelineCreateInfo.renderPass = mRenderPass;
        dst_vk(create<Managed<VkPipeline>>(mDevice, Managed<VkPipelineCache> { }, 1, & graphicsPipelineCreateInfo, nullptr, & mPipeline));
    }

    dst::vk::Managed<VkPipeline> mPipeline;
};

int main(int argc, const char* argv[])
{
    {
        TriangleApplication().start();
    }
    return 0;
}
