
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "Dynamic_Static/Core/Defines.hpp"
#include "Dynamic_Static/Core/FileSystem.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Graphics/ImageCache.hpp"
#include "Dynamic_Static/Graphics/ImageReader.hpp"
#include "Dynamic_Static/Graphics/Vulkan.hpp"

#include <array>
#include <memory>
#include <string>

namespace ShapeBlaster {

    void* aligned_alloc(size_t size, size_t alignment)
    {
        // FROM : https://github.com/SaschaWillems/Vulkan/tree/master/dynamicuniformbuffer
        void* data = nullptr;
        #if defined(DYNAMIC_STATIC_WINDOWS)
        data = _aligned_malloc(size, alignment);
        #else
        int result = posix_memalign(&data, alignment, size);
        if (!result) {
            data = nullptr;
        }
        #endif

        return data;
    }

    void aligned_free(void* data)
    {
        // FROM : https://github.com/SaschaWillems/Vulkan/tree/master/dynamicuniformbuffer
        #if defined(DYNAMIC_STATIC_WINDOWS)
        _aligned_free(data);
        #else
        free(data);
        #endif
    }

    template <typename FuncType>
    static void process_transient_command_buffer_ex(
        dst::vlkn::Command::Pool& commandPool,
        dst::vlkn::Queue& queue,
        const FuncType& f
    )
    {
        auto commandBuffer = commandPool.allocate_transient<Command::Buffer>();
        // Command::Buffer::BeginInfo beginInfo;
        auto beginInfo = Command::Buffer::BeginInfo;
        beginInfo.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        commandBuffer->begin(beginInfo);
        f(*commandBuffer);
        commandBuffer->end();
        Queue::SubmitInfo submitInfo;
        submitInfo.commandBufferCount = 1;
        submitInfo.pCommandBuffers = &commandBuffer->handle();
        queue.submit(submitInfo);
        queue.wait_idle();
    }

    static VkImageMemoryBarrier create_layout_transition_barrier_ex(
        dst::vlkn::Image& image,
        VkImageLayout oldLayout,
        VkImageLayout newLayout
    )
    {
        VkImageMemoryBarrier barrier { };
        barrier.sType = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
        barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        barrier.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        barrier.subresourceRange.baseMipLevel = 0;
        barrier.subresourceRange.levelCount = 1;
        barrier.subresourceRange.baseArrayLayer = 0;
        barrier.subresourceRange.layerCount = 1;
        barrier.oldLayout = oldLayout;
        barrier.newLayout = newLayout;
        barrier.image = image;

        if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL) {
            barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
            barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
        } else
        if (oldLayout == VK_IMAGE_LAYOUT_PREINITIALIZED && newLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL) {
            barrier.srcAccessMask = VK_ACCESS_HOST_WRITE_BIT;
            barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        } else
        if (oldLayout == VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL && newLayout == VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL) {
            barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
            barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
        } else
        if (oldLayout == VK_IMAGE_LAYOUT_UNDEFINED && newLayout == VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL) {
            barrier.srcAccessMask = 0;
            barrier.dstAccessMask = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT | VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT;
        } else {
            throw std::invalid_argument("Unsupported layout transition");
        }

        return barrier;
    }

} // namespace ShapeBlaster

namespace ShapeBlaster {

    struct QuadVertex final
    {
        dst::Vector3 position;
        dst::Vector2 texCoord;

        static VkVertexInputBindingDescription binding_description()
        {
            VkVertexInputBindingDescription binding;
            binding.binding = 0;
            binding.stride = sizeof(QuadVertex);
            binding.inputRate = VK_VERTEX_INPUT_RATE_VERTEX;
            return binding;
        }

        static std::array<VkVertexInputAttributeDescription, 2> attribute_descriptions()
        {
            VkVertexInputAttributeDescription positionAttribute;
            positionAttribute.binding = 0;
            positionAttribute.location = 0;
            positionAttribute.format = VK_FORMAT_R32G32B32_SFLOAT;
            positionAttribute.offset = offsetof(QuadVertex, position);

            VkVertexInputAttributeDescription texCoordAttribute;
            texCoordAttribute.binding = 0;
            texCoordAttribute.location = 1;
            texCoordAttribute.format = VK_FORMAT_R32G32_SFLOAT;
            texCoordAttribute.offset = offsetof(QuadVertex, texCoord);

            return {
                positionAttribute,
                texCoordAttribute
            };
        }
    };

