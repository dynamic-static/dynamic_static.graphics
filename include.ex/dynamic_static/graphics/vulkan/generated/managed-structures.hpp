
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/managed.hpp"
#include "dynamic_static/graphics/vulkan/detail/managed-structure.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace gfx {
namespace vk {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAabbPositionsKHR>
    : public detail::ManagedStructure<VkAabbPositionsKHR>
{
public:
    using detail::ManagedStructure<VkAabbPositionsKHR>::ManagedStructure<VkAabbPositionsKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAabbPositionsNV>
    : public detail::ManagedStructure<VkAabbPositionsNV>
{
public:
    using detail::ManagedStructure<VkAabbPositionsNV>::ManagedStructure<VkAabbPositionsNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureBuildGeometryInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureBuildGeometryInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureBuildGeometryInfoKHR>::ManagedStructure<VkAccelerationStructureBuildGeometryInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureBuildOffsetInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureBuildOffsetInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureBuildOffsetInfoKHR>::ManagedStructure<VkAccelerationStructureBuildOffsetInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureCreateGeometryTypeInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureCreateGeometryTypeInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureCreateGeometryTypeInfoKHR>::ManagedStructure<VkAccelerationStructureCreateGeometryTypeInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureCreateInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureCreateInfoKHR>::ManagedStructure<VkAccelerationStructureCreateInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureCreateInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureCreateInfoNV>::ManagedStructure<VkAccelerationStructureCreateInfoNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureDeviceAddressInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureDeviceAddressInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureDeviceAddressInfoKHR>::ManagedStructure<VkAccelerationStructureDeviceAddressInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryAabbsDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryAabbsDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryAabbsDataKHR>::ManagedStructure<VkAccelerationStructureGeometryAabbsDataKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryDataKHR>::ManagedStructure<VkAccelerationStructureGeometryDataKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryInstancesDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryInstancesDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryInstancesDataKHR>::ManagedStructure<VkAccelerationStructureGeometryInstancesDataKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryKHR>::ManagedStructure<VkAccelerationStructureGeometryKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryTrianglesDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryTrianglesDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryTrianglesDataKHR>::ManagedStructure<VkAccelerationStructureGeometryTrianglesDataKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInfoNV>::ManagedStructure<VkAccelerationStructureInfoNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureInstanceKHR>
    : public detail::ManagedStructure<VkAccelerationStructureInstanceKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInstanceKHR>::ManagedStructure<VkAccelerationStructureInstanceKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureInstanceNV>
    : public detail::ManagedStructure<VkAccelerationStructureInstanceNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInstanceNV>::ManagedStructure<VkAccelerationStructureInstanceNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureVersionKHR>
    : public detail::ManagedStructure<VkAccelerationStructureVersionKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureVersionKHR>::ManagedStructure<VkAccelerationStructureVersionKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAcquireNextImageInfoKHR>
    : public detail::ManagedStructure<VkAcquireNextImageInfoKHR>
{
public:
    using detail::ManagedStructure<VkAcquireNextImageInfoKHR>::ManagedStructure<VkAcquireNextImageInfoKHR>;
};

template <>
class Managed<VkAcquireProfilingLockInfoKHR>
    : public detail::ManagedStructure<VkAcquireProfilingLockInfoKHR>
{
public:
    using detail::ManagedStructure<VkAcquireProfilingLockInfoKHR>::ManagedStructure<VkAcquireProfilingLockInfoKHR>;
};

template <>
class Managed<VkAllocationCallbacks>
    : public detail::ManagedStructure<VkAllocationCallbacks>
{
public:
    using detail::ManagedStructure<VkAllocationCallbacks>::ManagedStructure<VkAllocationCallbacks>;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferFormatPropertiesANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferFormatPropertiesANDROID>
{
public:
    using detail::ManagedStructure<VkAndroidHardwareBufferFormatPropertiesANDROID>::ManagedStructure<VkAndroidHardwareBufferFormatPropertiesANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferPropertiesANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferPropertiesANDROID>
{
public:
    using detail::ManagedStructure<VkAndroidHardwareBufferPropertiesANDROID>::ManagedStructure<VkAndroidHardwareBufferPropertiesANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferUsageANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferUsageANDROID>
{
public:
    using detail::ManagedStructure<VkAndroidHardwareBufferUsageANDROID>::ManagedStructure<VkAndroidHardwareBufferUsageANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkAndroidSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkAndroidSurfaceCreateInfoKHR>::ManagedStructure<VkAndroidSurfaceCreateInfoKHR>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkApplicationInfo>
    : public detail::ManagedStructure<VkApplicationInfo>
{
public:
    using detail::ManagedStructure<VkApplicationInfo>::ManagedStructure<VkApplicationInfo>;
};

template <>
class Managed<VkAttachmentDescription>
    : public detail::ManagedStructure<VkAttachmentDescription>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription>::ManagedStructure<VkAttachmentDescription>;
};

template <>
class Managed<VkAttachmentDescription2>
    : public detail::ManagedStructure<VkAttachmentDescription2>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription2>::ManagedStructure<VkAttachmentDescription2>;
};

template <>
class Managed<VkAttachmentDescription2KHR>
    : public detail::ManagedStructure<VkAttachmentDescription2KHR>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription2KHR>::ManagedStructure<VkAttachmentDescription2KHR>;
};

template <>
class Managed<VkAttachmentDescriptionStencilLayout>
    : public detail::ManagedStructure<VkAttachmentDescriptionStencilLayout>
{
public:
    using detail::ManagedStructure<VkAttachmentDescriptionStencilLayout>::ManagedStructure<VkAttachmentDescriptionStencilLayout>;
};

template <>
class Managed<VkAttachmentDescriptionStencilLayoutKHR>
    : public detail::ManagedStructure<VkAttachmentDescriptionStencilLayoutKHR>
{
public:
    using detail::ManagedStructure<VkAttachmentDescriptionStencilLayoutKHR>::ManagedStructure<VkAttachmentDescriptionStencilLayoutKHR>;
};

template <>
class Managed<VkAttachmentReference>
    : public detail::ManagedStructure<VkAttachmentReference>
{
public:
    using detail::ManagedStructure<VkAttachmentReference>::ManagedStructure<VkAttachmentReference>;
};

template <>
class Managed<VkAttachmentReference2>
    : public detail::ManagedStructure<VkAttachmentReference2>
{
public:
    using detail::ManagedStructure<VkAttachmentReference2>::ManagedStructure<VkAttachmentReference2>;
};

template <>
class Managed<VkAttachmentReference2KHR>
    : public detail::ManagedStructure<VkAttachmentReference2KHR>
{
public:
    using detail::ManagedStructure<VkAttachmentReference2KHR>::ManagedStructure<VkAttachmentReference2KHR>;
};

template <>
class Managed<VkAttachmentReferenceStencilLayout>
    : public detail::ManagedStructure<VkAttachmentReferenceStencilLayout>
{
public:
    using detail::ManagedStructure<VkAttachmentReferenceStencilLayout>::ManagedStructure<VkAttachmentReferenceStencilLayout>;
};

template <>
class Managed<VkAttachmentReferenceStencilLayoutKHR>
    : public detail::ManagedStructure<VkAttachmentReferenceStencilLayoutKHR>
{
public:
    using detail::ManagedStructure<VkAttachmentReferenceStencilLayoutKHR>::ManagedStructure<VkAttachmentReferenceStencilLayoutKHR>;
};

template <>
class Managed<VkAttachmentSampleLocationsEXT>
    : public detail::ManagedStructure<VkAttachmentSampleLocationsEXT>
{
public:
    using detail::ManagedStructure<VkAttachmentSampleLocationsEXT>::ManagedStructure<VkAttachmentSampleLocationsEXT>;
};

template <>
class Managed<VkBaseInStructure>
    : public detail::ManagedStructure<VkBaseInStructure>
{
public:
    using detail::ManagedStructure<VkBaseInStructure>::ManagedStructure<VkBaseInStructure>;
};

template <>
class Managed<VkBaseOutStructure>
    : public detail::ManagedStructure<VkBaseOutStructure>
{
public:
    using detail::ManagedStructure<VkBaseOutStructure>::ManagedStructure<VkBaseOutStructure>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkBindAccelerationStructureMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkBindAccelerationStructureMemoryInfoNV>
    : public detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoNV>
{
public:
    using detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoNV>::ManagedStructure<VkBindAccelerationStructureMemoryInfoNV>;
};

template <>
class Managed<VkBindBufferMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>;
};

template <>
class Managed<VkBindBufferMemoryDeviceGroupInfoKHR>
    : public detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfoKHR>::ManagedStructure<VkBindBufferMemoryDeviceGroupInfoKHR>;
};

template <>
class Managed<VkBindBufferMemoryInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryInfo>::ManagedStructure<VkBindBufferMemoryInfo>;
};

template <>
class Managed<VkBindBufferMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindBufferMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryInfoKHR>::ManagedStructure<VkBindBufferMemoryInfoKHR>;
};

template <>
class Managed<VkBindImageMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>;
};

template <>
class Managed<VkBindImageMemoryDeviceGroupInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfoKHR>::ManagedStructure<VkBindImageMemoryDeviceGroupInfoKHR>;
};

template <>
class Managed<VkBindImageMemoryInfo>
    : public detail::ManagedStructure<VkBindImageMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryInfo>::ManagedStructure<VkBindImageMemoryInfo>;
};

template <>
class Managed<VkBindImageMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryInfoKHR>::ManagedStructure<VkBindImageMemoryInfoKHR>;
};

template <>
class Managed<VkBindImageMemorySwapchainInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>;
};

template <>
class Managed<VkBindImagePlaneMemoryInfo>
    : public detail::ManagedStructure<VkBindImagePlaneMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindImagePlaneMemoryInfo>::ManagedStructure<VkBindImagePlaneMemoryInfo>;
};

template <>
class Managed<VkBindImagePlaneMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindImagePlaneMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImagePlaneMemoryInfoKHR>::ManagedStructure<VkBindImagePlaneMemoryInfoKHR>;
};

template <>
class Managed<VkBindIndexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindIndexBufferIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindIndexBufferIndirectCommandNV>::ManagedStructure<VkBindIndexBufferIndirectCommandNV>;
};

template <>
class Managed<VkBindShaderGroupIndirectCommandNV>
    : public detail::ManagedStructure<VkBindShaderGroupIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindShaderGroupIndirectCommandNV>::ManagedStructure<VkBindShaderGroupIndirectCommandNV>;
};

template <>
class Managed<VkBindSparseInfo>
    : public detail::ManagedStructure<VkBindSparseInfo>
{
public:
    using detail::ManagedStructure<VkBindSparseInfo>::ManagedStructure<VkBindSparseInfo>;
};

template <>
class Managed<VkBindVertexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindVertexBufferIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindVertexBufferIndirectCommandNV>::ManagedStructure<VkBindVertexBufferIndirectCommandNV>;
};

template <>
class Managed<VkBufferCopy>
    : public detail::ManagedStructure<VkBufferCopy>
{
public:
    using detail::ManagedStructure<VkBufferCopy>::ManagedStructure<VkBufferCopy>;
};

template <>
class Managed<VkBufferCreateInfo>
    : public detail::ManagedStructure<VkBufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferCreateInfo>::ManagedStructure<VkBufferCreateInfo>;
};

template <>
class Managed<VkBufferDeviceAddressCreateInfoEXT>
    : public detail::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>;
};

template <>
class Managed<VkBufferDeviceAddressInfo>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfo>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressInfo>::ManagedStructure<VkBufferDeviceAddressInfo>;
};

template <>
class Managed<VkBufferDeviceAddressInfoEXT>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfoEXT>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressInfoEXT>::ManagedStructure<VkBufferDeviceAddressInfoEXT>;
};

template <>
class Managed<VkBufferDeviceAddressInfoKHR>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfoKHR>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressInfoKHR>::ManagedStructure<VkBufferDeviceAddressInfoKHR>;
};

template <>
class Managed<VkBufferImageCopy>
    : public detail::ManagedStructure<VkBufferImageCopy>
{
public:
    using detail::ManagedStructure<VkBufferImageCopy>::ManagedStructure<VkBufferImageCopy>;
};

template <>
class Managed<VkBufferMemoryBarrier>
    : public detail::ManagedStructure<VkBufferMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkBufferMemoryBarrier>::ManagedStructure<VkBufferMemoryBarrier>;
};

template <>
class Managed<VkBufferMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkBufferMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkBufferMemoryRequirementsInfo2>::ManagedStructure<VkBufferMemoryRequirementsInfo2>;
};

template <>
class Managed<VkBufferMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkBufferMemoryRequirementsInfo2KHR>
{
public:
    using detail::ManagedStructure<VkBufferMemoryRequirementsInfo2KHR>::ManagedStructure<VkBufferMemoryRequirementsInfo2KHR>;
};

