
/*
==========================================
    Licensed under the MIT license
    Copyright (c) 2017 Dynamic_Static
        Patrick Purcell
    http://opensource.org/licenses/MIT
==========================================
*/

// Renders a 2D fluid simulation.
// Based on http://prideout.net/blog/?p=58

#include "ComputePipeline.hpp"

#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Vulkan/ImGui/ImGui.hpp"
#include "Dynamic_Static/System/Window.hpp"

#include <array>
#include <iostream>
#include <memory>
#include <string>

namespace ComputeFluid2D {

    static bool gMouseDown;
    static glm::vec2 gMousePosition;

    class Application final
        : public dst::vlkn::Application
    {
    private:
        static constexpr float CellSize { 1.25f };
        float mAmbientTemperature { 0 };
        float mImpulseTemperature { 10.0f };
        float mImpulseDensity { 1.0f };
        uint32_t mJacobiIterations { 40 };
        float mTimeStep { 0.125f };
        float mSmokeBuoyancy { 1.0f };
        float mSmokeWeight { 0.05f };
        float mGradientScale { 1.125f / CellSize };
        float mVelocityDissipation { 0.99f };
        float mDensityDissipation { 0.9999f };
        float mTemperatureDissipation { 0.99f };
        glm::vec2 mImpulsePosition { 0, 0 };

        dst::vlkn::ImGUI mGui;

        dst::vlkn::Queue* mComputeQueue { nullptr };
        std::shared_ptr<dst::vlkn::Command::Pool> mComputeCommandPool;
        dst::vlkn::Command::Buffer* mComputeCommandBuffer;
        std::shared_ptr<dst::vlkn::Semaphore> mComputeSemaphore;
        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mComputeDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Descriptor::Pool> mDescriptorPool;
        dst::vlkn::Descriptor::Set* mComputeDescriptorSet { nullptr };

        ComputePipeline mClearPipeline;
        ComputePipeline mAddFluidPipeline;

        ComputePipeline mAdvectPipeline;
        ComputePipeline mJacobiPipeline;
        ComputePipeline mSubtractGradientPipeline;
        ComputePipeline mComputeDivergencePipeline;
        ComputePipeline mApplyImpulsePipeline;
        ComputePipeline mApplyBuoyancyPipeline;

        using ImageBuffer = std::array<std::shared_ptr<dst::vlkn::Image>, 2>;
        ImageBuffer mVelocity;
        ImageBuffer mDensity;
        ImageBuffer mPressure;
        ImageBuffer mTemperature;
        ImageBuffer mFluidProperties;
        std::shared_ptr<dst::vlkn::Image> mDivergence;
        std::shared_ptr<dst::vlkn::Image> mObstacles;
        std::shared_ptr<dst::vlkn::Image> mObstaclesVelocity;
        std::vector<dst::vlkn::Image*> mComputeImages;

        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mGraphicsDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Pipeline::Layout> mGraphicsPipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> mGraphicsPipeline;
        // std::shared_ptr<dst::vlkn::Descriptor::Pool> mGraphicsDescriptorPool;
        // std::vector<dst::vlkn::Descriptor::Set*> mGraphicsDescriptorSets;
        dst::vlkn::Descriptor::Set* mGraphicsDescriptorSet { nullptr };
        std::shared_ptr<dst::vlkn::Sampler> mSampler;

    public:
        Application()
        {
            set_name("Dynamic_Static ComputeFluid2D");
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

    public:
        void create_device() override final
        {
            using namespace dst::vlkn;
            std::vector<std::string> deviceLayers;
            std::vector<std::string> deviceExtensions {
                VK_KHR_SWAPCHAIN_EXTENSION_NAME,
            };

            auto graphicsQueueFamilyIndices = mPhysicalDevice->find_queue_families(VK_QUEUE_GRAPHICS_BIT);
            std::array<float, 1> queuePriorities { };
            auto graphicsQueueInfo = Queue::CreateInfo;
            graphicsQueueInfo.queueCount = 1;
            graphicsQueueInfo.pQueuePriorities = queuePriorities.data();
            graphicsQueueInfo.queueFamilyIndex = static_cast<uint32_t>(graphicsQueueFamilyIndices[0]);

            auto computeQueueFamilyIndices = mPhysicalDevice->find_queue_families(VK_QUEUE_COMPUTE_BIT);
            auto computeQueueInfo = Queue::CreateInfo;
            computeQueueInfo.queueCount = 1;
            computeQueueInfo.pQueuePriorities = queuePriorities.data();
            computeQueueInfo.queueFamilyIndex = static_cast<uint32_t>(computeQueueFamilyIndices[0]);

            // TODO : Setting up and accessing Queues like this is no good...
            bool multipleQueues = graphicsQueueInfo.queueFamilyIndex != computeQueueInfo.queueFamilyIndex;
            if (multipleQueues) {
                std::array<VkDeviceQueueCreateInfo, 2> queueInfos { graphicsQueueInfo, computeQueueInfo };
                mDevice = mPhysicalDevice->create<Device>(deviceLayers, deviceExtensions, queueInfos);
                mGraphicsQueue = mDevice->queues()[0][0].get();
                mPresentQueue = mGraphicsQueue;
                mComputeQueue = mDevice->queues()[1][0].get();
            } else {
                std::array<VkDeviceQueueCreateInfo, 1> queueInfos { graphicsQueueInfo };
                mDevice = mPhysicalDevice->create<Device>(deviceLayers, deviceExtensions, queueInfos);
                mGraphicsQueue = mDevice->queues()[0][0].get();
                mPresentQueue = mGraphicsQueue;
                mComputeQueue = mGraphicsQueue;
            }
        }

        void setup() override final
        {
            dst::vlkn::Application::setup();
            mGui = dst::vlkn::ImGUI(*mDevice, *mRenderPass, *mGraphicsQueue);
            ImGui::GetIO().DisplaySize = ImVec2(1280, 720);
            ImGui::GetIO().DisplayFramebufferScale = ImVec2(1, 1);
            create_compute_resources();
            create_graphics_resources();
        }

        void create_compute_resources()
        {
            using namespace dst::vlkn;
            auto commandPoolInfo = Command::Pool::CreateInfo;
            commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
            commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(mComputeQueue->family_index());
            mComputeCommandPool = mDevice->create<Command::Pool>(commandPoolInfo);
            mComputeCommandBuffer = mComputeCommandPool->allocate<Command::Buffer>();
            mComputeSemaphore = mDevice->create<Semaphore>();

            const auto& extent = mSwapchain->extent();
            // NOTE : All of these are 2 channel textures because it's a major
            //        pain in the ass to make everything work out correctly with
            //        mismatched texture formats in compute shaders...
            // TODO : Use compute buffers aliased to the same texture memory.
            mVelocity = create_image_buffer(extent, 2);
            mDensity = create_image_buffer(extent, 2);
            mPressure = create_image_buffer(extent, 2);
            mTemperature = create_image_buffer(extent, 2);

            mDivergence = create_compute_image(extent, 2);
            mObstacles = create_compute_image(extent, 2);

            prepare_compute_images();

            mClearPipeline = ComputePipeline(
                *mDevice,
                mComputeDescriptorSetLayout,
                R"(
                    #version 450

                    layout(local_size_x = 1, local_size_y = 1) in;
                    layout(binding = 0) uniform writeonly image2D images[10];

                    layout(push_constant)
                    uniform PushConstants
                    {
                        vec3 value;
                        int imageIndex;
                    } push;

                    void main()
                    {
                        imageStore(
                            images[push.imageIndex],
                            ivec2(gl_GlobalInvocationID.xy),
                            vec4(push.value, 1)
                        );
                    }
                )"
            );

            mAddFluidPipeline = ComputePipeline(
                *mDevice,
                mComputeDescriptorSetLayout,
                __LINE__,
                R"(
                    #version 450

                    layout(local_size_x = 1, local_size_y = 1) in;
                    layout(binding = 0, rg8) uniform image2D images[10];

                    layout(push_constant)
                    uniform PushConstants
                    {
                        vec3 value;
                        int imageIndex;
                        vec2 position;
                        float radius;
                    } push;

                    void main()
                    {
                        if (distance(push.position, gl_GlobalInvocationID.xy) <= push.radius) {
                            vec4 value = imageLoad(
                                images[push.imageIndex],
                                ivec2(gl_GlobalInvocationID.xy)
                            );

                            imageStore(
                                images[push.imageIndex],
                                ivec2(gl_GlobalInvocationID.xy),
                                vec4(value.rgb + push.value, 1)
                            );
                        }
                    }
                )"
            );

            mAdvectPipeline = ComputePipeline(
                *mDevice,
                mComputeDescriptorSetLayout,
                R"(
                    #version 450

                    layout(local_size_x = 1, local_size_y = 1) in;
                    layout(binding = 0) uniform writeonly image2D images[10];

                    void main()
                    {
                        float value = (gl_GlobalInvocationID.x / 1280.0 + gl_GlobalInvocationID.y / 720.0) * 0.5;
                        // imageStore(images[0], ivec2(gl_GlobalInvocationID.xy), vec4(value, 0, value, 0));
                    }

                    // #version 450
                    // 
                    // layout(local_size_x = 1, local_size_y = 1) in;
                    // layout(binding = 0) uniform readonly image2D Velocity;
                    // layout(binding = 1) uniform writeonly image2D Source;
                    // layout(binding = 2) uniform writeonly image2D Destination;
                    // layout(binding = 3) uniform readonly image2D Obstacles;
                    // 
                    // #define InverseSize (vec2(0, 0))
                    // #define TimeStep (0)
                    // #define Dissipation (0)
                    // 
                    // void main()
                    // {
                    //     ivec2 texCoord = ivec2(gl_GlobalInvocationID.xy / vec2(1280.0, 720.0));
                    //     imageStore(Destination, texCoord, vec4(texCoord, texCoord, 0, 0));
                    // }

                )"
            );

