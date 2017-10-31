
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders a textured quad
// Based on https://vulkan-tutorial.com/Texture_mapping

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"
#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <algorithm>
#include <array>
#include <iostream>
#include <memory>

struct UniformBuffer final
{
    dst::Matrix4x4 world;
    dst::Matrix4x4 view;
    dst::Matrix4x4 projection;
};

class VulkanExample07Compute final
    : public dst::vlkn::Application
{
private:
    class ComputePipeline final
    {
    private:
        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> mPipeline;

    public:
        ComputePipeline() = default;
        ComputePipeline(dst::vlkn::Device& device, size_t inputCount, const std::string& shaderSource)
        {
            using namespace dst::vlkn;
            auto shader = device.create<ShaderModule>(
                VK_SHADER_STAGE_COMPUTE_BIT,
                ShaderModule::Source::Code,
                shaderSource
            );

            mDescriptorSetLayout = device.create<Descriptor::Set::Layout>(shader->descriptor_set_layout_create_info());

            auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
            mPipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

            auto pipelineInfo = Pipeline::ComputeCreateInfo;
            pipelineInfo.stage = shader->pipeline_stage_create_info();
            pipelineInfo.layout = *mPipelineLayout;
            mPipeline = device.create<Pipeline>(pipelineInfo);
        }

    public:
        void dispatch(dst::vlkn::Command::Buffer& commandBuffer, dst::vlkn::Descriptor::Set& descriptorSet)
        {
            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_COMPUTE, *mPipeline);
            vkCmdBindDescriptorSets(commandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, *mPipelineLayout, 0, 1, &descriptorSet.handle(), 0, nullptr);
            vkCmdDispatch(commandBuffer, 1280, 720, 1);
        }
    };

private:
    std::shared_ptr<dst::vlkn::Image> mDensity0;
    std::shared_ptr<dst::vlkn::Image> mDensity1;
    std::shared_ptr<dst::vlkn::Image> mVelocityU0;
    std::shared_ptr<dst::vlkn::Image> mVelocityU1;
    std::shared_ptr<dst::vlkn::Image> mVelocityV0;
    std::shared_ptr<dst::vlkn::Image> mVelocityV1;
    std::shared_ptr<dst::vlkn::Sampler> mSampler;

    ComputePipeline mAddSourcePipeline;
    ComputePipeline mSetBoundaryPipeline;
    ComputePipeline mLinearSolvePipeline;
    ComputePipeline mDiffusionPipeline;
    ComputePipeline mAdvectionPipeline;
    ComputePipeline mProjectionPipeline;

    dst::vlkn::Queue* mComputeQueue { nullptr };
    std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mComputeDescriptorSetLayout;
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mComputePipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mComputePipeline;
    std::shared_ptr<dst::vlkn::Image> mComputeUniformBuffer;
    std::shared_ptr<dst::vlkn::Descriptor::Pool> mComputeDescriptorPool;
    dst::vlkn::Descriptor::Set* mComputeDescriptorSet { nullptr };
    std::shared_ptr<dst::vlkn::Command::Pool> mComputeCommandPool;
    dst::vlkn::Command::Buffer* mComputeCommandBuffer { nullptr };
    std::shared_ptr<dst::vlkn::Semaphore> mComputeSemaphore;

    std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mGraphicsDescriptorSetLayout;
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mGraphicsPipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mGraphicsPipeline;
    std::shared_ptr<dst::vlkn::Descriptor::Pool> mGraphicsDescriptorPool;
    dst::vlkn::Descriptor::Set* mGraphicsDescriptorSet { nullptr };

public:
    VulkanExample07Compute()
    {
        name("Dynamic_Static VK.07.Compute");
        mDebugFlags =
            0
            #if defined(DYNAMIC_STATIC_WINDOWS)
            | VK_DEBUG_REPORT_INFORMATION_BIT_EXT
            | VK_DEBUG_REPORT_DEBUG_BIT_EXT
            | VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_WARNING_BIT_EXT
            | VK_DEBUG_REPORT_ERROR_BIT_EXT
            #endif
            ;
    }

