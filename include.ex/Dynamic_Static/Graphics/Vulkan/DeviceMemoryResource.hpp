
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"

#include <algorithm>
#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan device memory resource.
    */
    class DeviceMemoryResource
        : public DeviceChild
    {
    private:
        std::shared_ptr<DeviceMemory> mMemory;
        VkDeviceSize mMemoryOffset { 0 };

    protected:
        /*!
        Constructs an instance of DeviceMemoryResource.
        @param [in] device This DeviceMemoryResource's Device
        */
        DeviceMemoryResource(const std::shared_ptr<Device>& device);

    public:
        /*!
        Moves an instance of DeviceMemoryResource.
        @param [in] other The DeviceMemoryResource to move from
        */
        DeviceMemoryResource(DeviceMemoryResource&& other);

        /*!
        Destroys this instance of DeviceMemoryResource.
        */
        virtual ~DeviceMemoryResource();

        /*!
        Moves an instance of DeviceMemoryResource.
        @param [in] other The DeviceMemoryResource to move from
        @return This DeviceMemoryResource
        */
        DeviceMemoryResource& operator=(DeviceMemoryResource&& other);

    public:
        /*!
        Gets this DeviceMemoryResource's bound DeviceMemory allocation.
        @return This DeviceMemoryResource's bound DeviceMemory allocation
        */
        const std::shared_ptr<DeviceMemory>& get_memory() const;

        /*!
        Gets this DeviceMemoryResource's offset in bytes from the start of its bound DeviceMemory allocation.
        @return This DeviceMemoryResource's offset in bytes from the start of its bound DeviceMemory allocation
        */
        VkDeviceSize get_memory_offset() const;

        /*!
        Gets this DeviceMemoryResource's size in bytes.
        @return This DeviceMemoryResource's size in bytes
        */
        VkDeviceSize get_memory_size() const;

        /*!
        Gets this DeviceMemoryResource's alignment in bytes.
        @return This DeviceMemoryResource's alignment in bytes
        */
        VkDeviceSize get_memory_alignment() const;

        /*!
        Gets this DeviceMemoryResource's VkMemoryRequirements.
        @return This DeviceMemoryResource's VkMemoryRequirements
        */
        virtual VkMemoryRequirements get_memory_requirements() const = 0;

        /*!
        Binds this DeviceMemoryResource to a given DeviceMemory allocation.
        @param [in] memory The DeviceMemory allocation to bind this DeviceMemoryResource to
        @param [in] memoryOffset The offset in bytes from the start of the given DeviceMemory allocation at which to bind this DeviceMemoryBoundObject (optional = 0)
        */
        virtual void bind_memory(
            const std::shared_ptr<DeviceMemory>& memory,
            VkDeviceSize memoryOffset = 0
        ) = 0;

        /*!
        TODO : Documentation.
        */
        template <typename T>
        void write(dst::Span<T> data)
        {
            // TODO : DRY...
            // TODO : These write() methods need to be handled better...
            assert(mMemory && "Attempting DeviceMemoryResource write without bound DeviceMemory");
            if (!data.empty()) {
                auto size = std::min(data.size_bytes(), get_memory_size());
                auto mappedPtr = mMemory->get_mapped_ptr();
                if (mappedPtr) {
                    // TODO : This currently assumes that any pre mapped memory
                    //  has the entire allocation mapped...we should check the
                    //  mapped offset and size to keep the write in the region
                    //  owned by this DeviceMemoryResource.
                    memcpy((uint8_t*)mappedPtr + mMemoryOffset, data.data(), size);
                } else {
                    auto mappedPtr = mMemory->map(mMemoryOffset, size);
                    memcpy(mappedPtr, data.data(), size);
                    mMemory->unmap();
                }
            }
        }

        /*!
        TODO : Documentation.
        */
        template <typename T>
        void write(dst::Span<const T> data)
        {
            // TODO : DRY...
            // TODO : These write() methods need to be handled better...
            assert(mMemory && "Attempting DeviceMemoryResource write without bound DeviceMemory");
            if (!data.empty()) {
                auto size = std::min(data.size_bytes(), get_memory_size());
                auto mappedPtr = mMemory->get_mapped_ptr();
                if (mappedPtr) {
                    // TODO : This currently assumes that any pre mapped memory
                    //  has the entire allocation mapped...we should check the
                    //  mapped offset and size to keep the write in the region
                    //  owned by this DeviceMemoryResource.
                    memcpy((uint8_t*)mappedPtr + mMemoryOffset, data.data(), size);
                } else {
                    auto mappedPtr = mMemory->map(mMemoryOffset, size);
                    memcpy(mappedPtr, data.data(), size);
                    mMemory->unmap();
                }
            }
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
