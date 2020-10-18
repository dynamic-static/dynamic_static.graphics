
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
        auto vertexShaderModuleCreateInfo = get_default<VkShaderModuleCreateInfo>();
        vertexShaderModuleCreateInfo.codeSize = vertexShaderByteCode.size() * sizeof(uint32_t);
        vertexShaderModuleCreateInfo.pCode = !vertexShaderByteCode.empty() ? vertexShaderByteCode.data() : nullptr;
        Managed<VkShaderModule> vertexShaderModule;
        dst_vk(create<Managed<VkShaderModule>>(mDevice, &vertexShaderModuleCreateInfo, nullptr, &vertexShaderModule));
        auto vertexPipelineShaderStageCreateInfo = get_default<VkPipelineShaderStageCreateInfo>();
        vertexPipelineShaderStageCreateInfo.stage = VK_SHADER_STAGE_VERTEX_BIT;
        vertexPipelineShaderStageCreateInfo.module = vertexShaderModule;
        vertexPipelineShaderStageCreateInfo.pName = "main";

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
        fragmentPipelineShaderStageCreateInfo.stage = VK_SHADER_STAGE_FRAGMENT_BIT;
        fragmentPipelineShaderStageCreateInfo.module = fragmentShaderModule;
        fragmentPipelineShaderStageCreateInfo.pName = "main";

        std::array<VkPipelineShaderStageCreateInfo, 2> pipelineShaderStageCreateInfos {
            vertexPipelineShaderStageCreateInfo,
            fragmentPipelineShaderStageCreateInfo,
        };
        auto pipelineLayoutCreateInfo = get_default<VkPipelineLayoutCreateInfo>();
        dst_vk(create<Managed<VkPipelineLayout>>(mDevice, &pipelineLayoutCreateInfo, nullptr, &mPipelineLayout));
        auto graphicsPipelineCreateInfo = get_default<VkGraphicsPipelineCreateInfo>();
        graphicsPipelineCreateInfo.stageCount = (uint32_t)pipelineShaderStageCreateInfos.size();
        graphicsPipelineCreateInfo.pStages = pipelineShaderStageCreateInfos.data();
        graphicsPipelineCreateInfo.layout = mPipelineLayout;
        graphicsPipelineCreateInfo.renderPass = mRenderPass;
        dst_vk(create<Managed<VkPipeline>>(mDevice, VK_NULL_HANDLE, 1, &graphicsPipelineCreateInfo, nullptr, &mPipeline));

        std::array<VkClearValue, 2> clearValues;
        clearValues[0].color = { 0, 0, 0, 1 };
        clearValues[1].depthStencil = { 1, 0 };
        auto extent = mSwapchain.get<Managed<VkSwapchainCreateInfoKHR>>()->imageExtent;
        for (size_t i = 0; i < mCommandBuffers.size(); ++i) {
            auto commandBufferBeginInfo = get_default<VkCommandBufferBeginInfo>();
            dst_vk(vkBeginCommandBuffer(mCommandBuffers[i], &commandBufferBeginInfo));

            auto renderPassBeginInfo = get_default<VkRenderPassBeginInfo>();
            renderPassBeginInfo.renderPass = mRenderPass;
            renderPassBeginInfo.framebuffer = mRenderTargets[i].frameBuffer;
            renderPassBeginInfo.renderArea.extent = extent;
            renderPassBeginInfo.clearValueCount = 1;
            renderPassBeginInfo.pClearValues = clearValues.data();
            vkCmdBeginRenderPass(mCommandBuffers[i], &renderPassBeginInfo, VK_SUBPASS_CONTENTS_INLINE);

            VkRect2D scissor { };
            scissor.extent = extent;
            vkCmdSetScissor(mCommandBuffers[i], 0, 1, &scissor);

            VkViewport viewport { };
            viewport.width = (float)extent.width;
            viewport.height = (float)extent.height;
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            vkCmdSetViewport(mCommandBuffers[i], 0, 1, &viewport);

            vkCmdEndRenderPass(mCommandBuffers[i]);

            vkEndCommandBuffer(mCommandBuffers[i]);
        }
    }

    inline void render(const dst::Clock& clock) override final
    {
        using namespace dst::vk;
        uint32_t swapchainImageIndex = 0;
        dst_vk(vkAcquireNextImageKHR(mDevice, mSwapchain, 0, mImageAcquiredSemaphore, VK_NULL_HANDLE, &swapchainImageIndex));

        VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
        auto submitInfo = get_default<VkSubmitInfo>();
        submitInfo.waitSemaphoreCount = 1;
        submitInfo.pWaitSemaphores = &*mImageAcquiredSemaphore;
        submitInfo.pWaitDstStageMask = waitStages;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &*mCommandBuffers[swapchainImageIndex];
        submitInfo.signalSemaphoreCount = 1;
        submitInfo.pSignalSemaphores = &*mImageRenderedSemaphore;
        dst_vk(vkQueueSubmit(mGraphicsQueue, 1, &submitInfo, VK_NULL_HANDLE));

        auto presentInfo = get_default<VkPresentInfoKHR>();
        presentInfo.waitSemaphoreCount = 1;
        presentInfo.pWaitSemaphores = &*mImageRenderedSemaphore;
        presentInfo.swapchainCount = 1;
        presentInfo.pSwapchains = &*mSwapchain;
        presentInfo.pImageIndices = &swapchainImageIndex;
        dst_vk(vkQueuePresentKHR(mGraphicsQueue, &presentInfo));
        dst_vk(vkQueueWaitIdle(mGraphicsQueue));
    }

    dst::vk::Managed<VkPipeline> mPipeline;
    dst::vk::Managed<VkPipelineLayout> mPipelineLayout;
};

int main(int argc, const char* argv[])
{
    {
        TriangleApplication().start();
    }
    return 0;
}