private:
    void setup() override
    {
        dst::vlkn::Application::setup();
        create_images();
        create_compute_resources();
        create_graphics_resources();
        create_descriptor_sets();
    }

    void create_device() override final
    {
        std::vector<std::string> deviceLayers;
        std::vector<std::string> deviceExtensions {
            VK_KHR_SWAPCHAIN_EXTENSION_NAME,
        };

        auto graphicsQueueFamilyIndices = mPhysicalDevice->find_queue_families(VK_QUEUE_GRAPHICS_BIT);
        std::array<float, 1> queuePriorities { };
        auto graphicsQueueInfo = dst::vlkn::Queue::CreateInfo;
        graphicsQueueInfo.queueCount = 1;
        graphicsQueueInfo.pQueuePriorities = queuePriorities.data();
        graphicsQueueInfo.queueFamilyIndex = static_cast<uint32_t>(graphicsQueueFamilyIndices[0]);

        auto computeQueueFamilyIndices = mPhysicalDevice->find_queue_families(VK_QUEUE_COMPUTE_BIT);
        auto computeQueueInfo = dst::vlkn::Queue::CreateInfo;
        computeQueueInfo.queueCount = 1;
        computeQueueInfo.pQueuePriorities = queuePriorities.data();
        computeQueueInfo.queueFamilyIndex = static_cast<uint32_t>(computeQueueFamilyIndices[0]);

        // TODO : Setting up and accessing Queues like this is no good...
        bool multipleQueues = graphicsQueueInfo.queueFamilyIndex != computeQueueInfo.queueFamilyIndex;
        if (multipleQueues) {
            std::array<VkDeviceQueueCreateInfo, 2> queueInfos { graphicsQueueInfo, computeQueueInfo };
            mDevice = mPhysicalDevice->create<dst::vlkn::Device>(deviceLayers, deviceExtensions, queueInfos);
            mGraphicsQueue = mDevice->queues()[0][0].get();
            mPresentQueue = mGraphicsQueue;
            mComputeQueue = mDevice->queues()[1][0].get();
        } else {
            std::array<VkDeviceQueueCreateInfo, 1> queueInfos { graphicsQueueInfo };
            mDevice = mPhysicalDevice->create<dst::vlkn::Device>(deviceLayers, deviceExtensions, queueInfos);
            mGraphicsQueue = mDevice->queues()[0][0].get();
            mPresentQueue = mGraphicsQueue;
            mComputeQueue = mGraphicsQueue;
        }
    }

    void create_images()
    {
        using namespace dst::vlkn;
        auto createImage =
        [&]()
        {
            auto imageInfo = Image::CreateInfo;
            imageInfo.imageType = VK_IMAGE_TYPE_2D;
            imageInfo.extent.width = mSwapchain->extent().width;
            imageInfo.extent.height = mSwapchain->extent().height;
            imageInfo.format = VK_FORMAT_R8_UNORM;
            imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
            imageInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            imageInfo.usage = VK_IMAGE_USAGE_STORAGE_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;

            auto image = mDevice->create<Image>(imageInfo);
            auto memoryRequirements = image->memory_requirements();
            auto memoryInfo = Memory::AllocateInfo;
            memoryInfo.allocationSize = memoryRequirements.size;
            memoryInfo.memoryTypeIndex = mPhysicalDevice->find_memory_type_index(
                memoryRequirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
            );

            image->bind_memory(mDevice->allocate<Memory>(memoryInfo));

            mGraphicsQueue->process_immediate(
                [&](Command::Buffer& commandBuffer)
                {
                    auto oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                    auto newLayout = VK_IMAGE_LAYOUT_GENERAL;
                    auto layoutTransition = image->create_layout_transition(oldLayout, newLayout);
                    vkCmdPipelineBarrier(
                        commandBuffer,
                        layoutTransition.srcStage,
                        layoutTransition.dstStage,
                        0,
                        0, nullptr,
                        0, nullptr,
                        1, &layoutTransition.barrier
                    );
                }
            );

            image->create<Image::View>();
            return image;
        };

        mDensity0 = createImage();
        mDensity1 = createImage();
        mVelocityU0 = createImage();
        mVelocityU1 = createImage();
        mVelocityV0 = createImage();
        mVelocityV1 = createImage();
        mSampler = mDevice->create<Sampler>();
    }

    void create_compute_resources()
    {
        // std::string shaderCommon =
        //     R"(
        // 
        //         layout(push_constant) uniform PushConstants
        //         {
        //             float dt;
        //             float diffusion;
        //             float viscosity;
        //         } pushConstants;
        // 
        //     )";

        mAddSourcePipeline = ComputePipeline(
            *mDevice,
            0,
            R"(

                #version 450

                layout (local_size_x = 1, local_size_y = 1) in;
                layout (binding = 0, r8) uniform writeonly image2D image;

                void main()
                {
                    // vec4 color = imageLoad(image, texCoord);

                    float value = (gl_GlobalInvocationID.x / 1280.0 + gl_GlobalInvocationID.y / 720.0) * 0.5;
                    imageStore(image, ivec2(gl_GlobalInvocationID.xy), vec4(value, 0, 0, 0));
                }

            )"
        );

        using namespace dst::vlkn;
        auto computeShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_COMPUTE_BIT,
            ShaderModule::Source::Code,
            R"(
        
                #version 450
        
                layout (local_size_x = 1, local_size_y = 1) in;
                layout (binding = 0, r8) uniform writeonly image2D image;
        
                void main()
                {
                    float value = (gl_GlobalInvocationID.x / 1280.0 + gl_GlobalInvocationID.y / 720.0) * 0.5;
                    imageStore(image, ivec2(gl_GlobalInvocationID.xy), vec4(value, 0, 0, 0));
                }
        
            )"
        );

        // VkDescriptorSetLayoutBinding binding { };
        // binding.descriptorCount = 1;
        // binding.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
        // binding.stageFlags = VK_SHADER_STAGE_COMPUTE_BIT;
        // 
        // auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
        // descriptorSetLayoutInfo.bindingCount = 1;
        // descriptorSetLayoutInfo.pBindings = &binding;
        // mComputeDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

        mComputeDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(computeShader->descriptor_set_layout_create_info());

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mComputeDescriptorSetLayout->handle();
        mComputePipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

        auto pipelineInfo = Pipeline::ComputeCreateInfo;
        pipelineInfo.stage = computeShader->pipeline_stage_create_info();
        pipelineInfo.layout = *mComputePipelineLayout;
        mComputePipeline = mDevice->create<Pipeline>(pipelineInfo);

        auto commandPoolInfo = Command::Pool::CreateInfo;
        commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
        commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(mComputeQueue->family_index());
        mComputeCommandPool = mDevice->create<Command::Pool>(commandPoolInfo);
        mComputeCommandBuffer = mComputeCommandPool->allocate<Command::Buffer>();

        mComputeSemaphore = mDevice->create<Semaphore>();
    }

    void create_graphics_resources()
    {
        using namespace dst::vlkn;
        VkDescriptorSetLayoutBinding samplerBinding { };
        samplerBinding.binding = 0;
        samplerBinding.descriptorCount = 1;
        samplerBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
        samplerBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

        auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
        descriptorSetLayoutInfo.bindingCount = 1;
        descriptorSetLayoutInfo.pBindings = &samplerBinding;
        mGraphicsDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mGraphicsDescriptorSetLayout->handle();
        mGraphicsPipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(location = 0) out vec2 fsTexCoord;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    fsTexCoord = vec2((gl_VertexIndex << 1) & 2, gl_VertexIndex & 2);
                    gl_Position = vec4(fsTexCoord * 2 - 1, 0, 1);
                }

            )"
        );

        auto fragmentShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_FRAGMENT_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(binding = 0) uniform sampler2D image;

                layout(location = 0) in vec2 fsTexCoord;

                layout(location = 0) out vec4 fragmentColor;

                void main()
                {
                    fragmentColor.r = texture(image, fsTexCoord).r;
                    fragmentColor.gb = vec2(0);
                    fragmentColor.a = 1;
                }

            )"
        );

        std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
            vertexShader->pipeline_stage_create_info(),
            fragmentShader->pipeline_stage_create_info(),
        };

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.layout = *mGraphicsPipelineLayout;
        pipelineInfo.renderPass = *mRenderPass;
        mGraphicsPipeline = mDevice->create<Pipeline>(pipelineInfo);
    }

    void create_descriptor_sets()
    {
        using namespace dst::vlkn;

        {
            VkDescriptorPoolSize poolSize { };
            poolSize.type = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
            poolSize.descriptorCount = 1;

            auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
            descriptorPoolInfo.poolSizeCount = 1;
            descriptorPoolInfo.pPoolSizes = &poolSize;
            descriptorPoolInfo.maxSets = 1;
            mComputeDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

            auto descriptorSetAllocateInfo = Descriptor::Set::AllocateInfo;
            descriptorSetAllocateInfo.descriptorPool = *mComputeDescriptorPool;
            descriptorSetAllocateInfo.descriptorSetCount = 1;
            descriptorSetAllocateInfo.pSetLayouts = &mComputeDescriptorSetLayout->handle();
            mComputeDescriptorSet = mComputeDescriptorPool->allocate<Descriptor::Set>(descriptorSetAllocateInfo);

            VkDescriptorImageInfo imageInfo { };
            imageInfo.imageLayout = VK_IMAGE_LAYOUT_GENERAL;
            imageInfo.imageView = *mDensity0->view();
            imageInfo.sampler = *mSampler;

            VkWriteDescriptorSet write { };
            write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            write.dstSet = *mComputeDescriptorSet;
            write.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
            write.descriptorCount = 1;
            write.pImageInfo = &imageInfo;
            vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
        }

        {
            VkDescriptorPoolSize poolSize { };
            poolSize.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            poolSize.descriptorCount = 1;

            auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
            descriptorPoolInfo.poolSizeCount = 1;
            descriptorPoolInfo.pPoolSizes = &poolSize;
            descriptorPoolInfo.maxSets = 1;
            mGraphicsDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

            auto descriptorSetAllocateInfo = Descriptor::Set::AllocateInfo;
            descriptorSetAllocateInfo.descriptorPool = *mGraphicsDescriptorPool;
            descriptorSetAllocateInfo.descriptorSetCount = 1;
            descriptorSetAllocateInfo.pSetLayouts = &mGraphicsDescriptorSetLayout->handle();
            mGraphicsDescriptorSet = mGraphicsDescriptorPool->allocate<Descriptor::Set>(descriptorSetAllocateInfo);

            VkDescriptorImageInfo imageInfo { };
            imageInfo.imageLayout = VK_IMAGE_LAYOUT_GENERAL;
            imageInfo.imageView = *mDensity0->view();
            imageInfo.sampler = *mSampler;

            VkWriteDescriptorSet write { };
            write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            write.dstSet = *mGraphicsDescriptorSet;
            write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            write.descriptorCount = 1;
            write.pImageInfo = &imageInfo;
            vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
        }
    }

    void update(const dst::Clock& clock, const dst::Input& input) override
    {
        if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
            stop();
        }
    }

    void render(const dst::Clock& clock) override
    {
        // NOTE : render(), record_command_buffer(), and mRecordCommandBuffers are dumb...
        //        Recording needs to be handled in a more sensible way.  Application needs
        //        to be refactored in general anyway.
        using namespace dst::vlkn;
        if (mSwapchain->valid() && mRecordCommandBuffers) {
            mComputeCommandBuffer->begin();

            // mComputeCommandBuffer->bind_pipeline(VK_PIPELINE_BIND_POINT_COMPUTE, *mComputePipeline);
            // vkCmdBindDescriptorSets(*mComputeCommandBuffer, VK_PIPELINE_BIND_POINT_COMPUTE, *mComputePipelineLayout, 0, 1, &mComputeDescriptorSet->handle(), 0, nullptr);
            // vkCmdDispatch(*mComputeCommandBuffer, 1280, 720, 1);

            mAddSourcePipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet);
            mComputeCommandBuffer->end();
        }
    }

    void create_barrier(dst::vlkn::Command::Buffer& commandBuffer)
    {
        VkImageMemoryBarrier barrier { };
        barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        barrier.oldLayout = VK_IMAGE_LAYOUT_GENERAL;
        barrier.newLayout = VK_IMAGE_LAYOUT_GENERAL;
        barrier.image = *mDensity0;
        barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        barrier.subresourceRange.layerCount = 1;
        barrier.subresourceRange.baseArrayLayer = 0;
        barrier.subresourceRange.levelCount = 1;
        barrier.subresourceRange.baseMipLevel = 0;
        barrier.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT;
        barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
        vkCmdPipelineBarrier(
            commandBuffer,
            VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
            VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
            VK_FLAGS_NONE,
            0, nullptr,
            0, nullptr,
            1, &barrier
        );
    }

    void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock)
    {
        using namespace dst::vlkn;
        commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mGraphicsPipeline);
        commandBuffer.bind_descriptor_set(*mGraphicsDescriptorSet, *mGraphicsPipelineLayout);
        commandBuffer.draw(3);
    }

    void submit_command_buffer() override
    {
        using namespace dst::vlkn;
        if (mSwapchain->valid()) {
            // NOTE : Like render() and record_command_buffer(), submit_command_buffer()
            //        needs to be reworked when Application is refactored...
            auto submitInfo = Queue::SubmitInfo;
            submitInfo.commandBufferCount = 1;
            submitInfo.pCommandBuffers = &mComputeCommandBuffer->handle();
            submitInfo.signalSemaphoreCount = 1;
            submitInfo.pSignalSemaphores = &mComputeSemaphore->handle();
            mComputeQueue->submit(submitInfo);

            std::array<VkSemaphore, 2> waitSemaphores {
                *mComputeSemaphore,
                *mImageSemaphore,
            };

            std::array<VkPipelineStageFlags, 2> waitStages {
                VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
            };

            submitInfo = Queue::SubmitInfo;
            submitInfo.waitSemaphoreCount = static_cast<uint32_t>(waitSemaphores.size());
            submitInfo.pWaitSemaphores = waitSemaphores.data();
            submitInfo.pWaitDstStageMask = waitStages.data();
            submitInfo.commandBufferCount = 1;
            submitInfo.pCommandBuffers = &mCommandPool->buffers()[mImageIndex]->handle();
            submitInfo.signalSemaphoreCount = 1;
            submitInfo.pSignalSemaphores = &mRenderSemaphore->handle();
            mGraphicsQueue->submit(submitInfo);

            auto presentInfo = Queue::PresentInfoKHR;
            presentInfo.waitSemaphoreCount = 1;
            presentInfo.pWaitSemaphores = &mRenderSemaphore->handle();
            presentInfo.swapchainCount = 1;
            presentInfo.pSwapchains = &mSwapchain->handle();
            presentInfo.pImageIndices = &mImageIndex;
            mPresentQueue->present(presentInfo);
        }
    }
};

