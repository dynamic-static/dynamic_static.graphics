
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

#include <memory>
#include <algorithm>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over Vulkan Memory.
     */
    class Memory final
        : public Object<VkDeviceMemory>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for Memory allocation.
         */
        struct Info final
            : public VkMemoryAllocateInfo
        {
            /**
             * Constructs an instance of Memory::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
                pNext = nullptr;
                allocationSize = 0;
                memoryTypeIndex = 0;
            }
        };

    private:
        size_t mSize { 0 };
        void* mMappedPtr { nullptr };

    public:
        Memory(const std::shared_ptr<Device>& device, const Info& info);

    public:
        /**
         * Destroys this instance of Memory.
         */
        ~Memory();

    public:
        /**
         * Gets this Memory's size in bytes.
         * @return This Memory's size in bytes
         */
        size_t size() const;

        /**
         * TODO : Documentation.
         */
        void* mapped_ptr();

        /**
         * TODO : Documentation.
         */
        void* map();

        /**
         * TODO : Documentation.
         */
        void* map(size_t offset, size_t size);

        /**
         * TODO : Documentation.
         */
        void unmap();

        /**
         * TODO : Documentation.
         */
        template <typename T>
        void write(const gsl::span<const T>& data)
        {
            write(data, 0);
        }

        /**
         * TODO : Documentation.
         */
        template <typename T>
        void write(const gsl::span<const T>& data, size_t offset)
        {
            auto mappedPtr = map(offset, data.size_bytes());
            memcpy(mappedPtr, data.data(), data.size_bytes());
            unmap();
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
