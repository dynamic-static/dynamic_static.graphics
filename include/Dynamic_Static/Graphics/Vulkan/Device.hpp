
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/SharedObjectFactory.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Queue.hpp"

#include "gsl/span"

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
            Descriptor::Pool,
            Descriptor::Set::Layout,
            Framebuffer,
            Image,
            Memory,
            Pipeline,
            Pipeline::Layout,
            RenderPass,
            Sampler,
            Semaphore,
            ShaderModule,
            SwapchainKHR
        >
    {
        friend class PhysicalDevice;

    public:
        /**
         * Default Device creation parameters.
         */
        static constexpr VkDeviceCreateInfo CreateInfo {
            /* sType                   */ VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
            /* pNext                   */ nullptr,
            /* flags                   */ 0,
            /* queueCreateInfoCount    */ 0,
            /* pQueueCreateInfos       */ nullptr,
            /* enabledLayerCount       */ 0,
            /* ppEnabledLayerNames     */ nullptr,
            /* enabledExtensionCount   */ 0,
            /* ppEnabledExtensionNames */ nullptr,
            /* pEnabledFeatures        */ nullptr,
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
            const gsl::span<std::string>& layers,
            const gsl::span<std::string>& extensions,
            const gsl::span<VkDeviceQueueCreateInfo>& queueInfos
        );

        Device(
            PhysicalDevice& physicalDevice,
            const gsl::span<std::string>& layers,
            const gsl::span<std::string>& extensions,
            const gsl::span<VkDeviceQueueCreateInfo>& queueInfos,
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