template <>
class Managed<VkBufferOpaqueCaptureAddressCreateInfo>
    : public detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>;
};

template <>
class Managed<VkBufferOpaqueCaptureAddressCreateInfoKHR>
    : public detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfoKHR>::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfoKHR>;
};

template <>
class Managed<VkBufferViewCreateInfo>
    : public detail::ManagedStructure<VkBufferViewCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferViewCreateInfo>::ManagedStructure<VkBufferViewCreateInfo>;
};

template <>
class Managed<VkCalibratedTimestampInfoEXT>
    : public detail::ManagedStructure<VkCalibratedTimestampInfoEXT>
{
public:
    using detail::ManagedStructure<VkCalibratedTimestampInfoEXT>::ManagedStructure<VkCalibratedTimestampInfoEXT>;
};

template <>
class Managed<VkCheckpointDataNV>
    : public detail::ManagedStructure<VkCheckpointDataNV>
{
public:
    using detail::ManagedStructure<VkCheckpointDataNV>::ManagedStructure<VkCheckpointDataNV>;
};

template <>
class Managed<VkClearAttachment>
    : public detail::ManagedStructure<VkClearAttachment>
{
public:
    using detail::ManagedStructure<VkClearAttachment>::ManagedStructure<VkClearAttachment>;
};

template <>
class Managed<VkClearColorValue>
    : public detail::ManagedStructure<VkClearColorValue>
{
public:
    using detail::ManagedStructure<VkClearColorValue>::ManagedStructure<VkClearColorValue>;
};

template <>
class Managed<VkClearDepthStencilValue>
    : public detail::ManagedStructure<VkClearDepthStencilValue>
{
public:
    using detail::ManagedStructure<VkClearDepthStencilValue>::ManagedStructure<VkClearDepthStencilValue>;
};

template <>
class Managed<VkClearRect>
    : public detail::ManagedStructure<VkClearRect>
{
public:
    using detail::ManagedStructure<VkClearRect>::ManagedStructure<VkClearRect>;
};

template <>
class Managed<VkClearValue>
    : public detail::ManagedStructure<VkClearValue>
{
public:
    using detail::ManagedStructure<VkClearValue>::ManagedStructure<VkClearValue>;
};

template <>
class Managed<VkCoarseSampleLocationNV>
    : public detail::ManagedStructure<VkCoarseSampleLocationNV>
{
public:
    using detail::ManagedStructure<VkCoarseSampleLocationNV>::ManagedStructure<VkCoarseSampleLocationNV>;
};

template <>
class Managed<VkCoarseSampleOrderCustomNV>
    : public detail::ManagedStructure<VkCoarseSampleOrderCustomNV>
{
public:
    using detail::ManagedStructure<VkCoarseSampleOrderCustomNV>::ManagedStructure<VkCoarseSampleOrderCustomNV>;
};

template <>
class Managed<VkCommandBufferAllocateInfo>
    : public detail::ManagedStructure<VkCommandBufferAllocateInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferAllocateInfo>::ManagedStructure<VkCommandBufferAllocateInfo>;
};

template <>
class Managed<VkCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkCommandBufferBeginInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferBeginInfo>::ManagedStructure<VkCommandBufferBeginInfo>;
};

template <>
class Managed<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
    : public detail::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>;
};

template <>
class Managed<VkCommandBufferInheritanceInfo>
    : public detail::ManagedStructure<VkCommandBufferInheritanceInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceInfo>::ManagedStructure<VkCommandBufferInheritanceInfo>;
};

template <>
class Managed<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
    : public detail::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>;
};

template <>
class Managed<VkCommandPoolCreateInfo>
    : public detail::ManagedStructure<VkCommandPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkCommandPoolCreateInfo>::ManagedStructure<VkCommandPoolCreateInfo>;
};

template <>
class Managed<VkComponentMapping>
    : public detail::ManagedStructure<VkComponentMapping>
{
public:
    using detail::ManagedStructure<VkComponentMapping>::ManagedStructure<VkComponentMapping>;
};

template <>
class Managed<VkComputePipelineCreateInfo>
    : public detail::ManagedStructure<VkComputePipelineCreateInfo>
{
public:
    using detail::ManagedStructure<VkComputePipelineCreateInfo>::ManagedStructure<VkComputePipelineCreateInfo>;
};

template <>
class Managed<VkConditionalRenderingBeginInfoEXT>
    : public detail::ManagedStructure<VkConditionalRenderingBeginInfoEXT>
{
public:
    using detail::ManagedStructure<VkConditionalRenderingBeginInfoEXT>::ManagedStructure<VkConditionalRenderingBeginInfoEXT>;
};

template <>
class Managed<VkConformanceVersion>
    : public detail::ManagedStructure<VkConformanceVersion>
{
public:
    using detail::ManagedStructure<VkConformanceVersion>::ManagedStructure<VkConformanceVersion>;
};

template <>
class Managed<VkConformanceVersionKHR>
    : public detail::ManagedStructure<VkConformanceVersionKHR>
{
public:
    using detail::ManagedStructure<VkConformanceVersionKHR>::ManagedStructure<VkConformanceVersionKHR>;
};

template <>
class Managed<VkCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkCooperativeMatrixPropertiesNV>
{
public:
    using detail::ManagedStructure<VkCooperativeMatrixPropertiesNV>::ManagedStructure<VkCooperativeMatrixPropertiesNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyAccelerationStructureInfoKHR>
    : public detail::ManagedStructure<VkCopyAccelerationStructureInfoKHR>
{
public:
    using detail::ManagedStructure<VkCopyAccelerationStructureInfoKHR>::ManagedStructure<VkCopyAccelerationStructureInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyAccelerationStructureToMemoryInfoKHR>
    : public detail::ManagedStructure<VkCopyAccelerationStructureToMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkCopyAccelerationStructureToMemoryInfoKHR>::ManagedStructure<VkCopyAccelerationStructureToMemoryInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkCopyDescriptorSet>
    : public detail::ManagedStructure<VkCopyDescriptorSet>
{
public:
    using detail::ManagedStructure<VkCopyDescriptorSet>::ManagedStructure<VkCopyDescriptorSet>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyMemoryToAccelerationStructureInfoKHR>
    : public detail::ManagedStructure<VkCopyMemoryToAccelerationStructureInfoKHR>
{
public:
    using detail::ManagedStructure<VkCopyMemoryToAccelerationStructureInfoKHR>::ManagedStructure<VkCopyMemoryToAccelerationStructureInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkD3D12FenceSubmitInfoKHR>
    : public detail::ManagedStructure<VkD3D12FenceSubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkD3D12FenceSubmitInfoKHR>::ManagedStructure<VkD3D12FenceSubmitInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkDebugMarkerMarkerInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerMarkerInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerMarkerInfoEXT>::ManagedStructure<VkDebugMarkerMarkerInfoEXT>;
};

template <>
class Managed<VkDebugMarkerObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>;
};

template <>
class Managed<VkDebugMarkerObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>;
};

template <>
class Managed<VkDebugReportCallbackCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>;
};

template <>
class Managed<VkDebugUtilsLabelEXT>
    : public detail::ManagedStructure<VkDebugUtilsLabelEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsLabelEXT>::ManagedStructure<VkDebugUtilsLabelEXT>;
};

template <>
class Managed<VkDebugUtilsMessengerCallbackDataEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>;
};

template <>
class Managed<VkDebugUtilsMessengerCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>;
};

template <>
class Managed<VkDebugUtilsObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>;
};

template <>
class Managed<VkDebugUtilsObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>;
};

template <>
class Managed<VkDedicatedAllocationBufferCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>;
};

template <>
class Managed<VkDedicatedAllocationImageCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>;
};

template <>
class Managed<VkDedicatedAllocationMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeferredOperationInfoKHR>
    : public detail::ManagedStructure<VkDeferredOperationInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeferredOperationInfoKHR>::ManagedStructure<VkDeferredOperationInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkDescriptorBufferInfo>
    : public detail::ManagedStructure<VkDescriptorBufferInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorBufferInfo>::ManagedStructure<VkDescriptorBufferInfo>;
};

template <>
class Managed<VkDescriptorImageInfo>
    : public detail::ManagedStructure<VkDescriptorImageInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorImageInfo>::ManagedStructure<VkDescriptorImageInfo>;
};

template <>
class Managed<VkDescriptorPoolCreateInfo>
    : public detail::ManagedStructure<VkDescriptorPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolCreateInfo>::ManagedStructure<VkDescriptorPoolCreateInfo>;
};

template <>
class Managed<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>;
};

template <>
class Managed<VkDescriptorPoolSize>
    : public detail::ManagedStructure<VkDescriptorPoolSize>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolSize>::ManagedStructure<VkDescriptorPoolSize>;
};

template <>
class Managed<VkDescriptorSetAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetAllocateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetAllocateInfo>::ManagedStructure<VkDescriptorSetAllocateInfo>;
};

template <>
class Managed<VkDescriptorSetLayoutBinding>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBinding>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBinding>::ManagedStructure<VkDescriptorSetLayoutBinding>;
};

template <>
class Managed<VkDescriptorSetLayoutBindingFlagsCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>;
};

template <>
class Managed<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>;
};

template <>
class Managed<VkDescriptorSetLayoutCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutCreateInfo>::ManagedStructure<VkDescriptorSetLayoutCreateInfo>;
};

template <>
class Managed<VkDescriptorSetLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetLayoutSupport>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutSupport>::ManagedStructure<VkDescriptorSetLayoutSupport>;
};

template <>
class Managed<VkDescriptorSetLayoutSupportKHR>
    : public detail::ManagedStructure<VkDescriptorSetLayoutSupportKHR>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutSupportKHR>::ManagedStructure<VkDescriptorSetLayoutSupportKHR>;
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>;
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>;
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>;
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>;
};

template <>
class Managed<VkDescriptorUpdateTemplateCreateInfo>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>;
};

template <>
class Managed<VkDescriptorUpdateTemplateCreateInfoKHR>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfoKHR>::ManagedStructure<VkDescriptorUpdateTemplateCreateInfoKHR>;
};

template <>
class Managed<VkDescriptorUpdateTemplateEntry>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateEntry>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateEntry>::ManagedStructure<VkDescriptorUpdateTemplateEntry>;
};

template <>
class Managed<VkDescriptorUpdateTemplateEntryKHR>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateEntryKHR>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateEntryKHR>::ManagedStructure<VkDescriptorUpdateTemplateEntryKHR>;
};

template <>
class Managed<VkDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceCreateInfo>::ManagedStructure<VkDeviceCreateInfo>;
};

template <>
class Managed<VkDeviceDiagnosticsConfigCreateInfoNV>
    : public detail::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>;
};

template <>
class Managed<VkDeviceEventInfoEXT>
    : public detail::ManagedStructure<VkDeviceEventInfoEXT>
{
public:
    using detail::ManagedStructure<VkDeviceEventInfoEXT>::ManagedStructure<VkDeviceEventInfoEXT>;
};

template <>
class Managed<VkDeviceGroupBindSparseInfo>
    : public detail::ManagedStructure<VkDeviceGroupBindSparseInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupBindSparseInfo>::ManagedStructure<VkDeviceGroupBindSparseInfo>;
};

template <>
class Managed<VkDeviceGroupBindSparseInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupBindSparseInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupBindSparseInfoKHR>::ManagedStructure<VkDeviceGroupBindSparseInfoKHR>;
};

template <>
class Managed<VkDeviceGroupCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>;
};

template <>
class Managed<VkDeviceGroupCommandBufferBeginInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfoKHR>::ManagedStructure<VkDeviceGroupCommandBufferBeginInfoKHR>;
};

template <>
class Managed<VkDeviceGroupDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceGroupDeviceCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupDeviceCreateInfo>::ManagedStructure<VkDeviceGroupDeviceCreateInfo>;
};

template <>
class Managed<VkDeviceGroupDeviceCreateInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupDeviceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupDeviceCreateInfoKHR>::ManagedStructure<VkDeviceGroupDeviceCreateInfoKHR>;
};

template <>
class Managed<VkDeviceGroupPresentCapabilitiesKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>;
};

template <>
class Managed<VkDeviceGroupPresentInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupPresentInfoKHR>::ManagedStructure<VkDeviceGroupPresentInfoKHR>;
};

template <>
class Managed<VkDeviceGroupRenderPassBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>;
};

template <>
class Managed<VkDeviceGroupRenderPassBeginInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfoKHR>::ManagedStructure<VkDeviceGroupRenderPassBeginInfoKHR>;
};

template <>
class Managed<VkDeviceGroupSubmitInfo>
    : public detail::ManagedStructure<VkDeviceGroupSubmitInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSubmitInfo>::ManagedStructure<VkDeviceGroupSubmitInfo>;
};

template <>
class Managed<VkDeviceGroupSubmitInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupSubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSubmitInfoKHR>::ManagedStructure<VkDeviceGroupSubmitInfoKHR>;
};

template <>
class Managed<VkDeviceGroupSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>;
};

