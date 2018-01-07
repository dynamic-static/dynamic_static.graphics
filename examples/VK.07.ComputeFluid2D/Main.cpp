
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
        uint32_t mJacobiIterations { 4 };
        float mTimeStep { 0.125f };
        float mSmokeBuoyancy { 1.0f };
        float mSmokeWeight { 0.05f };
        float mGradientScale { 1.125f / CellSize };
        float mVelocityDissipation { 100 }; // { 0.99f };
        float mDensityDissipation { 1000 }; // { 0.9999f };
        float mTemperatureDissipation { 0.99f };
        glm::vec2 mImpulsePosition { 0, 0 };

        int drawTexture { 0 };

        dst::vlkn::ImGUI mGui;

        using ImageBuffer = std::array<std::shared_ptr<dst::vlkn::Image>, 2>;
        ImageBuffer mVelocity;
        ImageBuffer mDensity;
        ImageBuffer mPressure;
        ImageBuffer mTemperature;
        ImageBuffer mFluidProperties;
        std::shared_ptr<dst::vlkn::Image> mDivergence;
        std::shared_ptr<dst::vlkn::Image> mObstacles;
        std::shared_ptr<dst::vlkn::Image> mObstaclesVelocity;
        std::vector<dst::vlkn::Image*> mImages;
        std::shared_ptr<dst::vlkn::Sampler> mSampler;

        dst::vlkn::Queue* mComputeQueue { nullptr };
        std::shared_ptr<dst::vlkn::Command::Pool> mComputeCommandPool;
        dst::vlkn::Command::Buffer* mComputeCommandBuffer;
        std::shared_ptr<dst::vlkn::Semaphore> mComputeSemaphore;
        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mComputeDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Descriptor::Pool> mDescriptorPool;
        dst::vlkn::Descriptor::Set* mComputeDescriptorSet { nullptr };

        ////////////////////////////////////////////////////////////////////////
        ComputePipeline mClearPipeline;
        ComputePipeline mAddFluidPipeline;

        ComputePipeline mAdvectPipeline;
        ComputePipeline mJacobiPipeline;
        ComputePipeline mSubtractGradientPipeline;
        ComputePipeline mComputeDivergencePipeline;
        ComputePipeline mApplyImpulsePipeline;
        ComputePipeline mApplyBuoyancyPipeline;
        ////////////////////////////////////////////////////////////////////////

        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mGraphicsDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Pipeline::Layout> mGraphicsPipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> mGraphicsPipeline;
        dst::vlkn::Descriptor::Set* mGraphicsDescriptorSet { nullptr };

        struct FragmentShaderPushConstants final
        {
            int32_t src_idx;
        };

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
            create_images();
            create_descriptors();
            create_compute_resources();
            create_graphics_resources();
        }

        void create_images()
        {
            using namespace dst::vlkn;
            const auto& extent = mSwapchain->extent();
            // NOTE : All of these are 2 channel textures because it's a major
            //        pain in the ass to make everything work out correctly with
            //        mismatched texture formats in compute shaders...
            // TODO : Use compute buffers aliased to the same texture memory.
            mVelocity = create_image_buffer(extent);
            mDensity = create_image_buffer(extent);
            mPressure = create_image_buffer(extent);
            mTemperature = create_image_buffer(extent);
            mDivergence = create_image(extent);
            mObstacles = create_image(extent);

            std::vector<VkDeviceSize> offsets;
            offsets.reserve(mImages.size());
            VkMemoryRequirements memoryRequirements { };
            for (auto& image : mImages) {
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
                    for (size_t i = 0; i < mImages.size(); ++i) {
                        mImages[i]->bind_memory(memory, offsets[i]);
                        auto oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
                        auto newLayout = VK_IMAGE_LAYOUT_GENERAL;
                        auto layoutTransition = mImages[i]->create_layout_transition(oldLayout, newLayout);
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

            for (size_t i = 0; i < mImages.size(); ++i) {
                mImages[i]->create<Image::View>();
            }

            mSampler = mDevice->create<Sampler>();
        }

        ImageBuffer create_image_buffer(const VkExtent2D& extent)
        {
            ImageBuffer imageBuffer;
            imageBuffer[0] = create_image(extent);
            imageBuffer[1] = create_image(extent);
            return imageBuffer;
        }

        std::shared_ptr<dst::vlkn::Image> create_image(const VkExtent2D& extent)
        {
            using namespace dst::vlkn;
            auto imageInfo = Image::CreateInfo;
            imageInfo.imageType = VK_IMAGE_TYPE_2D;
            imageInfo.extent.width = extent.width;
            imageInfo.extent.height = extent.height;
            imageInfo.format = VK_FORMAT_R8G8_UNORM;
            imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
            imageInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            imageInfo.usage = VK_IMAGE_USAGE_STORAGE_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            auto image = mDevice->create<Image>(imageInfo);
            std::string name;
            name.resize(1);
            name[0] = static_cast<char>(mImages.size());
            image->name(name);
            mImages.push_back(image.get());
            return image;
        }

        void create_descriptors()
        {
            using namespace dst::vlkn;
            ////////////////////////////////////////////////////////////////////
            // Descriptor::Set::Layout and Descriptor::Pool
            {
                VkDescriptorSetLayoutBinding descriptorSetLayoutBinding { };
                descriptorSetLayoutBinding.binding = 0;
                descriptorSetLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
                descriptorSetLayoutBinding.descriptorCount = static_cast<uint32_t>(mImages.size());
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
                descriptorSetLayoutBinding.descriptorCount = static_cast<uint32_t>(mImages.size());
                descriptorSetLayoutBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;
                Descriptor::Set::Layout::CreateInfo descriptorSetLayoutInfo { };
                descriptorSetLayoutInfo.bindingCount = 1;
                descriptorSetLayoutInfo.pBindings = &descriptorSetLayoutBinding;
                mGraphicsDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
            }

            std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes { };
            descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE;
            descriptorPoolSizes[0].descriptorCount = static_cast<uint32_t>(mImages.size());
            descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorPoolSizes[1].descriptorCount = static_cast<uint32_t>(mImages.size());
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

                std::vector<VkDescriptorImageInfo> descriptorImageInfos(mImages.size());
                for (size_t i = 0; i < mImages.size(); ++i) {
                    descriptorImageInfos[i].imageLayout = VK_IMAGE_LAYOUT_GENERAL;
                    descriptorImageInfos[i].imageView = *mImages[i]->view();
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
                std::vector<VkDescriptorImageInfo> descriptorImageInfos(mImages.size());
                for (size_t i = 0; i < mImages.size(); ++i) {
                    descriptorImageInfos[i].imageLayout = VK_IMAGE_LAYOUT_GENERAL;
                    descriptorImageInfos[i].imageView = *mImages[i]->view();
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

        void create_compute_resources()
        {
            using namespace dst::vlkn;
            auto commandPoolInfo = Command::Pool::CreateInfo;
            commandPoolInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
            commandPoolInfo.queueFamilyIndex = static_cast<uint32_t>(mComputeQueue->family_index());
            mComputeCommandPool = mDevice->create<Command::Pool>(commandPoolInfo);
            mComputeCommandBuffer = mComputeCommandPool->allocate<Command::Buffer>();
            mComputeSemaphore = mDevice->create<Semaphore>();

            mClearPipeline = ComputePipeline(
                *mDevice,
                mComputeDescriptorSetLayout,
                __LINE__,
                R"(
                    #version 450

                    layout(local_size_x = 1, local_size_y = 1) in;
                    layout(binding = 0) uniform writeonly image2D images[10];

                    layout(push_constant)
                    uniform PushConstants
                    {
                        vec2 value;
                        int dst_idx;
                    } push;

                    void main()
                    {
                        imageStore(
                            images[push.dst_idx],
                            ivec2(gl_GlobalInvocationID.xy),
                            vec4(push.value, 0, 0)
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
                        vec2 value;
                        vec2 position;
                        float radius;
                        int dst_idx;
                    } push;

                    void main()
                    {
                        if (distance(push.position, gl_GlobalInvocationID.xy) <= push.radius) {
                            vec2 value = imageLoad(
                                images[push.dst_idx],
                                ivec2(gl_GlobalInvocationID.xy)
                            ).xy;

                            imageStore(
                                images[push.dst_idx],
                                ivec2(gl_GlobalInvocationID.xy),
                                vec4(value + push.value, 0, 0)
                            );
                        }
                    }
                )"
            );

            mAdvectPipeline = ComputePipeline(
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
                        float timeStep;
                        float dissipation;
                        int velocity_idx;
                        int src_idx;
                        int dst_idx;
                    } push;

                    void main()
                    {
                        vec2 velocity = imageLoad(
                            images[push.velocity_idx],
                            ivec2(gl_GlobalInvocationID.xy)
                        ).xy;

                        vec2 srcTexCoord = gl_GlobalInvocationID.xy;
                        srcTexCoord -= velocity * push.timeStep;
                        vec2 value = imageLoad(
                            images[push.src_idx],
                            ivec2(round(srcTexCoord))
                        ).xy;

                        imageStore(
                            images[push.dst_idx],
                            ivec2(gl_GlobalInvocationID.xy),
                            vec4(value * push.dissipation, 0, 0)
                        );
                    }

                )"
            );

            // Apply buoyancy

            mComputeDivergencePipeline = ComputePipeline(
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
                        int velocity_idx;
                        int dst_idx;
                    } push;

                    vec2 image_load_offset(int idx, ivec2 offset)
                    {
                        return imageLoad(
                            images[idx],
                            ivec2(gl_GlobalInvocationID.xy) + offset
                        ).xy;
                    }

                    void main()
                    {
                        vec2 vN = image_load_offset(push.velocity_idx, ivec2( 0,  1));
                        vec2 vS = image_load_offset(push.velocity_idx, ivec2( 0, -1));
                        vec2 vE = image_load_offset(push.velocity_idx, ivec2( 1,  0));
                        vec2 vW = image_load_offset(push.velocity_idx, ivec2(-1,  0));
                        imageStore(
                            images[push.dst_idx],
                            ivec2(gl_GlobalInvocationID.xy),
                            vec4(vE.x - vW.x + vN.y - vS.y, 0, 0, 0) * 0.4
                        );
                    }
                )"
            );

            mJacobiPipeline = ComputePipeline(
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
                        float alpha;
                        float inverseBeta;
                        int pressure_idx;
                        int divergence_idx;
                        int dst_idx;
                    } push;

                    vec2 image_load_offset(int idx, ivec2 offset)
                    {
                        return imageLoad(
                            images[idx],
                            ivec2(gl_GlobalInvocationID.xy) + offset
                        ).xy;
                    }

                    void main()
                    {
                        float pN = image_load_offset(push.pressure_idx, ivec2( 0,  1)).r;
                        float pS = image_load_offset(push.pressure_idx, ivec2( 0, -1)).r;
                        float pE = image_load_offset(push.pressure_idx, ivec2( 1,  0)).r;
                        float pW = image_load_offset(push.pressure_idx, ivec2(-1,  0)).r;
                        float pC = image_load_offset(push.pressure_idx, ivec2( 0,  0)).r;

                        float bC = image_load_offset(push.divergence_idx, ivec2(0, 0)).r;
                        imageStore(
                            images[push.dst_idx],
                            ivec2(gl_GlobalInvocationID.xy),
                            vec4(pW + pE + pS + pN + push.alpha * bC, 0, 0, 0) * push.inverseBeta
                        );
                    }
                )"
            );

            mSubtractGradientPipeline = ComputePipeline(
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
                        float gradientScale;
                        int velocity_idx;
                        int pressure_idx;
                        int dst_idx;
                    } push;

                    vec2 image_load_offset(int idx, ivec2 offset)
                    {
                        return imageLoad(
                            images[idx],
                            ivec2(gl_GlobalInvocationID.xy) + offset
                        ).xy;
                    }
            
                    void main()
                    {
                        float pN = image_load_offset(push.pressure_idx, ivec2( 0,  1)).r;
                        float pS = image_load_offset(push.pressure_idx, ivec2( 0, -1)).r;
                        float pE = image_load_offset(push.pressure_idx, ivec2( 1,  0)).r;
                        float pW = image_load_offset(push.pressure_idx, ivec2(-1,  0)).r;
                        float pC = image_load_offset(push.pressure_idx, ivec2( 0,  0)).r;

                        vec2 velocity = image_load_offset(push.velocity_idx, ivec2(0, 0));
                        vec2 gradient = vec2(pE - pW, pN - pS) * push.gradientScale;
                        imageStore(
                            images[push.dst_idx],
                            ivec2(gl_GlobalInvocationID.xy),
                            vec4(velocity - gradient, 0, 0)
                        );
                    }
                )"
            );

            // mApplyImpulsePipeline = ComputePipeline(
            //     *mDevice,
            //     mComputeDescriptorSetLayout,
            //     __LINE__,
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
            //     __LINE__,
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

        void create_graphics_resources()
        {
            using namespace dst::vlkn;
            auto vertexShader = mDevice->create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                ShaderModule::Source::Code,
                __LINE__,
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
                __LINE__,
                R"(
                    #version 450

                    layout(binding = 0) uniform sampler2D images[10];
                    layout(location = 0) in vec2 fsTexCoord;
                    layout(location = 0) out vec4 fragColor;

                    layout(push_constant)
                    uniform PushConstants
                    {
                        int src_idx;
                    } push;

                    void main()
                    {
                        // fragColor.r = fsTexCoord.x;
                        // fragColor.g = fsTexCoord.y;
                        // fragColor.b = 0;
                        // fragColor.a = 1;
                        fragColor.rgb = texture(images[push.src_idx], fsTexCoord).rgb;
                        // fragColor.gb = vec2(0);
                        fragColor.a = 1;
                    }
                )"
            );

            std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
                vertexShader->pipeline_stage_create_info(),
                fragmentShader->pipeline_stage_create_info(),
            };

            auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &mGraphicsDescriptorSetLayout->handle();
            pipelineLayoutInfo.pushConstantRangeCount = static_cast<uint32_t>(fragmentShader->push_constant_ranges().size());
            pipelineLayoutInfo.pPushConstantRanges = fragmentShader->push_constant_ranges().data();
            mGraphicsPipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

            auto pipelineInfo = Pipeline::GraphicsCreateInfo;
            pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
            pipelineInfo.pStages = shaderStages.data();
            pipelineInfo.layout = *mGraphicsPipelineLayout;
            pipelineInfo.renderPass = *mRenderPass;
            mGraphicsPipeline = mDevice->create<Pipeline>(pipelineInfo);
        }

        void update(const dst::Clock& clock, const dst::sys::Input& input) override
        {
            if (input.keyboard.down(dst::sys::Keyboard::Key::Escape)) {
                stop();
            }

            mGui.begin_frame(clock, input, glm::vec2(1280, 720));
            ImGui::Begin("Settings", nullptr, ImGuiWindowFlags_ShowBorders);
            ImGui::SliderInt("TextureIndex", &drawTexture, 0, static_cast<int>(mImages.size()) - 1);
            ImGui::End();
            mGui.end_frame();

            if (!ImGui::GetIO().WantCaptureMouse) {
                gMousePosition = input.mouse.current.position;
                gMouseDown = input.mouse.down(dst::sys::Mouse::Button::Left);
            }

            force_record_command_buffers();
        }

        void swap(ImageBuffer& imageBuffer)
        {
            std::swap(imageBuffer[0], imageBuffer[1]);
        }

        void render(const dst::Clock& clock) override final
        {
            // NOTE : render(), record_command_buffer(), and mRecordCommandBuffers are dumb...
            //        Recording needs to be handled in a more sensible way.  Application needs
            //        to be refactored in general anyway.
            using namespace dst::vlkn;
            if (mSwapchain->valid() && mRecordCommandBuffers) {
                mComputeCommandBuffer->begin();

                auto create_barrier =
                [&]()
                {
                    VkImageMemoryBarrier barrier { };
                    barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
                    barrier.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT;
                    barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
                    vkCmdPipelineBarrier(
                        *mComputeCommandBuffer,
                        VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                        VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
                        VK_FLAGS_NONE,
                        0, nullptr,
                        0, nullptr,
                        0, nullptr
                    );
                };

                AdvectPushConstants advectPushConstants { };
                advectPushConstants.timeStep = clock.elapsed<dst::Millisecond<float>>();
                advectPushConstants.dissipation = mVelocityDissipation;
                advectPushConstants.velocity_idx = mVelocity[0]->name()[0];
                advectPushConstants.src_idx = mVelocity[0]->name()[0];
                advectPushConstants.dst_idx = mVelocity[1]->name()[0];
                mAdvectPipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet, advectPushConstants);
                create_barrier();
                swap(mVelocity);

                // Advect temperature...

                advectPushConstants.dissipation = mDensityDissipation;
                advectPushConstants.velocity_idx = mVelocity[0]->name()[0];
                advectPushConstants.src_idx = mDensity[0]->name()[0];
                advectPushConstants.dst_idx = mDensity[1]->name()[0];
                mAdvectPipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet, advectPushConstants);
                create_barrier();
                swap(mDensity);

                // Apply buoyancy...

                if (gMouseDown) {
                    AddFluidPushConstants addFluidPushConstants { };
                    addFluidPushConstants.value = glm::vec2(1, 1);
                    addFluidPushConstants.position = gMousePosition;
                    addFluidPushConstants.radius = 16;
                    addFluidPushConstants.dst_idx = mDensity[0]->name()[0];
                    mAddFluidPipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet, addFluidPushConstants);
                    create_barrier();
                }

                ComputDivergencePushConstants computeDivergencePushConstants { };
                computeDivergencePushConstants.velocity_idx = mVelocity[0]->name()[0];
                computeDivergencePushConstants.dst_idx = mDivergence->name()[0];
                mComputeDivergencePipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet, computeDivergencePushConstants);
                create_barrier();

                ClearPushConstants clearPushConstants { };
                clearPushConstants.value = glm::vec2(0);
                clearPushConstants.dst_idx = mPressure[0]->name()[0];
                mClearPipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet, clearPushConstants);
                create_barrier();

                for (uint32_t i = 0; i < mJacobiIterations; ++i) {
                    JacobiPushConstants jacobiPushConstants { };
                    jacobiPushConstants.alpha = -CellSize * CellSize;
                    jacobiPushConstants.inverseBeta = 0.25f;
                    jacobiPushConstants.pressure_idx = mPressure[0]->name()[0];
                    jacobiPushConstants.divergence_idx = mDivergence->name()[0];
                    jacobiPushConstants.dst_idx = mPressure[1]->name()[0];
                    mJacobiPipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet, jacobiPushConstants);
                    create_barrier();
                    swap(mPressure);
                }

                SubtractGradientPushConstants subtractGradientPushConstants { };
                subtractGradientPushConstants.gradientScale = mGradientScale;
                subtractGradientPushConstants.velocity_idx = mVelocity[0]->name()[0];
                subtractGradientPushConstants.pressure_idx = mPressure[0]->name()[0];
                subtractGradientPushConstants.dst_idx = mVelocity[1]->name()[0];
                mSubtractGradientPipeline.dispatch(*mComputeCommandBuffer, *mComputeDescriptorSet, subtractGradientPushConstants);
                create_barrier();
                swap(mVelocity);

                mComputeCommandBuffer->end();
            }
        }

        void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override final
        {
            FragmentShaderPushConstants fragmentShaderPushConstants { };
            fragmentShaderPushConstants.src_idx = drawTexture; // mDensity[0]->name()[0];
            commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mGraphicsPipeline);
            vkCmdBindDescriptorSets(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, *mGraphicsPipelineLayout, 0, 1, &mGraphicsDescriptorSet->handle(), 0, nullptr);
            vkCmdPushConstants(commandBuffer, *mGraphicsPipelineLayout, VK_SHADER_STAGE_FRAGMENT_BIT, 0, sizeof(fragmentShaderPushConstants), &fragmentShaderPushConstants);
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
