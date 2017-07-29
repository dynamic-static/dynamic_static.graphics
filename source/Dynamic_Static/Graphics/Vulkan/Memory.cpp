
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

#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Memory::Memory(const std::shared_ptr<Device>& device, const Info& info)
        : DeviceChild(device)
    {
        validate(vkAllocateMemory(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Dynamic_Static::Vulkan::Memory");
    }

    Memory::~Memory()
    {
        if (mHandle) {
            vkFreeMemory(device(), mHandle, nullptr);
        }
    }

    void* Memory::map()
    {
        return map(0, 0);
    }

    void* Memory::map(size_t offset, size_t size)
    {
        /*

        The Good                       The Bad                        The Fucked
        +---------------------------+  +---------------------------+  +--------+--------+---------+
        |     Memory Allocation     |  |     Memory Allocation     |  |   MA   |   MA   |   MA    |
        +---------------------------+  +--------+--------+---------+  +--------+--------+---------+
        |          Buffer           |  | Buffer | Buffer | Buffer  |  | Buffer | Buffer | Buffer  |
        +--------+--------+---------+  +--------+--------+---------+  +--------+--------+---------+
        | Vertex | Index  | Uniform |  | Vertex | Index  | Uniform |  | Vertex | Index  | Uniform |
        +--------+--------+---------+  +--------+--------+---------+  +--------+--------+---------+

        */

        // TODO : throw on attempts to map memory that isn't host visible.
        // TODO : throw on attempts to map more memory than this Device::Memory is responsible for.
        void* mappedPtr = nullptr;
        validate(
            vkMapMemory(
                device(),
                mHandle,
                static_cast<VkDeviceSize>(offset),
                static_cast<VkDeviceSize>(size),
                0,
                &mappedPtr
            )
        );

        return mappedPtr;
    }

    void Memory::unmap()
    {
        // NOTE : Writes to this Memory may not be visible after unmapping based on the driver
        //        implementation.  This can be dealt with by using a memory heap that is host
        //        coherent with VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, or calling
        //        vkFlushMappedMemoryRanges after writing the mapped memory and
        //        vkInvalidateMappedMemoryRanges() before reading from the mapped memory.
        vkUnmapMemory(device(), mHandle);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