template <>
class Managed<VkDeviceMemoryOpaqueCaptureAddressInfo>
    : public detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>;
};

template <>
class Managed<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>
    : public detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>;
};

template <>
class Managed<VkDeviceMemoryOverallocationCreateInfoAMD>
    : public detail::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeviceOrHostAddressConstKHR>
    : public detail::ManagedStructure<VkDeviceOrHostAddressConstKHR>
{
public:
    using detail::ManagedStructure<VkDeviceOrHostAddressConstKHR>::ManagedStructure<VkDeviceOrHostAddressConstKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeviceOrHostAddressKHR>
    : public detail::ManagedStructure<VkDeviceOrHostAddressKHR>
{
public:
    using detail::ManagedStructure<VkDeviceOrHostAddressKHR>::ManagedStructure<VkDeviceOrHostAddressKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkDeviceQueueCreateInfo>
    : public detail::ManagedStructure<VkDeviceQueueCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceQueueCreateInfo>::ManagedStructure<VkDeviceQueueCreateInfo>;
};

template <>
class Managed<VkDeviceQueueGlobalPriorityCreateInfoEXT>
    : public detail::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>;
};

template <>
class Managed<VkDeviceQueueInfo2>
    : public detail::ManagedStructure<VkDeviceQueueInfo2>
{
public:
    using detail::ManagedStructure<VkDeviceQueueInfo2>::ManagedStructure<VkDeviceQueueInfo2>;
};

template <>
class Managed<VkDispatchIndirectCommand>
    : public detail::ManagedStructure<VkDispatchIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDispatchIndirectCommand>::ManagedStructure<VkDispatchIndirectCommand>;
};

template <>
class Managed<VkDisplayEventInfoEXT>
    : public detail::ManagedStructure<VkDisplayEventInfoEXT>
{
public:
    using detail::ManagedStructure<VkDisplayEventInfoEXT>::ManagedStructure<VkDisplayEventInfoEXT>;
};

template <>
class Managed<VkDisplayModeCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplayModeCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeCreateInfoKHR>::ManagedStructure<VkDisplayModeCreateInfoKHR>;
};

template <>
class Managed<VkDisplayModeParametersKHR>
    : public detail::ManagedStructure<VkDisplayModeParametersKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeParametersKHR>::ManagedStructure<VkDisplayModeParametersKHR>;
};

template <>
class Managed<VkDisplayModeProperties2KHR>
    : public detail::ManagedStructure<VkDisplayModeProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeProperties2KHR>::ManagedStructure<VkDisplayModeProperties2KHR>;
};

template <>
class Managed<VkDisplayModePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayModePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModePropertiesKHR>::ManagedStructure<VkDisplayModePropertiesKHR>;
};

template <>
class Managed<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
    : public detail::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
{
public:
    using detail::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>;
};

template <>
class Managed<VkDisplayPlaneCapabilities2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilities2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneCapabilities2KHR>::ManagedStructure<VkDisplayPlaneCapabilities2KHR>;
};

template <>
class Managed<VkDisplayPlaneCapabilitiesKHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>;
};

template <>
class Managed<VkDisplayPlaneInfo2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneInfo2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneInfo2KHR>::ManagedStructure<VkDisplayPlaneInfo2KHR>;
};

template <>
class Managed<VkDisplayPlaneProperties2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneProperties2KHR>::ManagedStructure<VkDisplayPlaneProperties2KHR>;
};

template <>
class Managed<VkDisplayPlanePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPlanePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlanePropertiesKHR>::ManagedStructure<VkDisplayPlanePropertiesKHR>;
};

template <>
class Managed<VkDisplayPowerInfoEXT>
    : public detail::ManagedStructure<VkDisplayPowerInfoEXT>
{
public:
    using detail::ManagedStructure<VkDisplayPowerInfoEXT>::ManagedStructure<VkDisplayPowerInfoEXT>;
};

template <>
class Managed<VkDisplayPresentInfoKHR>
    : public detail::ManagedStructure<VkDisplayPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPresentInfoKHR>::ManagedStructure<VkDisplayPresentInfoKHR>;
};

template <>
class Managed<VkDisplayProperties2KHR>
    : public detail::ManagedStructure<VkDisplayProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayProperties2KHR>::ManagedStructure<VkDisplayProperties2KHR>;
};

template <>
class Managed<VkDisplayPropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPropertiesKHR>::ManagedStructure<VkDisplayPropertiesKHR>;
};

template <>
class Managed<VkDisplaySurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>;
};

template <>
class Managed<VkDrawIndexedIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndexedIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDrawIndexedIndirectCommand>::ManagedStructure<VkDrawIndexedIndirectCommand>;
};

template <>
class Managed<VkDrawIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDrawIndirectCommand>::ManagedStructure<VkDrawIndirectCommand>;
};

template <>
class Managed<VkDrawMeshTasksIndirectCommandNV>
    : public detail::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>;
};

template <>
class Managed<VkDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkDrmFormatModifierPropertiesEXT>::ManagedStructure<VkDrmFormatModifierPropertiesEXT>;
};

template <>
class Managed<VkDrmFormatModifierPropertiesListEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>
{
public:
    using detail::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>;
};

template <>
class Managed<VkEventCreateInfo>
    : public detail::ManagedStructure<VkEventCreateInfo>
{
public:
    using detail::ManagedStructure<VkEventCreateInfo>::ManagedStructure<VkEventCreateInfo>;
};

template <>
class Managed<VkExportFenceCreateInfo>
    : public detail::ManagedStructure<VkExportFenceCreateInfo>
{
public:
    using detail::ManagedStructure<VkExportFenceCreateInfo>::ManagedStructure<VkExportFenceCreateInfo>;
};

template <>
class Managed<VkExportFenceCreateInfoKHR>
    : public detail::ManagedStructure<VkExportFenceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportFenceCreateInfoKHR>::ManagedStructure<VkExportFenceCreateInfoKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportFenceWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportFenceWin32HandleInfoKHR>::ManagedStructure<VkExportFenceWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExportMemoryAllocateInfo>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfo>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfo>::ManagedStructure<VkExportMemoryAllocateInfo>;
};

template <>
class Managed<VkExportMemoryAllocateInfoKHR>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfoKHR>::ManagedStructure<VkExportMemoryAllocateInfoKHR>;
};

template <>
class Managed<VkExportMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfoNV>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfoNV>::ManagedStructure<VkExportMemoryAllocateInfoNV>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportMemoryWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportMemoryWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportMemoryWin32HandleInfoKHR>::ManagedStructure<VkExportMemoryWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportMemoryWin32HandleInfoNV>
    : public detail::ManagedStructure<VkExportMemoryWin32HandleInfoNV>
{
public:
    using detail::ManagedStructure<VkExportMemoryWin32HandleInfoNV>::ManagedStructure<VkExportMemoryWin32HandleInfoNV>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExportSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkExportSemaphoreCreateInfo>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreCreateInfo>::ManagedStructure<VkExportSemaphoreCreateInfo>;
};

template <>
class Managed<VkExportSemaphoreCreateInfoKHR>
    : public detail::ManagedStructure<VkExportSemaphoreCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreCreateInfoKHR>::ManagedStructure<VkExportSemaphoreCreateInfoKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExtensionProperties>
    : public detail::ManagedStructure<VkExtensionProperties>
{
public:
    using detail::ManagedStructure<VkExtensionProperties>::ManagedStructure<VkExtensionProperties>;
};

template <>
class Managed<VkExtent2D>
    : public detail::ManagedStructure<VkExtent2D>
{
public:
    using detail::ManagedStructure<VkExtent2D>::ManagedStructure<VkExtent2D>;
};

template <>
class Managed<VkExtent3D>
    : public detail::ManagedStructure<VkExtent3D>
{
public:
    using detail::ManagedStructure<VkExtent3D>::ManagedStructure<VkExtent3D>;
};

template <>
class Managed<VkExternalBufferProperties>
    : public detail::ManagedStructure<VkExternalBufferProperties>
{
public:
    using detail::ManagedStructure<VkExternalBufferProperties>::ManagedStructure<VkExternalBufferProperties>;
};

template <>
class Managed<VkExternalBufferPropertiesKHR>
    : public detail::ManagedStructure<VkExternalBufferPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalBufferPropertiesKHR>::ManagedStructure<VkExternalBufferPropertiesKHR>;
};

template <>
class Managed<VkExternalFenceProperties>
    : public detail::ManagedStructure<VkExternalFenceProperties>
{
public:
    using detail::ManagedStructure<VkExternalFenceProperties>::ManagedStructure<VkExternalFenceProperties>;
};

template <>
class Managed<VkExternalFencePropertiesKHR>
    : public detail::ManagedStructure<VkExternalFencePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalFencePropertiesKHR>::ManagedStructure<VkExternalFencePropertiesKHR>;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkExternalFormatANDROID>
    : public detail::ManagedStructure<VkExternalFormatANDROID>
{
public:
    using detail::ManagedStructure<VkExternalFormatANDROID>::ManagedStructure<VkExternalFormatANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkExternalImageFormatProperties>
    : public detail::ManagedStructure<VkExternalImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatProperties>::ManagedStructure<VkExternalImageFormatProperties>;
};

template <>
class Managed<VkExternalImageFormatPropertiesKHR>
    : public detail::ManagedStructure<VkExternalImageFormatPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatPropertiesKHR>::ManagedStructure<VkExternalImageFormatPropertiesKHR>;
};

template <>
class Managed<VkExternalImageFormatPropertiesNV>
    : public detail::ManagedStructure<VkExternalImageFormatPropertiesNV>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatPropertiesNV>::ManagedStructure<VkExternalImageFormatPropertiesNV>;
};

template <>
class Managed<VkExternalMemoryBufferCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryBufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkExternalMemoryBufferCreateInfo>::ManagedStructure<VkExternalMemoryBufferCreateInfo>;
};

template <>
class Managed<VkExternalMemoryBufferCreateInfoKHR>
    : public detail::ManagedStructure<VkExternalMemoryBufferCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExternalMemoryBufferCreateInfoKHR>::ManagedStructure<VkExternalMemoryBufferCreateInfoKHR>;
};

template <>
class Managed<VkExternalMemoryImageCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfo>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfo>::ManagedStructure<VkExternalMemoryImageCreateInfo>;
};

template <>
class Managed<VkExternalMemoryImageCreateInfoKHR>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfoKHR>::ManagedStructure<VkExternalMemoryImageCreateInfoKHR>;
};

template <>
class Managed<VkExternalMemoryImageCreateInfoNV>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfoNV>::ManagedStructure<VkExternalMemoryImageCreateInfoNV>;
};

template <>
class Managed<VkExternalMemoryProperties>
    : public detail::ManagedStructure<VkExternalMemoryProperties>
{
public:
    using detail::ManagedStructure<VkExternalMemoryProperties>::ManagedStructure<VkExternalMemoryProperties>;
};

template <>
class Managed<VkExternalMemoryPropertiesKHR>
    : public detail::ManagedStructure<VkExternalMemoryPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalMemoryPropertiesKHR>::ManagedStructure<VkExternalMemoryPropertiesKHR>;
};

template <>
class Managed<VkExternalSemaphoreProperties>
    : public detail::ManagedStructure<VkExternalSemaphoreProperties>
{
public:
    using detail::ManagedStructure<VkExternalSemaphoreProperties>::ManagedStructure<VkExternalSemaphoreProperties>;
};

template <>
class Managed<VkExternalSemaphorePropertiesKHR>
    : public detail::ManagedStructure<VkExternalSemaphorePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalSemaphorePropertiesKHR>::ManagedStructure<VkExternalSemaphorePropertiesKHR>;
};

template <>
class Managed<VkFenceCreateInfo>
    : public detail::ManagedStructure<VkFenceCreateInfo>
{
public:
    using detail::ManagedStructure<VkFenceCreateInfo>::ManagedStructure<VkFenceCreateInfo>;
};

template <>
class Managed<VkFenceGetFdInfoKHR>
    : public detail::ManagedStructure<VkFenceGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkFenceGetFdInfoKHR>::ManagedStructure<VkFenceGetFdInfoKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkFenceGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkFenceGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkFenceGetWin32HandleInfoKHR>::ManagedStructure<VkFenceGetWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkFilterCubicImageViewImageFormatPropertiesEXT>
    : public detail::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>;
};

template <>
class Managed<VkFormatProperties>
    : public detail::ManagedStructure<VkFormatProperties>
{
public:
    using detail::ManagedStructure<VkFormatProperties>::ManagedStructure<VkFormatProperties>;
};

template <>
class Managed<VkFormatProperties2>
    : public detail::ManagedStructure<VkFormatProperties2>
{
public:
    using detail::ManagedStructure<VkFormatProperties2>::ManagedStructure<VkFormatProperties2>;
};

template <>
class Managed<VkFormatProperties2KHR>
    : public detail::ManagedStructure<VkFormatProperties2KHR>
{
public:
    using detail::ManagedStructure<VkFormatProperties2KHR>::ManagedStructure<VkFormatProperties2KHR>;
};

