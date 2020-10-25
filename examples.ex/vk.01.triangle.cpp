
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/application.hpp"
#include "dynamic_static/graphics/vulkan/shader-module-utilities.hpp"

class VulkanExample_01_Triangle final
    : public dst::vk::Application
{
public:
    static constexpr char* Name { "dynamic_static Vulkan example 01 Triangle" };

    inline VulkanExample_01_Triangle()
        : dst::vk::Application(
            []()
            {
                dst::sys::Window::Info windowInfo { };
                windowInfo.extent = { 1280, 720 };
                windowInfo.pName = Name;
                return windowInfo;
            }(),
            []()
            {
                auto applicationInfo = dst::vk::get_default<VkApplicationInfo>();
                applicationInfo.pApplicationName = Name;
                return applicationInfo;
            }()
        )
    {
    }

private:
    inline bool setup() override final
    {
        Application::setup();
        using namespace dst::vk;
        auto vertexShaderByteCode = compile_glsl_to_spirv(
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
        dst_vk(create<Managed<VkShaderModule>>(get_device(), &vertexShaderModuleCreateInfo, nullptr, &vertexShaderModule));
        auto vertexPipelineShaderStageCreateInfo = get_default<VkPipelineShaderStageCreateInfo>();
        vertexPipelineShaderStageCreateInfo.stage = VK_SHADER_STAGE_VERTEX_BIT;
        vertexPipelineShaderStageCreateInfo.module = vertexShaderModule;
        vertexPipelineShaderStageCreateInfo.pName = "main";

        auto fragmentShaderByteCode = compile_glsl_to_spirv(
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
        dst_vk(create<Managed<VkShaderModule>>(get_device(), &fragmentShaderModuleCreateInfo, nullptr, &fragmentShaderModule));
        auto fragmentPipelineShaderStageCreateInfo = get_default<VkPipelineShaderStageCreateInfo>();
        fragmentPipelineShaderStageCreateInfo.stage = VK_SHADER_STAGE_FRAGMENT_BIT;
        fragmentPipelineShaderStageCreateInfo.module = fragmentShaderModule;
        fragmentPipelineShaderStageCreateInfo.pName = "main";

        std::array<VkPipelineShaderStageCreateInfo, 2> pipelineShaderStageCreateInfos {
            vertexPipelineShaderStageCreateInfo,
            fragmentPipelineShaderStageCreateInfo,
        };
        auto pipelineLayoutCreateInfo = get_default<VkPipelineLayoutCreateInfo>();
        Managed<VkPipelineLayout> pipelineLayout;
        dst_vk(create<Managed<VkPipelineLayout>>(get_device(), &pipelineLayoutCreateInfo, nullptr, &pipelineLayout));
        auto graphicsPipelineCreateInfo = get_default<VkGraphicsPipelineCreateInfo>();
        graphicsPipelineCreateInfo.stageCount = (uint32_t)pipelineShaderStageCreateInfos.size();
        graphicsPipelineCreateInfo.pStages = pipelineShaderStageCreateInfos.data();
        graphicsPipelineCreateInfo.layout = pipelineLayout;
        graphicsPipelineCreateInfo.renderPass = get_swapchain_render_pass();
        dst_vk(create<Managed<VkPipeline>>(get_device(), VK_NULL_HANDLE, 1, &graphicsPipelineCreateInfo, nullptr, &mPipeline));

        std::array<VkClearValue, 2> clearValues;
        clearValues[0].color = { 0, 0, 0, 1 };
        clearValues[1].depthStencil = { 1, 0 };
        auto extent = get_swapchain().get<Managed<VkSwapchainCreateInfoKHR>>()->imageExtent;
        for (size_t i = 0; i < get_swapchain_command_buffers().size(); ++i) {
            const auto& commandBuffer = get_swapchain_command_buffers()[i];
            auto commandBufferBeginInfo = get_default<VkCommandBufferBeginInfo>();
            dst_vk(vkBeginCommandBuffer(commandBuffer, &commandBufferBeginInfo));

            auto renderPassBeginInfo = get_default<VkRenderPassBeginInfo>();
            renderPassBeginInfo.renderPass = get_swapchain_render_pass();
            renderPassBeginInfo.framebuffer = get_swapchain_framebuffers()[i];
            renderPassBeginInfo.renderArea.extent = extent;
            renderPassBeginInfo.clearValueCount = 1;
            renderPassBeginInfo.pClearValues = clearValues.data();
            vkCmdBeginRenderPass(commandBuffer, &renderPassBeginInfo, VK_SUBPASS_CONTENTS_INLINE);

            vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, mPipeline);

            VkRect2D scissor { };
            scissor.extent = extent;
            vkCmdSetScissor(commandBuffer, 0, 1, &scissor);

            VkViewport viewport { };
            viewport.width = (float)extent.width;
            viewport.height = (float)extent.height;
            viewport.minDepth = 0;
            viewport.maxDepth = 1;
            vkCmdSetViewport(commandBuffer, 0, 1, &viewport);

            vkCmdDraw(commandBuffer, 3, 1, 0, 0);

            vkCmdEndRenderPass(commandBuffer);

            vkEndCommandBuffer(commandBuffer);
        }
        return true;
    }

    inline void render(const dst::Clock& clock) override final
    {
        using namespace dst::vk;
        uint32_t swapchainImageIndex = 0;
        dst_vk(vkAcquireNextImageKHR(get_device(), get_swapchain(), 0, get_swapchain_image_acquired_semaphore(), VK_NULL_HANDLE, &swapchainImageIndex));

        VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
        auto submitInfo = get_default<VkSubmitInfo>();
        submitInfo.waitSemaphoreCount = 1;
        submitInfo.pWaitSemaphores = &*get_swapchain_image_acquired_semaphore();
        submitInfo.pWaitDstStageMask = waitStages;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &*get_swapchain_command_buffers()[swapchainImageIndex];
        submitInfo.signalSemaphoreCount = 1;
        submitInfo.pSignalSemaphores = &*get_swapchain_image_rendered_semaphore();
        dst_vk(vkQueueSubmit(get_graphics_queue(), 1, &submitInfo, VK_NULL_HANDLE));

        auto presentInfo = get_default<VkPresentInfoKHR>();
        presentInfo.waitSemaphoreCount = 1;
        presentInfo.pWaitSemaphores = &*get_swapchain_image_rendered_semaphore();
        presentInfo.swapchainCount = 1;
        presentInfo.pSwapchains = &*get_swapchain();
        presentInfo.pImageIndices = &swapchainImageIndex;
        dst_vk(vkQueuePresentKHR(get_graphics_queue(), &presentInfo));
        dst_vk(vkQueueWaitIdle(get_graphics_queue()));
    }

    dst::vk::Managed<VkPipeline> mPipeline;
};

int main(int argc, const char* argv[])
{
    VulkanExample_01_Triangle().start();
    return 0;
}