            /*

            auto value =
                x[i - 1, j    ] +
                x[i + 1, j    ] +
                x[i,     j - 1] +
                x[i,     j + 1];
            x[i, j] = x0[i, j] + a * value / c;

            */

            // mJacobiPipeline = ComputePipeline(
            //     *mDevice,
            //     mComputeDescriptorSetLayout,
            //     R"(
            //         #version 450
            // 
            //         layout(local_size_x = 1, local_size_y = 1) in;
            //         layout(binding = 0, r8) uniform writeonly image2D image;
            // 
            //         void main()
            //         {
            //         }
            //     )"
            // );

            // mSubtractGradientPipeline = ComputePipeline(
            //     *mDevice,
            //     mComputeDescriptorSetLayout,
            //     R"(
            //         #version 450
            // 
            //         layout(local_size_x = 1, local_size_y = 1) in;
            //         layout(binding = 0, r8) uniform writeonly image2D image;
            // 
            //         void main()
            //         {
            //         }
            //     )"
            // );

            // mComputeDivergencePipeline = ComputePipeline(
            //     *mDevice,
            //     mComputeDescriptorSetLayout,
            //     R"(
            //         #version 450
            // 
            //         layout(local_size_x = 1, local_size_y = 1) in;
            //         layout(binding = 0, r8) uniform writeonly image2D image;
            // 
            //         void main()
            //         {
            //         }
            //     )"
            // );

