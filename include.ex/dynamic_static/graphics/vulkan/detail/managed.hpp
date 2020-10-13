
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/generated/create-structure-copy.hpp"
#include "dynamic_static/graphics/vulkan/generated/destroy-structure-copy.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <cassert>
#include <memory>
#include <mutex>
#include <type_traits>
#include <unordered_map>
#include <utility>

namespace dst {
namespace vk {

template <typename T, class Enable = void>
class Managed
{
};

namespace detail {

template <typename VulkanHandleType>
inline void on_managed_handle_created(Managed<VulkanHandleType>&)
{
}

template <typename VulkanHandleType>
inline void on_managed_handle_destroyed(Managed<VulkanHandleType>&)
{
}

} // namespace detail

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
class Managed<VulkanStructureType, typename std::enable_if<std::is_class<VulkanStructureType>::value>::type>
{
public:
    /**
    TODO : Documentation
    */
    Managed() = default;

    /**
    TODO : Documentation
    */
    inline Managed(const VulkanStructureType& other)
        : mVkStructure { detail::create_structure_copy(other, nullptr) }
    {
    }

    /**
    TODO : Documentation
    */
    inline Managed(const Managed<VulkanStructureType>& other)
    {
        *this = other;
    }

    /**
    TODO : Documentation
    */
    inline Managed(Managed<VulkanStructureType>&& other)
    {
        *this = std::move(other);
    }

    /**
    TODO : Documentation
    */
    inline ~Managed()
    {
        reset();
    }

    /**
    TODO : Documentation
    */
    inline Managed<VulkanStructureType>& operator=(const Managed<VulkanStructureType>& other)
    {
        reset();
        mVkStructure = detail::create_structure_copy(other.mVkStructure, nullptr);
        return *this;
    }

    /**
    TODO : Documentation
    */
    inline Managed<VulkanStructureType>& operator=(Managed<VulkanStructureType>&& other)
    {
        mVkStructure = other.mVkStructure;
        other.mVkStructure = { };
        return *this;
    }

    /**
    TODO : Documentation
    */
    inline operator const VulkanStructureType& () const
    {
        return mVkStructure;
    }

    /**
    TODO : Documentation
    */
    inline const VulkanStructureType& operator*() const
    {
        return mVkStructure;
    }

    /**
    TODO : Documentation
    */
    inline const VulkanStructureType* operator->() const
    {
        return &mVkStructure;
    }

    /**
    TODO : Documentation
    */
    inline void reset()
    {
        detail::destroy_structure_copy(mVkStructure, nullptr);
        mVkStructure = { };
    }

private:
    VulkanStructureType mVkStructure { };
};

/**
    TODO : Documentation
    */
template <typename VulkanHandleType>
class Managed<VulkanHandleType, typename std::enable_if<std::is_pointer<VulkanHandleType>::value>::type>
{
public:
    class ControlBlock;

    /**
    TODO : Documentation
    */
    class EqualityComparer final
    {
    public:
        /**
        TODO : Documentation
        */
        inline bool operator()(const Managed<VulkanHandleType>& lhs, const Managed<VulkanHandleType>& rhs) const
        {
            return lhs.mVkHandle == rhs.mVkHandle;
        }

        /**
        TODO : Documentation
        */
        inline bool operator()(const Managed<VulkanHandleType>& lhs, const VulkanHandleType& rhs) const
        {
            return lhs.mVkHandle == rhs;
        }

        /**
        TODO : Documentation
        */
        inline bool operator()(const VulkanHandleType& lhs, const Managed<VulkanHandleType>& rhs) const
        {
            return lhs == rhs.mVkHandle;
        }
    };

    /**
    TODO : Documentation
    */
    class LessThanComparer final
    {
    public:
        /**
        TODO : Documentation
        */
        inline bool operator()(const Managed<VulkanHandleType>& lhs, const Managed<VulkanHandleType>& rhs) const
        {
            return lhs.mVkHandle < rhs.mVkHandle;
        }

        /**
        TODO : Documentation
        */
        inline bool operator()(const Managed<VulkanHandleType>& lhs, const VulkanHandleType& rhs) const
        {
            return lhs.mVkHandle < rhs;
        }

        /**
        TODO : Documentation
        */
        inline bool operator()(const VulkanHandleType& lhs, const Managed<VulkanHandleType>& rhs) const
        {
            return lhs < rhs.mVkHandle;
        }
    };

    /**
    TODO : Documentation
    */
    Managed() = default;

    /**
    TODO : Documentation
    */
    inline ~Managed()
    {
        reset();
    }

    /**
    TODO : Docuemntation
    */
    inline Managed(VulkanHandleType vkHandle)
    {
        access_control_blocks(
            [this, vkHandle](const std::unordered_map<VulkanHandleType, std::weak_ptr<ControlBlock>>& controlBlocks)
            {
                auto itr = controlBlocks.find(vkHandle);
                if (itr != controlBlocks.end()) {
                    assert(!itr->second.expired());
                    mVkHandle = vkHandle;
                    mspControlBlock = itr->second.lock();
                }
            }
        );
    }

    /**
    TODO : Documentation
    */
    inline Managed(const Managed<VulkanHandleType>& other)
    {
        *this = other;
    }

    /**
    TODO : Documentation
    */
    inline Managed(Managed<VulkanHandleType>&& other)
    {
        *this = std::move(other);
    }

