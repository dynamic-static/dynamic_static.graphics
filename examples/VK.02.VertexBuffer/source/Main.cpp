
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <array>
#include <iostream>
#include <memory>

struct Vertex final
{
    dst::Vector2 position;
    dst::Color color;

    static VkVertexInputBindingDescription binding_description()
    {
        VkVertexInputBindingDescription binding;
        binding.binding = 0;
        binding.stride = sizeof(Vertex);
        binding.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
        return binding;
    }

    static std::array<VkVertexInputAttributeDescription, 2> attribute_descriptions()
    {
        VkVertexInputAttributeDescription positionAttribute;
        positionAttribute.binding = 0;
        positionAttribute.location = 0;
        positionAttribute.format = VK_FORMAT_R32G32_SFLOAT;
        positionAttribute.offset = offsetof(Vertex, position);

        VkVertexInputAttributeDescription colorAttribute;
        colorAttribute.binding = 0;
        colorAttribute.location = 1;
        colorAttribute.format = VK_FORMAT_R32G32B32A32_SFLOAT;
        colorAttribute.offset = offsetof(Vertex, color);

        return { positionAttribute, colorAttribute };
    }
};

int main()
{
    {
        // Renders a quad using vertex and index buffers
        // based on https://vulkan-tutorial.com/Vertex_buffers

        using namespace dst::gfx;
        using namespace dst::gfx::vlkn;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Instance and PhysicalDevices
        std::vector<std::string> instanceLayers;
        std::vector<std::string> instanceExtensions {
            VK_KHR_SURFACE_EXTENSION_NAME,
            #if defined(DYNAMIC_STATIC_WINDOWS)
            VK_KHR_WIN32_SURFACE_EXTENSION_NAME,
            #elif defined(DYNAMIC_STATIC_LINUX)
            VK_KHR_XLIB_SURFACE_EXTENSION_NAME,
            #endif
        };

        VkDebugReportFlagsEXT debugFlags =
            0
            #if defined(DYNAMIC_STATIC_WINDOWS)
            // | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            // | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            // | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            // | VK_DEBUG_REPORT_WARNING_BIT_EXT
            // | VK_DEBUG_REPORT_ERROR_BIT_EXT
            #endif
            ;

        auto instance = vlkn::create<Instance>(instanceLayers, instanceExtensions, debugFlags);
        // NOTE : We're just assuming that the first PhysicalDevice is the one we want.
        //        This won't always be the case, we should check for necessary features.
        auto& physicalDevice = *instance->physical_devices()[0];
        auto apiVersion = physicalDevice.properties().apiVersion;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Window and Surface
        Window::Configuration configuration;
        configuration.api = dst::gfx::API::Vulkan;
        configuration.apiVersion.major = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.minor = VK_VERSION_MAJOR(apiVersion);
        configuration.apiVersion.patch = VK_VERSION_MAJOR(apiVersion);
        auto window = std::make_shared<Window>(configuration);
        auto surface = physicalDevice.create<SurfaceKHR>(window);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create logical Device and Queues
        std::vector<std::string> deviceLayers;
        std::vector<std::string> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };

        auto queueFamilyFlags = VK_QUEUE_GRAPHICS_BIT;
        auto queueFamilyIndices = physicalDevice.find_queue_families(queueFamilyFlags);
        Queue::Info queueInfo { };
        std::array<float, 1> queuePriorities { };
        queueInfo.pQueuePriorities = queuePriorities.data();
        // NOTE : We're assuming that we got at least one Queue capabale of
        //        graphics, in anything but a toy we want to validate that.
        queueInfo.queueFamilyIndex = static_cast<uint32_t>(queueFamilyIndices[0]);
        std::array<Queue::Info, 1> queueInfos { queueInfo };
        auto device = physicalDevice.create<Device>(deviceLayers, deviceExtensions, queueInfos);
        // NOTE : We're assuming that the Queue we're choosing for graphics
        //        is capable of presenting, this may not always be the case.
        auto& graphicsQueue = *device->queues()[0][0];
        auto& presentQueue = graphicsQueue;

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create SwapChain
        std::shared_ptr<SwapchainKHR> swapchain;
        std::vector<std::shared_ptr<Framebuffer>> framebuffers;
        if (surface->presentation_supported(presentQueue.family_index())) {
            swapchain = device->create<SwapchainKHR>(surface);
            framebuffers.reserve(swapchain->images().size());
        } else {
            throw std::runtime_error("Surface doesn't support presentation");
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create RenderPass
        VkAttachmentDescription colorAttachment { };
        colorAttachment.format = swapchain->format();
        colorAttachment.samples = VK_SAMPLE_COUNT_1_BIT;
        colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
        colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        colorAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        colorAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        colorAttachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        colorAttachment.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;

        VkAttachmentReference colorAttachmentReference { };
        colorAttachmentReference.attachment = 0;
        colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

        VkSubpassDescription subpass { };
        subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
        subpass.colorAttachmentCount = 1;
        subpass.pColorAttachments = &colorAttachmentReference;

        RenderPass::Info renderPassInfo;
        renderPassInfo.attachmentCount = 1;
        renderPassInfo.pAttachments = &colorAttachment;
        renderPassInfo.subpassCount = 1;
        renderPassInfo.pSubpasses = &subpass;
        auto renderPass = device->create<RenderPass>(renderPassInfo);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Pipeline
        auto vertexShader = device->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450
                #extension GL_ARB_separate_shader_objects : enable

                layout(location = 0) in vec2 inPosition;
                layout(location = 1) in vec4 inColor;

                layout(location = 0) out vec3 fragColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = vec4(inPosition, 0, 1);
                    fragColor = inColor.rgb;
                }

            )"
        );

        auto fragmentShader = device->create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450
                #extension GL_ARB_separate_shader_objects : enable

                layout(location = 0) in vec3 fragColor;

                layout(location = 0) out vec4 outColor;

                void main()
                {
                    outColor = vec4(fragColor, 1);
                }

            )"
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_info(),
            fragmentShader->pipeline_stage_info(),
        };

        auto vertexBindingDescription = Vertex::binding_description();
        auto vertexAttributeDescriptions = Vertex::attribute_descriptions();
        VkPipelineVertexInputStateCreateInfo vertexInputInfo { };
        vertexInputInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
        vertexInputInfo.vertexBindingDescriptionCount = 1;
        vertexInputInfo.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputInfo.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
        vertexInputInfo.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo { };
        inputAssemblyInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
        inputAssemblyInfo.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

        VkViewport viewport { };
        viewport.width = static_cast<float>(swapchain->extent().width);
        viewport.height = static_cast<float>(swapchain->extent().height);
        viewport.minDepth = 0;
        viewport.maxDepth = 1;

        VkRect2D scissor { };
        scissor.extent = swapchain->extent();

        VkPipelineViewportStateCreateInfo viewportInfo { };
        viewportInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
        viewportInfo.viewportCount = 1;
        viewportInfo.pViewports = &viewport;
        viewportInfo.scissorCount = 1;
        viewportInfo.pScissors = &scissor;

        VkPipelineRasterizationStateCreateInfo rasterizationInfo { };
        rasterizationInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
        rasterizationInfo.polygonMode = VK_POLYGON_MODE_FILL;
        rasterizationInfo.lineWidth = 1;
        rasterizationInfo.cullMode = VK_CULL_MODE_BACK_BIT;
        rasterizationInfo.frontFace = VK_FRONT_FACE_CLOCKWISE;

        VkPipelineMultisampleStateCreateInfo multisampleInfo { };
        multisampleInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
        multisampleInfo.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
        multisampleInfo.minSampleShading = 1;

        VkPipelineColorBlendAttachmentState colorBlendAttacment { };
        colorBlendAttacment.colorWriteMask =
            VK_COLOR_COMPONENT_R_BIT |
            VK_COLOR_COMPONENT_G_BIT |
            VK_COLOR_COMPONENT_B_BIT |
            VK_COLOR_COMPONENT_A_BIT;

        VkPipelineColorBlendStateCreateInfo colorBlendStateInfo { };
        colorBlendStateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
        colorBlendStateInfo.attachmentCount = 1;
        colorBlendStateInfo.pAttachments = &colorBlendAttacment;

        Pipeline::Layout::Info pipelineLayoutInfo;
        auto pipelineLayout = device->create<Pipeline::Layout>(pipelineLayoutInfo);

        std::array<VkDynamicState, 2> dynamicStates {
            VK_DYNAMIC_STATE_VIEWPORT,
            VK_DYNAMIC_STATE_SCISSOR,
        };

        VkPipelineDynamicStateCreateInfo dynamicStateInfo { };
        dynamicStateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
        dynamicStateInfo.dynamicStateCount = static_cast<uint32_t>(dynamicStates.size());
        dynamicStateInfo.pDynamicStates = dynamicStates.data();

        Pipeline::GraphicsInfo pipelineInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.pVertexInputState = &vertexInputInfo;
        pipelineInfo.pInputAssemblyState = &inputAssemblyInfo;
        pipelineInfo.pViewportState = &viewportInfo;
        pipelineInfo.pRasterizationState = &rasterizationInfo;
        pipelineInfo.pMultisampleState = &multisampleInfo;
        pipelineInfo.pColorBlendState = &colorBlendStateInfo;
        pipelineInfo.pDynamicState = &dynamicStateInfo;
        pipelineInfo.layout = *pipelineLayout;
        pipelineInfo.renderPass = *renderPass;
        pipelineInfo.subpass = 0;
        auto pipeline = device->create<Pipeline>(pipelineInfo);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Command::Pool
        Command::Pool::Info commandPoolInfo;
        commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(graphicsQueue.family_index());
        auto commandPool = device->create<Command::Pool>(commandPoolInfo);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create vertex and index Buffers
        const std::vector<Vertex> vertices {
            { { -0.5f, -0.5f }, { dst::Color::OrangeRed } },
            { {  0.5f, -0.5f }, { dst::Color::BlueViolet } },
            { { -0.5f,  0.5f }, { dst::Color::Goldenrod } },

            { {  0.5f, -0.5f }, { dst::Color::BlueViolet } },
            { {  0.5f,  0.5f }, { dst::Color::DodgerBlue } },
            { { -0.5f,  0.5f }, { dst::Color::Goldenrod } },
        };

        const std::vector<uint16_t> indices {
            0, 1, 2, 2, 3, 0,
        };

        auto vertexBufferSize = static_cast<VkDeviceSize>(sizeof(vertices[0]) * vertices.size());

        Buffer::Info stagingBufferInfo;
        stagingBufferInfo.size = vertexBufferSize;
        stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto stagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        auto stagingBuffer = device->create<Buffer>(stagingBufferInfo, stagingMemoryProperties);
        stagingBuffer->write<Vertex>(vertices);

        Buffer::Info vertexBufferInfo;
        vertexBufferInfo.size = vertexBufferSize;
        vertexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
        auto vertexMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        auto vertexBuffer = device->create<Buffer>(vertexBufferInfo, vertexMemoryProperties);

        auto copyCommandBuffer = commandPool->allocate_transient<Command::Buffer>();
        Command::Buffer::BeginInfo copyBufferBeginInfo;
        copyBufferBeginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        copyCommandBuffer->begin(copyBufferBeginInfo);
        VkBufferCopy copyInfo { };
        copyInfo.size = vertexBufferSize;
        copyCommandBuffer->copy_buffer(*stagingBuffer, *vertexBuffer, vertexBufferSize);
        copyCommandBuffer->end();
        graphicsQueue.wait_idle();
        Queue::SubmitInfo copySubmitInfo;
        copySubmitInfo.commandBufferCount = 1;
        copySubmitInfo.pCommandBuffers = &copyCommandBuffer->handle();
        graphicsQueue.submit(copySubmitInfo);
        graphicsQueue.wait_idle();

        // NOTE : After copying our vertex data from host memory to device local memory
        //        we can free our staging buffer and our copy command buffer and all of
        //        their associated resources.
        copyCommandBuffer.reset();
        stagingBuffer.reset();

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Command::Buffers
        for (size_t i = 0; i < swapchain->images().size(); ++i) {
            commandPool->allocate<Command::Buffer>();
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Create Sempahores
        auto imageSemaphore = device->create<Semaphore>();
        auto renderSemaphore = device->create<Semaphore>();

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Render
        bool createFramebuffers = true;
        bool recordCommandBuffers = true;
        swapchain->on_resized =
        [&](const SwapchainKHR&)
        {
            // NOTE : If our Window size changes, our Surface and Swapchain's Image
            //        sizes will also change.  When this occurs we need to recreate
            //        our Framebuffers and re-record our Command::Buffers.
            createFramebuffers = true;
            recordCommandBuffers = true;
            auto extent = swapchain->extent();
        };

        window->name("Dynamic_Static VK.02.VertexBuffer");
        bool running = true;
        while (running) {
            Window::update();
            auto quitKey = dst::Keyboard::Key::Escape;
            if (window->input().keyboard().down(quitKey)) {
                running = false;
            }

            presentQueue.wait_idle();
            swapchain->update();
            if (swapchain->valid()) {
                auto imageIndex = static_cast<uint32_t>(swapchain->next_image(*imageSemaphore));

                if (createFramebuffers) {
                    createFramebuffers = false;
                    recordCommandBuffers = true;
                    framebuffers.clear();
                    framebuffers.reserve(swapchain->images().size());
                    for (const auto& image : swapchain->images()) {
                        Framebuffer::Info framebufferInfo;
                        framebufferInfo.renderPass = *renderPass;
                        framebufferInfo.attachmentCount = 1;
                        framebufferInfo.pAttachments = &image->views()[0]->handle();
                        framebufferInfo.width = swapchain->extent().width;
                        framebufferInfo.height = swapchain->extent().height;
                        framebufferInfo.layers = 1;
                        framebuffers.push_back(device->create<Framebuffer>(framebufferInfo));
                    }
                }

                if (recordCommandBuffers) {
                    recordCommandBuffers = false;
                    for (size_t i = 0; i < framebuffers.size(); ++i) {
                        auto& commandBuffer = commandPool->buffers()[i];

                        Command::Buffer::BeginInfo beginInfo;
                        beginInfo.flags = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT;
                        commandBuffer->begin(beginInfo);

                        VkClearValue clearColor { 0.2f, 0.2f, 0.2f, 1 };
                        RenderPass::BeginInfo renderPassBeginInfo;
                        renderPassBeginInfo.renderPass = *renderPass;
                        renderPassBeginInfo.framebuffer = *framebuffers[i];
                        renderPassBeginInfo.renderArea.extent = swapchain->extent();
                        renderPassBeginInfo.clearValueCount = 1;
                        renderPassBeginInfo.pClearValues = &clearColor;
                        commandBuffer->begin_render_pass(renderPassBeginInfo);

                        commandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *pipeline);

                        VkViewport viewport { };
                        viewport.width = static_cast<float>(swapchain->extent().width);
                        viewport.height = static_cast<float>(swapchain->extent().height);
                        viewport.minDepth = 0;
                        viewport.maxDepth = 1;
                        commandBuffer->set_viewport(viewport);

                        VkRect2D scissor { };
                        scissor.extent = swapchain->extent();
                        commandBuffer->set_scissor(scissor);
                        commandBuffer->bind_vertex_buffer(*vertexBuffer);
                        commandBuffer->draw(vertices.size(), 1);
                        commandBuffer->end_render_pass();
                        commandBuffer->end();
                    }
                }

                Queue::SubmitInfo submitInfo;
                VkPipelineStageFlags waitStages[] { VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
                submitInfo.waitSemaphoreCount = 1;
                submitInfo.pWaitSemaphores = &imageSemaphore->handle();
                submitInfo.pWaitDstStageMask = waitStages;
                submitInfo.commandBufferCount = 1;
                submitInfo.pCommandBuffers = &commandPool->buffers()[imageIndex]->handle();
                submitInfo.signalSemaphoreCount = 1;
                submitInfo.pSignalSemaphores = &renderSemaphore->handle();
                graphicsQueue.submit(submitInfo);

                Queue::PresentInfoKHR presentInfo;
                presentInfo.waitSemaphoreCount = 1;
                presentInfo.pWaitSemaphores = &renderSemaphore->handle();
                presentInfo.swapchainCount = 1;
                presentInfo.pSwapchains = &swapchain->handle();
                presentInfo.pImageIndices = &imageIndex;
                presentQueue.present(presentInfo);
            }

            window->swap_buffers();
        }

        device->wait_idle();
    }

    return 0;
}
