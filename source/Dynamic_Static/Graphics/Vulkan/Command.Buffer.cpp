
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

#include "Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Command::Buffer::Buffer(Command::Pool& pool)
        : mPool { &pool }
    {
        assert(mPool);
        Info info;
        info.commandPool = *mPool;
        info.commandBufferCount = 1;
        validate(vkAllocateCommandBuffers(pool.device(), &info, &mHandle));
        name("Command::Buffer");
    }

    Command::Pool& Command::Buffer::pool()
    {
        assert(mPool);
        return *mPool;
    }

    const Command::Pool& Command::Buffer::pool() const
    {
        assert(mPool);
        return *mPool;
    }

    void Command::Buffer::begin(const BeginInfo& beginInfo)
    {
        validate(vkBeginCommandBuffer(mHandle, &beginInfo));
    }

    void Command::Buffer::begin_render_pass(
        const RenderPass::BeginInfo& renderPassBeginInfo,
        VkSubpassContents subpassContents
    )
    {
        vkCmdBeginRenderPass(mHandle, &renderPassBeginInfo, subpassContents);
    }

    void Command::Buffer::bind_pipeline(VkPipelineBindPoint bindPoint, const Pipeline& pipeline)
    {
        vkCmdBindPipeline(mHandle, bindPoint, pipeline);
    }

    void Command::Buffer::bind_descriptor_set(
        const Descriptor::Set& descriptorSet,
        const Pipeline::Layout& pipelineLayout
    )
    {
        // TODO : This is extremely inflexible...
        vkCmdBindDescriptorSets(
            mHandle,
            VK_PIPELINE_BIND_POINT_GRAPHICS,
            pipelineLayout,
            0,
            1,
            &descriptorSet.handle(),
            0,
            nullptr
        );
    }

    void Command::Buffer::bind_index_buffer(const vlkn::Buffer& indexBuffer)
    {
        // TODO : This is extremely inflexible...
        vkCmdBindIndexBuffer(mHandle, indexBuffer, 0, VK_INDEX_TYPE_UINT16);
    }

    void Command::Buffer::bind_vertex_buffer(const vlkn::Buffer& vertexBuffer)
    {
        // TODO : This is extremely inflexible...
        VkDeviceSize offsets[] = { 0 };
        vkCmdBindVertexBuffers(mHandle, 0, 1, &vertexBuffer.handle(), offsets);
    }

    void Command::Buffer::copy_buffer(
        const vlkn::Buffer& source,
        const vlkn::Buffer& destination,
        VkDeviceSize size
    )
    {
        VkBufferCopy copyRegion { };
        copyRegion.size = size;
        vkCmdCopyBuffer(mHandle, source, destination, 1, &copyRegion);
    }

    void Command::Buffer::set_viewport(const VkViewport& viewport)
    {
        vkCmdSetViewport(mHandle, 0, 1, &viewport);
    }

    void Command::Buffer::set_scissor(const VkRect2D& scissor)
    {
        vkCmdSetScissor(mHandle, 0, 1, &scissor);
    }

    void Command::Buffer::draw(
        size_t vertexCount,
        size_t instanceCount,
        size_t firstVertex,
        size_t firstInstance
    )
    {
        vkCmdDraw(
            mHandle,
            static_cast<uint32_t>(vertexCount),
            static_cast<uint32_t>(instanceCount),
            static_cast<uint32_t>(firstVertex),
            static_cast<uint32_t>(firstInstance)
        );
    }

    void Command::Buffer::draw_indexed(
        size_t indexCount,
        size_t instanceCount,
        size_t firstIndex,
        int32_t vertexOffset,
        size_t firstInstance
    )
    {
        vkCmdDrawIndexed(
            mHandle,
            static_cast<uint32_t>(indexCount),
            static_cast<uint32_t>(instanceCount),
            static_cast<uint32_t>(firstIndex),
            vertexOffset,
            static_cast<uint32_t>(firstInstance)
        );
    }

    void Command::Buffer::end_render_pass()
    {
        vkCmdEndRenderPass(mHandle);
    }

    void Command::Buffer::end()
    {
        validate(vkEndCommandBuffer(mHandle));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