template <>
class Managed<VkFramebufferAttachmentImageInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentImageInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentImageInfo>::ManagedStructure<VkFramebufferAttachmentImageInfo>;
};

template <>
class Managed<VkFramebufferAttachmentImageInfoKHR>
    : public detail::ManagedStructure<VkFramebufferAttachmentImageInfoKHR>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentImageInfoKHR>::ManagedStructure<VkFramebufferAttachmentImageInfoKHR>;
};

template <>
class Managed<VkFramebufferAttachmentsCreateInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentsCreateInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentsCreateInfo>::ManagedStructure<VkFramebufferAttachmentsCreateInfo>;
};

template <>
class Managed<VkFramebufferAttachmentsCreateInfoKHR>
    : public detail::ManagedStructure<VkFramebufferAttachmentsCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentsCreateInfoKHR>::ManagedStructure<VkFramebufferAttachmentsCreateInfoKHR>;
};

template <>
class Managed<VkFramebufferCreateInfo>
    : public detail::ManagedStructure<VkFramebufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferCreateInfo>::ManagedStructure<VkFramebufferCreateInfo>;
};

template <>
class Managed<VkFramebufferMixedSamplesCombinationNV>
    : public detail::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>
{
public:
    using detail::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>;
};

template <>
class Managed<VkGeneratedCommandsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsInfoNV>
{
public:
    using detail::ManagedStructure<VkGeneratedCommandsInfoNV>::ManagedStructure<VkGeneratedCommandsInfoNV>;
};

template <>
class Managed<VkGeneratedCommandsMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>
{
public:
    using detail::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>;
};

template <>
class Managed<VkGeometryAABBNV>
    : public detail::ManagedStructure<VkGeometryAABBNV>
{
public:
    using detail::ManagedStructure<VkGeometryAABBNV>::ManagedStructure<VkGeometryAABBNV>;
};

template <>
class Managed<VkGeometryDataNV>
    : public detail::ManagedStructure<VkGeometryDataNV>
{
public:
    using detail::ManagedStructure<VkGeometryDataNV>::ManagedStructure<VkGeometryDataNV>;
};

template <>
class Managed<VkGeometryNV>
    : public detail::ManagedStructure<VkGeometryNV>
{
public:
    using detail::ManagedStructure<VkGeometryNV>::ManagedStructure<VkGeometryNV>;
};

template <>
class Managed<VkGeometryTrianglesNV>
    : public detail::ManagedStructure<VkGeometryTrianglesNV>
{
public:
    using detail::ManagedStructure<VkGeometryTrianglesNV>::ManagedStructure<VkGeometryTrianglesNV>;
};

template <>
class Managed<VkGraphicsPipelineCreateInfo>
    : public detail::ManagedStructure<VkGraphicsPipelineCreateInfo>
{
public:
    using detail::ManagedStructure<VkGraphicsPipelineCreateInfo>::ManagedStructure<VkGraphicsPipelineCreateInfo>;
};

template <>
class Managed<VkGraphicsPipelineShaderGroupsCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>;
};

template <>
class Managed<VkGraphicsShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>;
};

template <>
class Managed<VkHdrMetadataEXT>
    : public detail::ManagedStructure<VkHdrMetadataEXT>
{
public:
    using detail::ManagedStructure<VkHdrMetadataEXT>::ManagedStructure<VkHdrMetadataEXT>;
};

template <>
class Managed<VkHeadlessSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>;
};

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
class Managed<VkIOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkIOSSurfaceCreateInfoMVK>
{
public:
    using detail::ManagedStructure<VkIOSSurfaceCreateInfoMVK>::ManagedStructure<VkIOSSurfaceCreateInfoMVK>;
};
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
class Managed<VkImageBlit>
    : public detail::ManagedStructure<VkImageBlit>
{
public:
    using detail::ManagedStructure<VkImageBlit>::ManagedStructure<VkImageBlit>;
};

template <>
class Managed<VkImageCopy>
    : public detail::ManagedStructure<VkImageCopy>
{
public:
    using detail::ManagedStructure<VkImageCopy>::ManagedStructure<VkImageCopy>;
};

template <>
class Managed<VkImageCreateInfo>
    : public detail::ManagedStructure<VkImageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageCreateInfo>::ManagedStructure<VkImageCreateInfo>;
};

template <>
class Managed<VkImageDrmFormatModifierExplicitCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>;
};

template <>
class Managed<VkImageDrmFormatModifierListCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>;
};

template <>
class Managed<VkImageDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>;
};

template <>
class Managed<VkImageFormatListCreateInfo>
    : public detail::ManagedStructure<VkImageFormatListCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageFormatListCreateInfo>::ManagedStructure<VkImageFormatListCreateInfo>;
};

template <>
class Managed<VkImageFormatListCreateInfoKHR>
    : public detail::ManagedStructure<VkImageFormatListCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkImageFormatListCreateInfoKHR>::ManagedStructure<VkImageFormatListCreateInfoKHR>;
};

template <>
class Managed<VkImageFormatProperties>
    : public detail::ManagedStructure<VkImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties>::ManagedStructure<VkImageFormatProperties>;
};

template <>
class Managed<VkImageFormatProperties2>
    : public detail::ManagedStructure<VkImageFormatProperties2>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties2>::ManagedStructure<VkImageFormatProperties2>;
};

template <>
class Managed<VkImageFormatProperties2KHR>
    : public detail::ManagedStructure<VkImageFormatProperties2KHR>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties2KHR>::ManagedStructure<VkImageFormatProperties2KHR>;
};

template <>
class Managed<VkImageMemoryBarrier>
    : public detail::ManagedStructure<VkImageMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkImageMemoryBarrier>::ManagedStructure<VkImageMemoryBarrier>;
};

template <>
class Managed<VkImageMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkImageMemoryRequirementsInfo2>::ManagedStructure<VkImageMemoryRequirementsInfo2>;
};

template <>
class Managed<VkImageMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkImageMemoryRequirementsInfo2KHR>
{
public:
    using detail::ManagedStructure<VkImageMemoryRequirementsInfo2KHR>::ManagedStructure<VkImageMemoryRequirementsInfo2KHR>;
};

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
class Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>
    : public detail::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>
{
public:
    using detail::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>;
};
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
class Managed<VkImagePlaneMemoryRequirementsInfo>
    : public detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>
{
public:
    using detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>;
};

template <>
class Managed<VkImagePlaneMemoryRequirementsInfoKHR>
    : public detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfoKHR>
{
public:
    using detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfoKHR>::ManagedStructure<VkImagePlaneMemoryRequirementsInfoKHR>;
};

template <>
class Managed<VkImageResolve>
    : public detail::ManagedStructure<VkImageResolve>
{
public:
    using detail::ManagedStructure<VkImageResolve>::ManagedStructure<VkImageResolve>;
};

template <>
class Managed<VkImageSparseMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>;
};

template <>
class Managed<VkImageSparseMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2KHR>
{
public:
    using detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2KHR>::ManagedStructure<VkImageSparseMemoryRequirementsInfo2KHR>;
};

template <>
class Managed<VkImageStencilUsageCreateInfo>
    : public detail::ManagedStructure<VkImageStencilUsageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageStencilUsageCreateInfo>::ManagedStructure<VkImageStencilUsageCreateInfo>;
};

template <>
class Managed<VkImageStencilUsageCreateInfoEXT>
    : public detail::ManagedStructure<VkImageStencilUsageCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageStencilUsageCreateInfoEXT>::ManagedStructure<VkImageStencilUsageCreateInfoEXT>;
};

template <>
class Managed<VkImageSubresource>
    : public detail::ManagedStructure<VkImageSubresource>
{
public:
    using detail::ManagedStructure<VkImageSubresource>::ManagedStructure<VkImageSubresource>;
};

template <>
class Managed<VkImageSubresourceLayers>
    : public detail::ManagedStructure<VkImageSubresourceLayers>
{
public:
    using detail::ManagedStructure<VkImageSubresourceLayers>::ManagedStructure<VkImageSubresourceLayers>;
};

template <>
class Managed<VkImageSubresourceRange>
    : public detail::ManagedStructure<VkImageSubresourceRange>
{
public:
    using detail::ManagedStructure<VkImageSubresourceRange>::ManagedStructure<VkImageSubresourceRange>;
};

template <>
class Managed<VkImageSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkImageSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkImageSwapchainCreateInfoKHR>::ManagedStructure<VkImageSwapchainCreateInfoKHR>;
};

template <>
class Managed<VkImageViewASTCDecodeModeEXT>
    : public detail::ManagedStructure<VkImageViewASTCDecodeModeEXT>
{
public:
    using detail::ManagedStructure<VkImageViewASTCDecodeModeEXT>::ManagedStructure<VkImageViewASTCDecodeModeEXT>;
};

template <>
class Managed<VkImageViewCreateInfo>
    : public detail::ManagedStructure<VkImageViewCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageViewCreateInfo>::ManagedStructure<VkImageViewCreateInfo>;
};

template <>
class Managed<VkImageViewHandleInfoNVX>
    : public detail::ManagedStructure<VkImageViewHandleInfoNVX>
{
public:
    using detail::ManagedStructure<VkImageViewHandleInfoNVX>::ManagedStructure<VkImageViewHandleInfoNVX>;
};

template <>
class Managed<VkImageViewUsageCreateInfo>
    : public detail::ManagedStructure<VkImageViewUsageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageViewUsageCreateInfo>::ManagedStructure<VkImageViewUsageCreateInfo>;
};

template <>
class Managed<VkImageViewUsageCreateInfoKHR>
    : public detail::ManagedStructure<VkImageViewUsageCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkImageViewUsageCreateInfoKHR>::ManagedStructure<VkImageViewUsageCreateInfoKHR>;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkImportAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>
{
public:
    using detail::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkImportFenceFdInfoKHR>
    : public detail::ManagedStructure<VkImportFenceFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportFenceFdInfoKHR>::ManagedStructure<VkImportFenceFdInfoKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportFenceWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportFenceWin32HandleInfoKHR>::ManagedStructure<VkImportFenceWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkImportMemoryFdInfoKHR>
    : public detail::ManagedStructure<VkImportMemoryFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportMemoryFdInfoKHR>::ManagedStructure<VkImportMemoryFdInfoKHR>;
};

template <>
class Managed<VkImportMemoryHostPointerInfoEXT>
    : public detail::ManagedStructure<VkImportMemoryHostPointerInfoEXT>
{
public:
    using detail::ManagedStructure<VkImportMemoryHostPointerInfoEXT>::ManagedStructure<VkImportMemoryHostPointerInfoEXT>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportMemoryWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportMemoryWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportMemoryWin32HandleInfoKHR>::ManagedStructure<VkImportMemoryWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportMemoryWin32HandleInfoNV>
    : public detail::ManagedStructure<VkImportMemoryWin32HandleInfoNV>
{
public:
    using detail::ManagedStructure<VkImportMemoryWin32HandleInfoNV>::ManagedStructure<VkImportMemoryWin32HandleInfoNV>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkImportSemaphoreFdInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportSemaphoreFdInfoKHR>::ManagedStructure<VkImportSemaphoreFdInfoKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkIndirectCommandsLayoutCreateInfoNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>;
};

template <>
class Managed<VkIndirectCommandsLayoutTokenNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutTokenNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsLayoutTokenNV>::ManagedStructure<VkIndirectCommandsLayoutTokenNV>;
};

template <>
class Managed<VkIndirectCommandsStreamNV>
    : public detail::ManagedStructure<VkIndirectCommandsStreamNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsStreamNV>::ManagedStructure<VkIndirectCommandsStreamNV>;
};

template <>
class Managed<VkInitializePerformanceApiInfoINTEL>
    : public detail::ManagedStructure<VkInitializePerformanceApiInfoINTEL>
{
public:
    using detail::ManagedStructure<VkInitializePerformanceApiInfoINTEL>::ManagedStructure<VkInitializePerformanceApiInfoINTEL>;
};

template <>
class Managed<VkInputAttachmentAspectReference>
    : public detail::ManagedStructure<VkInputAttachmentAspectReference>
{
public:
    using detail::ManagedStructure<VkInputAttachmentAspectReference>::ManagedStructure<VkInputAttachmentAspectReference>;
};

template <>
class Managed<VkInputAttachmentAspectReferenceKHR>
    : public detail::ManagedStructure<VkInputAttachmentAspectReferenceKHR>
{
public:
    using detail::ManagedStructure<VkInputAttachmentAspectReferenceKHR>::ManagedStructure<VkInputAttachmentAspectReferenceKHR>;
};

template <>
class Managed<VkInstanceCreateInfo>
    : public detail::ManagedStructure<VkInstanceCreateInfo>
{
public:
    using detail::ManagedStructure<VkInstanceCreateInfo>::ManagedStructure<VkInstanceCreateInfo>;
};

