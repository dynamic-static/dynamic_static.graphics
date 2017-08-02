
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

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Descriptor.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Descriptor Pool.
     */
    class Descriptor::Pool final
        : public Object<VkDescriptorPool>
        , public detail::DeviceChild
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for Descriptor::Pool construction.
         */
        struct Info final
            : public VkDescriptorPoolCreateInfo
        {
            /**
             * Constructs an instance of Descriptor::Pool::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                maxSets = 0;
                poolSizeCount = 0;
                pPoolSizes = nullptr;
            }
        };

    private:
        std::vector<std::unique_ptr<Descriptor::Set>> mSets;

    private:
        Pool(const std::shared_ptr<Device>& device, const Info& info);

    public:
        /**
         * Destroys this instance of Descriptor::Pool.
         */
        ~Pool();

    public:
        /**
         * Gets this Descriptor::Pool's Descriptor::Sets.
         * @return This Descriptor::Pool's Descriptor::Sets
         */
        const std::vector<std::unique_ptr<Descriptor::Set>>& sets() const;

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        ObjectType* allocate(Args&&... args)
        {
            static_assert(
                std::is_same<ObjectType, Descriptor::Set>::value,
                "Command::Pool can only allocate Descriptor::Set"
            );

            // TODO : DRY...
            // TODO : UniqueObject factory...
            std::unique_ptr<Descriptor::Set> buffer(new Descriptor::Set(*this, args...));
            mSets.push_back(std::move(buffer));
            return mSets.back().get();
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
