
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

#ifdef
template <>
class Managed<VkAabbPositionsNV>
    : public detail::ManagedStructure<VkAabbPositionsNV>
{
public:
    using detail::ManagedStructure<VkAabbPositionsNV>::ManagedStructure<VkAabbPositionsNV>;
};
#endif //

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

#ifdef
template <>
class Managed<VkAccelerationStructureCreateInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureCreateInfoNV>::ManagedStructure<VkAccelerationStructureCreateInfoNV>;
};
#endif //

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

#ifdef
template <>
class Managed<VkAccelerationStructureInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInfoNV>::ManagedStructure<VkAccelerationStructureInfoNV>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureInstanceKHR>
    : public detail::ManagedStructure<VkAccelerationStructureInstanceKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInstanceKHR>::ManagedStructure<VkAccelerationStructureInstanceKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkAccelerationStructureInstanceNV>
    : public detail::ManagedStructure<VkAccelerationStructureInstanceNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInstanceNV>::ManagedStructure<VkAccelerationStructureInstanceNV>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureVersionKHR>
    : public detail::ManagedStructure<VkAccelerationStructureVersionKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureVersionKHR>::ManagedStructure<VkAccelerationStructureVersionKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkAcquireNextImageInfoKHR>
    : public detail::ManagedStructure<VkAcquireNextImageInfoKHR>
{
public:
    using detail::ManagedStructure<VkAcquireNextImageInfoKHR>::ManagedStructure<VkAcquireNextImageInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkAcquireProfilingLockInfoKHR>
    : public detail::ManagedStructure<VkAcquireProfilingLockInfoKHR>
{
public:
    using detail::ManagedStructure<VkAcquireProfilingLockInfoKHR>::ManagedStructure<VkAcquireProfilingLockInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkAllocationCallbacks>
    : public detail::ManagedStructure<VkAllocationCallbacks>
{
public:
    using detail::ManagedStructure<VkAllocationCallbacks>::ManagedStructure<VkAllocationCallbacks>;
};
#endif //

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

#ifdef
template <>
class Managed<VkApplicationInfo>
    : public detail::ManagedStructure<VkApplicationInfo>
{
public:
    using detail::ManagedStructure<VkApplicationInfo>::ManagedStructure<VkApplicationInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentDescription>
    : public detail::ManagedStructure<VkAttachmentDescription>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription>::ManagedStructure<VkAttachmentDescription>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentDescription2>
    : public detail::ManagedStructure<VkAttachmentDescription2>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription2>::ManagedStructure<VkAttachmentDescription2>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentDescription2KHR>
    : public detail::ManagedStructure<VkAttachmentDescription2KHR>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription2KHR>::ManagedStructure<VkAttachmentDescription2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentDescriptionStencilLayout>
    : public detail::ManagedStructure<VkAttachmentDescriptionStencilLayout>
{
public:
    using detail::ManagedStructure<VkAttachmentDescriptionStencilLayout>::ManagedStructure<VkAttachmentDescriptionStencilLayout>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentDescriptionStencilLayoutKHR>
    : public detail::ManagedStructure<VkAttachmentDescriptionStencilLayoutKHR>
{
public:
    using detail::ManagedStructure<VkAttachmentDescriptionStencilLayoutKHR>::ManagedStructure<VkAttachmentDescriptionStencilLayoutKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentReference>
    : public detail::ManagedStructure<VkAttachmentReference>
{
public:
    using detail::ManagedStructure<VkAttachmentReference>::ManagedStructure<VkAttachmentReference>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentReference2>
    : public detail::ManagedStructure<VkAttachmentReference2>
{
public:
    using detail::ManagedStructure<VkAttachmentReference2>::ManagedStructure<VkAttachmentReference2>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentReference2KHR>
    : public detail::ManagedStructure<VkAttachmentReference2KHR>
{
public:
    using detail::ManagedStructure<VkAttachmentReference2KHR>::ManagedStructure<VkAttachmentReference2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentReferenceStencilLayout>
    : public detail::ManagedStructure<VkAttachmentReferenceStencilLayout>
{
public:
    using detail::ManagedStructure<VkAttachmentReferenceStencilLayout>::ManagedStructure<VkAttachmentReferenceStencilLayout>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentReferenceStencilLayoutKHR>
    : public detail::ManagedStructure<VkAttachmentReferenceStencilLayoutKHR>
{
public:
    using detail::ManagedStructure<VkAttachmentReferenceStencilLayoutKHR>::ManagedStructure<VkAttachmentReferenceStencilLayoutKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkAttachmentSampleLocationsEXT>
    : public detail::ManagedStructure<VkAttachmentSampleLocationsEXT>
{
public:
    using detail::ManagedStructure<VkAttachmentSampleLocationsEXT>::ManagedStructure<VkAttachmentSampleLocationsEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkBaseInStructure>
    : public detail::ManagedStructure<VkBaseInStructure>
{
public:
    using detail::ManagedStructure<VkBaseInStructure>::ManagedStructure<VkBaseInStructure>;
};
#endif //

#ifdef
template <>
class Managed<VkBaseOutStructure>
    : public detail::ManagedStructure<VkBaseOutStructure>
{
public:
    using detail::ManagedStructure<VkBaseOutStructure>::ManagedStructure<VkBaseOutStructure>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkBindAccelerationStructureMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkBindAccelerationStructureMemoryInfoNV>
    : public detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoNV>
{
public:
    using detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoNV>::ManagedStructure<VkBindAccelerationStructureMemoryInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkBindBufferMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBindBufferMemoryDeviceGroupInfoKHR>
    : public detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfoKHR>::ManagedStructure<VkBindBufferMemoryDeviceGroupInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBindBufferMemoryInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryInfo>::ManagedStructure<VkBindBufferMemoryInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBindBufferMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindBufferMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryInfoKHR>::ManagedStructure<VkBindBufferMemoryInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBindImageMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBindImageMemoryDeviceGroupInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfoKHR>::ManagedStructure<VkBindImageMemoryDeviceGroupInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBindImageMemoryInfo>
    : public detail::ManagedStructure<VkBindImageMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryInfo>::ManagedStructure<VkBindImageMemoryInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBindImageMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryInfoKHR>::ManagedStructure<VkBindImageMemoryInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBindImageMemorySwapchainInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBindImagePlaneMemoryInfo>
    : public detail::ManagedStructure<VkBindImagePlaneMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindImagePlaneMemoryInfo>::ManagedStructure<VkBindImagePlaneMemoryInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBindImagePlaneMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindImagePlaneMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImagePlaneMemoryInfoKHR>::ManagedStructure<VkBindImagePlaneMemoryInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBindIndexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindIndexBufferIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindIndexBufferIndirectCommandNV>::ManagedStructure<VkBindIndexBufferIndirectCommandNV>;
};
#endif //

#ifdef
template <>
class Managed<VkBindShaderGroupIndirectCommandNV>
    : public detail::ManagedStructure<VkBindShaderGroupIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindShaderGroupIndirectCommandNV>::ManagedStructure<VkBindShaderGroupIndirectCommandNV>;
};
#endif //

#ifdef
template <>
class Managed<VkBindSparseInfo>
    : public detail::ManagedStructure<VkBindSparseInfo>
{
public:
    using detail::ManagedStructure<VkBindSparseInfo>::ManagedStructure<VkBindSparseInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBindVertexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindVertexBufferIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindVertexBufferIndirectCommandNV>::ManagedStructure<VkBindVertexBufferIndirectCommandNV>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferCopy>
    : public detail::ManagedStructure<VkBufferCopy>
{
public:
    using detail::ManagedStructure<VkBufferCopy>::ManagedStructure<VkBufferCopy>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferCreateInfo>
    : public detail::ManagedStructure<VkBufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferCreateInfo>::ManagedStructure<VkBufferCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferDeviceAddressCreateInfoEXT>
    : public detail::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferDeviceAddressInfo>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfo>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressInfo>::ManagedStructure<VkBufferDeviceAddressInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferDeviceAddressInfoEXT>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfoEXT>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressInfoEXT>::ManagedStructure<VkBufferDeviceAddressInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferDeviceAddressInfoKHR>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfoKHR>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressInfoKHR>::ManagedStructure<VkBufferDeviceAddressInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferImageCopy>
    : public detail::ManagedStructure<VkBufferImageCopy>
{
public:
    using detail::ManagedStructure<VkBufferImageCopy>::ManagedStructure<VkBufferImageCopy>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferMemoryBarrier>
    : public detail::ManagedStructure<VkBufferMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkBufferMemoryBarrier>::ManagedStructure<VkBufferMemoryBarrier>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkBufferMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkBufferMemoryRequirementsInfo2>::ManagedStructure<VkBufferMemoryRequirementsInfo2>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkBufferMemoryRequirementsInfo2KHR>
{
public:
    using detail::ManagedStructure<VkBufferMemoryRequirementsInfo2KHR>::ManagedStructure<VkBufferMemoryRequirementsInfo2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferOpaqueCaptureAddressCreateInfo>
    : public detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferOpaqueCaptureAddressCreateInfoKHR>
    : public detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfoKHR>::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkBufferViewCreateInfo>
    : public detail::ManagedStructure<VkBufferViewCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferViewCreateInfo>::ManagedStructure<VkBufferViewCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkCalibratedTimestampInfoEXT>
    : public detail::ManagedStructure<VkCalibratedTimestampInfoEXT>
{
public:
    using detail::ManagedStructure<VkCalibratedTimestampInfoEXT>::ManagedStructure<VkCalibratedTimestampInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkCheckpointDataNV>
    : public detail::ManagedStructure<VkCheckpointDataNV>
{
public:
    using detail::ManagedStructure<VkCheckpointDataNV>::ManagedStructure<VkCheckpointDataNV>;
};
#endif //

#ifdef
template <>
class Managed<VkClearAttachment>
    : public detail::ManagedStructure<VkClearAttachment>
{
public:
    using detail::ManagedStructure<VkClearAttachment>::ManagedStructure<VkClearAttachment>;
};
#endif //

#ifdef
template <>
class Managed<VkClearColorValue>
    : public detail::ManagedStructure<VkClearColorValue>
{
public:
    using detail::ManagedStructure<VkClearColorValue>::ManagedStructure<VkClearColorValue>;
};
#endif //

#ifdef
template <>
class Managed<VkClearDepthStencilValue>
    : public detail::ManagedStructure<VkClearDepthStencilValue>
{
public:
    using detail::ManagedStructure<VkClearDepthStencilValue>::ManagedStructure<VkClearDepthStencilValue>;
};
#endif //

#ifdef
template <>
class Managed<VkClearRect>
    : public detail::ManagedStructure<VkClearRect>
{
public:
    using detail::ManagedStructure<VkClearRect>::ManagedStructure<VkClearRect>;
};
#endif //

#ifdef
template <>
class Managed<VkClearValue>
    : public detail::ManagedStructure<VkClearValue>
{
public:
    using detail::ManagedStructure<VkClearValue>::ManagedStructure<VkClearValue>;
};
#endif //

#ifdef
template <>
class Managed<VkCoarseSampleLocationNV>
    : public detail::ManagedStructure<VkCoarseSampleLocationNV>
{
public:
    using detail::ManagedStructure<VkCoarseSampleLocationNV>::ManagedStructure<VkCoarseSampleLocationNV>;
};
#endif //

#ifdef
template <>
class Managed<VkCoarseSampleOrderCustomNV>
    : public detail::ManagedStructure<VkCoarseSampleOrderCustomNV>
{
public:
    using detail::ManagedStructure<VkCoarseSampleOrderCustomNV>::ManagedStructure<VkCoarseSampleOrderCustomNV>;
};
#endif //

#ifdef
template <>
class Managed<VkCommandBufferAllocateInfo>
    : public detail::ManagedStructure<VkCommandBufferAllocateInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferAllocateInfo>::ManagedStructure<VkCommandBufferAllocateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkCommandBufferBeginInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferBeginInfo>::ManagedStructure<VkCommandBufferBeginInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
    : public detail::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkCommandBufferInheritanceInfo>
    : public detail::ManagedStructure<VkCommandBufferInheritanceInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceInfo>::ManagedStructure<VkCommandBufferInheritanceInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
    : public detail::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>;
};
#endif //

#ifdef
template <>
class Managed<VkCommandPoolCreateInfo>
    : public detail::ManagedStructure<VkCommandPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkCommandPoolCreateInfo>::ManagedStructure<VkCommandPoolCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkComponentMapping>
    : public detail::ManagedStructure<VkComponentMapping>
{
public:
    using detail::ManagedStructure<VkComponentMapping>::ManagedStructure<VkComponentMapping>;
};
#endif //

#ifdef
template <>
class Managed<VkComputePipelineCreateInfo>
    : public detail::ManagedStructure<VkComputePipelineCreateInfo>
{
public:
    using detail::ManagedStructure<VkComputePipelineCreateInfo>::ManagedStructure<VkComputePipelineCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkConditionalRenderingBeginInfoEXT>
    : public detail::ManagedStructure<VkConditionalRenderingBeginInfoEXT>
{
public:
    using detail::ManagedStructure<VkConditionalRenderingBeginInfoEXT>::ManagedStructure<VkConditionalRenderingBeginInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkConformanceVersion>
    : public detail::ManagedStructure<VkConformanceVersion>
{
public:
    using detail::ManagedStructure<VkConformanceVersion>::ManagedStructure<VkConformanceVersion>;
};
#endif //

#ifdef
template <>
class Managed<VkConformanceVersionKHR>
    : public detail::ManagedStructure<VkConformanceVersionKHR>
{
public:
    using detail::ManagedStructure<VkConformanceVersionKHR>::ManagedStructure<VkConformanceVersionKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkCooperativeMatrixPropertiesNV>
{
public:
    using detail::ManagedStructure<VkCooperativeMatrixPropertiesNV>::ManagedStructure<VkCooperativeMatrixPropertiesNV>;
};
#endif //

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

#ifdef
template <>
class Managed<VkCopyDescriptorSet>
    : public detail::ManagedStructure<VkCopyDescriptorSet>
{
public:
    using detail::ManagedStructure<VkCopyDescriptorSet>::ManagedStructure<VkCopyDescriptorSet>;
};
#endif //

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

#ifdef
template <>
class Managed<VkDebugMarkerMarkerInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerMarkerInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerMarkerInfoEXT>::ManagedStructure<VkDebugMarkerMarkerInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugMarkerObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugMarkerObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugReportCallbackCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugUtilsLabelEXT>
    : public detail::ManagedStructure<VkDebugUtilsLabelEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsLabelEXT>::ManagedStructure<VkDebugUtilsLabelEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugUtilsMessengerCallbackDataEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugUtilsMessengerCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugUtilsObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDebugUtilsObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDedicatedAllocationBufferCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkDedicatedAllocationImageCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkDedicatedAllocationMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeferredOperationInfoKHR>
    : public detail::ManagedStructure<VkDeferredOperationInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeferredOperationInfoKHR>::ManagedStructure<VkDeferredOperationInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkDescriptorBufferInfo>
    : public detail::ManagedStructure<VkDescriptorBufferInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorBufferInfo>::ManagedStructure<VkDescriptorBufferInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorImageInfo>
    : public detail::ManagedStructure<VkDescriptorImageInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorImageInfo>::ManagedStructure<VkDescriptorImageInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorPoolCreateInfo>
    : public detail::ManagedStructure<VkDescriptorPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolCreateInfo>::ManagedStructure<VkDescriptorPoolCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorPoolSize>
    : public detail::ManagedStructure<VkDescriptorPoolSize>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolSize>::ManagedStructure<VkDescriptorPoolSize>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetAllocateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetAllocateInfo>::ManagedStructure<VkDescriptorSetAllocateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetLayoutBinding>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBinding>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBinding>::ManagedStructure<VkDescriptorSetLayoutBinding>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetLayoutBindingFlagsCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetLayoutCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutCreateInfo>::ManagedStructure<VkDescriptorSetLayoutCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetLayoutSupport>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutSupport>::ManagedStructure<VkDescriptorSetLayoutSupport>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetLayoutSupportKHR>
    : public detail::ManagedStructure<VkDescriptorSetLayoutSupportKHR>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutSupportKHR>::ManagedStructure<VkDescriptorSetLayoutSupportKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetVariableDescriptorCountAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetVariableDescriptorCountLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorUpdateTemplateCreateInfo>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorUpdateTemplateCreateInfoKHR>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfoKHR>::ManagedStructure<VkDescriptorUpdateTemplateCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorUpdateTemplateEntry>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateEntry>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateEntry>::ManagedStructure<VkDescriptorUpdateTemplateEntry>;
};
#endif //

#ifdef
template <>
class Managed<VkDescriptorUpdateTemplateEntryKHR>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateEntryKHR>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateEntryKHR>::ManagedStructure<VkDescriptorUpdateTemplateEntryKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceCreateInfo>::ManagedStructure<VkDeviceCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceDiagnosticsConfigCreateInfoNV>
    : public detail::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceEventInfoEXT>
    : public detail::ManagedStructure<VkDeviceEventInfoEXT>
{
public:
    using detail::ManagedStructure<VkDeviceEventInfoEXT>::ManagedStructure<VkDeviceEventInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupBindSparseInfo>
    : public detail::ManagedStructure<VkDeviceGroupBindSparseInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupBindSparseInfo>::ManagedStructure<VkDeviceGroupBindSparseInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupBindSparseInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupBindSparseInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupBindSparseInfoKHR>::ManagedStructure<VkDeviceGroupBindSparseInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupCommandBufferBeginInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfoKHR>::ManagedStructure<VkDeviceGroupCommandBufferBeginInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceGroupDeviceCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupDeviceCreateInfo>::ManagedStructure<VkDeviceGroupDeviceCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupDeviceCreateInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupDeviceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupDeviceCreateInfoKHR>::ManagedStructure<VkDeviceGroupDeviceCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupPresentCapabilitiesKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupPresentInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupPresentInfoKHR>::ManagedStructure<VkDeviceGroupPresentInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupRenderPassBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupRenderPassBeginInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfoKHR>::ManagedStructure<VkDeviceGroupRenderPassBeginInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupSubmitInfo>
    : public detail::ManagedStructure<VkDeviceGroupSubmitInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSubmitInfo>::ManagedStructure<VkDeviceGroupSubmitInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupSubmitInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupSubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSubmitInfoKHR>::ManagedStructure<VkDeviceGroupSubmitInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceGroupSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceMemoryOpaqueCaptureAddressInfo>
    : public detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>
    : public detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceMemoryOverallocationCreateInfoAMD>
    : public detail::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>;
};
#endif //

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

#ifdef
template <>
class Managed<VkDevicePrivateDataCreateInfoEXT>
    : public detail::ManagedStructure<VkDevicePrivateDataCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDevicePrivateDataCreateInfoEXT>::ManagedStructure<VkDevicePrivateDataCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceQueueCreateInfo>
    : public detail::ManagedStructure<VkDeviceQueueCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceQueueCreateInfo>::ManagedStructure<VkDeviceQueueCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceQueueGlobalPriorityCreateInfoEXT>
    : public detail::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDeviceQueueInfo2>
    : public detail::ManagedStructure<VkDeviceQueueInfo2>
{
public:
    using detail::ManagedStructure<VkDeviceQueueInfo2>::ManagedStructure<VkDeviceQueueInfo2>;
};
#endif //

#ifdef
template <>
class Managed<VkDispatchIndirectCommand>
    : public detail::ManagedStructure<VkDispatchIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDispatchIndirectCommand>::ManagedStructure<VkDispatchIndirectCommand>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayEventInfoEXT>
    : public detail::ManagedStructure<VkDisplayEventInfoEXT>
{
public:
    using detail::ManagedStructure<VkDisplayEventInfoEXT>::ManagedStructure<VkDisplayEventInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayModeCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplayModeCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeCreateInfoKHR>::ManagedStructure<VkDisplayModeCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayModeParametersKHR>
    : public detail::ManagedStructure<VkDisplayModeParametersKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeParametersKHR>::ManagedStructure<VkDisplayModeParametersKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayModeProperties2KHR>
    : public detail::ManagedStructure<VkDisplayModeProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeProperties2KHR>::ManagedStructure<VkDisplayModeProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayModePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayModePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModePropertiesKHR>::ManagedStructure<VkDisplayModePropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
    : public detail::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
{
public:
    using detail::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPlaneCapabilities2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilities2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneCapabilities2KHR>::ManagedStructure<VkDisplayPlaneCapabilities2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPlaneCapabilitiesKHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPlaneInfo2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneInfo2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneInfo2KHR>::ManagedStructure<VkDisplayPlaneInfo2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPlaneProperties2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneProperties2KHR>::ManagedStructure<VkDisplayPlaneProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPlanePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPlanePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlanePropertiesKHR>::ManagedStructure<VkDisplayPlanePropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPowerInfoEXT>
    : public detail::ManagedStructure<VkDisplayPowerInfoEXT>
{
public:
    using detail::ManagedStructure<VkDisplayPowerInfoEXT>::ManagedStructure<VkDisplayPowerInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPresentInfoKHR>
    : public detail::ManagedStructure<VkDisplayPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPresentInfoKHR>::ManagedStructure<VkDisplayPresentInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayProperties2KHR>
    : public detail::ManagedStructure<VkDisplayProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayProperties2KHR>::ManagedStructure<VkDisplayProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplayPropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPropertiesKHR>::ManagedStructure<VkDisplayPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDisplaySurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkDrawIndexedIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndexedIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDrawIndexedIndirectCommand>::ManagedStructure<VkDrawIndexedIndirectCommand>;
};
#endif //

#ifdef
template <>
class Managed<VkDrawIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDrawIndirectCommand>::ManagedStructure<VkDrawIndirectCommand>;
};
#endif //

#ifdef
template <>
class Managed<VkDrawMeshTasksIndirectCommandNV>
    : public detail::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>;
};
#endif //

#ifdef
template <>
class Managed<VkDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkDrmFormatModifierPropertiesEXT>::ManagedStructure<VkDrmFormatModifierPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkDrmFormatModifierPropertiesListEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>
{
public:
    using detail::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkEventCreateInfo>
    : public detail::ManagedStructure<VkEventCreateInfo>
{
public:
    using detail::ManagedStructure<VkEventCreateInfo>::ManagedStructure<VkEventCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkExportFenceCreateInfo>
    : public detail::ManagedStructure<VkExportFenceCreateInfo>
{
public:
    using detail::ManagedStructure<VkExportFenceCreateInfo>::ManagedStructure<VkExportFenceCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkExportFenceCreateInfoKHR>
    : public detail::ManagedStructure<VkExportFenceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportFenceCreateInfoKHR>::ManagedStructure<VkExportFenceCreateInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportFenceWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportFenceWin32HandleInfoKHR>::ManagedStructure<VkExportFenceWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkExportMemoryAllocateInfo>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfo>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfo>::ManagedStructure<VkExportMemoryAllocateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkExportMemoryAllocateInfoKHR>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfoKHR>::ManagedStructure<VkExportMemoryAllocateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkExportMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfoNV>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfoNV>::ManagedStructure<VkExportMemoryAllocateInfoNV>;
};
#endif //

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

#ifdef
template <>
class Managed<VkExportSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkExportSemaphoreCreateInfo>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreCreateInfo>::ManagedStructure<VkExportSemaphoreCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkExportSemaphoreCreateInfoKHR>
    : public detail::ManagedStructure<VkExportSemaphoreCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreCreateInfoKHR>::ManagedStructure<VkExportSemaphoreCreateInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkExtensionProperties>
    : public detail::ManagedStructure<VkExtensionProperties>
{
public:
    using detail::ManagedStructure<VkExtensionProperties>::ManagedStructure<VkExtensionProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkExtent2D>
    : public detail::ManagedStructure<VkExtent2D>
{
public:
    using detail::ManagedStructure<VkExtent2D>::ManagedStructure<VkExtent2D>;
};
#endif //

#ifdef
template <>
class Managed<VkExtent3D>
    : public detail::ManagedStructure<VkExtent3D>
{
public:
    using detail::ManagedStructure<VkExtent3D>::ManagedStructure<VkExtent3D>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalBufferProperties>
    : public detail::ManagedStructure<VkExternalBufferProperties>
{
public:
    using detail::ManagedStructure<VkExternalBufferProperties>::ManagedStructure<VkExternalBufferProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalBufferPropertiesKHR>
    : public detail::ManagedStructure<VkExternalBufferPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalBufferPropertiesKHR>::ManagedStructure<VkExternalBufferPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalFenceProperties>
    : public detail::ManagedStructure<VkExternalFenceProperties>
{
public:
    using detail::ManagedStructure<VkExternalFenceProperties>::ManagedStructure<VkExternalFenceProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalFencePropertiesKHR>
    : public detail::ManagedStructure<VkExternalFencePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalFencePropertiesKHR>::ManagedStructure<VkExternalFencePropertiesKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkExternalFormatANDROID>
    : public detail::ManagedStructure<VkExternalFormatANDROID>
{
public:
    using detail::ManagedStructure<VkExternalFormatANDROID>::ManagedStructure<VkExternalFormatANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef
template <>
class Managed<VkExternalImageFormatProperties>
    : public detail::ManagedStructure<VkExternalImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatProperties>::ManagedStructure<VkExternalImageFormatProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalImageFormatPropertiesKHR>
    : public detail::ManagedStructure<VkExternalImageFormatPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatPropertiesKHR>::ManagedStructure<VkExternalImageFormatPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalImageFormatPropertiesNV>
    : public detail::ManagedStructure<VkExternalImageFormatPropertiesNV>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatPropertiesNV>::ManagedStructure<VkExternalImageFormatPropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalMemoryBufferCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryBufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkExternalMemoryBufferCreateInfo>::ManagedStructure<VkExternalMemoryBufferCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalMemoryBufferCreateInfoKHR>
    : public detail::ManagedStructure<VkExternalMemoryBufferCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExternalMemoryBufferCreateInfoKHR>::ManagedStructure<VkExternalMemoryBufferCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalMemoryImageCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfo>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfo>::ManagedStructure<VkExternalMemoryImageCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalMemoryImageCreateInfoKHR>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfoKHR>::ManagedStructure<VkExternalMemoryImageCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalMemoryImageCreateInfoNV>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfoNV>::ManagedStructure<VkExternalMemoryImageCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalMemoryProperties>
    : public detail::ManagedStructure<VkExternalMemoryProperties>
{
public:
    using detail::ManagedStructure<VkExternalMemoryProperties>::ManagedStructure<VkExternalMemoryProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalMemoryPropertiesKHR>
    : public detail::ManagedStructure<VkExternalMemoryPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalMemoryPropertiesKHR>::ManagedStructure<VkExternalMemoryPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalSemaphoreProperties>
    : public detail::ManagedStructure<VkExternalSemaphoreProperties>
{
public:
    using detail::ManagedStructure<VkExternalSemaphoreProperties>::ManagedStructure<VkExternalSemaphoreProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkExternalSemaphorePropertiesKHR>
    : public detail::ManagedStructure<VkExternalSemaphorePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkExternalSemaphorePropertiesKHR>::ManagedStructure<VkExternalSemaphorePropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkFenceCreateInfo>
    : public detail::ManagedStructure<VkFenceCreateInfo>
{
public:
    using detail::ManagedStructure<VkFenceCreateInfo>::ManagedStructure<VkFenceCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkFenceGetFdInfoKHR>
    : public detail::ManagedStructure<VkFenceGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkFenceGetFdInfoKHR>::ManagedStructure<VkFenceGetFdInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkFenceGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkFenceGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkFenceGetWin32HandleInfoKHR>::ManagedStructure<VkFenceGetWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkFilterCubicImageViewImageFormatPropertiesEXT>
    : public detail::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkFormatProperties>
    : public detail::ManagedStructure<VkFormatProperties>
{
public:
    using detail::ManagedStructure<VkFormatProperties>::ManagedStructure<VkFormatProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkFormatProperties2>
    : public detail::ManagedStructure<VkFormatProperties2>
{
public:
    using detail::ManagedStructure<VkFormatProperties2>::ManagedStructure<VkFormatProperties2>;
};
#endif //

#ifdef
template <>
class Managed<VkFormatProperties2KHR>
    : public detail::ManagedStructure<VkFormatProperties2KHR>
{
public:
    using detail::ManagedStructure<VkFormatProperties2KHR>::ManagedStructure<VkFormatProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkFramebufferAttachmentImageInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentImageInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentImageInfo>::ManagedStructure<VkFramebufferAttachmentImageInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkFramebufferAttachmentImageInfoKHR>
    : public detail::ManagedStructure<VkFramebufferAttachmentImageInfoKHR>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentImageInfoKHR>::ManagedStructure<VkFramebufferAttachmentImageInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkFramebufferAttachmentsCreateInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentsCreateInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentsCreateInfo>::ManagedStructure<VkFramebufferAttachmentsCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkFramebufferAttachmentsCreateInfoKHR>
    : public detail::ManagedStructure<VkFramebufferAttachmentsCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentsCreateInfoKHR>::ManagedStructure<VkFramebufferAttachmentsCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkFramebufferCreateInfo>
    : public detail::ManagedStructure<VkFramebufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferCreateInfo>::ManagedStructure<VkFramebufferCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkFramebufferMixedSamplesCombinationNV>
    : public detail::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>
{
public:
    using detail::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGeneratedCommandsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsInfoNV>
{
public:
    using detail::ManagedStructure<VkGeneratedCommandsInfoNV>::ManagedStructure<VkGeneratedCommandsInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGeneratedCommandsMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>
{
public:
    using detail::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGeometryAABBNV>
    : public detail::ManagedStructure<VkGeometryAABBNV>
{
public:
    using detail::ManagedStructure<VkGeometryAABBNV>::ManagedStructure<VkGeometryAABBNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGeometryDataNV>
    : public detail::ManagedStructure<VkGeometryDataNV>
{
public:
    using detail::ManagedStructure<VkGeometryDataNV>::ManagedStructure<VkGeometryDataNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGeometryNV>
    : public detail::ManagedStructure<VkGeometryNV>
{
public:
    using detail::ManagedStructure<VkGeometryNV>::ManagedStructure<VkGeometryNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGeometryTrianglesNV>
    : public detail::ManagedStructure<VkGeometryTrianglesNV>
{
public:
    using detail::ManagedStructure<VkGeometryTrianglesNV>::ManagedStructure<VkGeometryTrianglesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGraphicsPipelineCreateInfo>
    : public detail::ManagedStructure<VkGraphicsPipelineCreateInfo>
{
public:
    using detail::ManagedStructure<VkGraphicsPipelineCreateInfo>::ManagedStructure<VkGraphicsPipelineCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkGraphicsPipelineShaderGroupsCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkGraphicsShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkHdrMetadataEXT>
    : public detail::ManagedStructure<VkHdrMetadataEXT>
{
public:
    using detail::ManagedStructure<VkHdrMetadataEXT>::ManagedStructure<VkHdrMetadataEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkHeadlessSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>;
};
#endif //

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
class Managed<VkIOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkIOSSurfaceCreateInfoMVK>
{
public:
    using detail::ManagedStructure<VkIOSSurfaceCreateInfoMVK>::ManagedStructure<VkIOSSurfaceCreateInfoMVK>;
};
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef
template <>
class Managed<VkImageBlit>
    : public detail::ManagedStructure<VkImageBlit>
{
public:
    using detail::ManagedStructure<VkImageBlit>::ManagedStructure<VkImageBlit>;
};
#endif //

#ifdef
template <>
class Managed<VkImageCopy>
    : public detail::ManagedStructure<VkImageCopy>
{
public:
    using detail::ManagedStructure<VkImageCopy>::ManagedStructure<VkImageCopy>;
};
#endif //

#ifdef
template <>
class Managed<VkImageCreateInfo>
    : public detail::ManagedStructure<VkImageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageCreateInfo>::ManagedStructure<VkImageCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkImageDrmFormatModifierExplicitCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkImageDrmFormatModifierListCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkImageDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkImageFormatListCreateInfo>
    : public detail::ManagedStructure<VkImageFormatListCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageFormatListCreateInfo>::ManagedStructure<VkImageFormatListCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkImageFormatListCreateInfoKHR>
    : public detail::ManagedStructure<VkImageFormatListCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkImageFormatListCreateInfoKHR>::ManagedStructure<VkImageFormatListCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkImageFormatProperties>
    : public detail::ManagedStructure<VkImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties>::ManagedStructure<VkImageFormatProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkImageFormatProperties2>
    : public detail::ManagedStructure<VkImageFormatProperties2>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties2>::ManagedStructure<VkImageFormatProperties2>;
};
#endif //

#ifdef
template <>
class Managed<VkImageFormatProperties2KHR>
    : public detail::ManagedStructure<VkImageFormatProperties2KHR>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties2KHR>::ManagedStructure<VkImageFormatProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkImageMemoryBarrier>
    : public detail::ManagedStructure<VkImageMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkImageMemoryBarrier>::ManagedStructure<VkImageMemoryBarrier>;
};
#endif //

#ifdef
template <>
class Managed<VkImageMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkImageMemoryRequirementsInfo2>::ManagedStructure<VkImageMemoryRequirementsInfo2>;
};
#endif //

#ifdef
template <>
class Managed<VkImageMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkImageMemoryRequirementsInfo2KHR>
{
public:
    using detail::ManagedStructure<VkImageMemoryRequirementsInfo2KHR>::ManagedStructure<VkImageMemoryRequirementsInfo2KHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
class Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>
    : public detail::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>
{
public:
    using detail::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>;
};
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef
template <>
class Managed<VkImagePlaneMemoryRequirementsInfo>
    : public detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>
{
public:
    using detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkImagePlaneMemoryRequirementsInfoKHR>
    : public detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfoKHR>
{
public:
    using detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfoKHR>::ManagedStructure<VkImagePlaneMemoryRequirementsInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkImageResolve>
    : public detail::ManagedStructure<VkImageResolve>
{
public:
    using detail::ManagedStructure<VkImageResolve>::ManagedStructure<VkImageResolve>;
};
#endif //

#ifdef
template <>
class Managed<VkImageSparseMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>;
};
#endif //

#ifdef
template <>
class Managed<VkImageSparseMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2KHR>
{
public:
    using detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2KHR>::ManagedStructure<VkImageSparseMemoryRequirementsInfo2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkImageStencilUsageCreateInfo>
    : public detail::ManagedStructure<VkImageStencilUsageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageStencilUsageCreateInfo>::ManagedStructure<VkImageStencilUsageCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkImageStencilUsageCreateInfoEXT>
    : public detail::ManagedStructure<VkImageStencilUsageCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageStencilUsageCreateInfoEXT>::ManagedStructure<VkImageStencilUsageCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkImageSubresource>
    : public detail::ManagedStructure<VkImageSubresource>
{
public:
    using detail::ManagedStructure<VkImageSubresource>::ManagedStructure<VkImageSubresource>;
};
#endif //

#ifdef
template <>
class Managed<VkImageSubresourceLayers>
    : public detail::ManagedStructure<VkImageSubresourceLayers>
{
public:
    using detail::ManagedStructure<VkImageSubresourceLayers>::ManagedStructure<VkImageSubresourceLayers>;
};
#endif //

#ifdef
template <>
class Managed<VkImageSubresourceRange>
    : public detail::ManagedStructure<VkImageSubresourceRange>
{
public:
    using detail::ManagedStructure<VkImageSubresourceRange>::ManagedStructure<VkImageSubresourceRange>;
};
#endif //

#ifdef
template <>
class Managed<VkImageSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkImageSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkImageSwapchainCreateInfoKHR>::ManagedStructure<VkImageSwapchainCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkImageViewASTCDecodeModeEXT>
    : public detail::ManagedStructure<VkImageViewASTCDecodeModeEXT>
{
public:
    using detail::ManagedStructure<VkImageViewASTCDecodeModeEXT>::ManagedStructure<VkImageViewASTCDecodeModeEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkImageViewAddressPropertiesNVX>
    : public detail::ManagedStructure<VkImageViewAddressPropertiesNVX>
{
public:
    using detail::ManagedStructure<VkImageViewAddressPropertiesNVX>::ManagedStructure<VkImageViewAddressPropertiesNVX>;
};
#endif //

#ifdef
template <>
class Managed<VkImageViewCreateInfo>
    : public detail::ManagedStructure<VkImageViewCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageViewCreateInfo>::ManagedStructure<VkImageViewCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkImageViewHandleInfoNVX>
    : public detail::ManagedStructure<VkImageViewHandleInfoNVX>
{
public:
    using detail::ManagedStructure<VkImageViewHandleInfoNVX>::ManagedStructure<VkImageViewHandleInfoNVX>;
};
#endif //

#ifdef
template <>
class Managed<VkImageViewUsageCreateInfo>
    : public detail::ManagedStructure<VkImageViewUsageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageViewUsageCreateInfo>::ManagedStructure<VkImageViewUsageCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkImageViewUsageCreateInfoKHR>
    : public detail::ManagedStructure<VkImageViewUsageCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkImageViewUsageCreateInfoKHR>::ManagedStructure<VkImageViewUsageCreateInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkImportAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>
{
public:
    using detail::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef
template <>
class Managed<VkImportFenceFdInfoKHR>
    : public detail::ManagedStructure<VkImportFenceFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportFenceFdInfoKHR>::ManagedStructure<VkImportFenceFdInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportFenceWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportFenceWin32HandleInfoKHR>::ManagedStructure<VkImportFenceWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkImportMemoryFdInfoKHR>
    : public detail::ManagedStructure<VkImportMemoryFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportMemoryFdInfoKHR>::ManagedStructure<VkImportMemoryFdInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkImportMemoryHostPointerInfoEXT>
    : public detail::ManagedStructure<VkImportMemoryHostPointerInfoEXT>
{
public:
    using detail::ManagedStructure<VkImportMemoryHostPointerInfoEXT>::ManagedStructure<VkImportMemoryHostPointerInfoEXT>;
};
#endif //

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

#ifdef
template <>
class Managed<VkImportSemaphoreFdInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportSemaphoreFdInfoKHR>::ManagedStructure<VkImportSemaphoreFdInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkIndirectCommandsLayoutCreateInfoNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkIndirectCommandsLayoutTokenNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutTokenNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsLayoutTokenNV>::ManagedStructure<VkIndirectCommandsLayoutTokenNV>;
};
#endif //

#ifdef
template <>
class Managed<VkIndirectCommandsStreamNV>
    : public detail::ManagedStructure<VkIndirectCommandsStreamNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsStreamNV>::ManagedStructure<VkIndirectCommandsStreamNV>;
};
#endif //

#ifdef
template <>
class Managed<VkInitializePerformanceApiInfoINTEL>
    : public detail::ManagedStructure<VkInitializePerformanceApiInfoINTEL>
{
public:
    using detail::ManagedStructure<VkInitializePerformanceApiInfoINTEL>::ManagedStructure<VkInitializePerformanceApiInfoINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkInputAttachmentAspectReference>
    : public detail::ManagedStructure<VkInputAttachmentAspectReference>
{
public:
    using detail::ManagedStructure<VkInputAttachmentAspectReference>::ManagedStructure<VkInputAttachmentAspectReference>;
};
#endif //

#ifdef
template <>
class Managed<VkInputAttachmentAspectReferenceKHR>
    : public detail::ManagedStructure<VkInputAttachmentAspectReferenceKHR>
{
public:
    using detail::ManagedStructure<VkInputAttachmentAspectReferenceKHR>::ManagedStructure<VkInputAttachmentAspectReferenceKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkInstanceCreateInfo>
    : public detail::ManagedStructure<VkInstanceCreateInfo>
{
public:
    using detail::ManagedStructure<VkInstanceCreateInfo>::ManagedStructure<VkInstanceCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkLayerProperties>
    : public detail::ManagedStructure<VkLayerProperties>
{
public:
    using detail::ManagedStructure<VkLayerProperties>::ManagedStructure<VkLayerProperties>;
};
#endif //

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
class Managed<VkMacOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>
{
public:
    using detail::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>;
};
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef
template <>
class Managed<VkMappedMemoryRange>
    : public detail::ManagedStructure<VkMappedMemoryRange>
{
public:
    using detail::ManagedStructure<VkMappedMemoryRange>::ManagedStructure<VkMappedMemoryRange>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryAllocateFlagsInfo>
    : public detail::ManagedStructure<VkMemoryAllocateFlagsInfo>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateFlagsInfo>::ManagedStructure<VkMemoryAllocateFlagsInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryAllocateFlagsInfoKHR>
    : public detail::ManagedStructure<VkMemoryAllocateFlagsInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateFlagsInfoKHR>::ManagedStructure<VkMemoryAllocateFlagsInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryAllocateInfo>
    : public detail::ManagedStructure<VkMemoryAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateInfo>::ManagedStructure<VkMemoryAllocateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryBarrier>
    : public detail::ManagedStructure<VkMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkMemoryBarrier>::ManagedStructure<VkMemoryBarrier>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryDedicatedAllocateInfo>
    : public detail::ManagedStructure<VkMemoryDedicatedAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedAllocateInfo>::ManagedStructure<VkMemoryDedicatedAllocateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryDedicatedAllocateInfoKHR>
    : public detail::ManagedStructure<VkMemoryDedicatedAllocateInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedAllocateInfoKHR>::ManagedStructure<VkMemoryDedicatedAllocateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryDedicatedRequirements>
    : public detail::ManagedStructure<VkMemoryDedicatedRequirements>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedRequirements>::ManagedStructure<VkMemoryDedicatedRequirements>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryDedicatedRequirementsKHR>
    : public detail::ManagedStructure<VkMemoryDedicatedRequirementsKHR>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedRequirementsKHR>::ManagedStructure<VkMemoryDedicatedRequirementsKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryFdPropertiesKHR>
    : public detail::ManagedStructure<VkMemoryFdPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkMemoryFdPropertiesKHR>::ManagedStructure<VkMemoryFdPropertiesKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkMemoryGetAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>
{
public:
    using detail::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef
template <>
class Managed<VkMemoryGetFdInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryGetFdInfoKHR>::ManagedStructure<VkMemoryGetFdInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkMemoryGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkMemoryHeap>
    : public detail::ManagedStructure<VkMemoryHeap>
{
public:
    using detail::ManagedStructure<VkMemoryHeap>::ManagedStructure<VkMemoryHeap>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryHostPointerPropertiesEXT>
    : public detail::ManagedStructure<VkMemoryHostPointerPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkMemoryHostPointerPropertiesEXT>::ManagedStructure<VkMemoryHostPointerPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryOpaqueCaptureAddressAllocateInfo>
    : public detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>
    : public detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryPriorityAllocateInfoEXT>
    : public detail::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>
{
public:
    using detail::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryRequirements>
    : public detail::ManagedStructure<VkMemoryRequirements>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements>::ManagedStructure<VkMemoryRequirements>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryRequirements2>
    : public detail::ManagedStructure<VkMemoryRequirements2>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements2>::ManagedStructure<VkMemoryRequirements2>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryRequirements2KHR>
    : public detail::ManagedStructure<VkMemoryRequirements2KHR>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements2KHR>::ManagedStructure<VkMemoryRequirements2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkMemoryType>
    : public detail::ManagedStructure<VkMemoryType>
{
public:
    using detail::ManagedStructure<VkMemoryType>::ManagedStructure<VkMemoryType>;
};
#endif //

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

#ifdef
template <>
class Managed<VkMultisamplePropertiesEXT>
    : public detail::ManagedStructure<VkMultisamplePropertiesEXT>
{
public:
    using detail::ManagedStructure<VkMultisamplePropertiesEXT>::ManagedStructure<VkMultisamplePropertiesEXT>;
};
#endif //

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

#ifdef
template <>
class Managed<VkOffset2D>
    : public detail::ManagedStructure<VkOffset2D>
{
public:
    using detail::ManagedStructure<VkOffset2D>::ManagedStructure<VkOffset2D>;
};
#endif //

#ifdef
template <>
class Managed<VkOffset3D>
    : public detail::ManagedStructure<VkOffset3D>
{
public:
    using detail::ManagedStructure<VkOffset3D>::ManagedStructure<VkOffset3D>;
};
#endif //

#ifdef
template <>
class Managed<VkPastPresentationTimingGOOGLE>
    : public detail::ManagedStructure<VkPastPresentationTimingGOOGLE>
{
public:
    using detail::ManagedStructure<VkPastPresentationTimingGOOGLE>::ManagedStructure<VkPastPresentationTimingGOOGLE>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceConfigurationAcquireInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceCounterDescriptionKHR>
    : public detail::ManagedStructure<VkPerformanceCounterDescriptionKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterDescriptionKHR>::ManagedStructure<VkPerformanceCounterDescriptionKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceCounterKHR>
    : public detail::ManagedStructure<VkPerformanceCounterKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterKHR>::ManagedStructure<VkPerformanceCounterKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceCounterResultKHR>
    : public detail::ManagedStructure<VkPerformanceCounterResultKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterResultKHR>::ManagedStructure<VkPerformanceCounterResultKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceMarkerInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceMarkerInfoINTEL>::ManagedStructure<VkPerformanceMarkerInfoINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceOverrideInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceOverrideInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceOverrideInfoINTEL>::ManagedStructure<VkPerformanceOverrideInfoINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceQuerySubmitInfoKHR>
    : public detail::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceStreamMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceValueDataINTEL>
    : public detail::ManagedStructure<VkPerformanceValueDataINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceValueDataINTEL>::ManagedStructure<VkPerformanceValueDataINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkPerformanceValueINTEL>
    : public detail::ManagedStructure<VkPerformanceValueINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceValueINTEL>::ManagedStructure<VkPerformanceValueINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevice16BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevice16BitStorageFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevice16BitStorageFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice16BitStorageFeaturesKHR>::ManagedStructure<VkPhysicalDevice16BitStorageFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevice8BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevice8BitStorageFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevice8BitStorageFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice8BitStorageFeaturesKHR>::ManagedStructure<VkPhysicalDevice8BitStorageFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceASTCDecodeFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceBufferAddressFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferAddressFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferAddressFeaturesEXT>::ManagedStructure<VkPhysicalDeviceBufferAddressFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceCornerSampledImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceCustomBorderColorFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorFeaturesEXT>::ManagedStructure<VkPhysicalDeviceCustomBorderColorFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceCustomBorderColorPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorPropertiesEXT>::ManagedStructure<VkPhysicalDeviceCustomBorderColorPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDepthStencilResolveProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>::ManagedStructure<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDescriptorIndexingFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDescriptorIndexingProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>::ManagedStructure<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDriverProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDriverProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDriverProperties>::ManagedStructure<VkPhysicalDeviceDriverProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceDriverPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceDriverPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDriverPropertiesKHR>::ManagedStructure<VkPhysicalDeviceDriverPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExclusiveScissorFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalBufferInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalBufferInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalBufferInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalFenceInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalFenceInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalFenceInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalImageFormatInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalImageFormatInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalSemaphoreInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceExternalSemaphoreInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfoKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfoKHR>::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures>::ManagedStructure<VkPhysicalDeviceFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFeatures2>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures2>::ManagedStructure<VkPhysicalDeviceFeatures2>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFeatures2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures2KHR>::ManagedStructure<VkPhysicalDeviceFeatures2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFloat16Int8FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFloat16Int8FeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFloat16Int8FeaturesKHR>::ManagedStructure<VkPhysicalDeviceFloat16Int8FeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFloatControlsProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFloatControlsPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFloatControlsPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFloatControlsPropertiesKHR>::ManagedStructure<VkPhysicalDeviceFloatControlsPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceGroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceGroupProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceGroupProperties>::ManagedStructure<VkPhysicalDeviceGroupProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceGroupPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceGroupPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceGroupPropertiesKHR>::ManagedStructure<VkPhysicalDeviceGroupPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceHostQueryResetFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceHostQueryResetFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeaturesEXT>::ManagedStructure<VkPhysicalDeviceHostQueryResetFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceIDProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceIDProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIDProperties>::ManagedStructure<VkPhysicalDeviceIDProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceIDPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceIDPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIDPropertiesKHR>::ManagedStructure<VkPhysicalDeviceIDPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceImageFormatInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2KHR>::ManagedStructure<VkPhysicalDeviceImageFormatInfo2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceImageViewImageFormatInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceImagelessFramebufferFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceLimits>
    : public detail::ManagedStructure<VkPhysicalDeviceLimits>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLimits>::ManagedStructure<VkPhysicalDeviceLimits>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceLineRasterizationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceLineRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMaintenance3Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMaintenance3PropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMaintenance3PropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMaintenance3PropertiesKHR>::ManagedStructure<VkPhysicalDeviceMaintenance3PropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties>::ManagedStructure<VkPhysicalDeviceMemoryProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMemoryProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2>::ManagedStructure<VkPhysicalDeviceMemoryProperties2>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMemoryProperties2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2KHR>::ManagedStructure<VkPhysicalDeviceMemoryProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMeshShaderFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMeshShaderPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMultiviewFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMultiviewFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewFeaturesKHR>::ManagedStructure<VkPhysicalDeviceMultiviewFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMultiviewProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewProperties>::ManagedStructure<VkPhysicalDeviceMultiviewProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceMultiviewPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewPropertiesKHR>::ManagedStructure<VkPhysicalDeviceMultiviewPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePCIBusInfoPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePerformanceQueryFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePerformanceQueryPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePointClippingProperties>
    : public detail::ManagedStructure<VkPhysicalDevicePointClippingProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePointClippingProperties>::ManagedStructure<VkPhysicalDevicePointClippingProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePointClippingPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePointClippingPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePointClippingPropertiesKHR>::ManagedStructure<VkPhysicalDevicePointClippingPropertiesKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkPhysicalDevicePresentationPropertiesANDROID>
    : public detail::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef
template <>
class Managed<VkPhysicalDevicePrivateDataFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePrivateDataFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePrivateDataFeaturesEXT>::ManagedStructure<VkPhysicalDevicePrivateDataFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties>::ManagedStructure<VkPhysicalDeviceProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties2>::ManagedStructure<VkPhysicalDeviceProperties2>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceProperties2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties2KHR>::ManagedStructure<VkPhysicalDeviceProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceProtectedMemoryFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceProtectedMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDevicePushDescriptorPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>;
};
#endif //

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

#ifdef
template <>
class Managed<VkPhysicalDeviceRayTracingPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceRobustness2FeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceRobustness2FeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRobustness2FeaturesEXT>::ManagedStructure<VkPhysicalDeviceRobustness2FeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceRobustness2PropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceRobustness2PropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRobustness2PropertiesEXT>::ManagedStructure<VkPhysicalDeviceRobustness2PropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSampleLocationsPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSamplerFilterMinmaxProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceScalarBlockLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderAtomicInt64Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderClockFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderCoreProperties2AMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderCorePropertiesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderDrawParameterFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDrawParameterFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDrawParameterFeatures>::ManagedStructure<VkPhysicalDeviceShaderDrawParameterFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderDrawParametersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderFloat16Int8Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShadingRateImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceShadingRateImagePropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSparseImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSparseImageFormatInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2KHR>::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSparseProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseProperties>::ManagedStructure<VkPhysicalDeviceSparseProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSubgroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupProperties>::ManagedStructure<VkPhysicalDeviceSubgroupProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceSurfaceInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>::ManagedStructure<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceToolPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVariablePointerFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeatures>::ManagedStructure<VkPhysicalDeviceVariablePointerFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVariablePointerFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeaturesKHR>::ManagedStructure<VkPhysicalDeviceVariablePointerFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVariablePointersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVariablePointersFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeaturesKHR>::ManagedStructure<VkPhysicalDeviceVariablePointersFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVulkan11Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan11Features>::ManagedStructure<VkPhysicalDeviceVulkan11Features>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVulkan11Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan11Properties>::ManagedStructure<VkPhysicalDeviceVulkan11Properties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVulkan12Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan12Features>::ManagedStructure<VkPhysicalDeviceVulkan12Features>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVulkan12Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan12Properties>::ManagedStructure<VkPhysicalDeviceVulkan12Properties>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVulkanMemoryModelFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineCacheCreateInfo>
    : public detail::ManagedStructure<VkPipelineCacheCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineCacheCreateInfo>::ManagedStructure<VkPipelineCacheCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineColorBlendAttachmentState>
    : public detail::ManagedStructure<VkPipelineColorBlendAttachmentState>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendAttachmentState>::ManagedStructure<VkPipelineColorBlendAttachmentState>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineColorBlendStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineColorBlendStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendStateCreateInfo>::ManagedStructure<VkPipelineColorBlendStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineCompilerControlCreateInfoAMD>
    : public detail::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineCoverageModulationStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineCoverageReductionStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineCoverageToColorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineCreationFeedbackCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineCreationFeedbackEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackEXT>
{
public:
    using detail::ManagedStructure<VkPipelineCreationFeedbackEXT>::ManagedStructure<VkPipelineCreationFeedbackEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineDepthStencilStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineDiscardRectangleStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineDynamicStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDynamicStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineDynamicStateCreateInfo>::ManagedStructure<VkPipelineDynamicStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineExecutableInfoKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableInfoKHR>::ManagedStructure<VkPipelineExecutableInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineExecutableInternalRepresentationKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineExecutablePropertiesKHR>
    : public detail::ManagedStructure<VkPipelineExecutablePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutablePropertiesKHR>::ManagedStructure<VkPipelineExecutablePropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineExecutableStatisticKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableStatisticKHR>::ManagedStructure<VkPipelineExecutableStatisticKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineExecutableStatisticValueKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticValueKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableStatisticValueKHR>::ManagedStructure<VkPipelineExecutableStatisticValueKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineInfoKHR>
    : public detail::ManagedStructure<VkPipelineInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineInfoKHR>::ManagedStructure<VkPipelineInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineInputAssemblyStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineLayoutCreateInfo>
    : public detail::ManagedStructure<VkPipelineLayoutCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineLayoutCreateInfo>::ManagedStructure<VkPipelineLayoutCreateInfo>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPipelineLibraryCreateInfoKHR>
    : public detail::ManagedStructure<VkPipelineLibraryCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineLibraryCreateInfoKHR>::ManagedStructure<VkPipelineLibraryCreateInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkPipelineMultisampleStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineMultisampleStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineMultisampleStateCreateInfo>::ManagedStructure<VkPipelineMultisampleStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineRasterizationConservativeStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineRasterizationLineStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineRasterizationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineRasterizationStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateCreateInfo>::ManagedStructure<VkPipelineRasterizationStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineRasterizationStateRasterizationOrderAMD>
    : public detail::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineRasterizationStateStreamCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineSampleLocationsStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineShaderStageCreateInfo>
    : public detail::ManagedStructure<VkPipelineShaderStageCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineShaderStageCreateInfo>::ManagedStructure<VkPipelineShaderStageCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineTessellationDomainOriginStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineTessellationDomainOriginStateCreateInfoKHR>
    : public detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfoKHR>::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineTessellationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationStateCreateInfo>::ManagedStructure<VkPipelineTessellationStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineVertexInputDivisorStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineVertexInputStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineVertexInputStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineVertexInputStateCreateInfo>::ManagedStructure<VkPipelineVertexInputStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineViewportShadingRateImageStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineViewportStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineViewportStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineViewportStateCreateInfo>::ManagedStructure<VkPipelineViewportStateCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineViewportSwizzleStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkPipelineViewportWScalingStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>;
};
#endif //

#ifdef VK_USE_PLATFORM_GGP
template <>
class Managed<VkPresentFrameTokenGGP>
    : public detail::ManagedStructure<VkPresentFrameTokenGGP>
{
public:
    using detail::ManagedStructure<VkPresentFrameTokenGGP>::ManagedStructure<VkPresentFrameTokenGGP>;
};
#endif // VK_USE_PLATFORM_GGP

#ifdef
template <>
class Managed<VkPresentInfoKHR>
    : public detail::ManagedStructure<VkPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkPresentInfoKHR>::ManagedStructure<VkPresentInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPresentRegionKHR>
    : public detail::ManagedStructure<VkPresentRegionKHR>
{
public:
    using detail::ManagedStructure<VkPresentRegionKHR>::ManagedStructure<VkPresentRegionKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPresentRegionsKHR>
    : public detail::ManagedStructure<VkPresentRegionsKHR>
{
public:
    using detail::ManagedStructure<VkPresentRegionsKHR>::ManagedStructure<VkPresentRegionsKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkPresentTimeGOOGLE>
    : public detail::ManagedStructure<VkPresentTimeGOOGLE>
{
public:
    using detail::ManagedStructure<VkPresentTimeGOOGLE>::ManagedStructure<VkPresentTimeGOOGLE>;
};
#endif //

#ifdef
template <>
class Managed<VkPresentTimesInfoGOOGLE>
    : public detail::ManagedStructure<VkPresentTimesInfoGOOGLE>
{
public:
    using detail::ManagedStructure<VkPresentTimesInfoGOOGLE>::ManagedStructure<VkPresentTimesInfoGOOGLE>;
};
#endif //

#ifdef
template <>
class Managed<VkPrivateDataSlotCreateInfoEXT>
    : public detail::ManagedStructure<VkPrivateDataSlotCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPrivateDataSlotCreateInfoEXT>::ManagedStructure<VkPrivateDataSlotCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkProtectedSubmitInfo>
    : public detail::ManagedStructure<VkProtectedSubmitInfo>
{
public:
    using detail::ManagedStructure<VkProtectedSubmitInfo>::ManagedStructure<VkProtectedSubmitInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkPushConstantRange>
    : public detail::ManagedStructure<VkPushConstantRange>
{
public:
    using detail::ManagedStructure<VkPushConstantRange>::ManagedStructure<VkPushConstantRange>;
};
#endif //

#ifdef
template <>
class Managed<VkQueryPoolCreateInfo>
    : public detail::ManagedStructure<VkQueryPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkQueryPoolCreateInfo>::ManagedStructure<VkQueryPoolCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkQueryPoolCreateInfoINTEL>
    : public detail::ManagedStructure<VkQueryPoolCreateInfoINTEL>
{
public:
    using detail::ManagedStructure<VkQueryPoolCreateInfoINTEL>::ManagedStructure<VkQueryPoolCreateInfoINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkQueryPoolPerformanceCreateInfoKHR>
    : public detail::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkQueryPoolPerformanceQueryCreateInfoINTEL>
    : public detail::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>
{
public:
    using detail::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>;
};
#endif //

#ifdef
template <>
class Managed<VkQueueFamilyCheckpointPropertiesNV>
    : public detail::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>
{
public:
    using detail::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>;
};
#endif //

#ifdef
template <>
class Managed<VkQueueFamilyProperties>
    : public detail::ManagedStructure<VkQueueFamilyProperties>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties>::ManagedStructure<VkQueueFamilyProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkQueueFamilyProperties2>
    : public detail::ManagedStructure<VkQueueFamilyProperties2>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties2>::ManagedStructure<VkQueueFamilyProperties2>;
};
#endif //

#ifdef
template <>
class Managed<VkQueueFamilyProperties2KHR>
    : public detail::ManagedStructure<VkQueueFamilyProperties2KHR>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties2KHR>::ManagedStructure<VkQueueFamilyProperties2KHR>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingPipelineCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkRayTracingPipelineCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineCreateInfoNV>::ManagedStructure<VkRayTracingPipelineCreateInfoNV>;
};
#endif //

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

#ifdef
template <>
class Managed<VkRayTracingShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>;
};
#endif //

#ifdef
template <>
class Managed<VkRect2D>
    : public detail::ManagedStructure<VkRect2D>
{
public:
    using detail::ManagedStructure<VkRect2D>::ManagedStructure<VkRect2D>;
};
#endif //

#ifdef
template <>
class Managed<VkRectLayerKHR>
    : public detail::ManagedStructure<VkRectLayerKHR>
{
public:
    using detail::ManagedStructure<VkRectLayerKHR>::ManagedStructure<VkRectLayerKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkRefreshCycleDurationGOOGLE>
    : public detail::ManagedStructure<VkRefreshCycleDurationGOOGLE>
{
public:
    using detail::ManagedStructure<VkRefreshCycleDurationGOOGLE>::ManagedStructure<VkRefreshCycleDurationGOOGLE>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassAttachmentBeginInfo>
    : public detail::ManagedStructure<VkRenderPassAttachmentBeginInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassAttachmentBeginInfo>::ManagedStructure<VkRenderPassAttachmentBeginInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassAttachmentBeginInfoKHR>
    : public detail::ManagedStructure<VkRenderPassAttachmentBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkRenderPassAttachmentBeginInfoKHR>::ManagedStructure<VkRenderPassAttachmentBeginInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassBeginInfo>
    : public detail::ManagedStructure<VkRenderPassBeginInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassBeginInfo>::ManagedStructure<VkRenderPassBeginInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassCreateInfo>
    : public detail::ManagedStructure<VkRenderPassCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo>::ManagedStructure<VkRenderPassCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassCreateInfo2>
    : public detail::ManagedStructure<VkRenderPassCreateInfo2>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo2>::ManagedStructure<VkRenderPassCreateInfo2>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassCreateInfo2KHR>
    : public detail::ManagedStructure<VkRenderPassCreateInfo2KHR>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo2KHR>::ManagedStructure<VkRenderPassCreateInfo2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassFragmentDensityMapCreateInfoEXT>
    : public detail::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassInputAttachmentAspectCreateInfo>
    : public detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassInputAttachmentAspectCreateInfoKHR>
    : public detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfoKHR>::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassMultiviewCreateInfo>
    : public detail::ManagedStructure<VkRenderPassMultiviewCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassMultiviewCreateInfo>::ManagedStructure<VkRenderPassMultiviewCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassMultiviewCreateInfoKHR>
    : public detail::ManagedStructure<VkRenderPassMultiviewCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRenderPassMultiviewCreateInfoKHR>::ManagedStructure<VkRenderPassMultiviewCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassSampleLocationsBeginInfoEXT>
    : public detail::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>
{
public:
    using detail::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkRenderPassTransformBeginInfoQCOM>
    : public detail::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>
{
public:
    using detail::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>;
};
#endif //

#ifdef
template <>
class Managed<VkSampleLocationEXT>
    : public detail::ManagedStructure<VkSampleLocationEXT>
{
public:
    using detail::ManagedStructure<VkSampleLocationEXT>::ManagedStructure<VkSampleLocationEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkSampleLocationsInfoEXT>
    : public detail::ManagedStructure<VkSampleLocationsInfoEXT>
{
public:
    using detail::ManagedStructure<VkSampleLocationsInfoEXT>::ManagedStructure<VkSampleLocationsInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerCreateInfo>
    : public detail::ManagedStructure<VkSamplerCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerCreateInfo>::ManagedStructure<VkSamplerCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerCustomBorderColorCreateInfoEXT>
    : public detail::ManagedStructure<VkSamplerCustomBorderColorCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkSamplerCustomBorderColorCreateInfoEXT>::ManagedStructure<VkSamplerCustomBorderColorCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerReductionModeCreateInfo>
    : public detail::ManagedStructure<VkSamplerReductionModeCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerReductionModeCreateInfo>::ManagedStructure<VkSamplerReductionModeCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerReductionModeCreateInfoEXT>
    : public detail::ManagedStructure<VkSamplerReductionModeCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkSamplerReductionModeCreateInfoEXT>::ManagedStructure<VkSamplerReductionModeCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerYcbcrConversionCreateInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerYcbcrConversionCreateInfoKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfoKHR>::ManagedStructure<VkSamplerYcbcrConversionCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerYcbcrConversionImageFormatProperties>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerYcbcrConversionImageFormatPropertiesKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatPropertiesKHR>::ManagedStructure<VkSamplerYcbcrConversionImageFormatPropertiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerYcbcrConversionInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionInfo>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionInfo>::ManagedStructure<VkSamplerYcbcrConversionInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSamplerYcbcrConversionInfoKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionInfoKHR>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionInfoKHR>::ManagedStructure<VkSamplerYcbcrConversionInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreCreateInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreCreateInfo>::ManagedStructure<VkSemaphoreCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSemaphoreGetFdInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreGetFdInfoKHR>::ManagedStructure<VkSemaphoreGetFdInfoKHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSemaphoreGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkSemaphoreSignalInfo>
    : public detail::ManagedStructure<VkSemaphoreSignalInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreSignalInfo>::ManagedStructure<VkSemaphoreSignalInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSemaphoreSignalInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreSignalInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreSignalInfoKHR>::ManagedStructure<VkSemaphoreSignalInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSemaphoreTypeCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreTypeCreateInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreTypeCreateInfo>::ManagedStructure<VkSemaphoreTypeCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSemaphoreTypeCreateInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreTypeCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreTypeCreateInfoKHR>::ManagedStructure<VkSemaphoreTypeCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSemaphoreWaitInfo>
    : public detail::ManagedStructure<VkSemaphoreWaitInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreWaitInfo>::ManagedStructure<VkSemaphoreWaitInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSemaphoreWaitInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreWaitInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreWaitInfoKHR>::ManagedStructure<VkSemaphoreWaitInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSetStateFlagsIndirectCommandNV>
    : public detail::ManagedStructure<VkSetStateFlagsIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkSetStateFlagsIndirectCommandNV>::ManagedStructure<VkSetStateFlagsIndirectCommandNV>;
};
#endif //

#ifdef
template <>
class Managed<VkShaderModuleCreateInfo>
    : public detail::ManagedStructure<VkShaderModuleCreateInfo>
{
public:
    using detail::ManagedStructure<VkShaderModuleCreateInfo>::ManagedStructure<VkShaderModuleCreateInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkShaderModuleValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkShaderResourceUsageAMD>
    : public detail::ManagedStructure<VkShaderResourceUsageAMD>
{
public:
    using detail::ManagedStructure<VkShaderResourceUsageAMD>::ManagedStructure<VkShaderResourceUsageAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkShaderStatisticsInfoAMD>
    : public detail::ManagedStructure<VkShaderStatisticsInfoAMD>
{
public:
    using detail::ManagedStructure<VkShaderStatisticsInfoAMD>::ManagedStructure<VkShaderStatisticsInfoAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkShadingRatePaletteNV>
    : public detail::ManagedStructure<VkShadingRatePaletteNV>
{
public:
    using detail::ManagedStructure<VkShadingRatePaletteNV>::ManagedStructure<VkShadingRatePaletteNV>;
};
#endif //

#ifdef
template <>
class Managed<VkSharedPresentSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseBufferMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseBufferMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseBufferMemoryBindInfo>::ManagedStructure<VkSparseBufferMemoryBindInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageFormatProperties>
    : public detail::ManagedStructure<VkSparseImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties>::ManagedStructure<VkSparseImageFormatProperties>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageFormatProperties2>
    : public detail::ManagedStructure<VkSparseImageFormatProperties2>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties2>::ManagedStructure<VkSparseImageFormatProperties2>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageFormatProperties2KHR>
    : public detail::ManagedStructure<VkSparseImageFormatProperties2KHR>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties2KHR>::ManagedStructure<VkSparseImageFormatProperties2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageMemoryBind>
    : public detail::ManagedStructure<VkSparseImageMemoryBind>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryBind>::ManagedStructure<VkSparseImageMemoryBind>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryBindInfo>::ManagedStructure<VkSparseImageMemoryBindInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageMemoryRequirements>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements>::ManagedStructure<VkSparseImageMemoryRequirements>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageMemoryRequirements2>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements2>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements2>::ManagedStructure<VkSparseImageMemoryRequirements2>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageMemoryRequirements2KHR>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements2KHR>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements2KHR>::ManagedStructure<VkSparseImageMemoryRequirements2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseImageOpaqueMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSparseMemoryBind>
    : public detail::ManagedStructure<VkSparseMemoryBind>
{
public:
    using detail::ManagedStructure<VkSparseMemoryBind>::ManagedStructure<VkSparseMemoryBind>;
};
#endif //

#ifdef
template <>
class Managed<VkSpecializationInfo>
    : public detail::ManagedStructure<VkSpecializationInfo>
{
public:
    using detail::ManagedStructure<VkSpecializationInfo>::ManagedStructure<VkSpecializationInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSpecializationMapEntry>
    : public detail::ManagedStructure<VkSpecializationMapEntry>
{
public:
    using detail::ManagedStructure<VkSpecializationMapEntry>::ManagedStructure<VkSpecializationMapEntry>;
};
#endif //

#ifdef
template <>
class Managed<VkStencilOpState>
    : public detail::ManagedStructure<VkStencilOpState>
{
public:
    using detail::ManagedStructure<VkStencilOpState>::ManagedStructure<VkStencilOpState>;
};
#endif //

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

#ifdef
template <>
class Managed<VkSubmitInfo>
    : public detail::ManagedStructure<VkSubmitInfo>
{
public:
    using detail::ManagedStructure<VkSubmitInfo>::ManagedStructure<VkSubmitInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassBeginInfo>
    : public detail::ManagedStructure<VkSubpassBeginInfo>
{
public:
    using detail::ManagedStructure<VkSubpassBeginInfo>::ManagedStructure<VkSubpassBeginInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassBeginInfoKHR>
    : public detail::ManagedStructure<VkSubpassBeginInfoKHR>
{
public:
    using detail::ManagedStructure<VkSubpassBeginInfoKHR>::ManagedStructure<VkSubpassBeginInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDependency>
    : public detail::ManagedStructure<VkSubpassDependency>
{
public:
    using detail::ManagedStructure<VkSubpassDependency>::ManagedStructure<VkSubpassDependency>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDependency2>
    : public detail::ManagedStructure<VkSubpassDependency2>
{
public:
    using detail::ManagedStructure<VkSubpassDependency2>::ManagedStructure<VkSubpassDependency2>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDependency2KHR>
    : public detail::ManagedStructure<VkSubpassDependency2KHR>
{
public:
    using detail::ManagedStructure<VkSubpassDependency2KHR>::ManagedStructure<VkSubpassDependency2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDescription>
    : public detail::ManagedStructure<VkSubpassDescription>
{
public:
    using detail::ManagedStructure<VkSubpassDescription>::ManagedStructure<VkSubpassDescription>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDescription2>
    : public detail::ManagedStructure<VkSubpassDescription2>
{
public:
    using detail::ManagedStructure<VkSubpassDescription2>::ManagedStructure<VkSubpassDescription2>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDescription2KHR>
    : public detail::ManagedStructure<VkSubpassDescription2KHR>
{
public:
    using detail::ManagedStructure<VkSubpassDescription2KHR>::ManagedStructure<VkSubpassDescription2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDescriptionDepthStencilResolve>
    : public detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>
{
public:
    using detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassDescriptionDepthStencilResolveKHR>
    : public detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolveKHR>
{
public:
    using detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolveKHR>::ManagedStructure<VkSubpassDescriptionDepthStencilResolveKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassEndInfo>
    : public detail::ManagedStructure<VkSubpassEndInfo>
{
public:
    using detail::ManagedStructure<VkSubpassEndInfo>::ManagedStructure<VkSubpassEndInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassEndInfoKHR>
    : public detail::ManagedStructure<VkSubpassEndInfoKHR>
{
public:
    using detail::ManagedStructure<VkSubpassEndInfoKHR>::ManagedStructure<VkSubpassEndInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSubpassSampleLocationsEXT>
    : public detail::ManagedStructure<VkSubpassSampleLocationsEXT>
{
public:
    using detail::ManagedStructure<VkSubpassSampleLocationsEXT>::ManagedStructure<VkSubpassSampleLocationsEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkSubresourceLayout>
    : public detail::ManagedStructure<VkSubresourceLayout>
{
public:
    using detail::ManagedStructure<VkSubresourceLayout>::ManagedStructure<VkSubresourceLayout>;
};
#endif //

#ifdef
template <>
class Managed<VkSurfaceCapabilities2EXT>
    : public detail::ManagedStructure<VkSurfaceCapabilities2EXT>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilities2EXT>::ManagedStructure<VkSurfaceCapabilities2EXT>;
};
#endif //

#ifdef
template <>
class Managed<VkSurfaceCapabilities2KHR>
    : public detail::ManagedStructure<VkSurfaceCapabilities2KHR>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilities2KHR>::ManagedStructure<VkSurfaceCapabilities2KHR>;
};
#endif //

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef
template <>
class Managed<VkSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilitiesKHR>::ManagedStructure<VkSurfaceCapabilitiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSurfaceFormat2KHR>
    : public detail::ManagedStructure<VkSurfaceFormat2KHR>
{
public:
    using detail::ManagedStructure<VkSurfaceFormat2KHR>::ManagedStructure<VkSurfaceFormat2KHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSurfaceFormatKHR>
    : public detail::ManagedStructure<VkSurfaceFormatKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceFormatKHR>::ManagedStructure<VkSurfaceFormatKHR>;
};
#endif //

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

#ifdef
template <>
class Managed<VkSurfaceProtectedCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSwapchainCounterCreateInfoEXT>
    : public detail::ManagedStructure<VkSwapchainCounterCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkSwapchainCounterCreateInfoEXT>::ManagedStructure<VkSwapchainCounterCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkSwapchainCreateInfoKHR>::ManagedStructure<VkSwapchainCreateInfoKHR>;
};
#endif //

#ifdef
template <>
class Managed<VkSwapchainDisplayNativeHdrCreateInfoAMD>
    : public detail::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>;
};
#endif //

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkSwapchainImageCreateInfoANDROID>
    : public detail::ManagedStructure<VkSwapchainImageCreateInfoANDROID>
{
public:
    using detail::ManagedStructure<VkSwapchainImageCreateInfoANDROID>::ManagedStructure<VkSwapchainImageCreateInfoANDROID>;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef
template <>
class Managed<VkTextureLODGatherFormatPropertiesAMD>
    : public detail::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>
{
public:
    using detail::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>;
};
#endif //

#ifdef
template <>
class Managed<VkTimelineSemaphoreSubmitInfo>
    : public detail::ManagedStructure<VkTimelineSemaphoreSubmitInfo>
{
public:
    using detail::ManagedStructure<VkTimelineSemaphoreSubmitInfo>::ManagedStructure<VkTimelineSemaphoreSubmitInfo>;
};
#endif //

#ifdef
template <>
class Managed<VkTimelineSemaphoreSubmitInfoKHR>
    : public detail::ManagedStructure<VkTimelineSemaphoreSubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkTimelineSemaphoreSubmitInfoKHR>::ManagedStructure<VkTimelineSemaphoreSubmitInfoKHR>;
};
#endif //

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

#ifdef
template <>
class Managed<VkTransformMatrixNV>
    : public detail::ManagedStructure<VkTransformMatrixNV>
{
public:
    using detail::ManagedStructure<VkTransformMatrixNV>::ManagedStructure<VkTransformMatrixNV>;
};
#endif //

#ifdef
template <>
class Managed<VkValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkValidationCacheCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkValidationCacheCreateInfoEXT>::ManagedStructure<VkValidationCacheCreateInfoEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkValidationFeaturesEXT>
    : public detail::ManagedStructure<VkValidationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkValidationFeaturesEXT>::ManagedStructure<VkValidationFeaturesEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkValidationFlagsEXT>
    : public detail::ManagedStructure<VkValidationFlagsEXT>
{
public:
    using detail::ManagedStructure<VkValidationFlagsEXT>::ManagedStructure<VkValidationFlagsEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkVertexInputAttributeDescription>
    : public detail::ManagedStructure<VkVertexInputAttributeDescription>
{
public:
    using detail::ManagedStructure<VkVertexInputAttributeDescription>::ManagedStructure<VkVertexInputAttributeDescription>;
};
#endif //

#ifdef
template <>
class Managed<VkVertexInputBindingDescription>
    : public detail::ManagedStructure<VkVertexInputBindingDescription>
{
public:
    using detail::ManagedStructure<VkVertexInputBindingDescription>::ManagedStructure<VkVertexInputBindingDescription>;
};
#endif //

#ifdef
template <>
class Managed<VkVertexInputBindingDivisorDescriptionEXT>
    : public detail::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>
{
public:
    using detail::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>;
};
#endif //

#ifdef VK_USE_PLATFORM_VI_NN
template <>
class Managed<VkViSurfaceCreateInfoNN>
    : public detail::ManagedStructure<VkViSurfaceCreateInfoNN>
{
public:
    using detail::ManagedStructure<VkViSurfaceCreateInfoNN>::ManagedStructure<VkViSurfaceCreateInfoNN>;
};
#endif // VK_USE_PLATFORM_VI_NN

#ifdef
template <>
class Managed<VkViewport>
    : public detail::ManagedStructure<VkViewport>
{
public:
    using detail::ManagedStructure<VkViewport>::ManagedStructure<VkViewport>;
};
#endif //

#ifdef
template <>
class Managed<VkViewportSwizzleNV>
    : public detail::ManagedStructure<VkViewportSwizzleNV>
{
public:
    using detail::ManagedStructure<VkViewportSwizzleNV>::ManagedStructure<VkViewportSwizzleNV>;
};
#endif //

#ifdef
template <>
class Managed<VkViewportWScalingNV>
    : public detail::ManagedStructure<VkViewportWScalingNV>
{
public:
    using detail::ManagedStructure<VkViewportWScalingNV>::ManagedStructure<VkViewportWScalingNV>;
};
#endif //

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

#ifdef
template <>
class Managed<VkWriteDescriptorSet>
    : public detail::ManagedStructure<VkWriteDescriptorSet>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSet>::ManagedStructure<VkWriteDescriptorSet>;
};
#endif //

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkWriteDescriptorSetAccelerationStructureKHR>
    : public detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef
template <>
class Managed<VkWriteDescriptorSetAccelerationStructureNV>
    : public detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureNV>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureNV>::ManagedStructure<VkWriteDescriptorSetAccelerationStructureNV>;
};
#endif //

#ifdef
template <>
class Managed<VkWriteDescriptorSetInlineUniformBlockEXT>
    : public detail::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>;
};
#endif //

#ifdef
template <>
class Managed<VkXYColorEXT>
    : public detail::ManagedStructure<VkXYColorEXT>
{
public:
    using detail::ManagedStructure<VkXYColorEXT>::ManagedStructure<VkXYColorEXT>;
};
#endif //

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