template <>
class Managed<VkLayerProperties>
    : public detail::ManagedStructure<VkLayerProperties>
{
public:
    using detail::ManagedStructure<VkLayerProperties>::ManagedStructure<VkLayerProperties>;
};

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
class Managed<VkMacOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>
{
public:
    using detail::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>;
};
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
class Managed<VkMappedMemoryRange>
    : public detail::ManagedStructure<VkMappedMemoryRange>
{
public:
    using detail::ManagedStructure<VkMappedMemoryRange>::ManagedStructure<VkMappedMemoryRange>;
};

template <>
class Managed<VkMemoryAllocateFlagsInfo>
    : public detail::ManagedStructure<VkMemoryAllocateFlagsInfo>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateFlagsInfo>::ManagedStructure<VkMemoryAllocateFlagsInfo>;
};

template <>
class Managed<VkMemoryAllocateFlagsInfoKHR>
    : public detail::ManagedStructure<VkMemoryAllocateFlagsInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateFlagsInfoKHR>::ManagedStructure<VkMemoryAllocateFlagsInfoKHR>;
};

template <>
class Managed<VkMemoryAllocateInfo>
    : public detail::ManagedStructure<VkMemoryAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateInfo>::ManagedStructure<VkMemoryAllocateInfo>;
};

template <>
class Managed<VkMemoryBarrier>
    : public detail::ManagedStructure<VkMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkMemoryBarrier>::ManagedStructure<VkMemoryBarrier>;
};

template <>
class Managed<VkMemoryDedicatedAllocateInfo>
    : public detail::ManagedStructure<VkMemoryDedicatedAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedAllocateInfo>::ManagedStructure<VkMemoryDedicatedAllocateInfo>;
};

template <>
class Managed<VkMemoryDedicatedAllocateInfoKHR>
    : public detail::ManagedStructure<VkMemoryDedicatedAllocateInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedAllocateInfoKHR>::ManagedStructure<VkMemoryDedicatedAllocateInfoKHR>;
};

template <>
class Managed<VkMemoryDedicatedRequirements>
    : public detail::ManagedStructure<VkMemoryDedicatedRequirements>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedRequirements>::ManagedStructure<VkMemoryDedicatedRequirements>;
};

template <>
class Managed<VkMemoryDedicatedRequirementsKHR>
    : public detail::ManagedStructure<VkMemoryDedicatedRequirementsKHR>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedRequirementsKHR>::ManagedStructure<VkMemoryDedicatedRequirementsKHR>;
};

template <>
class Managed<VkMemoryFdPropertiesKHR>
    : public detail::ManagedStructure<VkMemoryFdPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkMemoryFdPropertiesKHR>::ManagedStructure<VkMemoryFdPropertiesKHR>;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkMemoryGetAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>
{
public:
    using detail::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkMemoryGetFdInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryGetFdInfoKHR>::ManagedStructure<VkMemoryGetFdInfoKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkMemoryGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkMemoryHeap>
    : public detail::ManagedStructure<VkMemoryHeap>
{
public:
    using detail::ManagedStructure<VkMemoryHeap>::ManagedStructure<VkMemoryHeap>;
};

template <>
class Managed<VkMemoryHostPointerPropertiesEXT>
    : public detail::ManagedStructure<VkMemoryHostPointerPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkMemoryHostPointerPropertiesEXT>::ManagedStructure<VkMemoryHostPointerPropertiesEXT>;
};

template <>
class Managed<VkMemoryOpaqueCaptureAddressAllocateInfo>
    : public detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>;
};

template <>
class Managed<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>
    : public detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>;
};

template <>
class Managed<VkMemoryPriorityAllocateInfoEXT>
    : public detail::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>
{
public:
    using detail::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>;
};

template <>
class Managed<VkMemoryRequirements>
    : public detail::ManagedStructure<VkMemoryRequirements>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements>::ManagedStructure<VkMemoryRequirements>;
};

template <>
class Managed<VkMemoryRequirements2>
    : public detail::ManagedStructure<VkMemoryRequirements2>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements2>::ManagedStructure<VkMemoryRequirements2>;
};

template <>
class Managed<VkMemoryRequirements2KHR>
    : public detail::ManagedStructure<VkMemoryRequirements2KHR>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements2KHR>::ManagedStructure<VkMemoryRequirements2KHR>;
};

template <>
class Managed<VkMemoryType>
    : public detail::ManagedStructure<VkMemoryType>
{
public:
    using detail::ManagedStructure<VkMemoryType>::ManagedStructure<VkMemoryType>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkMemoryWin32HandlePropertiesKHR>
    : public detail::ManagedStructure<VkMemoryWin32HandlePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkMemoryWin32HandlePropertiesKHR>::ManagedStructure<VkMemoryWin32HandlePropertiesKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
class Managed<VkMetalSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkMetalSurfaceCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkMetalSurfaceCreateInfoEXT>::ManagedStructure<VkMetalSurfaceCreateInfoEXT>;
};
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
class Managed<VkMultisamplePropertiesEXT>
    : public detail::ManagedStructure<VkMultisamplePropertiesEXT>
{
public:
    using detail::ManagedStructure<VkMultisamplePropertiesEXT>::ManagedStructure<VkMultisamplePropertiesEXT>;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkNativeBufferANDROID>
    : public detail::ManagedStructure<VkNativeBufferANDROID>
{
public:
    using detail::ManagedStructure<VkNativeBufferANDROID>::ManagedStructure<VkNativeBufferANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkNativeBufferUsage2ANDROID>
    : public detail::ManagedStructure<VkNativeBufferUsage2ANDROID>
{
public:
    using detail::ManagedStructure<VkNativeBufferUsage2ANDROID>::ManagedStructure<VkNativeBufferUsage2ANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkOffset2D>
    : public detail::ManagedStructure<VkOffset2D>
{
public:
    using detail::ManagedStructure<VkOffset2D>::ManagedStructure<VkOffset2D>;
};

template <>
class Managed<VkOffset3D>
    : public detail::ManagedStructure<VkOffset3D>
{
public:
    using detail::ManagedStructure<VkOffset3D>::ManagedStructure<VkOffset3D>;
};

template <>
class Managed<VkPastPresentationTimingGOOGLE>
    : public detail::ManagedStructure<VkPastPresentationTimingGOOGLE>
{
public:
    using detail::ManagedStructure<VkPastPresentationTimingGOOGLE>::ManagedStructure<VkPastPresentationTimingGOOGLE>;
};

template <>
class Managed<VkPerformanceConfigurationAcquireInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>;
};

template <>
class Managed<VkPerformanceCounterDescriptionKHR>
    : public detail::ManagedStructure<VkPerformanceCounterDescriptionKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterDescriptionKHR>::ManagedStructure<VkPerformanceCounterDescriptionKHR>;
};

template <>
class Managed<VkPerformanceCounterKHR>
    : public detail::ManagedStructure<VkPerformanceCounterKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterKHR>::ManagedStructure<VkPerformanceCounterKHR>;
};

template <>
class Managed<VkPerformanceCounterResultKHR>
    : public detail::ManagedStructure<VkPerformanceCounterResultKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterResultKHR>::ManagedStructure<VkPerformanceCounterResultKHR>;
};

template <>
class Managed<VkPerformanceMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceMarkerInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceMarkerInfoINTEL>::ManagedStructure<VkPerformanceMarkerInfoINTEL>;
};

template <>
class Managed<VkPerformanceOverrideInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceOverrideInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceOverrideInfoINTEL>::ManagedStructure<VkPerformanceOverrideInfoINTEL>;
};

template <>
class Managed<VkPerformanceQuerySubmitInfoKHR>
    : public detail::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>;
};

template <>
class Managed<VkPerformanceStreamMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>;
};

template <>
class Managed<VkPerformanceValueDataINTEL>
    : public detail::ManagedStructure<VkPerformanceValueDataINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceValueDataINTEL>::ManagedStructure<VkPerformanceValueDataINTEL>;
};

template <>
class Managed<VkPerformanceValueINTEL>
    : public detail::ManagedStructure<VkPerformanceValueINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceValueINTEL>::ManagedStructure<VkPerformanceValueINTEL>;
};

template <>
class Managed<VkPhysicalDevice16BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>;
};

template <>
class Managed<VkPhysicalDevice16BitStorageFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevice16BitStorageFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice16BitStorageFeaturesKHR>::ManagedStructure<VkPhysicalDevice16BitStorageFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDevice8BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>;
};

template <>
class Managed<VkPhysicalDevice8BitStorageFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevice8BitStorageFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice8BitStorageFeaturesKHR>::ManagedStructure<VkPhysicalDevice8BitStorageFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceASTCDecodeFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceBufferAddressFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferAddressFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferAddressFeaturesEXT>::ManagedStructure<VkPhysicalDeviceBufferAddressFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>;
};

template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>;
};

template <>
class Managed<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>;
};

template <>
class Managed<VkPhysicalDeviceCornerSampledImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceDepthStencilResolveProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>;
};

template <>
class Managed<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>::ManagedStructure<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>;
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>;
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>;
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>;
};

template <>
class Managed<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceDriverProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDriverProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDriverProperties>::ManagedStructure<VkPhysicalDeviceDriverProperties>;
};

template <>
class Managed<VkPhysicalDeviceDriverPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceDriverPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDriverPropertiesKHR>::ManagedStructure<VkPhysicalDeviceDriverPropertiesKHR>;
};

template <>
class Managed<VkPhysicalDeviceExclusiveScissorFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceExternalBufferInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>;
};

template <>
class Managed<VkPhysicalDeviceExternalBufferInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalBufferInfoKHR>;
};

template <>
class Managed<VkPhysicalDeviceExternalFenceInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>;
};

template <>
class Managed<VkPhysicalDeviceExternalFenceInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalFenceInfoKHR>;
};

template <>
class Managed<VkPhysicalDeviceExternalImageFormatInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>;
};

template <>
class Managed<VkPhysicalDeviceExternalImageFormatInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfoKHR>;
};

template <>
class Managed<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceExternalSemaphoreInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>;
};

template <>
class Managed<VkPhysicalDeviceExternalSemaphoreInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfoKHR>;
};

template <>
class Managed<VkPhysicalDeviceFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures>::ManagedStructure<VkPhysicalDeviceFeatures>;
};

template <>
class Managed<VkPhysicalDeviceFeatures2>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures2>::ManagedStructure<VkPhysicalDeviceFeatures2>;
};

template <>
class Managed<VkPhysicalDeviceFeatures2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures2KHR>::ManagedStructure<VkPhysicalDeviceFeatures2KHR>;
};

template <>
class Managed<VkPhysicalDeviceFloat16Int8FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFloat16Int8FeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFloat16Int8FeaturesKHR>::ManagedStructure<VkPhysicalDeviceFloat16Int8FeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceFloatControlsProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>;
};

template <>
class Managed<VkPhysicalDeviceFloatControlsPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFloatControlsPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFloatControlsPropertiesKHR>::ManagedStructure<VkPhysicalDeviceFloatControlsPropertiesKHR>;
};

template <>
class Managed<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceGroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceGroupProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceGroupProperties>::ManagedStructure<VkPhysicalDeviceGroupProperties>;
};

template <>
class Managed<VkPhysicalDeviceGroupPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceGroupPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceGroupPropertiesKHR>::ManagedStructure<VkPhysicalDeviceGroupPropertiesKHR>;
};

template <>
class Managed<VkPhysicalDeviceHostQueryResetFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>;
};

template <>
class Managed<VkPhysicalDeviceHostQueryResetFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeaturesEXT>::ManagedStructure<VkPhysicalDeviceHostQueryResetFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceIDProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceIDProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIDProperties>::ManagedStructure<VkPhysicalDeviceIDProperties>;
};

template <>
class Managed<VkPhysicalDeviceIDPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceIDPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIDPropertiesKHR>::ManagedStructure<VkPhysicalDeviceIDPropertiesKHR>;
};

template <>
class Managed<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>;
};

template <>
class Managed<VkPhysicalDeviceImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>;
};

template <>
class Managed<VkPhysicalDeviceImageFormatInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2KHR>::ManagedStructure<VkPhysicalDeviceImageFormatInfo2KHR>;
};

template <>
class Managed<VkPhysicalDeviceImageViewImageFormatInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>;
};

template <>
class Managed<VkPhysicalDeviceImagelessFramebufferFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>;
};

template <>
class Managed<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceLimits>
    : public detail::ManagedStructure<VkPhysicalDeviceLimits>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLimits>::ManagedStructure<VkPhysicalDeviceLimits>;
};

template <>
class Managed<VkPhysicalDeviceLineRasterizationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceLineRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceMaintenance3Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>;
};

template <>
class Managed<VkPhysicalDeviceMaintenance3PropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMaintenance3PropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMaintenance3PropertiesKHR>::ManagedStructure<VkPhysicalDeviceMaintenance3PropertiesKHR>;
};