            // mApplyImpulsePipeline = ComputePipeline(
            //     *mDevice,
            //     mComputeDescriptorSetLayout,
            //     R"(
            //         #version 450
            // 
            //         layout(local_size_x = 1, local_size_y = 1) in;
            //         layout(binding = 0, r8) uniform writeonly image2D image;
            // 
            //         void main()
            //         {
            //         }
            //     )"
            // );

            // mApplyBuoyancyPipeline = ComputePipeline(
            //     *mDevice,
            //     mComputeDescriptorSetLayout,
            //     R"(
            //         #version 450
            // 
            //         layout(local_size_x = 1, local_size_y = 1) in;
            //         layout(binding = 0, r8) uniform writeonly image2D image;
            // 
            //         void main()
            //         {
            //         }
            //     )"
            // );
        }

        ImageBuffer create_image_buffer(const VkExtent2D& extent, uint32_t channels)
        {
            ImageBuffer imageBuffer;
            imageBuffer[0] = create_compute_image(extent, channels);
            imageBuffer[1] = create_compute_image(extent, channels);
            return imageBuffer;
        }

        std::shared_ptr<dst::vlkn::Image> create_compute_image(const VkExtent2D& extent, uint32_t channels)
        {
            using namespace dst::vlkn;
            auto imageInfo = Image::CreateInfo;
            imageInfo.imageType = VK_IMAGE_TYPE_2D;
            imageInfo.extent.width = extent.width;
            imageInfo.extent.height = extent.height;
            imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
            imageInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            imageInfo.usage = VK_IMAGE_USAGE_STORAGE_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            switch (channels) {
                case 1: imageInfo.format = VK_FORMAT_R8_UNORM; break;
                case 2: imageInfo.format = VK_FORMAT_R8G8_UNORM; break;
                default: imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM; break;
            }

            auto image = mDevice->create<Image>(imageInfo);
            mComputeImages.push_back(image.get());
            return image;
        }

        void prepare_compute_images()
        {
            using namespace dst::vlkn;
            std::vector<VkDeviceSize> offsets;
            offsets.reserve(mComputeImages.size());
            VkMemoryRequirements memoryRequirements { };
            for (auto& image : mComputeImages) {
                auto imageMemoryRequirements = image->get_memory_requirements();
                memoryRequirements.memoryTypeBits |= imageMemoryRequirements.memoryTypeBits;
                // NOTE : There should be some validation around memoryTypeBits
                //        and alignment to make sure that similarly aligned and
                //        typed memory gets allocated together...
                offsets.push_back(memoryRequirements.size);
                if (imageMemoryRequirements.size && imageMemoryRequirements.alignment) {
                    imageMemoryRequirements.size +=
                        imageMemoryRequirements.alignment -
                        imageMemoryRequirements.size %
                        imageMemoryRequirements.alignment;
                }

                memoryRequirements.size += imageMemoryRequirements.size;
            }

            auto memoryInfo = Memory::AllocateInfo;
            memoryInfo.allocationSize = memoryRequirements.size;
            memoryInfo.memoryTypeIndex = mPhysicalDevice->find_memory_type_index(
                memoryRequirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
            );

            auto memory = mDevice->allocate<Memory>(memoryInfo);
            mGraphicsQueue->process_immediate(
                [&](Command::Buffer& commandBuffer)
                {
                    for (size_t i = 0; i < mComputeImages.size(); ++i) {
                        mComputeImages[i]->bind_memory(memory, offsets[i]);
                        auto oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                        auto newLayout = VK_IMAGE_LAYOUT_GENERAL;
                        auto layoutTransition = mComputeImages[i]->create_layout_transition(oldLayout, newLayout);
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
                }
            );

            for (size_t i = 0; i < mComputeImages.size(); ++i) {
                mComputeImages[i]->create<Image::View>();
            }

            ////////////////////////////////////////////////////////////////////
            // Descriptor::Set::Layout and Descriptor::Pool
            {
                VkDescriptorSetLayoutBinding descriptorSetLayoutBinding { };
                descriptorSetLayoutBinding.binding = 0;
                descriptorSetLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
                descriptorSetLayoutBinding.descriptorCount = static_cast<uint32_t>(mComputeImages.size());
                descriptorSetLayoutBinding.stageFlags = VK_SHADER_STAGE_COMPUTE_BIT;
                Descriptor::Set::Layout::CreateInfo descriptorSetLayoutInfo { };
                descriptorSetLayoutInfo.bindingCount = 1;
                descriptorSetLayoutInfo.pBindings = &descriptorSetLayoutBinding;
                mComputeDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
            }

            {
                VkDescriptorSetLayoutBinding descriptorSetLayoutBinding { };
                descriptorSetLayoutBinding.binding = 0;
                descriptorSetLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                descriptorSetLayoutBinding.descriptorCount = static_cast<uint32_t>(mComputeImages.size());
                descriptorSetLayoutBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
                Descriptor::Set::Layout::CreateInfo descriptorSetLayoutInfo { };
                descriptorSetLayoutInfo.bindingCount = 1;
                descriptorSetLayoutInfo.pBindings = &descriptorSetLayoutBinding;
                mGraphicsDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
            }

            std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
            descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
            descriptorPoolSizes[0].descriptorCount = static_cast<uint32_t>(mComputeImages.size());
            descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorPoolSizes[1].descriptorCount = static_cast<uint32_t>(mComputeImages.size());
            auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
            descriptorPoolInfo.maxSets = 2;
            descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
            descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
            mDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

            ////////////////////////////////////////////////////////////////////
            // Compute Descriptor::Set
            {
                auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
                descriptorSetInfo.descriptorSetCount = 1;
                descriptorSetInfo.descriptorPool = *mDescriptorPool;
                descriptorSetInfo.pSetLayouts = &mComputeDescriptorSetLayout->handle();
                mComputeDescriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);
                mDevice->wait_idle();

                std::vector<VkDescriptorImageInfo> descriptorImageInfos(mComputeImages.size());
                for (size_t i = 0; i < mComputeImages.size(); ++i) {
                    descriptorImageInfos[i].imageLayout = VK_IMAGE_LAYOUT_GENERAL;
                    descriptorImageInfos[i].imageView = *mComputeImages[i]->view();
                }

                VkWriteDescriptorSet write { };
                write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
                write.dstSet = *mComputeDescriptorSet;
                write.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
                write.descriptorCount = static_cast<uint32_t>(descriptorImageInfos.size());
                write.pImageInfo = descriptorImageInfos.data();
                vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
                mDevice->wait_idle();
            }

            ////////////////////////////////////////////////////////////////////
            // Graphics Descriptor::Set and Sampler
            {
                auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
                descriptorSetInfo.descriptorSetCount = 1;
                descriptorSetInfo.descriptorPool = *mDescriptorPool;
                descriptorSetInfo.pSetLayouts = &mGraphicsDescriptorSetLayout->handle();
                mGraphicsDescriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);
                mDevice->wait_idle();

                mSampler = mDevice->create<Sampler>();
                std::vector<VkDescriptorImageInfo> descriptorImageInfos(mComputeImages.size());
                for (size_t i = 0; i < mComputeImages.size(); ++i) {
                    descriptorImageInfos[i].imageLayout = VK_IMAGE_LAYOUT_GENERAL;
                    descriptorImageInfos[i].imageView = *mComputeImages[i]->view();
                    descriptorImageInfos[i].sampler = *mSampler;
                }

                VkWriteDescriptorSet write = { };
                write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
                write.dstSet = *mGraphicsDescriptorSet;
                write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
                write.descriptorCount = static_cast<uint32_t>(descriptorImageInfos.size());
                write.pImageInfo = descriptorImageInfos.data();
                vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
                mDevice->wait_idle();
            }
        }

        void create_graphics_resources()
        {
            using namespace dst::vlkn;
            // VkDescriptorSetLayoutBinding samplerBinding { };
            // samplerBinding.binding = 0;
            // samplerBinding.descriptorCount = 1;
            // samplerBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            // samplerBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
            // 
            // Descriptor::Set::Layout::CreateInfo descriptorSetLayoutInfo;
            // descriptorSetLayoutInfo.bindingCount = 1;
            // descriptorSetLayoutInfo.pBindings = &samplerBinding;
            // mGraphicsDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);

            auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &mGraphicsDescriptorSetLayout->handle(); // &mGraphicsDescriptorSetLayout->handle();
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

                    layout(binding = 0) uniform sampler2D images[10];
                    layout(location = 0) in vec2 fsTexCoord;
                    layout(location = 0) out vec4 fragColor;

                    // layout(push_constant)
                    // uniform PushConstants
                    // {
                    //     int imageIndex;
                    // } push;

                    void main()
                    {
                        // fragColor.r = fsTexCoord.x;
                        // fragColor.g = fsTexCoord.y;
                        // fragColor.b = 0;
                        // fragColor.a = 1;
                        fragColor.rgb = texture(images[0/*push.imageIndex*/], fsTexCoord).rgb;
                        // fragColor.gb = vec2(0);
                        fragColor.a = 1;
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

            // VkDescriptorPoolSize poolSize { };
            // poolSize.type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            // poolSize.descriptorCount = 1;
            // auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
            // descriptorPoolInfo.poolSizeCount = 1;
            // descriptorPoolInfo.pPoolSizes = &poolSize;
            // descriptorPoolInfo.maxSets = 1;
            // mGraphicsDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

            // mSampler = mDevice->create<Sampler>();


            // if (mGraphicsDescriptorSets.empty()) {
            //     using namespace dst::vlkn;
            //     auto descriptorSetAllocateInfo = Descriptor::Set::AllocateInfo;
            //     descriptorSetAllocateInfo.descriptorPool = *mGraphicsDescriptorPool;
            //     descriptorSetAllocateInfo.descriptorSetCount = 1;
            //     descriptorSetAllocateInfo.pSetLayouts = &mGraphicsDescriptorSetLayout->handle();
            //     mGraphicsDescriptorSets.push_back(mGraphicsDescriptorPool->allocate<Descriptor::Set>(descriptorSetAllocateInfo));
            //     ////
            //     VkDescriptorImageInfo imageInfo { };
            //     imageInfo.imageLayout = VK_IMAGE_LAYOUT_GENERAL;
            //     imageInfo.imageView = *mVelocity[0]->view();
            //     imageInfo.sampler = *mSampler;
            //     VkWriteDescriptorSet write { };
            //     write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            //     write.dstSet = *mGraphicsDescriptorSets.back();
            //     write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            //     write.descriptorCount = 1;
            //     write.pImageInfo = &imageInfo;
            //     vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
            // }
        }

        void update(const dst::Clock& clock, const dst::sys::Input& input) override
        {
            mGui.begin_frame(clock, input, glm::vec2(1280, 720));
            ImGui::Begin("Settings", nullptr, ImGuiWindowFlags_ShowBorders);
            ImGui::End();
            mGui.end_frame();

            if (!ImGui::GetIO().WantCaptureMouse) {
                if (input.keyboard.down(dst::sys::Keyboard::Key::Escape)) {
                    stop();
                }

                gMousePosition = input.mouse.current.position;
                gMouseDown = input.mouse.down(dst::sys::Mouse::Button::Left);
            }

            force_record_command_buffers();
        }

        void swap(ImageBuffer& imageBuffer)
        {
            std::swap(imageBuffer[0], imageBuffer[1]);
        }

        void clear(dst::vlkn::Image& image, float value)
        {
        }

        void advect(dst::vlkn::Image& velocity, ImageBuffer& imageBuffer, dst::vlkn::Image& obstacles, float dissipation)
        {
            // std::array<dst::vlkn::Image*, 4> images {
            //     &velocity,
            //     imageBuffer[0].get(),
            //     imageBuffer[1].get(),
            //     &obstacles
            // };
            // 
            // mAdvectPipeline.bind_images(images);
            // mAdvectPipeline.dispatch(*mComputeCommandBuffer);
        }

        void jacobi(dst::vlkn::Image& velocity, dst::vlkn::Image& divergence, dst::vlkn::Image& obstacles, dst::vlkn::Image& destination)
        {
        }

        void subtract_gradient(dst::vlkn::Image& velocity, dst::vlkn::Image& pressure, dst::vlkn::Image& obstacles, dst::vlkn::Image& destination)
        {
        }

        void compute_divergence(dst::vlkn::Image& velocity, dst::vlkn::Image& obstacles, dst::vlkn::Image& destination)
        {
        }

        void apply_impulse(dst::vlkn::Image& destination, const glm::vec2& position, float value)
        {
        }

        void apply_buoyancy(dst::vlkn::Image& velocity, dst::vlkn::Image& temperature, dst::vlkn::Image& density, dst::vlkn::Image& destination)
        {
        }

        void render(const dst::Clock& clock) override final
        {
            // NOTE : render(), record_command_buffer(), and mRecordCommandBuffers are dumb...
            //        Recording needs to be handled in a more sensible way.  Application needs
            //        to be refactored in general anyway.
            using namespace dst::vlkn;
            if (mSwapchain->valid() && mRecordCommandBuffers) {
                mComputeCommandBuffer->begin();

                struct Foo final
                {
                    glm::vec3 value { 0.5f, 1, 0 };
                    int imageIndex { 0 };
                };

                // mClearPipeline.dispatch<Foo>(*mComputeCommandBuffer, *mComputeDescriptorSet, Foo());

                struct AddFluidPushConstants final
                {
                    glm::vec3 value;
                    int imageIndex;
                    glm::vec2 position;
                    float radius;
                } addFluidPushConstants;

                if (gMouseDown) {
                    addFluidPushConstants.value = glm::vec3(0.025f, 0.015f, 0);
                    addFluidPushConstants.imageIndex = 0;
                    addFluidPushConstants.position = gMousePosition;
                    addFluidPushConstants.radius = 16;
                    mAddFluidPipeline.dispatch<AddFluidPushConstants>(*mComputeCommandBuffer, *mComputeDescriptorSet, addFluidPushConstants);
                }

                ////////////////////////////////////////////////////////////////

                // mAdvectPipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet);

                // advect(*mVelocity[0], mVelocity, *mObstacles, mVelocityDissipation);
                // swap(mVelocity);
                // 
                // advect(*mVelocity[0], mDensity, *mObstacles, mDensityDissipation);
                // swap(mDensity);
                // 
                // advect(*mVelocity[0], mTemperature, *mObstacles, mTemperatureDissipation);
                // swap(mTemperature);
                // 
                // apply_buoyancy(*mVelocity[0], *mTemperature[0], *mDensity[0], *mVelocity[1]);
                // swap(mVelocity);
                // 
                // apply_impulse(*mTemperature[0], mImpulsePosition, mImpulseTemperature);
                // apply_impulse(*mDensity[0], mImpulsePosition, mImpulseDensity);
                // 
                // compute_divergence(*mVelocity[0], *mObstacles, *mDivergence);
                // 
                // clear(*mPressure[0], 0);
                // for (uint32_t i = 0; i < mJacobiIterations; ++i) {
                //     jacobi(*mPressure[0], *mDivergence, *mObstacles, *mPressure[1]);
                //     swap(mPressure);
                // }
                // 
                // subtract_gradient(*mVelocity[0], *mPressure[0], *mObstacles, *mVelocity[1]);
                // swap(mVelocity);

                mComputeCommandBuffer->end();
            }
        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {
            // if (mGraphicsDescriptorSets.empty()) {
            //     using namespace dst::vlkn;
            //     auto descriptorSetAllocateInfo = Descriptor::Set::AllocateInfo;
            //     descriptorSetAllocateInfo.descriptorPool = *mGraphicsDescriptorPool;
            //     descriptorSetAllocateInfo.descriptorSetCount = 1;
            //     descriptorSetAllocateInfo.pSetLayouts = &mGraphicsDescriptorSetLayout->handle();
            //     mGraphicsDescriptorSets.push_back(mGraphicsDescriptorPool->allocate<Descriptor::Set>(descriptorSetAllocateInfo));
            //     ////
            //     VkDescriptorImageInfo imageInfo { };
            //     imageInfo.imageLayout = VK_IMAGE_LAYOUT_GENERAL;
            //     imageInfo.imageView = *mVelocity[0]->view();
            //     imageInfo.sampler = *mSampler;
            //     VkWriteDescriptorSet write { };
            //     write.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            //     write.dstSet = *mGraphicsDescriptorSets.back();
            //     write.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            //     write.descriptorCount = 1;
            //     write.pImageInfo = &imageInfo;
            //     vkUpdateDescriptorSets(*mDevice, 1, &write, 0, nullptr);
            // }

            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mGraphicsPipeline);
            // commandBuffer.bind_descriptor_set(*mGraphicsDescriptorSets[0], *mGraphicsPipelineLayout);

            struct Foo final { int imageIndex { }; } foo;
            vkCmdBindDescriptorSets(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mGraphicsPipelineLayout, 0, 1, &mGraphicsDescriptorSet->handle(), 0, nullptr);
            // vkCmdPushConstants(commandBuffer, *mGraphicsPipelineLayout, VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(foo), &foo);
            commandBuffer.draw(3);

            mGui.draw(commandBuffer);
        }

        void submit_command_buffer() override final
        {
            using namespace dst::vlkn;
            if (mSwapchain->valid()) {
                // NOTE : Like render() and record_command_buffer(), submit_command_buffer()
                //        needs to be overhauled when Application is refactored...
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

} // namespace ComputeFluid2D

int main()
{
    try {
        ComputeFluid2D::Application app;
        app.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
        #if DYNAMIC_STATIC_MSVC
        __debugbreak();
        #endif
    }

    return 0;
}
