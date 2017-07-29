
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

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

#include "Dynamic_Static/Core/Collection.hpp"
#include "Dynamic_Static/Core/SharedObjectFactory.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan Device.
     */
    class Device final
        : public Object<VkDevice>
        , public std::enable_shared_from_this<Device>
        , public SharedObjectFactory<
            Buffer,
            Command::Pool,
            Framebuffer,
            Memory,
            Pipeline,
            Pipeline::Layout,
            RenderPass,
            Semaphore,
            ShaderModule,
            SwapchainKHR
        >
    {
        friend class PhysicalDevice;

    public:
        /**
         * Configuration paramaters for Device construction.
         */
        struct Info final
            : public VkDeviceCreateInfo
        {
            /**
             * Constructs an instnace of Device::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                queueCreateInfoCount = 0;
                pQueueCreateInfos = nullptr;
                enabledLayerCount = 0;
                ppEnabledLayerNames = nullptr;
                enabledExtensionCount = 0;
                ppEnabledExtensionNames = nullptr;
                pEnabledFeatures = nullptr;
            }
        };

    private:
        std::vector<std::string> mLayers;
        std::vector<std::string> mExtensions;
        VkPhysicalDeviceFeatures mFeatures;
        std::vector<std::vector<std::unique_ptr<Queue>>> mQueues;
        PhysicalDevice* mPhysicalDevice { nullptr };
        std::shared_ptr<Instance> mInstance;

    private:
        Device(
            PhysicalDevice& physicalDevice,
            const dst::Collection<std::string>& layers,
            const dst::Collection<std::string>& extensions,
            const dst::Collection<Queue::Info>& queueInfos
        );

        Device(
            PhysicalDevice& physicalDevice,
            const dst::Collection<std::string>& layers,
            const dst::Collection<std::string>& extensions,
            const dst::Collection<Queue::Info>& queueInfos,
            const VkPhysicalDeviceFeatures& features
        );

    public:
        /**
         * Destroys this instance of Device.
         */
        ~Device();

    public:
        /**
         * Gets a std::shared_ptr<> to this Device.
         * @return A std::shared_ptr<> to this Device
         */
        std::shared_ptr<Device> shared();

        /**
         * Gets this Device's PhysicalDevice.
         * @return This Device's PhysicalDevice
         */
        const PhysicalDevice& physical_device() const;

        /**
         * Gets this Device's layers.
         * @return This Device's layers
         */
        const std::vector<std::string>& layers() const;

        /**
         * Gets this Device's extensions.
         * @return This Device's extensions
         */
        const std::vector<std::string>& extensions() const;

        /**
         * Gets this Device's VkPhysicalDeviceFeatures.
         * @return This Device's VkPhysicalDeviceFeatures
         */
        const VkPhysicalDeviceFeatures& features() const;

        /**
         * Gets this Device's Queues.
         * @return This Device's Queues
         */
        const std::vector<std::vector<std::unique_ptr<Queue>>>& queues() const;

        /**
         * TODO : Documentation.
         */
        void wait_idle();

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        std::shared_ptr<ObjectType> create(Args&&... args)
        {
            auto object = new ObjectType(shared(), args...);
            return make_shared<ObjectType>(object);
        }

        /**
         * TODO : Documentation.
         */
        template <typename ObjectType, typename ...Args>
        std::shared_ptr<ObjectType> allocate(Args&&... args)
        {
            auto object = new ObjectType(shared(), args...);
            return make_shared<ObjectType>(object);
        }
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