template <>
class Managed<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties>::ManagedStructure<VkPhysicalDeviceMemoryProperties>;
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2>::ManagedStructure<VkPhysicalDeviceMemoryProperties2>;
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2KHR>::ManagedStructure<VkPhysicalDeviceMemoryProperties2KHR>;
};

template <>
class Managed<VkPhysicalDeviceMeshShaderFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceMeshShaderPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>;
};

template <>
class Managed<VkPhysicalDeviceMultiviewFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>;
};

template <>
class Managed<VkPhysicalDeviceMultiviewFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewFeaturesKHR>::ManagedStructure<VkPhysicalDeviceMultiviewFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>;
};

template <>
class Managed<VkPhysicalDeviceMultiviewProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewProperties>::ManagedStructure<VkPhysicalDeviceMultiviewProperties>;
};

template <>
class Managed<VkPhysicalDeviceMultiviewPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewPropertiesKHR>::ManagedStructure<VkPhysicalDeviceMultiviewPropertiesKHR>;
};

template <>
class Managed<VkPhysicalDevicePCIBusInfoPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDevicePerformanceQueryFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDevicePerformanceQueryPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>;
};

template <>
class Managed<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDevicePointClippingProperties>
    : public detail::ManagedStructure<VkPhysicalDevicePointClippingProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePointClippingProperties>::ManagedStructure<VkPhysicalDevicePointClippingProperties>;
};

template <>
class Managed<VkPhysicalDevicePointClippingPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePointClippingPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePointClippingPropertiesKHR>::ManagedStructure<VkPhysicalDevicePointClippingPropertiesKHR>;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkPhysicalDevicePresentationPropertiesANDROID>
    : public detail::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkPhysicalDeviceProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties>::ManagedStructure<VkPhysicalDeviceProperties>;
};

template <>
class Managed<VkPhysicalDeviceProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties2>::ManagedStructure<VkPhysicalDeviceProperties2>;
};

template <>
class Managed<VkPhysicalDeviceProperties2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties2KHR>::ManagedStructure<VkPhysicalDeviceProperties2KHR>;
};

template <>
class Managed<VkPhysicalDeviceProtectedMemoryFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>;
};

template <>
class Managed<VkPhysicalDeviceProtectedMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>;
};

template <>
class Managed<VkPhysicalDevicePushDescriptorPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPhysicalDeviceRayTracingFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRayTracingFeaturesKHR>::ManagedStructure<VkPhysicalDeviceRayTracingFeaturesKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPhysicalDeviceRayTracingPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesKHR>::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkPhysicalDeviceRayTracingPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>;
};

template <>
class Managed<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceSampleLocationsPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceSamplerFilterMinmaxProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>;
};

template <>
class Managed<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>;
};

template <>
class Managed<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceScalarBlockLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>;
};

template <>
class Managed<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>;
};

template <>
class Managed<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceShaderAtomicInt64Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>;
};

template <>
class Managed<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceShaderClockFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceShaderCoreProperties2AMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>;
};

template <>
class Managed<VkPhysicalDeviceShaderCorePropertiesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>;
};

template <>
class Managed<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceShaderDrawParameterFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDrawParameterFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDrawParameterFeatures>::ManagedStructure<VkPhysicalDeviceShaderDrawParameterFeatures>;
};

template <>
class Managed<VkPhysicalDeviceShaderDrawParametersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>;
};

template <>
class Managed<VkPhysicalDeviceShaderFloat16Int8Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>;
};

template <>
class Managed<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>;
};

template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>;
};

template <>
class Managed<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>;
};

template <>
class Managed<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceShadingRateImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>;
};

template <>
class Managed<VkPhysicalDeviceShadingRateImagePropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>;
};

template <>
class Managed<VkPhysicalDeviceSparseImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>;
};

template <>
class Managed<VkPhysicalDeviceSparseImageFormatInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2KHR>::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2KHR>;
};

template <>
class Managed<VkPhysicalDeviceSparseProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseProperties>::ManagedStructure<VkPhysicalDeviceSparseProperties>;
};

template <>
class Managed<VkPhysicalDeviceSubgroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupProperties>::ManagedStructure<VkPhysicalDeviceSubgroupProperties>;
};

template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceSurfaceInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>;
};

template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>;
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>;
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>::ManagedStructure<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>;
};

template <>
class Managed<VkPhysicalDeviceToolPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>;
};

template <>
class Managed<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceVariablePointerFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeatures>::ManagedStructure<VkPhysicalDeviceVariablePointerFeatures>;
};

template <>
class Managed<VkPhysicalDeviceVariablePointerFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeaturesKHR>::ManagedStructure<VkPhysicalDeviceVariablePointerFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceVariablePointersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>;
};

template <>
class Managed<VkPhysicalDeviceVariablePointersFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeaturesKHR>::ManagedStructure<VkPhysicalDeviceVariablePointersFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>;
};

template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>;
};

template <>
class Managed<VkPhysicalDeviceVulkan11Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan11Features>::ManagedStructure<VkPhysicalDeviceVulkan11Features>;
};

template <>
class Managed<VkPhysicalDeviceVulkan11Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan11Properties>::ManagedStructure<VkPhysicalDeviceVulkan11Properties>;
};

template <>
class Managed<VkPhysicalDeviceVulkan12Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan12Features>::ManagedStructure<VkPhysicalDeviceVulkan12Features>;
};

template <>
class Managed<VkPhysicalDeviceVulkan12Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan12Properties>::ManagedStructure<VkPhysicalDeviceVulkan12Properties>;
};

template <>
class Managed<VkPhysicalDeviceVulkanMemoryModelFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>;
};

template <>
class Managed<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>;
};

template <>
class Managed<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>;
};

template <>
class Managed<VkPipelineCacheCreateInfo>
    : public detail::ManagedStructure<VkPipelineCacheCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineCacheCreateInfo>::ManagedStructure<VkPipelineCacheCreateInfo>;
};

template <>
class Managed<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>;
};

template <>
class Managed<VkPipelineColorBlendAttachmentState>
    : public detail::ManagedStructure<VkPipelineColorBlendAttachmentState>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendAttachmentState>::ManagedStructure<VkPipelineColorBlendAttachmentState>;
};

template <>
class Managed<VkPipelineColorBlendStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineColorBlendStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendStateCreateInfo>::ManagedStructure<VkPipelineColorBlendStateCreateInfo>;
};

template <>
class Managed<VkPipelineCompilerControlCreateInfoAMD>
    : public detail::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>;
};

template <>
class Managed<VkPipelineCoverageModulationStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineCoverageReductionStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineCoverageToColorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineCreationFeedbackCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>;
};

template <>
class Managed<VkPipelineCreationFeedbackEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackEXT>
{
public:
    using detail::ManagedStructure<VkPipelineCreationFeedbackEXT>::ManagedStructure<VkPipelineCreationFeedbackEXT>;
};

template <>
class Managed<VkPipelineDepthStencilStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>;
};

template <>
class Managed<VkPipelineDiscardRectangleStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>;
};

template <>
class Managed<VkPipelineDynamicStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDynamicStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineDynamicStateCreateInfo>::ManagedStructure<VkPipelineDynamicStateCreateInfo>;
};

template <>
class Managed<VkPipelineExecutableInfoKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableInfoKHR>::ManagedStructure<VkPipelineExecutableInfoKHR>;
};

template <>
class Managed<VkPipelineExecutableInternalRepresentationKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>;
};

template <>
class Managed<VkPipelineExecutablePropertiesKHR>
    : public detail::ManagedStructure<VkPipelineExecutablePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutablePropertiesKHR>::ManagedStructure<VkPipelineExecutablePropertiesKHR>;
};

template <>
class Managed<VkPipelineExecutableStatisticKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableStatisticKHR>::ManagedStructure<VkPipelineExecutableStatisticKHR>;
};

template <>
class Managed<VkPipelineExecutableStatisticValueKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticValueKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableStatisticValueKHR>::ManagedStructure<VkPipelineExecutableStatisticValueKHR>;
};

template <>
class Managed<VkPipelineInfoKHR>
    : public detail::ManagedStructure<VkPipelineInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineInfoKHR>::ManagedStructure<VkPipelineInfoKHR>;
};

template <>
class Managed<VkPipelineInputAssemblyStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>;
};

template <>
class Managed<VkPipelineLayoutCreateInfo>
    : public detail::ManagedStructure<VkPipelineLayoutCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineLayoutCreateInfo>::ManagedStructure<VkPipelineLayoutCreateInfo>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPipelineLibraryCreateInfoKHR>
    : public detail::ManagedStructure<VkPipelineLibraryCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineLibraryCreateInfoKHR>::ManagedStructure<VkPipelineLibraryCreateInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkPipelineMultisampleStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineMultisampleStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineMultisampleStateCreateInfo>::ManagedStructure<VkPipelineMultisampleStateCreateInfo>;
};

template <>
class Managed<VkPipelineRasterizationConservativeStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>;
};

template <>
class Managed<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>;
};

template <>
class Managed<VkPipelineRasterizationLineStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>;
};

template <>
class Managed<VkPipelineRasterizationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineRasterizationStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateCreateInfo>::ManagedStructure<VkPipelineRasterizationStateCreateInfo>;
};

template <>
class Managed<VkPipelineRasterizationStateRasterizationOrderAMD>
    : public detail::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>;
};

template <>
class Managed<VkPipelineRasterizationStateStreamCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>;
};

template <>
class Managed<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineSampleLocationsStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>;
};

template <>
class Managed<VkPipelineShaderStageCreateInfo>
    : public detail::ManagedStructure<VkPipelineShaderStageCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineShaderStageCreateInfo>::ManagedStructure<VkPipelineShaderStageCreateInfo>;
};

template <>
class Managed<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>;
};

template <>
class Managed<VkPipelineTessellationDomainOriginStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>;
};

template <>
class Managed<VkPipelineTessellationDomainOriginStateCreateInfoKHR>
    : public detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfoKHR>::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfoKHR>;
};

template <>
class Managed<VkPipelineTessellationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationStateCreateInfo>::ManagedStructure<VkPipelineTessellationStateCreateInfo>;
};

template <>
class Managed<VkPipelineVertexInputDivisorStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>;
};

template <>
class Managed<VkPipelineVertexInputStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineVertexInputStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineVertexInputStateCreateInfo>::ManagedStructure<VkPipelineVertexInputStateCreateInfo>;
};

template <>
class Managed<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineViewportShadingRateImageStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineViewportStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineViewportStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineViewportStateCreateInfo>::ManagedStructure<VkPipelineViewportStateCreateInfo>;
};

template <>
class Managed<VkPipelineViewportSwizzleStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>;
};

template <>
class Managed<VkPipelineViewportWScalingStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>;
};

#ifdef VK_USE_PLATFORM_GGP
template <>
class Managed<VkPresentFrameTokenGGP>
    : public detail::ManagedStructure<VkPresentFrameTokenGGP>
{
public:
    using detail::ManagedStructure<VkPresentFrameTokenGGP>::ManagedStructure<VkPresentFrameTokenGGP>;
};
#endif // VK_USE_PLATFORM_GGP

template <>
class Managed<VkPresentInfoKHR>
    : public detail::ManagedStructure<VkPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkPresentInfoKHR>::ManagedStructure<VkPresentInfoKHR>;
};

template <>
class Managed<VkPresentRegionKHR>
    : public detail::ManagedStructure<VkPresentRegionKHR>
{
public:
    using detail::ManagedStructure<VkPresentRegionKHR>::ManagedStructure<VkPresentRegionKHR>;
};

template <>
class Managed<VkPresentRegionsKHR>
    : public detail::ManagedStructure<VkPresentRegionsKHR>
{
public:
    using detail::ManagedStructure<VkPresentRegionsKHR>::ManagedStructure<VkPresentRegionsKHR>;
};

template <>
class Managed<VkPresentTimeGOOGLE>
    : public detail::ManagedStructure<VkPresentTimeGOOGLE>
{
public:
    using detail::ManagedStructure<VkPresentTimeGOOGLE>::ManagedStructure<VkPresentTimeGOOGLE>;
};

template <>
class Managed<VkPresentTimesInfoGOOGLE>
    : public detail::ManagedStructure<VkPresentTimesInfoGOOGLE>
{
public:
    using detail::ManagedStructure<VkPresentTimesInfoGOOGLE>::ManagedStructure<VkPresentTimesInfoGOOGLE>;
};

template <>
class Managed<VkProtectedSubmitInfo>
    : public detail::ManagedStructure<VkProtectedSubmitInfo>
{
public:
    using detail::ManagedStructure<VkProtectedSubmitInfo>::ManagedStructure<VkProtectedSubmitInfo>;
};

template <>
class Managed<VkPushConstantRange>
    : public detail::ManagedStructure<VkPushConstantRange>
{
public:
    using detail::ManagedStructure<VkPushConstantRange>::ManagedStructure<VkPushConstantRange>;
};

