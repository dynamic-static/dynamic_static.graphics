
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include "gsl/span"

#include <memory>
#include <vector>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * TODO : Documentation.
     */
    template <typename ObjectType, typename ...Args>
    inline std::shared_ptr<ObjectType> create(Args&&... args);

    /**
     * Provides high level control over a Vulkan Instance.
     */
    class Instance final
        : public Object<VkInstance>
        , public std::enable_shared_from_this<Instance>
    {
        template <typename ObjectType, typename ...Args>
        friend std::shared_ptr<ObjectType> Vulkan::create(Args&&...);

    private:
        std::vector<std::string> mLayers;
        std::vector<std::string> mExtensions;
        std::unique_ptr<DebugReport> mDebugReport;
        std::vector<std::unique_ptr<PhysicalDevice>> mPhysicalDevices;

    private:
        Instance(
            const gsl::span<std::string>& layers,
            const gsl::span<std::string>& extensions,
            VkDebugReportFlagsEXT debugFlags = 0
        );

    public:
        /**
         * Destroys this Vulkan Instance.
         */
        ~Instance();

    public:
        /**
         * Gets a std::shared_ptr<> to this Instance.
         * @return A std::shared_ptr<> to this Instance
         */
        std::shared_ptr<Instance> shared();

        /**
         * Gets this Vulkan Instance's PhysicalDevices.
         * @return This Vulkan::Instance's PhysicalDevices
         */
        const std::vector<std::unique_ptr<PhysicalDevice>>& physical_devices() const;

        /**
         * Gets a value indicating whether or not this Instance has validation enabled.
         * @return Whether or not this Instance has validation enabled
         */
        bool validation_enabled() const;

        /**
         * Gets a function pointer from this Vulkan Instance.
         * @param [in] name             The name of the function
         * @param [out] functionPointer The pointer to the function
         */
        template <typename FunctionType>
        void get_function_pointer(const std::string& name, FunctionType& functionPointer) const
        {
            functionPointer = reinterpret_cast<FunctionType>(vkGetInstanceProcAddr(mHandle, name.c_str()));
            // TODO : Make this check configurable; ie. throw, assert, log, nothing, etc.
            if (!functionPointer) {
                throw std::runtime_error("Failed to acquire function pointer for \"" + name + "\"");
            }
        }
    };

    template <typename ObjectType, typename ...Args>
    inline std::shared_ptr<ObjectType> create(Args&&... args)
    {
        static_assert(
            std::is_same<ObjectType, Instance>::value,
            "dst::vlkn::create can only create Instance"
            );

        return std::shared_ptr<Instance>(new Instance(args...));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
