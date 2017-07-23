
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
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.hpp"

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
        Validate(vkAllocateCommandBuffers(pool.device(), &info, &mHandle));
        name("Dynamic_Static::Vulkan::Command::Buffer");
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

    void Command::Buffer::begin_recording(const BeginInfo& beginInfo)
    {
        Validate(vkBeginCommandBuffer(mHandle, &beginInfo));
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

    void Command::Buffer::end_render_pass()
    {
        vkCmdEndRenderPass(mHandle);
    }

    void Command::Buffer::end_recording()
    {
        Validate(vkEndCommandBuffer(mHandle));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