template <>
class Managed<VkQueryPoolCreateInfo>
    : public detail::ManagedStructure<VkQueryPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkQueryPoolCreateInfo>::ManagedStructure<VkQueryPoolCreateInfo>;
};

template <>
class Managed<VkQueryPoolCreateInfoINTEL>
    : public detail::ManagedStructure<VkQueryPoolCreateInfoINTEL>
{
public:
    using detail::ManagedStructure<VkQueryPoolCreateInfoINTEL>::ManagedStructure<VkQueryPoolCreateInfoINTEL>;
};

template <>
class Managed<VkQueryPoolPerformanceCreateInfoKHR>
    : public detail::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>;
};

template <>
class Managed<VkQueryPoolPerformanceQueryCreateInfoINTEL>
    : public detail::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>
{
public:
    using detail::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>;
};

template <>
class Managed<VkQueueFamilyCheckpointPropertiesNV>
    : public detail::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>
{
public:
    using detail::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>;
};

template <>
class Managed<VkQueueFamilyProperties>
    : public detail::ManagedStructure<VkQueueFamilyProperties>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties>::ManagedStructure<VkQueueFamilyProperties>;
};

template <>
class Managed<VkQueueFamilyProperties2>
    : public detail::ManagedStructure<VkQueueFamilyProperties2>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties2>::ManagedStructure<VkQueueFamilyProperties2>;
};

template <>
class Managed<VkQueueFamilyProperties2KHR>
    : public detail::ManagedStructure<VkQueueFamilyProperties2KHR>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties2KHR>::ManagedStructure<VkQueueFamilyProperties2KHR>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingPipelineCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkRayTracingPipelineCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineCreateInfoNV>::ManagedStructure<VkRayTracingPipelineCreateInfoNV>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingPipelineInterfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingPipelineInterfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineInterfaceCreateInfoKHR>::ManagedStructure<VkRayTracingPipelineInterfaceCreateInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingShaderGroupCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoKHR>::ManagedStructure<VkRayTracingShaderGroupCreateInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkRayTracingShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>;
};

template <>
class Managed<VkRect2D>
    : public detail::ManagedStructure<VkRect2D>
{
public:
    using detail::ManagedStructure<VkRect2D>::ManagedStructure<VkRect2D>;
};

template <>
class Managed<VkRectLayerKHR>
    : public detail::ManagedStructure<VkRectLayerKHR>
{
public:
    using detail::ManagedStructure<VkRectLayerKHR>::ManagedStructure<VkRectLayerKHR>;
};

template <>
class Managed<VkRefreshCycleDurationGOOGLE>
    : public detail::ManagedStructure<VkRefreshCycleDurationGOOGLE>
{
public:
    using detail::ManagedStructure<VkRefreshCycleDurationGOOGLE>::ManagedStructure<VkRefreshCycleDurationGOOGLE>;
};

template <>
class Managed<VkRenderPassAttachmentBeginInfo>
    : public detail::ManagedStructure<VkRenderPassAttachmentBeginInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassAttachmentBeginInfo>::ManagedStructure<VkRenderPassAttachmentBeginInfo>;
};

template <>
class Managed<VkRenderPassAttachmentBeginInfoKHR>
    : public detail::ManagedStructure<VkRenderPassAttachmentBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkRenderPassAttachmentBeginInfoKHR>::ManagedStructure<VkRenderPassAttachmentBeginInfoKHR>;
};

template <>
class Managed<VkRenderPassBeginInfo>
    : public detail::ManagedStructure<VkRenderPassBeginInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassBeginInfo>::ManagedStructure<VkRenderPassBeginInfo>;
};

template <>
class Managed<VkRenderPassCreateInfo>
    : public detail::ManagedStructure<VkRenderPassCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo>::ManagedStructure<VkRenderPassCreateInfo>;
};

template <>
class Managed<VkRenderPassCreateInfo2>
    : public detail::ManagedStructure<VkRenderPassCreateInfo2>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo2>::ManagedStructure<VkRenderPassCreateInfo2>;
};

template <>
class Managed<VkRenderPassCreateInfo2KHR>
    : public detail::ManagedStructure<VkRenderPassCreateInfo2KHR>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo2KHR>::ManagedStructure<VkRenderPassCreateInfo2KHR>;
};

template <>
class Managed<VkRenderPassFragmentDensityMapCreateInfoEXT>
    : public detail::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>;
};

template <>
class Managed<VkRenderPassInputAttachmentAspectCreateInfo>
    : public detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>;
};

template <>
class Managed<VkRenderPassInputAttachmentAspectCreateInfoKHR>
    : public detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfoKHR>::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfoKHR>;
};

template <>
class Managed<VkRenderPassMultiviewCreateInfo>
    : public detail::ManagedStructure<VkRenderPassMultiviewCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassMultiviewCreateInfo>::ManagedStructure<VkRenderPassMultiviewCreateInfo>;
};

template <>
class Managed<VkRenderPassMultiviewCreateInfoKHR>
    : public detail::ManagedStructure<VkRenderPassMultiviewCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRenderPassMultiviewCreateInfoKHR>::ManagedStructure<VkRenderPassMultiviewCreateInfoKHR>;
};

template <>
class Managed<VkRenderPassSampleLocationsBeginInfoEXT>
    : public detail::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>
{
public:
    using detail::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>;
};

template <>
class Managed<VkRenderPassTransformBeginInfoQCOM>
    : public detail::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>
{
public:
    using detail::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>;
};

template <>
class Managed<VkSampleLocationEXT>
    : public detail::ManagedStructure<VkSampleLocationEXT>
{
public:
    using detail::ManagedStructure<VkSampleLocationEXT>::ManagedStructure<VkSampleLocationEXT>;
};

template <>
class Managed<VkSampleLocationsInfoEXT>
    : public detail::ManagedStructure<VkSampleLocationsInfoEXT>
{
public:
    using detail::ManagedStructure<VkSampleLocationsInfoEXT>::ManagedStructure<VkSampleLocationsInfoEXT>;
};

template <>
class Managed<VkSamplerCreateInfo>
    : public detail::ManagedStructure<VkSamplerCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerCreateInfo>::ManagedStructure<VkSamplerCreateInfo>;
};

template <>
class Managed<VkSamplerReductionModeCreateInfo>
    : public detail::ManagedStructure<VkSamplerReductionModeCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerReductionModeCreateInfo>::ManagedStructure<VkSamplerReductionModeCreateInfo>;
};

template <>
class Managed<VkSamplerReductionModeCreateInfoEXT>
    : public detail::ManagedStructure<VkSamplerReductionModeCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkSamplerReductionModeCreateInfoEXT>::ManagedStructure<VkSamplerReductionModeCreateInfoEXT>;
};

template <>
class Managed<VkSamplerYcbcrConversionCreateInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>;
};

template <>
class Managed<VkSamplerYcbcrConversionCreateInfoKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfoKHR>::ManagedStructure<VkSamplerYcbcrConversionCreateInfoKHR>;
};

template <>
class Managed<VkSamplerYcbcrConversionImageFormatProperties>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>;
};

template <>
class Managed<VkSamplerYcbcrConversionImageFormatPropertiesKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatPropertiesKHR>::ManagedStructure<VkSamplerYcbcrConversionImageFormatPropertiesKHR>;
};

template <>
class Managed<VkSamplerYcbcrConversionInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionInfo>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionInfo>::ManagedStructure<VkSamplerYcbcrConversionInfo>;
};

template <>
class Managed<VkSamplerYcbcrConversionInfoKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionInfoKHR>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionInfoKHR>::ManagedStructure<VkSamplerYcbcrConversionInfoKHR>;
};

template <>
class Managed<VkSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreCreateInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreCreateInfo>::ManagedStructure<VkSemaphoreCreateInfo>;
};

template <>
class Managed<VkSemaphoreGetFdInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreGetFdInfoKHR>::ManagedStructure<VkSemaphoreGetFdInfoKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSemaphoreGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSemaphoreSignalInfo>
    : public detail::ManagedStructure<VkSemaphoreSignalInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreSignalInfo>::ManagedStructure<VkSemaphoreSignalInfo>;
};

template <>
class Managed<VkSemaphoreSignalInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreSignalInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreSignalInfoKHR>::ManagedStructure<VkSemaphoreSignalInfoKHR>;
};

template <>
class Managed<VkSemaphoreTypeCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreTypeCreateInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreTypeCreateInfo>::ManagedStructure<VkSemaphoreTypeCreateInfo>;
};

template <>
class Managed<VkSemaphoreTypeCreateInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreTypeCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreTypeCreateInfoKHR>::ManagedStructure<VkSemaphoreTypeCreateInfoKHR>;
};

template <>
class Managed<VkSemaphoreWaitInfo>
    : public detail::ManagedStructure<VkSemaphoreWaitInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreWaitInfo>::ManagedStructure<VkSemaphoreWaitInfo>;
};

template <>
class Managed<VkSemaphoreWaitInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreWaitInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreWaitInfoKHR>::ManagedStructure<VkSemaphoreWaitInfoKHR>;
};

template <>
class Managed<VkSetStateFlagsIndirectCommandNV>
    : public detail::ManagedStructure<VkSetStateFlagsIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkSetStateFlagsIndirectCommandNV>::ManagedStructure<VkSetStateFlagsIndirectCommandNV>;
};

template <>
class Managed<VkShaderModuleCreateInfo>
    : public detail::ManagedStructure<VkShaderModuleCreateInfo>
{
public:
    using detail::ManagedStructure<VkShaderModuleCreateInfo>::ManagedStructure<VkShaderModuleCreateInfo>;
};

template <>
class Managed<VkShaderModuleValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>;
};

template <>
class Managed<VkShaderResourceUsageAMD>
    : public detail::ManagedStructure<VkShaderResourceUsageAMD>
{
public:
    using detail::ManagedStructure<VkShaderResourceUsageAMD>::ManagedStructure<VkShaderResourceUsageAMD>;
};

template <>
class Managed<VkShaderStatisticsInfoAMD>
    : public detail::ManagedStructure<VkShaderStatisticsInfoAMD>
{
public:
    using detail::ManagedStructure<VkShaderStatisticsInfoAMD>::ManagedStructure<VkShaderStatisticsInfoAMD>;
};

template <>
class Managed<VkShadingRatePaletteNV>
    : public detail::ManagedStructure<VkShadingRatePaletteNV>
{
public:
    using detail::ManagedStructure<VkShadingRatePaletteNV>::ManagedStructure<VkShadingRatePaletteNV>;
};

template <>
class Managed<VkSharedPresentSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>;
};

template <>
class Managed<VkSparseBufferMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseBufferMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseBufferMemoryBindInfo>::ManagedStructure<VkSparseBufferMemoryBindInfo>;
};

template <>
class Managed<VkSparseImageFormatProperties>
    : public detail::ManagedStructure<VkSparseImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties>::ManagedStructure<VkSparseImageFormatProperties>;
};

template <>
class Managed<VkSparseImageFormatProperties2>
    : public detail::ManagedStructure<VkSparseImageFormatProperties2>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties2>::ManagedStructure<VkSparseImageFormatProperties2>;
};

template <>
class Managed<VkSparseImageFormatProperties2KHR>
    : public detail::ManagedStructure<VkSparseImageFormatProperties2KHR>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties2KHR>::ManagedStructure<VkSparseImageFormatProperties2KHR>;
};

template <>
class Managed<VkSparseImageMemoryBind>
    : public detail::ManagedStructure<VkSparseImageMemoryBind>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryBind>::ManagedStructure<VkSparseImageMemoryBind>;
};

template <>
class Managed<VkSparseImageMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryBindInfo>::ManagedStructure<VkSparseImageMemoryBindInfo>;
};

template <>
class Managed<VkSparseImageMemoryRequirements>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements>::ManagedStructure<VkSparseImageMemoryRequirements>;
};

template <>
class Managed<VkSparseImageMemoryRequirements2>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements2>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements2>::ManagedStructure<VkSparseImageMemoryRequirements2>;
};

template <>
class Managed<VkSparseImageMemoryRequirements2KHR>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements2KHR>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements2KHR>::ManagedStructure<VkSparseImageMemoryRequirements2KHR>;
};

template <>
class Managed<VkSparseImageOpaqueMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>;
};

template <>
class Managed<VkSparseMemoryBind>
    : public detail::ManagedStructure<VkSparseMemoryBind>
{
public:
    using detail::ManagedStructure<VkSparseMemoryBind>::ManagedStructure<VkSparseMemoryBind>;
};

template <>
class Managed<VkSpecializationInfo>
    : public detail::ManagedStructure<VkSpecializationInfo>
{
public:
    using detail::ManagedStructure<VkSpecializationInfo>::ManagedStructure<VkSpecializationInfo>;
};

template <>
class Managed<VkSpecializationMapEntry>
    : public detail::ManagedStructure<VkSpecializationMapEntry>
{
public:
    using detail::ManagedStructure<VkSpecializationMapEntry>::ManagedStructure<VkSpecializationMapEntry>;
};

