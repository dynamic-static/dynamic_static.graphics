
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Application.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/InstanceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan instance.
    */
    class Instance final
        : public Object<VkInstance>
        , public SharedObject<Instance>
    {
    public:
        /*
        * Configuration parameters for Instance construction.
        */
        struct CreateInfo final
            : public VkInstanceCreateInfo
        {
            /*
            * Constructs an instance of Instance::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                pApplicationInfo = nullptr;
                enabledLayerCount = 0;
                ppEnabledLayerNames = nullptr;
                enabledExtensionCount = 0;
                ppEnabledExtensionNames = nullptr;
            }
        };

    private:
        std::vector<std::string> mEnabledLayers;
        std::vector<std::string> mEnabledExtensions;
        std::unique_ptr<DebugReportCallbackEXT> mDebugReport;
        std::vector<PhysicalDevice> mPhysicalDevices;

    private:
        /*
        * Constructs a new instance of Instance.
        * @param [in] createInfo This Instance's Instance::CreateInfo (optional = { })
        * @param [in] debugFlags This Instance's VkDebugReportFlagsEXT (optional = 0)
        */
        Instance(
            CreateInfo createInfo = { },
            VkDebugReportFlagsEXT debugReportFlags = 0
        );

    public:
        /*
        * Destroys this Instance.
        */
        ~Instance();

    public:
        /*
        * Gets this Instance's enabled layers.
        * @return This Instance's enabled layers
        */
        const std::vector<std::string>& get_enabled_layers() const;

        /*
        * Gets this Instance's enabled extensions.
        * @return This Instance's enabled extensions
        */
        const std::vector<std::string>& get_enabled_extensions() const;

        /*
        * Gets this Instance's DebugReportCallbackEXT.
        * @return This Instance's DebugReportCallbackEXT
        */
        DebugReportCallbackEXT* get_debug_report();

        /*
        * Gets this Instance's DebugReportCallbackEXT.
        * @return This Instance's DebugReportCallbackEXT
        */
        const DebugReportCallbackEXT* get_debug_report() const;

        /*
        * Gets this Instance's PhysicalDevices.
        * @return This Instance's PhysicalDevices
        */
        Span<PhysicalDevice> Instance::get_physical_devices();

        /*
        * Gets this Instance's PhysicalDevices.
        * @return This Instance's PhysicalDevices
        */
        Span<const PhysicalDevice> Instance::get_physical_devices() const;

        /*
        * Gets a function pointer from this Vulkan Instance.
        * @param [in] name The name of the function
        * @param [out] functionPointer The pointer to the function
        */
        template <typename FunctionType>
        inline void get_function_pointer(
            const std::string& name,
            FunctionType& functionPointer
        ) const
        {
            functionPointer = reinterpret_cast<FunctionType>(vkGetInstanceProcAddr(mHandle, name.c_str()));
        }

    private:
        template <typename ObjectType, typename ...Args>
        friend std::shared_ptr<ObjectType> create(Args&&...);
    };

    /*
    * Creates a new object of a given type.
    * @param <ObjectType> The type of object to create
    * @param <Args> The construction arguments for the object to create
    * @return The newly created object
    */
    template <typename ObjectType, typename ...Args>
    inline std::shared_ptr<ObjectType> create(Args&&... args)
    {
        static_assert(
            std::is_same<ObjectType, Instance>::value,
            "dst::vk::create<> can only create dst::vk::Instance"
        );
        return std::shared_ptr<Instance>(new Instance(std::forward<Args>(args)...));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
