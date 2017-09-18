
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
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
         * Default Descriptor::Pool creation parameters.
         */
        static constexpr VkDescriptorPoolCreateInfo CreateInfo {
            /* sType         */ VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,
            /* pNext         */ nullptr,
            /* flags         */ 0,
            /* maxSets       */ 0,
            /* poolSizeCount */ 0,
            /* pPoolSizes    */ nullptr,
        };

    private:
        std::vector<std::unique_ptr<Descriptor::Set>> mSets;

    private:
        Pool(const std::shared_ptr<Device>& device, const VkDescriptorPoolCreateInfo& info);

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
