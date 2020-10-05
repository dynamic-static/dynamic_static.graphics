
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/comparison-operators.hpp"
#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple.hpp"

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS


#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS


#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS


bool operator<(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBufferCopy& lhs, const VkBufferCopy& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferCopy& lhs, const VkBufferCopy& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}



bool operator<(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkClearAttachment& lhs, const VkClearAttachment& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkClearAttachment& lhs, const VkClearAttachment& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkClearColorValue& lhs, const VkClearColorValue& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkClearColorValue& lhs, const VkClearColorValue& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkClearRect& lhs, const VkClearRect& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkClearRect& lhs, const VkClearRect& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkClearValue& lhs, const VkClearValue& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkClearValue& lhs, const VkClearValue& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkComponentMapping& lhs, const VkComponentMapping& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkComponentMapping& lhs, const VkComponentMapping& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkDevicePrivateDataCreateInfoEXT& lhs, const VkDevicePrivateDataCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDevicePrivateDataCreateInfoEXT& lhs, const VkDevicePrivateDataCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
bool operator<(const VkDirectFBSurfaceCreateInfoEXT& lhs, const VkDirectFBSurfaceCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDirectFBSurfaceCreateInfoEXT& lhs, const VkDirectFBSurfaceCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

bool operator<(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkExtent2D& lhs, const VkExtent2D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExtent2D& lhs, const VkExtent2D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkExtent3D& lhs, const VkExtent3D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExtent3D& lhs, const VkExtent3D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkFormatProperties& lhs, const VkFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFormatProperties& lhs, const VkFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGeometryNV& lhs, const VkGeometryNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGeometryNV& lhs, const VkGeometryNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_IOS_MVK
bool operator<(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_IOS_MVK

bool operator<(const VkImageBlit& lhs, const VkImageBlit& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageBlit& lhs, const VkImageBlit& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageCopy& lhs, const VkImageCopy& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageCopy& lhs, const VkImageCopy& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_USE_PLATFORM_FUCHSIA
bool operator<(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_FUCHSIA

bool operator<(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkImageResolve& lhs, const VkImageResolve& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageResolve& lhs, const VkImageResolve& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkImageSubresource& lhs, const VkImageSubresource& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageSubresource& lhs, const VkImageSubresource& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageViewAddressPropertiesNVX& lhs, const VkImageViewAddressPropertiesNVX& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageViewAddressPropertiesNVX& lhs, const VkImageViewAddressPropertiesNVX& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkLayerProperties& lhs, const VkLayerProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkLayerProperties& lhs, const VkLayerProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
bool operator<(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_MACOS_MVK

bool operator<(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkMemoryType& lhs, const VkMemoryType& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryType& lhs, const VkMemoryType& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
bool operator<(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_METAL_EXT

bool operator<(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkOffset2D& lhs, const VkOffset2D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkOffset2D& lhs, const VkOffset2D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkOffset3D& lhs, const VkOffset3D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkOffset3D& lhs, const VkOffset3D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& lhs, const VkPhysicalDeviceCustomBorderColorFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& lhs, const VkPhysicalDeviceCustomBorderColorFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& lhs, const VkPhysicalDeviceCustomBorderColorPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& lhs, const VkPhysicalDeviceCustomBorderColorPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& lhs, const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& lhs, const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}



bool operator<(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceImageRobustnessFeaturesEXT& lhs, const VkPhysicalDeviceImageRobustnessFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageRobustnessFeaturesEXT& lhs, const VkPhysicalDeviceImageRobustnessFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkPhysicalDevicePrivateDataFeaturesEXT& lhs, const VkPhysicalDevicePrivateDataFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePrivateDataFeaturesEXT& lhs, const VkPhysicalDevicePrivateDataFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceRobustness2FeaturesEXT& lhs, const VkPhysicalDeviceRobustness2FeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRobustness2FeaturesEXT& lhs, const VkPhysicalDeviceRobustness2FeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceRobustness2PropertiesEXT& lhs, const VkPhysicalDeviceRobustness2PropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRobustness2PropertiesEXT& lhs, const VkPhysicalDeviceRobustness2PropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& lhs, const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& lhs, const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}




bool operator<(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator<(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_GGP

bool operator<(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPrivateDataSlotCreateInfoEXT& lhs, const VkPrivateDataSlotCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPrivateDataSlotCreateInfoEXT& lhs, const VkPrivateDataSlotCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRect2D& lhs, const VkRect2D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRect2D& lhs, const VkRect2D& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSamplerCustomBorderColorCreateInfoEXT& lhs, const VkSamplerCustomBorderColorCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSamplerCustomBorderColorCreateInfoEXT& lhs, const VkSamplerCustomBorderColorCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkStencilOpState& lhs, const VkStencilOpState& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkStencilOpState& lhs, const VkStencilOpState& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator<(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


bool operator<(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS


bool operator<(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_VI_NN
bool operator<(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_VI_NN

bool operator<(const VkViewport& lhs, const VkViewport& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkViewport& lhs, const VkViewport& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool operator<(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS


bool operator<(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

bool operator<(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_XCB_KHR
bool operator<(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
bool operator<(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) < dst::vk::detail::to_tuple(rhs);
}

bool operator<=(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs)
{
    return dst::vk::detail::to_tuple(lhs) <= dst::vk::detail::to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_XLIB_KHR
