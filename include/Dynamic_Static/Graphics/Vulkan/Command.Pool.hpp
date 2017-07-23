
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

#include "Dynamic_Static/Graphics/Vulkan/Command.hpp"
#include "Dynamic_Static/Core/SharedObjectFactory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>
#include <type_traits>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Command Pool.
     */
    class Command::Pool final
        : public Object<VkCommandPool>
    {
        friend class Device;

    public:
        /**
         * Configuration paramaters for Command::Pool construction.
         */
        struct Info final
            : public VkCommandPoolCreateInfo
        {
            /**
             * Constructs an instance of Command::Pool::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                queueFamilyIndex = 0;
            }
        };

    private:
        std::vector<std::unique_ptr<Command::Buffer>> mBuffers;
        std::shared_ptr<Device> mDevice;

    private:
        Pool(const std::shared_ptr<Device>& device, const Info& info);

    public:
        /**
         * Destroys this instance of Command::Pool.
         */
        ~Pool();

    public:
        /**
         * Gets this Command::Pool's Device.
         * @return This Command::Pool's Device
         */
        Device& device();

        /**
         * Gets this Command::Pool's Device.
         * @return This Command::Pool's Device
         */
        const Device& device() const;

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        ObjectType* allocate(Args&&... args)
        {
            static_assert(
                std::is_same<ObjectType, Command::Buffer>::value,
                "Command::Pool can only allocate Command::Buffer"
            );

            // TODO : UniqueObject factory...
            std::unique_ptr<Command::Buffer> buffer(new Command::Buffer(*this, args...));
            mBuffers.push_back(std::move(buffer));
            return mBuffers.back().get();
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