    class Sprite final
    {
    public:
        struct UniformBuffer final
        {
            dst::Matrix4x4 wvp;
            dst::Color color;
        };

    public:
        uint32_t uniformBufferIndex { 0 };
        dst::vlkn::Image* image { nullptr };
        dst::vlkn::Descriptor::Set* descriptorSet { nullptr };
        dst::vlkn::Pipeline::Layout* pipelineLayout { nullptr };
        UniformBuffer* mHostStorage { nullptr };
        size_t mHostStorageSize { 0 };
        size_t mHostStorageAlignment { 0 };
        std::shared_ptr<dst::vlkn::Buffer> uniformBuffer;

    public:
        UniformBuffer* host_storage_ptr()
        {
            return (UniformBuffer*)((uint64_t)mHostStorage + (uniformBufferIndex * mHostStorageAlignment));
        }

        void update(dst::vlkn::Device& device)
        {
            if (uniformBufferIndex == 0) {
                memcpy(uniformBuffer->mapped_ptr(), mHostStorage, mHostStorageSize);
                VkMappedMemoryRange memoryRange { };
                memoryRange.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
                memoryRange.pNext = nullptr;
                memoryRange.memory = *uniformBuffer->memory();
                memoryRange.offset = 0;
                memoryRange.size = static_cast<VkDeviceSize>(mHostStorageSize);
                vkFlushMappedMemoryRanges(device, 1, &memoryRange);
            }
        }

        void render(dst::vlkn::Command::Buffer& commandBuffer)
        {
            uint32_t offset = uniformBufferIndex * mHostStorageAlignment;
            vkCmdBindDescriptorSets(
                commandBuffer,
                VK_PIPELINE_BIND_POINT_GRAPHICS,
                *pipelineLayout,
                0,
                1,
                &descriptorSet->handle(),
                1,
                &offset
            );

            commandBuffer.draw_indexed(6 /* Resources::QuadIndexCount */);
        }
    };

    struct Package final
    {
        std::shared_ptr<dst::vlkn::Image> mImage;
        Sprite::UniformBuffer* mBuffer { nullptr };
        size_t mBufferAligment { 0 };
        size_t mBufferSize { 0 };
        size_t mCount { 0 };
        Sprite mSprite;

        ~Package()
        {
            if (mBuffer) {
                aligned_free(mBuffer);
            }
        }

        void initialize(
            dst::vlkn::Device& device,
            dst::vlkn::Pipeline::Layout& pipelineLayout,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue,
            dst::vlkn::Descriptor::Set::Layout& descriptorSetLayout,
            dst::vlkn::Descriptor::Pool& descriptorPool,
            dst::vlkn::Sampler& sampler,
            const std::string& imageName,
            size_t count
        )
        {
            mCount = count;
            create_image(device, commandPool, queue, imageName);
            create_uniform_buffer_host_storage(device);

            mSprite.image = mImage.get();
            mSprite.uniformBuffer = create_uniform_buffer(device);
            mSprite.pipelineLayout = &pipelineLayout;
            mSprite.mHostStorage = mBuffer;
            mSprite.mHostStorageSize = mBufferSize;
            mSprite.mHostStorageAlignment = mBufferAligment;
            mSprite.descriptorSet = create_descriptor_set(device, *mImage, *mSprite.uniformBuffer, descriptorSetLayout, descriptorPool, sampler);
        }

    private:
        void create_image(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue,
            const std::string& fileName
        )
        {
            using namespace dst::vlkn;
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto filePath = dst::Path::combine(resourcePath, fileName);
            auto imageCache = dst::gfx::ImageReader::read_file(filePath);

            // Buffer::Info stagingBufferInfo;
            auto stagingBufferInfo = Buffer::CreateInfo;
            stagingBufferInfo.size = static_cast<VkDeviceSize>(imageCache.data().size_bytes());
            stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto stagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, stagingMemoryProperties);
            stagingBuffer->write<uint8_t>(imageCache.data());

            Image::Info imageInfo;
            imageInfo.imageType = VK_IMAGE_TYPE_2D;
            imageInfo.extent.width = imageCache.width();
            imageInfo.extent.height = imageCache.height();
            imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
            imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
            imageInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
            imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            mImage = device.create<Image>(imageInfo);

            // Memory::Info memoryInfo;
            auto memoryInfo = Memory::AllocateInfo;
            auto memoryRequirements = mImage->memory_requirements();
            memoryInfo.allocationSize = memoryRequirements.size;
            memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
                memoryRequirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
            );