    /**
    TODO : Documentation
    */
    inline Managed<VulkanHandleType>& operator=(const Managed<VulkanHandleType>& other)
    {
        mVkHandle = other.mVkHandle;
        mspControlBlock = other.mspControlBlock;
        return *this;
    }

    /**
    TODO : Documentation
    */
    inline Managed<VulkanHandleType>& operator=(Managed<VulkanHandleType>&& other)
    {
        mVkHandle = std::move(other.mVkHandle);
        mspControlBlock = std::move(other.mspControlBlock);
        other.mVkHandle = VK_NULL_HANDLE;
        return *this;
    }

    /**
    TODO : Documentation
    */
    inline operator const VulkanHandleType&() const
    {
        return mVkHandle;
    }

    /**
    TODO : Documentation
    */
    inline const VulkanHandleType& operator*() const
    {
        return mVkHandle;
    }

    /**
    TODO : Documentation
    */
    inline operator bool() const
    {
        return mVkHandle != VK_NULL_HANDLE;
    }

    /**
    TODO : Documentation
    */
    template <typename T>
    inline const T& get() const
    {
        assert(mspControlBlock);
        return mspControlBlock->get<T>();
    }

    /**
    TODO : Documentation
    */
    inline void reset()
    {
        detail::on_managed_handle_destroyed(*this);
        mspControlBlock.reset();
        mVkHandle = VK_NULL_HANDLE;
    }

    /**
    TODO : Documentation
    */
    template <typename RhsType>
    inline friend bool operator==(const Managed<VulkanHandleType>& lhs, const RhsType& rhs)
    {
        return EqualityComparer()(lhs, rhs);
    }

    /**
    TODO : Documentation
    */
    template <typename RhsType>
    inline friend bool operator!=(const Managed<VulkanHandleType>& lhs, const RhsType& rhs)
    {
        return !(lhs == rhs);
    }

    /**
    TODO : Documentation
    */
    template <typename RhsType>
    inline friend bool operator<(const Managed<VulkanHandleType>& lhs, const RhsType& rhs)
    {
        return LessThanComparer()(lhs, rhs);
    }

    /**
    TODO : Documentation
    */
    template <typename RhsType>
    inline friend bool operator>(const Managed<VulkanHandleType>& lhs, const RhsType& rhs)
    {
        return rhs < lhs;
    }

    /**
    TODO : Documentation
    */
    template <typename RhsType>
    inline friend bool operator<=(const Managed<VulkanHandleType>& lhs, const RhsType& rhs)
    {
        return !(lhs > rhs);
    }

    /**
    TODO : Documentation
    */
    template <typename RhsType>
    inline friend bool operator>=(const Managed<VulkanHandleType>& lhs, const RhsType& rhs)
    {
        return !(lhs < rhs);
    }

private:
    inline static std::mutex& get_control_block_mutex()
    {
        static std::mutex sControlBlockMutex;
        return sControlBlockMutex;
    }

    inline static std::unordered_map<VulkanHandleType, std::weak_ptr<ControlBlock>>& get_control_blocks()
    {
        static std::unordered_map<VulkanHandleType, std::weak_ptr<ControlBlock>> sControlBlocks;
        return sControlBlocks;
    }

    template <typename AccessControlBlocksFunctionType>
    inline static void access_control_blocks(AccessControlBlocksFunctionType accessControlBlocks)
    {
        std::lock_guard<std::mutex> lock(get_control_block_mutex());
        accessControlBlocks(get_control_blocks());
    }

    inline static void register_control_block(const std::shared_ptr<ControlBlock>& spControlBlock)
    {
        access_control_blocks(
            [&spControlBlock](std::unordered_map<VulkanHandleType, std::weak_ptr<ControlBlock>>& controlBlocks)
            {
                assert(spControlBlock);
                assert(spControlBlock->get<VulkanHandleType>());
                auto inserted = controlBlocks.insert({ spControlBlock->get<VulkanHandleType>(), spControlBlock }).second;
                (void)inserted;
                assert(inserted);
            }
        );
    }

    inline static void unregister_control_block(VulkanHandleType vkHandle)
    {
        access_control_blocks(
            [vkHandle](std::unordered_map<VulkanHandleType, std::weak_ptr<ControlBlock>>& controlBlocks)
            {
                assert(vkHandle);
                auto removed = controlBlocks.erase(vkHandle);
                (void)removed;
                assert(removed);
            }
        );
    }

    inline static std::shared_ptr<ControlBlock> create_control_block(VulkanHandleType vkHandle)
    {
        assert(vkHandle);
        auto spControlBlock = std::make_shared<ControlBlock>(vkHandle);
        register_control_block(spControlBlock);
        return spControlBlock;
    }

    VulkanHandleType mVkHandle { VK_NULL_HANDLE };
    std::shared_ptr<ControlBlock> mspControlBlock;
    template <typename VulkanHandleType>
    friend void detail::on_managed_handle_created(Managed<VulkanHandleType>&);
    template <typename VulkanHandleType>
    friend void detail::on_managed_handle_destroyed(Managed<VulkanHandleType>&);
};

/**
TODO : Documentation
*/
template <typename ManagedVulkanHandleType, typename ...Args>
inline VkResult allocate(Args&&... args)
{
    return ManagedVulkanHandleType::ControlBlock::allocate(std::forward<Args>(args)...);
}

/**
TODO : Documentation
*/
template <typename ManagedVulkanHandleType, typename ...Args>
inline VkResult create(Args&&... args)
{
    return ManagedVulkanHandleType::ControlBlock::create(std::forward<Args>(args)...);
}

} // namespace vk
} // namespace dst