int main()
{
    try {
        VulkanExample07Compute app;
        app.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}

// #if 0
// 
// static int N;
// static float dt;
// static float diff; // (diffusion?)
// static float viscosity;
// static float force;
// static float source;
// static int dvel; // (damping?)
// static float* u;
// static float* uPrevious;
// static float* v;
// static float* vPrevious;
// static float* density;
// static float* densityPrevious;
// 
// static void DrawVelocity();
// static void DrawDensity();
// 
// void main()
// {
//     // GetFromUI();
//     {
//         int size = (N + 2) * (N + 2);
//         for (int i = 0; i < size; ++i) {
//             densityPrevious[i] = vPrevious[i] = uPrevious[i] = 0;
//         }
//     }
// 
//     VelocityStep(N, u, v, uPrevious, vPrevious, viscosity, dt);
//     DensityStep(N, density, densityPrevious, u, v, diff, dt);
// 
//     if (dvel) {
//         DrawVelocity();
//     } else {
//         DrawDensity();
//     }
// }
// 
// 
// 
// VelocityStep(N, u, v, uPrevious, vPrevious, viscosity, dt)
// {
//     AddSource()
// }
// 
// DensityStep(N, density, densityPrevious, u, v, diff, dt)
// {
// 
// }
// 
// #endif
// 