            auto memory = device.allocate<Memory>(memoryInfo);
            mImage->bind_memory(memory);

            process_transient_command_buffer_ex(
                commandPool,
                queue,
                [&](Command::Buffer& commandBuffer)
                {
                    auto barrier = create_layout_transition_barrier_ex(
                        *mImage,
                        VK_IMAGE_LAYOUT_PREINITIALIZED,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL
                    );

                    vkCmdPipelineBarrier(
                        commandBuffer,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        0,
                        0, nullptr,
                        0, nullptr,
                        1, &barrier
                    );

                    VkBufferImageCopy copyRegion { };
                    copyRegion.bufferOffset = 0;
                    copyRegion.bufferRowLength = 0;
                    copyRegion.bufferImageHeight = 0;
                    copyRegion.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                    copyRegion.imageSubresource.mipLevel = 0;
                    copyRegion.imageSubresource.baseArrayLayer = 0;
                    copyRegion.imageSubresource.layerCount = 1;
                    copyRegion.imageOffset = { 0, 0, 0 };
                    copyRegion.imageExtent = mImage->extent();
                    vkCmdCopyBufferToImage(
                        commandBuffer,
                        *stagingBuffer,
                        *mImage,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                        1,
                        &copyRegion
                    );

                    barrier = create_layout_transition_barrier_ex(
                        *mImage,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                        VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL
                    );

                    vkCmdPipelineBarrier(
                        commandBuffer,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        0,
                        0, nullptr,
                        0, nullptr,
                        1, &barrier
                    );
                }
            );

