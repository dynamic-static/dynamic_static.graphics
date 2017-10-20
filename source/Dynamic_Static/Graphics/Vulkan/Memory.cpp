
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Memory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Memory::Memory(const std::shared_ptr<Device>& device, const VkMemoryAllocateInfo& info)
        : DeviceChild(device)
        , mSize { info.allocationSize }
    {
        validate(vkAllocateMemory(DeviceChild::device(), &info, nullptr, &mHandle));
        name("Memory");
    }

    Memory::~Memory()
    {
        if (mHandle) {
            vkFreeMemory(device(), mHandle, nullptr);
        }
    }

    size_t Memory::size() const
    {
        return mSize;
    }

    void* Memory::mapped_ptr()
    {
        return mMappedPtr;
    }

    void* Memory::map()
    {
        return map(0, mSize);
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

        // TODO : throw if already mapped?
        // TODO : throw on attempts to map memory that isn't host visible.
        // TODO : throw on attempts to map more memory than this Device::Memory is responsible for.
        if (!mMappedPtr) {
            validate(
                vkMapMemory(
                    device(),
                    mHandle,
                    static_cast<VkDeviceSize>(offset),
                    static_cast<VkDeviceSize>(size),
                    0,
                    &mMappedPtr
                )
            );
        }

        return mMappedPtr;
    }

    void Memory::unmap()
    {
        // NOTE : Writes to this Memory may not be visible after unmapping based on the driver
        //        implementation.  This can be dealt with by using a memory heap that is host
        //        coherent with VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, or calling
        //        vkFlushMappedMemoryRanges after writing the mapped memory and
        //        vkInvalidateMappedMemoryRanges() before reading from the mapped memory.
        if (mMappedPtr) {
            vkUnmapMemory(device(), mHandle);
            mMappedPtr = nullptr;
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