template <>
class Managed<VkStencilOpState>
    : public detail::ManagedStructure<VkStencilOpState>
{
public:
    using detail::ManagedStructure<VkStencilOpState>::ManagedStructure<VkStencilOpState>;
};

#ifdef VK_USE_PLATFORM_GGP
template <>
class Managed<VkStreamDescriptorSurfaceCreateInfoGGP>
    : public detail::ManagedStructure<VkStreamDescriptorSurfaceCreateInfoGGP>
{
public:
    using detail::ManagedStructure<VkStreamDescriptorSurfaceCreateInfoGGP>::ManagedStructure<VkStreamDescriptorSurfaceCreateInfoGGP>;
};
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkStridedBufferRegionKHR>
    : public detail::ManagedStructure<VkStridedBufferRegionKHR>
{
public:
    using detail::ManagedStructure<VkStridedBufferRegionKHR>::ManagedStructure<VkStridedBufferRegionKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkSubmitInfo>
    : public detail::ManagedStructure<VkSubmitInfo>
{
public:
    using detail::ManagedStructure<VkSubmitInfo>::ManagedStructure<VkSubmitInfo>;
};

template <>
class Managed<VkSubpassBeginInfo>
    : public detail::ManagedStructure<VkSubpassBeginInfo>
{
public:
    using detail::ManagedStructure<VkSubpassBeginInfo>::ManagedStructure<VkSubpassBeginInfo>;
};

template <>
class Managed<VkSubpassBeginInfoKHR>
    : public detail::ManagedStructure<VkSubpassBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkSubpassBeginInfoKHR>::ManagedStructure<VkSubpassBeginInfoKHR>;
};

template <>
class Managed<VkSubpassDependency>
    : public detail::ManagedStructure<VkSubpassDependency>
{
public:
    using detail::ManagedStructure<VkSubpassDependency>::ManagedStructure<VkSubpassDependency>;
};

template <>
class Managed<VkSubpassDependency2>
    : public detail::ManagedStructure<VkSubpassDependency2>
{
public:
    using detail::ManagedStructure<VkSubpassDependency2>::ManagedStructure<VkSubpassDependency2>;
};

template <>
class Managed<VkSubpassDependency2KHR>
    : public detail::ManagedStructure<VkSubpassDependency2KHR>
{
public:
    using detail::ManagedStructure<VkSubpassDependency2KHR>::ManagedStructure<VkSubpassDependency2KHR>;
};

template <>
class Managed<VkSubpassDescription>
    : public detail::ManagedStructure<VkSubpassDescription>
{
public:
    using detail::ManagedStructure<VkSubpassDescription>::ManagedStructure<VkSubpassDescription>;
};

template <>
class Managed<VkSubpassDescription2>
    : public detail::ManagedStructure<VkSubpassDescription2>
{
public:
    using detail::ManagedStructure<VkSubpassDescription2>::ManagedStructure<VkSubpassDescription2>;
};

template <>
class Managed<VkSubpassDescription2KHR>
    : public detail::ManagedStructure<VkSubpassDescription2KHR>
{
public:
    using detail::ManagedStructure<VkSubpassDescription2KHR>::ManagedStructure<VkSubpassDescription2KHR>;
};

template <>
class Managed<VkSubpassDescriptionDepthStencilResolve>
    : public detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>
{
public:
    using detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>;
};

template <>
class Managed<VkSubpassDescriptionDepthStencilResolveKHR>
    : public detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolveKHR>
{
public:
    using detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolveKHR>::ManagedStructure<VkSubpassDescriptionDepthStencilResolveKHR>;
};

template <>
class Managed<VkSubpassEndInfo>
    : public detail::ManagedStructure<VkSubpassEndInfo>
{
public:
    using detail::ManagedStructure<VkSubpassEndInfo>::ManagedStructure<VkSubpassEndInfo>;
};

template <>
class Managed<VkSubpassEndInfoKHR>
    : public detail::ManagedStructure<VkSubpassEndInfoKHR>
{
public:
    using detail::ManagedStructure<VkSubpassEndInfoKHR>::ManagedStructure<VkSubpassEndInfoKHR>;
};

template <>
class Managed<VkSubpassSampleLocationsEXT>
    : public detail::ManagedStructure<VkSubpassSampleLocationsEXT>
{
public:
    using detail::ManagedStructure<VkSubpassSampleLocationsEXT>::ManagedStructure<VkSubpassSampleLocationsEXT>;
};

template <>
class Managed<VkSubresourceLayout>
    : public detail::ManagedStructure<VkSubresourceLayout>
{
public:
    using detail::ManagedStructure<VkSubresourceLayout>::ManagedStructure<VkSubresourceLayout>;
};

template <>
class Managed<VkSurfaceCapabilities2EXT>
    : public detail::ManagedStructure<VkSurfaceCapabilities2EXT>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilities2EXT>::ManagedStructure<VkSurfaceCapabilities2EXT>;
};

template <>
class Managed<VkSurfaceCapabilities2KHR>
    : public detail::ManagedStructure<VkSurfaceCapabilities2KHR>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilities2KHR>::ManagedStructure<VkSurfaceCapabilities2KHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilitiesKHR>::ManagedStructure<VkSurfaceCapabilitiesKHR>;
};

template <>
class Managed<VkSurfaceFormat2KHR>
    : public detail::ManagedStructure<VkSurfaceFormat2KHR>
{
public:
    using detail::ManagedStructure<VkSurfaceFormat2KHR>::ManagedStructure<VkSurfaceFormat2KHR>;
};

template <>
class Managed<VkSurfaceFormatKHR>
    : public detail::ManagedStructure<VkSurfaceFormatKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceFormatKHR>::ManagedStructure<VkSurfaceFormatKHR>;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceFullScreenExclusiveInfoEXT>
    : public detail::ManagedStructure<VkSurfaceFullScreenExclusiveInfoEXT>
{
public:
    using detail::ManagedStructure<VkSurfaceFullScreenExclusiveInfoEXT>::ManagedStructure<VkSurfaceFullScreenExclusiveInfoEXT>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceFullScreenExclusiveWin32InfoEXT>
    : public detail::ManagedStructure<VkSurfaceFullScreenExclusiveWin32InfoEXT>
{
public:
    using detail::ManagedStructure<VkSurfaceFullScreenExclusiveWin32InfoEXT>::ManagedStructure<VkSurfaceFullScreenExclusiveWin32InfoEXT>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSurfaceProtectedCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>;
};

template <>
class Managed<VkSwapchainCounterCreateInfoEXT>
    : public detail::ManagedStructure<VkSwapchainCounterCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkSwapchainCounterCreateInfoEXT>::ManagedStructure<VkSwapchainCounterCreateInfoEXT>;
};

template <>
class Managed<VkSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkSwapchainCreateInfoKHR>::ManagedStructure<VkSwapchainCreateInfoKHR>;
};

template <>
class Managed<VkSwapchainDisplayNativeHdrCreateInfoAMD>
    : public detail::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkSwapchainImageCreateInfoANDROID>
    : public detail::ManagedStructure<VkSwapchainImageCreateInfoANDROID>
{
public:
    using detail::ManagedStructure<VkSwapchainImageCreateInfoANDROID>::ManagedStructure<VkSwapchainImageCreateInfoANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkTextureLODGatherFormatPropertiesAMD>
    : public detail::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>
{
public:
    using detail::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>;
};

template <>
class Managed<VkTimelineSemaphoreSubmitInfo>
    : public detail::ManagedStructure<VkTimelineSemaphoreSubmitInfo>
{
public:
    using detail::ManagedStructure<VkTimelineSemaphoreSubmitInfo>::ManagedStructure<VkTimelineSemaphoreSubmitInfo>;
};

template <>
class Managed<VkTimelineSemaphoreSubmitInfoKHR>
    : public detail::ManagedStructure<VkTimelineSemaphoreSubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkTimelineSemaphoreSubmitInfoKHR>::ManagedStructure<VkTimelineSemaphoreSubmitInfoKHR>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkTraceRaysIndirectCommandKHR>
    : public detail::ManagedStructure<VkTraceRaysIndirectCommandKHR>
{
public:
    using detail::ManagedStructure<VkTraceRaysIndirectCommandKHR>::ManagedStructure<VkTraceRaysIndirectCommandKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkTransformMatrixKHR>
    : public detail::ManagedStructure<VkTransformMatrixKHR>
{
public:
    using detail::ManagedStructure<VkTransformMatrixKHR>::ManagedStructure<VkTransformMatrixKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkTransformMatrixNV>
    : public detail::ManagedStructure<VkTransformMatrixNV>
{
public:
    using detail::ManagedStructure<VkTransformMatrixNV>::ManagedStructure<VkTransformMatrixNV>;
};

template <>
class Managed<VkValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkValidationCacheCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkValidationCacheCreateInfoEXT>::ManagedStructure<VkValidationCacheCreateInfoEXT>;
};

template <>
class Managed<VkValidationFeaturesEXT>
    : public detail::ManagedStructure<VkValidationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkValidationFeaturesEXT>::ManagedStructure<VkValidationFeaturesEXT>;
};

template <>
class Managed<VkValidationFlagsEXT>
    : public detail::ManagedStructure<VkValidationFlagsEXT>
{
public:
    using detail::ManagedStructure<VkValidationFlagsEXT>::ManagedStructure<VkValidationFlagsEXT>;
};

template <>
class Managed<VkVertexInputAttributeDescription>
    : public detail::ManagedStructure<VkVertexInputAttributeDescription>
{
public:
    using detail::ManagedStructure<VkVertexInputAttributeDescription>::ManagedStructure<VkVertexInputAttributeDescription>;
};

template <>
class Managed<VkVertexInputBindingDescription>
    : public detail::ManagedStructure<VkVertexInputBindingDescription>
{
public:
    using detail::ManagedStructure<VkVertexInputBindingDescription>::ManagedStructure<VkVertexInputBindingDescription>;
};

template <>
class Managed<VkVertexInputBindingDivisorDescriptionEXT>
    : public detail::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>
{
public:
    using detail::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>;
};

#ifdef VK_USE_PLATFORM_VI_NN
template <>
class Managed<VkViSurfaceCreateInfoNN>
    : public detail::ManagedStructure<VkViSurfaceCreateInfoNN>
{
public:
    using detail::ManagedStructure<VkViSurfaceCreateInfoNN>::ManagedStructure<VkViSurfaceCreateInfoNN>;
};
#endif // VK_USE_PLATFORM_VI_NN

template <>
class Managed<VkViewport>
    : public detail::ManagedStructure<VkViewport>
{
public:
    using detail::ManagedStructure<VkViewport>::ManagedStructure<VkViewport>;
};

template <>
class Managed<VkViewportSwizzleNV>
    : public detail::ManagedStructure<VkViewportSwizzleNV>
{
public:
    using detail::ManagedStructure<VkViewportSwizzleNV>::ManagedStructure<VkViewportSwizzleNV>;
};

template <>
class Managed<VkViewportWScalingNV>
    : public detail::ManagedStructure<VkViewportWScalingNV>
{
public:
    using detail::ManagedStructure<VkViewportWScalingNV>::ManagedStructure<VkViewportWScalingNV>;
};

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
class Managed<VkWaylandSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkWaylandSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkWaylandSurfaceCreateInfoKHR>::ManagedStructure<VkWaylandSurfaceCreateInfoKHR>;
};
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32KeyedMutexAcquireReleaseInfoKHR>
    : public detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoKHR>
{
public:
    using detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoKHR>::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32KeyedMutexAcquireReleaseInfoNV>
    : public detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoNV>
{
public:
    using detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoNV>::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoNV>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32SurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkWin32SurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkWin32SurfaceCreateInfoKHR>::ManagedStructure<VkWin32SurfaceCreateInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkWriteDescriptorSet>
    : public detail::ManagedStructure<VkWriteDescriptorSet>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSet>::ManagedStructure<VkWriteDescriptorSet>;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkWriteDescriptorSetAccelerationStructureKHR>
    : public detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkWriteDescriptorSetAccelerationStructureNV>
    : public detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureNV>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureNV>::ManagedStructure<VkWriteDescriptorSetAccelerationStructureNV>;
};

template <>
class Managed<VkWriteDescriptorSetInlineUniformBlockEXT>
    : public detail::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>;
};

template <>
class Managed<VkXYColorEXT>
    : public detail::ManagedStructure<VkXYColorEXT>
{
public:
    using detail::ManagedStructure<VkXYColorEXT>::ManagedStructure<VkXYColorEXT>;
};

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
class Managed<VkXcbSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkXcbSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkXcbSurfaceCreateInfoKHR>::ManagedStructure<VkXcbSurfaceCreateInfoKHR>;
};
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
class Managed<VkXlibSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkXlibSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkXlibSurfaceCreateInfoKHR>::ManagedStructure<VkXlibSurfaceCreateInfoKHR>;
};
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace vk
} // namespace gfx
} // namespace dst