            mImage->create<Image::View>();
        }

        void create_uniform_buffer_host_storage(const dst::vlkn::Device& device)
        {
            size_t elementSize = sizeof(Sprite::UniformBuffer);
            mBufferAligment = device.physical_device().uniform_buffer_alignment(elementSize);
            mBufferSize = mCount * mBufferAligment;
            mBuffer = reinterpret_cast<Sprite::UniformBuffer*>(aligned_alloc(mBufferSize, mBufferAligment));
        }

        std::shared_ptr<dst::vlkn::Buffer> create_uniform_buffer(dst::vlkn::Device& device)
        {
            using namespace dst::vlkn;

            VkDeviceSize uniformBufferSize = sizeof(Sprite::UniformBuffer);
            // Buffer::Info uniformBufferInfo;
            auto uniformBufferInfo = Buffer::CreateInfo;
            uniformBufferInfo.size = static_cast<VkDeviceSize>(mBufferSize);
            uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            auto uniformMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto buffer = device.create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
            buffer->map();
            return buffer;
        }

        dst::vlkn::Descriptor::Set* create_descriptor_set(
            dst::vlkn::Device& device,
            dst::vlkn::Image& image,
            dst::vlkn::Buffer& uniformBuffer,
            dst::vlkn::Descriptor::Set::Layout& descriptorSetLayout,
            dst::vlkn::Descriptor::Pool& descriptorPool,
            dst::vlkn::Sampler& sampler
        )
        {
            using namespace dst::vlkn;
            Descriptor::Set::Info descriptorSetInfo;
            descriptorSetInfo.descriptorPool = descriptorPool;
            descriptorSetInfo.descriptorSetCount = 1;
            descriptorSetInfo.pSetLayouts = &descriptorSetLayout.handle();
            auto descriptorSet = descriptorPool.allocate<Descriptor::Set>(descriptorSetInfo);

            VkDescriptorBufferInfo descriptorBufferInfo { };
            descriptorBufferInfo.buffer = uniformBuffer;
            descriptorBufferInfo.offset = 0;
            descriptorBufferInfo.range = VK_WHOLE_SIZE;
            // descriptorBufferInfo.range = sizeof(Sprite::UniformBuffer);

            VkDescriptorImageInfo descriptorImageInfo { };
            descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            descriptorImageInfo.imageView = *image.views()[0];
            descriptorImageInfo.sampler = sampler;

            std::array<VkWriteDescriptorSet, 2> descriptorWrites { };
            descriptorWrites[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            descriptorWrites[0].dstSet = *descriptorSet;
            descriptorWrites[0].dstBinding = 0;
            descriptorWrites[0].dstArrayElement = 0;
            descriptorWrites[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            descriptorWrites[0].descriptorCount = 1;
            descriptorWrites[0].pBufferInfo = &descriptorBufferInfo;

            descriptorWrites[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            descriptorWrites[1].dstSet = *descriptorSet;
            descriptorWrites[1].dstBinding = 1;
            descriptorWrites[1].dstArrayElement = 0;
            descriptorWrites[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorWrites[1].descriptorCount = 1;
            descriptorWrites[1].pImageInfo = &descriptorImageInfo;
            vkUpdateDescriptorSets(
                device,
                static_cast<uint32_t>(descriptorWrites.size()),
                descriptorWrites.data(),
                0,
                nullptr
            );

            return descriptorSet;
        }
    };

    class Resources final
    {
    public:
        static constexpr size_t QuadVertexCount { 4 };
        static constexpr size_t QuadIndexCount { 6 };
        std::shared_ptr<dst::vlkn::Buffer> quadVertexBuffer;
        std::shared_ptr<dst::vlkn::Buffer> quadIndexBuffer;

        std::shared_ptr<dst::vlkn::RenderPass> mRenderPass;
        std::shared_ptr<dst::vlkn::Descriptor::Set::Layout> mDescriptorSetLayout;
        std::shared_ptr<dst::vlkn::Pipeline::Layout> mPipelineLayout;
        std::shared_ptr<dst::vlkn::Pipeline> mPipeline;
        std::shared_ptr<dst::vlkn::Descriptor::Pool> mDescriptorPool;
        std::shared_ptr<dst::vlkn::Buffer> mUniformBuffer;
        std::shared_ptr<dst::vlkn::Sampler> mSampler;

        Package mPlayerPackage;
        Package mPointerPackage;
        Package mBulletPackage;
        Package mSeekerPackage;
        Package mWandererPackage;
        Package mBlackHolePackage;

    public:
        ~Resources()
        {
        }

    public:
        void load(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue,
            VkFormat renderPassFormat
        )
        {
            using namespace dst::vlkn;
            Sampler::Info samplerInfo;
            samplerInfo.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
            samplerInfo.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
            samplerInfo.magFilter = VK_FILTER_LINEAR;
            samplerInfo.minFilter = VK_FILTER_LINEAR;
            mSampler = device.create<Sampler>(samplerInfo);

            create_quad(device, commandPool, queue);
            create_render_pass(device, renderPassFormat);
            create_descriptor_set_layout(device);
            create_sprite_pipeline(device);

            // NOTE : This spriteTypeCount is dumb...
            size_t spriteTypeCount = 6;
            create_descriptor_pool(device, spriteTypeCount);

            auto initialize_sprite_package =
            [&](const std::string& fileName, size_t count, Package& pacakge)
            {
                pacakge.initialize(
                    device,
                    *mPipelineLayout,
                    commandPool,
                    queue,
                    *mDescriptorSetLayout,
                    *mDescriptorPool,
                    *mSampler,
                    fileName,
                    count
                );
            };

            initialize_sprite_package("Player.png", 1, mPlayerPackage);
            initialize_sprite_package("Bullet.png", 128, mBulletPackage);
            initialize_sprite_package("Seeker.png", 64, mSeekerPackage);
            initialize_sprite_package("Wanderer.png", 64, mWandererPackage);
            initialize_sprite_package("Pointer.png", 1, mPointerPackage);
            initialize_sprite_package("Black Hole.png", 64, mBlackHolePackage);
        }

    private:
        Sprite::UniformBuffer* create_uniform_buffer_host_storage(const dst::vlkn::Device& device, size_t count, size_t& bufferSize)
        {
            size_t elementSize = sizeof(Sprite::UniformBuffer);
            size_t alignment = device.physical_device().uniform_buffer_alignment(elementSize);
            bufferSize = count * alignment;
            return reinterpret_cast<Sprite::UniformBuffer*>(aligned_alloc(bufferSize, alignment));
        }

        std::shared_ptr<dst::vlkn::Buffer> create_uniform_buffer(dst::vlkn::Device& device, size_t size)
        {
            using namespace dst::vlkn;

            VkDeviceSize uniformBufferSize = sizeof(Sprite::UniformBuffer);
            // Buffer::Info uniformBufferInfo;
            auto uniformBufferInfo = Buffer::CreateInfo;
            uniformBufferInfo.size = static_cast<VkDeviceSize>(size); // uniformBufferSize;
            uniformBufferInfo.usage = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
            auto uniformMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto buffer = device.create<Buffer>(uniformBufferInfo, uniformMemoryProperties);
            buffer->map();
            return buffer;
        }

        std::shared_ptr<dst::vlkn::Image> create_image(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue,
            const std::string& fileName
        )
        {
            using namespace dst::vlkn;
            std::string resourcePath = "../../../examples/resources/ShapeBlaster_AllParts/ShapeBlaster_Part5/ShapeBlaster_Part5Content/Art/";
            auto filePath = dst::Path::combine(resourcePath, fileName);
            auto imageCache = dst::gfx::ImageReader::read_file(filePath);

            // Buffer::Info stagingBufferInfo;
            auto stagingBufferInfo = Buffer::CreateInfo;
            stagingBufferInfo.size = static_cast<VkDeviceSize>(imageCache.data().size_bytes());
            stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto stagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, stagingMemoryProperties);
            stagingBuffer->write<uint8_t>(imageCache.data());

            Image::Info imageInfo;
            imageInfo.imageType = VK_IMAGE_TYPE_2D;
            imageInfo.extent.width = imageCache.width();
            imageInfo.extent.height = imageCache.height();
            imageInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
            imageInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
            imageInfo.initialLayout = VK_IMAGE_LAYOUT_PREINITIALIZED;
            imageInfo.usage = VK_IMAGE_USAGE_TRANSFER_DST_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
            auto image = device.create<Image>(imageInfo);

            // Memory::Info memoryInfo;
            auto memoryInfo = Memory::AllocateInfo;
            auto memoryRequirements = image->memory_requirements();
            memoryInfo.allocationSize = memoryRequirements.size;
            memoryInfo.memoryTypeIndex = device.physical_device().find_memory_type_index(
                memoryRequirements.memoryTypeBits,
                VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT
            );

            auto memory = device.allocate<Memory>(memoryInfo);
            image->bind_memory(memory);

            process_transient_command_buffer_ex(
                commandPool,
                queue,
                [&](Command::Buffer& commandBuffer)
                {
                    auto barrier = create_layout_transition_barrier_ex(
                        *image,
                        VK_IMAGE_LAYOUT_PREINITIALIZED,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL
                    );

                    vkCmdPipelineBarrier(
                        commandBuffer,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        0,
                        0, nullptr,
                        0, nullptr,
                        1, &barrier
                    );

                    VkBufferImageCopy copyRegion { };
                    copyRegion.bufferOffset = 0;
                    copyRegion.bufferRowLength = 0;
                    copyRegion.bufferImageHeight = 0;
                    copyRegion.imageSubresource.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
                    copyRegion.imageSubresource.mipLevel = 0;
                    copyRegion.imageSubresource.baseArrayLayer = 0;
                    copyRegion.imageSubresource.layerCount = 1;
                    copyRegion.imageOffset = { 0, 0, 0 };
                    copyRegion.imageExtent = image->extent();
                    vkCmdCopyBufferToImage(
                        commandBuffer,
                        *stagingBuffer,
                        *image,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                        1,
                        &copyRegion
                    );

                    barrier = create_layout_transition_barrier_ex(
                        *image,
                        VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                        VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL
                    );

                    vkCmdPipelineBarrier(
                        commandBuffer,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                        0,
                        0, nullptr,
                        0, nullptr,
                        1, &barrier
                    );
                }
            );

            image->create<Image::View>();
            return image;
        }

        void create_quad(
            dst::vlkn::Device& device,
            dst::vlkn::Command::Pool& commandPool,
            dst::vlkn::Queue& queue
        )
        {
            using namespace dst::vlkn;

            std::array<QuadVertex, QuadVertexCount> vertices;
            vertices[0] = { { -0.5f, -0.5f, 0 }, { 0, 1 } };
            vertices[1] = { {  0.5f, -0.5f, 0 }, { 1, 1 } };
            vertices[2] = { {  0.5f,  0.5f, 0 }, { 1, 0 } };
            vertices[3] = { { -0.5f,  0.5f, 0 }, { 0, 0 } };

            auto vertexBufferSize = static_cast<VkDeviceSize>(sizeof(vertices));

            // Buffer::Info vertexBufferInfo;
            auto vertexBufferInfo = Buffer::CreateInfo;
            vertexBufferInfo.size = vertexBufferSize;
            vertexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT;
            auto vertexMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
            quadVertexBuffer = device.create<Buffer>(vertexBufferInfo, vertexMemoryProperties);

            // Buffer::Info stagingBufferInfo;
            auto stagingBufferInfo = Buffer::CreateInfo;
            stagingBufferInfo.size = vertexBufferSize;
            stagingBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT;
            auto stagingMemoryProperties = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT;
            auto stagingBuffer = device.create<Buffer>(stagingBufferInfo, stagingMemoryProperties);

            stagingBuffer->write<QuadVertex>(vertices);
            process_transient_command_buffer_ex(
                commandPool,
                queue,
                [&](Command::Buffer& commandBuffer)
                {
                    commandBuffer.copy_buffer(*stagingBuffer, *quadVertexBuffer, vertexBufferSize);
                }
            );

            const std::array<uint16_t, QuadIndexCount> indices {
                0, 1, 2, 2, 3, 0
            };

            auto indexBufferSize = static_cast<VkDeviceSize>(sizeof(indices));

            // Buffer::Info indexBufferInfo;
            auto indexBufferInfo = Buffer::CreateInfo;
            indexBufferInfo.size = indexBufferSize;
            indexBufferInfo.usage = VK_BUFFER_USAGE_TRANSFER_DST_BIT | VK_BUFFER_USAGE_INDEX_BUFFER_BIT;
            auto indexMemoryProperties = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
            quadIndexBuffer = device.create<Buffer>(indexBufferInfo, indexMemoryProperties);

            stagingBuffer->write<uint16_t>(indices);
            process_transient_command_buffer_ex(
                commandPool,
                queue,
                [&](Command::Buffer& commandBuffer)
                {
                    commandBuffer.copy_buffer(*stagingBuffer, *quadIndexBuffer, indexBufferSize);
                }
            );
        }

        void create_render_pass(dst::vlkn::Device& device, VkFormat format)
        {
            using namespace dst::vlkn;

            VkAttachmentDescription colorAttachment { };
            colorAttachment.format = format;
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

            std::array<VkFormat, 3> depthFormats {
                VK_FORMAT_D32_SFLOAT, VK_FORMAT_D32_SFLOAT_S8_UINT, VK_FORMAT_D24_UNORM_S8_UINT
            };

            auto depthFormat = device.physical_device().find_supported_format(
                depthFormats,
                VK_IMAGE_TILING_OPTIMAL,
                VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT
            );

            VkAttachmentDescription depthAttachment { };
            depthAttachment.format = depthFormat;
            depthAttachment.samples = VK_SAMPLE_COUNT_1_BIT;
            depthAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
            depthAttachment.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            depthAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            depthAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            depthAttachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
            depthAttachment.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
            VkAttachmentReference depthAttachmentReference { };
            depthAttachmentReference.attachment = 1;
            depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;

            VkSubpassDescription subpass { };
            subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
            subpass.colorAttachmentCount = 1;
            subpass.pColorAttachments = &colorAttachmentReference;
            subpass.pDepthStencilAttachment = &depthAttachmentReference;

            std::array<VkAttachmentDescription, 2> attachments { colorAttachment, depthAttachment };
            RenderPass::Info renderPassInfo;
            renderPassInfo.attachmentCount = static_cast<uint32_t>(attachments.size());
            renderPassInfo.pAttachments = attachments.data();
            renderPassInfo.subpassCount = 1;
            renderPassInfo.pSubpasses = &subpass;
            mRenderPass = device.create<RenderPass>(renderPassInfo);
        }

        void create_descriptor_set_layout(dst::vlkn::Device& device)
        {
            using namespace dst::vlkn;
            VkDescriptorSetLayoutBinding uniformBufferLayoutBinding { };
            uniformBufferLayoutBinding.binding = 0;
            uniformBufferLayoutBinding.descriptorCount = 1;
            uniformBufferLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            uniformBufferLayoutBinding.stageFlags = VK_SHADER_STAGE_VERTEX_BIT;

            VkDescriptorSetLayoutBinding samplerLayoutBinding { };
            samplerLayoutBinding.binding = 1;
            samplerLayoutBinding.descriptorCount = 1;
            samplerLayoutBinding.descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            samplerLayoutBinding.pImmutableSamplers = nullptr;
            samplerLayoutBinding.stageFlags = VK_SHADER_STAGE_FRAGMENT_BIT;

            Descriptor::Set::Layout::Info descriptorSetLayoutInfo;
            std::array<VkDescriptorSetLayoutBinding, 2> descriptorSetLayoutBindings {
                uniformBufferLayoutBinding,
                samplerLayoutBinding,
            };

            descriptorSetLayoutInfo.bindingCount = static_cast<uint32_t>(descriptorSetLayoutBindings.size());
            descriptorSetLayoutInfo.pBindings = descriptorSetLayoutBindings.data();
            mDescriptorSetLayout = device.create<Descriptor::Set::Layout>(descriptorSetLayoutInfo);
        }

        void create_sprite_pipeline(dst::vlkn::Device& device)
        {
            using namespace dst::vlkn;

            auto vertexShader = device.create<ShaderModule>(
                VK_SHADER_STAGE_VERTEX_BIT,
                ShaderModule::Source::Code,
                R"(

                    #version 450
                    #extension GL_ARB_separate_shader_objects : enable

                    layout(binding = 0)
                    uniform UniformBuffer
                    {
                        mat4 wvp;
                        vec4 color;
                    } ubo;

                    layout(location = 0) in vec3 inPosition;
                    layout(location = 1) in vec2 inTexCoord;

                    layout(location = 0) out vec2 fragTexCoord;
                    layout(location = 1) out vec4 fragColor;

                    out gl_PerVertex
                    {
                        vec4 gl_Position;
                    };

                    void main()
                    {
                        gl_Position = ubo.wvp * vec4(inPosition, 1);
                        fragTexCoord = inTexCoord;
                        fragColor = ubo.color;
                    }

                )"
            );

            auto fragmentShader = device.create<ShaderModule>(
                VK_SHADER_STAGE_FRAGMENT_BIT,
                ShaderModule::Source::Code,
                R"(

                    #version 450
                    #extension GL_ARB_separate_shader_objects : enable

                    layout(binding = 1) uniform sampler2D imageSampler;

                    layout(location = 0) in vec2 fragTexCoord;
                    layout(location = 1) in vec4 fragColor;

                    layout(location = 0) out vec4 outColor;

                    void main()
                    {
                        outColor = texture(imageSampler, fragTexCoord);
                        outColor *= fragColor;
                    }

                )"
            );

            std::array<VkPipelineShaderStageCreateInfo, 2> shaderStages {
                vertexShader->pipeline_stage_info(),
                fragmentShader->pipeline_stage_info(),
            };

            auto vertexBindingDescription = ShapeBlaster::QuadVertex::binding_description();
            auto vertexAttributeDescriptions = ShapeBlaster::QuadVertex::attribute_descriptions();
            VkPipelineVertexInputStateCreateInfo vertexInputInfo { };
            vertexInputInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
            vertexInputInfo.vertexBindingDescriptionCount = 1;
            vertexInputInfo.pVertexBindingDescriptions = &vertexBindingDescription;
            vertexInputInfo.vertexAttributeDescriptionCount = static_cast<uint32_t>(vertexAttributeDescriptions.size());
            vertexInputInfo.pVertexAttributeDescriptions = vertexAttributeDescriptions.data();

            VkPipelineInputAssemblyStateCreateInfo inputAssemblyInfo { };
            inputAssemblyInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
            inputAssemblyInfo.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;

            VkRect2D scissor { };
            VkViewport viewport { };
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
            rasterizationInfo.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;

            VkPipelineMultisampleStateCreateInfo multisampleInfo { };
            multisampleInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
            multisampleInfo.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
            multisampleInfo.minSampleShading = 1;

            VkPipelineDepthStencilStateCreateInfo depthStencilInfo { };
            depthStencilInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
            depthStencilInfo.depthTestEnable = VK_FALSE; // VK_TRUE;
            depthStencilInfo.depthWriteEnable = VK_FALSE; // VK_TRUE;
            depthStencilInfo.depthCompareOp = VK_COMPARE_OP_LESS;
            depthStencilInfo.depthBoundsTestEnable = VK_FALSE;
            depthStencilInfo.stencilTestEnable = VK_FALSE;

            VkPipelineColorBlendAttachmentState colorBlendAttachment { };
            colorBlendAttachment.blendEnable = VK_TRUE;
            colorBlendAttachment.srcColorBlendFactor = VK_BLEND_FACTOR_SRC_ALPHA;
            colorBlendAttachment.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
            colorBlendAttachment.colorBlendOp = VK_BLEND_OP_ADD;
            colorBlendAttachment.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
            colorBlendAttachment.dstAlphaBlendFactor = VK_BLEND_FACTOR_ZERO;
            colorBlendAttachment.alphaBlendOp = VK_BLEND_OP_ADD;

            colorBlendAttachment.colorWriteMask =
                VK_COLOR_COMPONENT_R_BIT |
                VK_COLOR_COMPONENT_G_BIT |
                VK_COLOR_COMPONENT_B_BIT |
                VK_COLOR_COMPONENT_A_BIT;

            VkPipelineColorBlendStateCreateInfo colorBlendStateInfo { };
            colorBlendStateInfo.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
            colorBlendStateInfo.attachmentCount = 1;
            colorBlendStateInfo.pAttachments = &colorBlendAttachment;

            Pipeline::Layout::Info pipelineLayoutInfo;
            pipelineLayoutInfo.setLayoutCount = 1;
            pipelineLayoutInfo.pSetLayouts = &mDescriptorSetLayout->handle();
            mPipelineLayout = device.create<Pipeline::Layout>(pipelineLayoutInfo);

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
            pipelineInfo.pDepthStencilState = &depthStencilInfo;
            pipelineInfo.pColorBlendState = &colorBlendStateInfo;
            pipelineInfo.pDynamicState = &dynamicStateInfo;
            pipelineInfo.layout = *mPipelineLayout;
            pipelineInfo.renderPass = *mRenderPass;
            pipelineInfo.subpass = 0;
            mPipeline = device.create<Pipeline>(pipelineInfo);
        }

        void create_descriptor_pool(dst::vlkn::Device& device, uint32_t maxSets)
        {
            using namespace dst::vlkn;
            std::array<VkDescriptorPoolSize, 2> descriptorPoolSizes;
            descriptorPoolSizes[0].type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            descriptorPoolSizes[0].descriptorCount = maxSets;

            descriptorPoolSizes[1].type = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorPoolSizes[1].descriptorCount = maxSets;

            // Descriptor::Pool::Info descriptorPoolInfo;
            auto descriptorPoolInfo = Descriptor::Pool::CreateInfo;
            descriptorPoolInfo.poolSizeCount = static_cast<uint32_t>(descriptorPoolSizes.size());
            descriptorPoolInfo.pPoolSizes = descriptorPoolSizes.data();
            descriptorPoolInfo.maxSets = maxSets;
            mDescriptorPool = device.create<Descriptor::Pool>(descriptorPoolInfo);
        }

        dst::vlkn::Descriptor::Set* create_descriptor_set(
            dst::vlkn::Device& device,
            dst::vlkn::Image& image,
            dst::vlkn::Buffer& uniformBuffer
        )
        {
            using namespace dst::vlkn;
            Descriptor::Set::Info descriptorSetInfo;
            descriptorSetInfo.descriptorPool = *mDescriptorPool;
            descriptorSetInfo.descriptorSetCount = 1;
            descriptorSetInfo.pSetLayouts = &mDescriptorSetLayout->handle();
            auto descriptorSet = mDescriptorPool->allocate<Descriptor::Set>(descriptorSetInfo);

            VkDescriptorBufferInfo descriptorBufferInfo { };
            descriptorBufferInfo.buffer = uniformBuffer;
            descriptorBufferInfo.offset = 0;
            descriptorBufferInfo.range = VK_WHOLE_SIZE;
            // descriptorBufferInfo.range = sizeof(Sprite::UniformBuffer);

            VkDescriptorImageInfo descriptorImageInfo { };
            descriptorImageInfo.imageLayout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
            descriptorImageInfo.imageView = *image.views()[0];
            descriptorImageInfo.sampler = *mSampler;

            std::array<VkWriteDescriptorSet, 2> descriptorWrites { };
            descriptorWrites[0].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            descriptorWrites[0].dstSet = *descriptorSet;
            descriptorWrites[0].dstBinding = 0;
            descriptorWrites[0].dstArrayElement = 0;
            descriptorWrites[0].descriptorType = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC;
            descriptorWrites[0].descriptorCount = 1;
            descriptorWrites[0].pBufferInfo = &descriptorBufferInfo;

            descriptorWrites[1].sType = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
            descriptorWrites[1].dstSet = *descriptorSet;
            descriptorWrites[1].dstBinding = 1;
            descriptorWrites[1].dstArrayElement = 0;
            descriptorWrites[1].descriptorType = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER;
            descriptorWrites[1].descriptorCount = 1;
            descriptorWrites[1].pImageInfo = &descriptorImageInfo;
            vkUpdateDescriptorSets(
                device,
                static_cast<uint32_t>(descriptorWrites.size()),
                descriptorWrites.data(),
                0,
                nullptr
            );

            return descriptorSet;
        }

        Sprite create_sprite(dst::vlkn::Device& device, dst::vlkn::Image& image, size_t storageSize)
        {
            Sprite sprite;
            sprite.image = &image;
            sprite.uniformBuffer = create_uniform_buffer(device, storageSize);
            sprite.pipelineLayout = mPipelineLayout.get();
            sprite.descriptorSet = create_descriptor_set(device, image, *sprite.uniformBuffer);
            return sprite;
        }
    };

} // namespace ShapeBlaster
