
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/comparison-operators.hpp"
#include "dynamic_static/graphics/vulkan/create-structure-copy.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <utility>

namespace dst {
namespace vk {
namespace detail {

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
class ManagedStructure
{
public:
    /**
    Constructs an instance of ManagedStructure<>
    */
    inline ManagedStructure()
    {
        // NOTE : ManagedStructure<> doesn't currently use VkAllocationCallbacks.  The
        //  plan is to use this object in several examples before determining the best
        //  approach for handling VkAllocationCallbacks...ie force stateless allocators
        //  that are constructed on demand vs keeping VkAllocationCallbacks members.
        static_assert(sizeof(ManagedStructure<VulkanStructureType>) == sizeof(VulkanStructureType));
    }

    /**
    TODO : Documentation
    */
    inline ManagedStructure(const ManagedStructure<VulkanStructureType>& other)
    {
        *this = other;
    }

    /**
    TODO : Documentation
    */
    inline ManagedStructure(const VulkanStructureType& other)
    {
        *this = other;
    }

    /**
    TODO : Documentation
    */
    inline ManagedStructure(ManagedStructure<VulkanStructureType>&& other)
    {
        *this = std::move(other);
    }

    /**
    Destroys this instance of BasicManagedStructure<>
    */
    inline ~ManagedStructure()
    {
        reset();
    }

    /**
    TODO : Documentation
    */
    inline ManagedStructure<VulkanStructureType>& operator=(const ManagedStructure<VulkanStructureType>& other)
    {
        if (this != &other) {
            *this = (VulkanStructureType)other;
        }
        return *this;
    }

    /**
    TODO : Documentation
    */
    inline ManagedStructure<VulkanStructureType>& operator=(const VulkanStructureType& other)
    {
        reset();
        mVkStructure = create_structure_copy(other);
        return *this;
    }

    /**
    TODO : Documentation
    */
    inline ManagedStructure<VulkanStructureType>& operator=(ManagedStructure<VulkanStructureType>&& other)
    {
        if (this != &other) {
            reset();
            memcpy(&mVkStructure, &other.mVkStructure, sizeof(VulkanStructureType));
            memset(&other.mVkStructure, 0, sizeof(VkStructureType));
        }
        return *this;
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
    inline const VulkanStructureType& operator*() const
    {
        return mVkStructure;
    }

    /**
    TODO : Documentation
    */
    inline operator const VulkanStructureType&() const
    {
        return mVkStructure;
    }

    /**
    TODO : Documentation
    */
    inline void reset()
    {
        destroy_structure_copy(mVkStructure);
        memset(&mVkStructure, 0, sizeof(VkStructureType));
    }

private:
    VulkanStructureType mVkStructure { };
};

#if 0
/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator==(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return (VulkanStructureType)lhs == (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator==(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const VulkanStructureType& rhs
)
{
    return (VulkanStructureType)lhs == rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator==(
    const VulkanStructureType& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return lhs == (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator!=(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return (VulkanStructureType)lhs != (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator!=(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const VulkanStructureType& rhs
)
{
    return (VulkanStructureType)lhs != rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator!=(
    const VulkanStructureType& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return lhs != (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator<(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return (VulkanStructureType)lhs < (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator<(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const VulkanStructureType& rhs
)
{
    return (VulkanStructureType)lhs < rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator<(
    const VulkanStructureType& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return lhs < (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator<=(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return (VulkanStructureType)lhs <= (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator<=(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const VulkanStructureType& rhs
)
{
    return (VulkanStructureType)lhs <= rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator<=(
    const VulkanStructureType& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return lhs <= (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator>(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return (VulkanStructureType)lhs > (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator>(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const VulkanStructureType& rhs
)
{
    return (VulkanStructureType)lhs > rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator>(
    const VulkanStructureType& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return lhs > (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator>=(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return (VulkanStructureType)lhs >= (VulkanStructureType)rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator>=(
    const BasicManagedStructure<VulkanStructureType>& lhs,
    const VulkanStructureType& rhs
)
{
    return (VulkanStructureType)lhs >= rhs;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline bool operator>=(
    const VulkanStructureType& lhs,
    const BasicManagedStructure<VulkanStructureType>& rhs
)
{
    return lhs >= (VulkanStructureType)rhs;
}
#endif

} // namespace detail
} // namespace vk
} // namespace dst
