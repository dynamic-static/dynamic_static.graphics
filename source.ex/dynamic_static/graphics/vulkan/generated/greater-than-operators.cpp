
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/greater-than-operators.hpp"
#include "dynamic_static/graphics/vulkan/generated/less-than-operators.hpp"

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator>(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferCopy& lhs, const VkBufferCopy& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferCopy& lhs, const VkBufferCopy& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkClearAttachment& lhs, const VkClearAttachment& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkClearAttachment& lhs, const VkClearAttachment& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkClearColorValue& lhs, const VkClearColorValue& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkClearColorValue& lhs, const VkClearColorValue& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkClearRect& lhs, const VkClearRect& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkClearRect& lhs, const VkClearRect& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkClearValue& lhs, const VkClearValue& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkClearValue& lhs, const VkClearValue& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkComponentMapping& lhs, const VkComponentMapping& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkComponentMapping& lhs, const VkComponentMapping& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExtent2D& lhs, const VkExtent2D& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExtent2D& lhs, const VkExtent2D& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExtent3D& lhs, const VkExtent3D& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExtent3D& lhs, const VkExtent3D& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator>(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFormatProperties& lhs, const VkFormatProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFormatProperties& lhs, const VkFormatProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGeometryNV& lhs, const VkGeometryNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGeometryNV& lhs, const VkGeometryNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_IOS_MVK
bool operator>(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_IOS_MVK
bool operator>=(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_IOS_MVK

bool operator>(const VkImageBlit& lhs, const VkImageBlit& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageBlit& lhs, const VkImageBlit& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageCopy& lhs, const VkImageCopy& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageCopy& lhs, const VkImageCopy& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_FUCHSIA
bool operator>(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_FUCHSIA
bool operator>=(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_FUCHSIA

bool operator>(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageResolve& lhs, const VkImageResolve& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageResolve& lhs, const VkImageResolve& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageSubresource& lhs, const VkImageSubresource& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageSubresource& lhs, const VkImageSubresource& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator>(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkLayerProperties& lhs, const VkLayerProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkLayerProperties& lhs, const VkLayerProperties& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
bool operator>(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK
bool operator>=(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_MACOS_MVK

bool operator>(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator>(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkMemoryType& lhs, const VkMemoryType& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMemoryType& lhs, const VkMemoryType& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
bool operator>(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_METAL_EXT
bool operator>=(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_METAL_EXT

bool operator>(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator>(const VkOffset2D& lhs, const VkOffset2D& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkOffset2D& lhs, const VkOffset2D& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkOffset3D& lhs, const VkOffset3D& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkOffset3D& lhs, const VkOffset3D& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator>(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator>(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_GGP
bool operator>=(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_GGP

bool operator>(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRect2D& lhs, const VkRect2D& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRect2D& lhs, const VkRect2D& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkStencilOpState& lhs, const VkStencilOpState& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkStencilOpState& lhs, const VkStencilOpState& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator>(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_GGP
bool operator>=(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator>=(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator>(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_VI_NN
bool operator>(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_VI_NN
bool operator>=(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_VI_NN

bool operator>(const VkViewport& lhs, const VkViewport& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkViewport& lhs, const VkViewport& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool operator>(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool operator>=(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator>=(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator>(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator>=(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator>(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs)
{
    return !(lhs < rhs);
}

bool operator>(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs)
{
    return rhs < lhs;
}

bool operator>=(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs)
{
    return !(lhs < rhs);
}

#ifdef VK_USE_PLATFORM_XCB_KHR
bool operator>(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
bool operator>=(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
bool operator>(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs)
{
    return rhs < lhs;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
bool operator>=(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs)
{
    return !(lhs < rhs);
}
#endif // VK_USE_PLATFORM_XLIB_KHR
