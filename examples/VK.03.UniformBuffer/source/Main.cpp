
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Rotates a quad using a uniform buffer
// Based on https://vulkan-tutorial.com/Uniform_buffers

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"

#include <array>
#include <iostream>
#include <memory>

struct UniformBuffer final
{
    dst::Matrix4x4 world;
    dst::Matrix4x4 view;
    dst::Matrix4x4 projection;
};

class VulkanExample03UniformBuffer final
    : public dst::vlkn::Application
{
private:
    std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mDescriptorSetLayout;
    std::shared_ptr<dst::vlkn::Descriptor::Pool> mDescriptorPool;
    dst::vlkn::Descriptor::Set* mDescriptorSet { nullptr };
    std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
    std::shared_ptr<dst::vlkn::Pipeline> mPipeline;
    std::shared_ptr<dst::vlkn::Buffer> mUniformBuffer;
    std::shared_ptr<dst::vlkn::Buffer> mVertexBuffer;
    std::shared_ptr<dst::vlkn::Buffer> mIndexBuffer;
    size_t mIndexCount { 0 };
    float mRotation { 0 };

public:
    VulkanExample03UniformBuffer()
    {
        name("Dynamic_Static VK.02.VertexBuffer");
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
        dst::vlkn::Application::setup();
        create_descriptor_set_layout();
        create_pipeline();
        create_vertex_and_index_buffers();
        create_uniform_buffer();
        create_descriptor_pool_and_set();
    }

    void create_descriptor_set_layout()
    {
        using namespace dst::vlkn;
        VkDescriptorSetLayoutBinding uniformBufferLayoutBinding { };
        uniformBufferLayoutBinding.binding = 0;
        uniformBufferLayoutBinding.descriptorCount = 1;
        uniformBufferLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        uniformBufferLayoutBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;
        auto descriptorSetLayoutInfo = Descriptor::Set::Layout::CreateInfo;
        descriptorSetLayoutInfo.bindingCount = 1;
        descriptorSetLayoutInfo.pBindings = &uniformBufferLayoutBinding;
        mDescriptorSetLayout = mDevice->create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
    }

    void create_pipeline()
    {
        using namespace dst::vlkn;

        auto vertexShader = mDevice->create<ShaderModule>(
            VK_SHADER_STAGE_VERTEX_BIT,
            ShaderModule::Source::Code,
            R"(

                #version 450

                layout(binding = 0)
                uniform UniformBuffer
                {
                    mat4 world;
                    mat4 view;
                    mat4 projection;
                } ubo;

                layout(location = 0) in vec3 vsPosition;
                layout(location = 1) in vec4 vsColor;

                layout(location = 0) out vec3 fsColor;

                out gl_PerVertex
                {
                    vec4 gl_Position;
                };

                void main()
                {
                    gl_Position = ubo.projection * ubo.view * ubo.world * vec4(vsPosition, 1);
                    fsColor = vsColor.rgb;
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

        auto vertexBindingDescription = binding_description<VertexPositionColor>();
        auto vertexAttributeDescriptions = attribute_descriptions<VertexPositionColor>();
        auto vertexInputState = Pipeline::VertexInputStateCreateInfo;
        vertexInputState.vertexBindingDescriptionCount = 1;
        vertexInputState.pVertexBindingDescriptions = &vertexBindingDescription;
        vertexInputState.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
        vertexInputState.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

        auto rasterizationInfo = Pipeline::RasterizationStateCreateInfo;
        rasterizationInfo.cullMode = VK_CULL_MODE_NONE;

        auto pipelineLayoutInfo = Pipeline::Layout::CreateInfo;
        pipelineLayoutInfo.setLayoutCount = 1;
        pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        mPipelineLayout = mDevice->create<Pipeline::Layout>(pipelineLayoutInfo);

        auto pipelineInfo = Pipeline::GraphicsCreateInfo;
        pipelineInfo.stageCount = static_cast<uint32_t>(shaderStages.size());
        pipelineInfo.pStages = shaderStages.data();
        pipelineInfo.pVertexInputState = &vertexInputState;
        pipelineInfo.pRasterizationState = &rasterizationInfo;
        pipelineInfo.layout = *mPipelineLayout;
        pipelineInfo.renderPass = *mRenderPass;
        mPipeline = mDevice->create<Pipeline>(pipelineInfo);
    }

    void create_vertex_and_index_buffers()
    {
        using namespace dst::vlkn;

        const std::array<VertexPositionColor, 4> vertices {
            VertexPositionColor { { -0.5f, -0.5f, 0 }, { dst::Color::OrangeRed } },
            VertexPositionColor { {  0.5f, -0.5f, 0 }, { dst::Color::BlueViolet } },
            VertexPositionColor { {  0.5f,  0.5f, 0 }, { dst::Color::DodgerBlue } },
            VertexPositionColor { { -0.5f,  0.5f, 0 }, { dst::Color::Goldenrod } },
        };

        const std::array<uint16_t, 6> indices {
            0, 1, 2,
            2, 3, 0,
        };

        mIndexCount = indices.size();

        auto vertexBufferInfo = Buffer::CreateInfo;
        vertexBufferInfo.size = static_cast<VkDeviceSize>(sizeof(vertices[0]) * vertices.size());
        vertexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
        auto vertexBufferMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        mVertexBuffer = mDevice->create<Buffer>(vertexBufferInfo, vertexBufferMemoryProperties);

        auto indexBufferInfo = Buffer::CreateInfo;
        indexBufferInfo.size = static_cast<VkDeviceSize>(sizeof(indices[0]) * indices.size());
        indexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
        auto indexBufferMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
        mIndexBuffer = mDevice->create<Buffer>(indexBufferInfo, indexBufferMemoryProperties);

        auto stagingBufferInfo = Buffer::CreateInfo;
        stagingBufferInfo.size = std::max(vertexBufferInfo.size, indexBufferInfo.size);
        stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
        auto stagingBufferMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        auto stagingBuffer = mDevice->create<Buffer>(stagingBufferInfo, stagingBufferMemoryProperties);

        auto copyFromStagingBuffer =
        [&](Buffer& destination, VkDeviceSize copySize)
        {
            auto commandBuffer = mCommandPool->allocate_transient<Command::Buffer>();
            auto beginInfo = Command::Buffer::BeginInfo;
            beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
            commandBuffer->begin(beginInfo);

            commandBuffer->copy_buffer(*stagingBuffer, destination, copySize);
            commandBuffer->end();

            auto copySubmitInfo = Queue::SubmitInfo;
            copySubmitInfo.commandBufferCount = 1;
            copySubmitInfo.pCommandBuffers = &commandBuffer->handle();
            mGraphicsQueue->wait_idle();
            mGraphicsQueue->submit(copySubmitInfo);
            mGraphicsQueue->wait_idle();
        };

        stagingBuffer->write<VertexPositionColor>(vertices);
        copyFromStagingBuffer(*mVertexBuffer, vertexBufferInfo.size);

        stagingBuffer->write<uint16_t>(indices);
        copyFromStagingBuffer(*mIndexBuffer, indexBufferInfo.size);
    }

    void create_uniform_buffer()
    {
        using namespace dst::vlkn;
        auto uniformBufferInfo = Buffer::CreateInfo;
        uniformBufferInfo.size = sizeof(UniformBuffer);
        uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        auto uniformMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
        mUniformBuffer = mDevice->create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
    }

    void create_descriptor_pool_and_set()
    {
        using namespace dst::vlkn;
        VkDescriptorPoolSize descriptorPoolSize { };
        descriptorPoolSize.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorPoolSize.descriptorCount = 1;
        auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
        descriptorPoolInfo.poolSizeCount = 1;
        descriptorPoolInfo.pPoolSizes = &descriptorPoolSize;
        descriptorPoolInfo.maxSets = 1;
        mDescriptorPool = mDevice->create<Descriptor::Pool>(descriptorPoolInfo);

        auto descriptorSetInfo = Descriptor::Set::AllocateInfo;
        descriptorSetInfo.descriptorPool = *mDescriptorPool;
        descriptorSetInfo.descriptorSetCount = 1;
        descriptorSetInfo.pSetLayouts = &mDescriptorSetLayout->handle();
        mDescriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

        VkDescriptorBufferInfo descriptorBufferInfo { };
        descriptorBufferInfo.buffer = *mUniformBuffer;
        descriptorBufferInfo.offset = 0;
        descriptorBufferInfo.range = sizeof(UniformBuffer);

        VkWriteDescriptorSet descriptorWrite { };
        descriptorWrite.sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
        descriptorWrite.dstSet = *mDescriptorSet;
        descriptorWrite.dstBinding = 0;
        descriptorWrite.dstArrayElement = 0;
        descriptorWrite.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        descriptorWrite.descriptorCount = 1;
        descriptorWrite.pBufferInfo = &descriptorBufferInfo;
        vkUpdateDescriptorSets(*mDevice, 1, &descriptorWrite, 0, nullptr);
    }

    void update(const dst::Clock& clock, const dst::Input& input) override
    {
        if (input.keyboard().down(dst::Keyboard::Key::Escape)) {
            stop();
        }

        UniformBuffer ubo;
        mRotation += 90.0f * clock.elapsed<dst::Second<float>>();
        ubo.world = dst::Matrix4x4::create_rotation(
            dst::to_radians(mRotation),
            dst::Vector3::UnitZ
        );

        ubo.view = dst::Matrix4x4::create_view(
            { 0, 2, 2 },
            dst::Vector3::Zero,
            dst::Vector3::UnitY
        );

        ubo.projection = dst::Matrix4x4::create_perspective(
            dst::to_radians(30.0f),
            static_cast<float>(mSwapchain->extent().width) /
            static_cast<float>(mSwapchain->extent().height),
            0.01f,
            10.0f
        );

        ubo.projection[1][1] *= -1;

        mUniformBuffer->write<UniformBuffer>(gsl::make_span(&ubo, 1));
    }

    void record_command_buffer(dst::vlkn::Command::Buffer& commandBuffer, const dst::Clock& clock) override
    {
        commandBuffer.bind_pipeline(VK_PIPELINE_BIND_POINT_GRAPHICS, *mPipeline);
        commandBuffer.bind_descriptor_set(*mDescriptorSet, *mPipelineLayout);
        commandBuffer.bind_vertex_buffer(*mVertexBuffer);
        commandBuffer.bind_index_buffer(*mIndexBuffer);
        commandBuffer.draw_indexed(mIndexCount);
    }
};

int main_ex()
{
    try {
        VulkanExample03UniformBuffer app;
        app.start();
    } catch (const std::exception& e) {
        std::cerr << std::endl << "==========================================" << std::endl;
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl << "==========================================" << std::endl;
    }

    return 0;
}
