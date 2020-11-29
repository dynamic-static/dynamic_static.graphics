
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/core/color.hpp"
#include "dynamic_static/graphics/vulkan.hpp"

#include <algorithm>

class VulkanExample_02_VertexBuffer final
    : public dst::vk::Application
{
public:
    static constexpr char* Name { "dynamic_static Vulkan example 02 Vertex Buffer" };

    inline VulkanExample_02_VertexBuffer()
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
    struct Vertex final
    {
        glm::vec3 position { };
        glm::vec4 color { };
    };

    inline bool setup() override final
    {
        Application::setup();
        setup_pipeline();
        setup_vertex_and_index_buffers();
        record_command_buffers();
        return true;
    }

    inline void setup_pipeline()
    {
        using namespace dst::vk;
        auto vertexShaderByteCode = compile_glsl_to_spirv(
            VK_SHADER_STAGE_VERTEX_BIT,
            __LINE__,
            R"(
                #version 450

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec4 vsColor;
                layout(location = 0) out vec4 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = vec4(vsPosition, 1);
                    fsColor = vsColor;
                }
            )"
        );
        auto vertexShaderModuleCreateInfo = get_default<VkShaderModuleCreateInfo>();
        vertexShaderModuleCreateInfo.codeSize = vertexShaderByteCode.size() * sizeof(uint32_t);
        vertexShaderModuleCreateInfo.pCode = !vertexShaderByteCode.empty() ? vertexShaderByteCode.data() : nullptr;
        Managed<VkShaderModule> vertexShaderModule;
        dst_vk(create<Managed<VkShaderModule>>(get_device(), &vertexShaderModuleCreateInfo, nullptr, &vertexShaderModule));

        #if 0
        auto vertexShaderReflectionInfo = reflect_shader(vertexShaderModule);
        #endif
        ShaderReflectionInfo vertexShaderReflectionInfo { };
        
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

        #if 0
        auto fragmentShaderReflectionInfo = reflect_shader(fragmentShaderModule);
        #endif
        ShaderReflectionInfo fragmentShaderReflectionInfo { };

        std::array<VkPipelineShaderStageCreateInfo, 2> pipelineShaderStageCreateInfos {
            #if 0
            vertexShaderReflectionInfo.pipelineShaderStageCreateInfo,
            fragmentShaderReflectionInfo.pipelineShaderStageCreateInfo,
            #endif
        };
        auto pipelineLayoutCreateInfo = get_default<VkPipelineLayoutCreateInfo>();
        Managed<VkPipelineLayout> pipelineLayout;
        dst_vk(create<Managed<VkPipelineLayout>>(get_device(), &pipelineLayoutCreateInfo, nullptr, &pipelineLayout));

        auto vertexInputBindingDescription = get_vertex_input_binding_description<Vertex>(0);
        auto vertexInputAttributeDescriptions = get_vertex_input_attribute_descriptions<glm::vec3, glm::vec4>(0);
        auto pipelineVertexInputStateCreateInfo = get_default<VkPipelineVertexInputStateCreateInfo>();
        pipelineVertexInputStateCreateInfo.vertexBindingDescriptionCount = 1;
        pipelineVertexInputStateCreateInfo.pVertexBindingDescriptions = &vertexInputBindingDescription;
        pipelineVertexInputStateCreateInfo.vertexAttributeDescriptionCount = (uint32_t)vertexInputAttributeDescriptions.size();
        pipelineVertexInputStateCreateInfo.pVertexAttributeDescriptions = vertexInputAttributeDescriptions.data();

        auto graphicsPipelineCreateInfo = get_default<VkGraphicsPipelineCreateInfo>();
        graphicsPipelineCreateInfo.stageCount = (uint32_t)pipelineShaderStageCreateInfos.size();
        graphicsPipelineCreateInfo.pStages = pipelineShaderStageCreateInfos.data();
        graphicsPipelineCreateInfo.pVertexInputState = &pipelineVertexInputStateCreateInfo;
        graphicsPipelineCreateInfo.layout = pipelineLayout;
        graphicsPipelineCreateInfo.renderPass = get_swapchain_render_pass();
        dst_vk(create<Managed<VkPipeline>>(get_device(), VK_NULL_HANDLE, 1, &graphicsPipelineCreateInfo, nullptr, &mPipeline));
    }

    inline void setup_vertex_and_index_buffers()
    {
        using namespace dst::vk;
        std::array<Vertex, 4> vertices {
            Vertex {{ -0.5f, -0.5f, 0.0f }, { dst::Color<>::OrangeRed }},
            Vertex {{  0.5f, -0.5f, 0.0f }, { dst::Color<>::BlueViolet }},
            Vertex {{  0.5f,  0.5f, 0.0f }, { dst::Color<>::DodgerBlue }},
            Vertex {{ -0.5f,  0.5f, 0.0f }, { dst::Color<>::Goldenrod }},
        };
        auto vertexBufferCreateInfo = get_default<VkBufferCreateInfo>();
        vertexBufferCreateInfo.size = (VkDeviceSize)vertices.size() * sizeof(Vertex);
        vertexBufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
        dst_vk(create<Managed<VkBuffer>>(get_device(), &vertexBufferCreateInfo, nullptr, &mVertexBuffer));
        VkMemoryRequirements vertexBufferMemoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), mVertexBuffer, &vertexBufferMemoryRequirements);

        std::array<uint16_t, 6> indices {
            0, 1, 2,
            2, 3, 0,
        };
        mIndexCount = indices.size();
        auto indexBufferCreateInfo = get_default<VkBufferCreateInfo>();
        indexBufferCreateInfo.size = (VkDeviceSize)vertices.size() * sizeof(Vertex);
        indexBufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
        dst_vk(create<Managed<VkBuffer>>(get_device(), &indexBufferCreateInfo, nullptr, &mIndexBuffer));
        VkMemoryRequirements indexBufferMemoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), mIndexBuffer, &indexBufferMemoryRequirements);

        auto memoryTypeBits = vertexBufferMemoryRequirements.memoryTypeBits & indexBufferMemoryRequirements.memoryTypeBits;
        auto memoryTypeIndex = get_memory_type_index(get_physical_device(), memoryTypeBits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
        assert(memoryTypeIndex.has_value() && "TODO : Error handling");
        auto memoryAllocateInfo = get_default<VkMemoryAllocateInfo>();
        memoryAllocateInfo.memoryTypeIndex = memoryTypeIndex.value();
        memoryAllocateInfo.allocationSize = vertexBufferMemoryRequirements.size;
        memoryAllocateInfo.allocationSize += memoryAllocateInfo.allocationSize % indexBufferMemoryRequirements.alignment;
        auto indexBufferMemoryOffset = memoryAllocateInfo.allocationSize;
        memoryAllocateInfo.allocationSize += indexBufferMemoryRequirements.size;
        Managed<VkDeviceMemory> memory;
        dst_vk(allocate<Managed<VkDeviceMemory>>(get_device(), &memoryAllocateInfo, nullptr, &memory));
        dst_vk(bind_memory(mVertexBuffer, memory, 0));
        dst_vk(bind_memory(mIndexBuffer, memory, indexBufferMemoryOffset));

        auto stagingBufferCreateInfo = get_default<VkBufferCreateInfo>();
        stagingBufferCreateInfo.size = std::max(vertexBufferCreateInfo.size, indexBufferCreateInfo.size);
        stagingBufferCreateInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        Managed<VkBuffer> stagingBuffer;
        dst_vk(create<Managed<VkBuffer>>(get_device(), &stagingBufferCreateInfo, nullptr, &stagingBuffer));
        VkMemoryRequirements stagingBufferMemoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), stagingBuffer, &stagingBufferMemoryRequirements);
        auto stagingMemoryTypeBits = stagingBufferMemoryRequirements.memoryTypeBits;
        auto stagingMemoryPropertyFlags = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT;
        auto stagingMemoryTypeIndex = get_memory_type_index(get_physical_device(), stagingMemoryTypeBits, stagingMemoryPropertyFlags);
        assert(stagingMemoryTypeIndex.has_value() && "TODO : Error handling");
        auto stagingMemoryAllocateInfo = get_default<VkMemoryAllocateInfo>();
        stagingMemoryAllocateInfo.memoryTypeIndex = stagingMemoryTypeIndex.value();
        stagingMemoryAllocateInfo.allocationSize = stagingBufferMemoryRequirements.size;
        Managed<VkDeviceMemory> stagingMemory;
        dst_vk(allocate<Managed<VkDeviceMemory>>(get_device(), &stagingMemoryAllocateInfo, nullptr, &stagingMemory));
        dst_vk(bind_memory(stagingBuffer, stagingMemory, 0));

        process_immediately(
            [&](const Managed<VkCommandBuffer>& commandBuffer)
            {
                uint8_t* pStagingData = nullptr;
                dst_vk(vkMapMemory(get_device(), stagingMemory, 0, VK_WHOLE_SIZE, 0, (void**)&pStagingData));
                assert(pStagingData && "TODO : Error handling");
                memcpy(pStagingData, vertices.data(), vertexBufferCreateInfo.size);
                vkUnmapMemory(get_device(), stagingMemory);
                VkBufferCopy bufferCopy { };
                bufferCopy.size = vertexBufferCreateInfo.size;
                vkCmdCopyBuffer(commandBuffer, stagingBuffer, mVertexBuffer, 1, &bufferCopy);
            }
        );

        process_immediately(
            [&](const Managed<VkCommandBuffer>& commandBuffer)
            {
                uint8_t* pStagingData = nullptr;
                dst_vk(vkMapMemory(get_device(), stagingMemory, 0, VK_WHOLE_SIZE, 0, (void**)&pStagingData));
                assert(pStagingData && "TODO : Error handling");
                memcpy(pStagingData, indices.data(), indexBufferCreateInfo.size);
                vkUnmapMemory(get_device(), stagingMemory);
                VkBufferCopy bufferCopy { };
                bufferCopy.size = indexBufferCreateInfo.size;
                vkCmdCopyBuffer(commandBuffer, stagingBuffer, mIndexBuffer, 1, &bufferCopy);
            }
        );
    }

    inline void record_command_buffers()
    {
        using namespace dst::vk;
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
            VkDeviceSize offset = 0;
            vkCmdBindVertexBuffers(commandBuffer, 0, 1, &*mVertexBuffer, &offset);
            vkCmdBindIndexBuffer(commandBuffer, mIndexBuffer, 0, VK_INDEX_TYPE_UINT16);
            vkCmdDrawIndexed(commandBuffer, (uint32_t)mIndexCount, 1, 0, 0, 0);
            vkCmdEndRenderPass(commandBuffer);
            vkEndCommandBuffer(commandBuffer);
        }
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
    dst::vk::Managed<VkBuffer> mVertexBuffer;
    dst::vk::Managed<VkBuffer> mIndexBuffer;
    size_t mIndexCount { 0 };
};

int main(int argc, const char* argv[])
{
    VulkanExample_02_VertexBuffer().start();
    return 0;
}
