
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
namespace vk {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAabbPositionsKHR>
    : public detail::ManagedStructure<VkAabbPositionsKHR>
{
public:
    using detail::ManagedStructure<VkAabbPositionsKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureBuildGeometryInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureBuildGeometryInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureBuildGeometryInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureBuildOffsetInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureBuildOffsetInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureBuildOffsetInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureCreateGeometryTypeInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureCreateGeometryTypeInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureCreateGeometryTypeInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureCreateInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureCreateInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureCreateInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureCreateInfoNV>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureDeviceAddressInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureDeviceAddressInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureDeviceAddressInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryAabbsDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryAabbsDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryAabbsDataKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryDataKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryInstancesDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryInstancesDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryInstancesDataKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryTrianglesDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryTrianglesDataKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureGeometryTrianglesDataKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInfoNV>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureInstanceKHR>
    : public detail::ManagedStructure<VkAccelerationStructureInstanceKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureInstanceKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureVersionKHR>
    : public detail::ManagedStructure<VkAccelerationStructureVersionKHR>
{
public:
    using detail::ManagedStructure<VkAccelerationStructureVersionKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAcquireNextImageInfoKHR>
    : public detail::ManagedStructure<VkAcquireNextImageInfoKHR>
{
public:
    using detail::ManagedStructure<VkAcquireNextImageInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkAcquireProfilingLockInfoKHR>
    : public detail::ManagedStructure<VkAcquireProfilingLockInfoKHR>
{
public:
    using detail::ManagedStructure<VkAcquireProfilingLockInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkAllocationCallbacks>
    : public detail::ManagedStructure<VkAllocationCallbacks>
{
public:
    using detail::ManagedStructure<VkAllocationCallbacks>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferFormatPropertiesANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferFormatPropertiesANDROID>
{
public:
    using detail::ManagedStructure<VkAndroidHardwareBufferFormatPropertiesANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferPropertiesANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferPropertiesANDROID>
{
public:
    using detail::ManagedStructure<VkAndroidHardwareBufferPropertiesANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferUsageANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferUsageANDROID>
{
public:
    using detail::ManagedStructure<VkAndroidHardwareBufferUsageANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkAndroidSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkAndroidSurfaceCreateInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkApplicationInfo>
    : public detail::ManagedStructure<VkApplicationInfo>
{
public:
    using detail::ManagedStructure<VkApplicationInfo>::ManagedStructure;
};

template <>
class Managed<VkAttachmentDescription>
    : public detail::ManagedStructure<VkAttachmentDescription>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription>::ManagedStructure;
};

template <>
class Managed<VkAttachmentDescription2>
    : public detail::ManagedStructure<VkAttachmentDescription2>
{
public:
    using detail::ManagedStructure<VkAttachmentDescription2>::ManagedStructure;
};


template <>
class Managed<VkAttachmentDescriptionStencilLayout>
    : public detail::ManagedStructure<VkAttachmentDescriptionStencilLayout>
{
public:
    using detail::ManagedStructure<VkAttachmentDescriptionStencilLayout>::ManagedStructure;
};


template <>
class Managed<VkAttachmentReference>
    : public detail::ManagedStructure<VkAttachmentReference>
{
public:
    using detail::ManagedStructure<VkAttachmentReference>::ManagedStructure;
};

template <>
class Managed<VkAttachmentReference2>
    : public detail::ManagedStructure<VkAttachmentReference2>
{
public:
    using detail::ManagedStructure<VkAttachmentReference2>::ManagedStructure;
};


template <>
class Managed<VkAttachmentReferenceStencilLayout>
    : public detail::ManagedStructure<VkAttachmentReferenceStencilLayout>
{
public:
    using detail::ManagedStructure<VkAttachmentReferenceStencilLayout>::ManagedStructure;
};


template <>
class Managed<VkAttachmentSampleLocationsEXT>
    : public detail::ManagedStructure<VkAttachmentSampleLocationsEXT>
{
public:
    using detail::ManagedStructure<VkAttachmentSampleLocationsEXT>::ManagedStructure;
};

template <>
class Managed<VkBaseInStructure>
    : public detail::ManagedStructure<VkBaseInStructure>
{
public:
    using detail::ManagedStructure<VkBaseInStructure>::ManagedStructure;
};

template <>
class Managed<VkBaseOutStructure>
    : public detail::ManagedStructure<VkBaseOutStructure>
{
public:
    using detail::ManagedStructure<VkBaseOutStructure>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkBindAccelerationStructureMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
class Managed<VkBindBufferMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>::ManagedStructure;
};


template <>
class Managed<VkBindBufferMemoryInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindBufferMemoryInfo>::ManagedStructure;
};


template <>
class Managed<VkBindImageMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>::ManagedStructure;
};


template <>
class Managed<VkBindImageMemoryInfo>
    : public detail::ManagedStructure<VkBindImageMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindImageMemoryInfo>::ManagedStructure;
};


template <>
class Managed<VkBindImageMemorySwapchainInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>
{
public:
    using detail::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkBindImagePlaneMemoryInfo>
    : public detail::ManagedStructure<VkBindImagePlaneMemoryInfo>
{
public:
    using detail::ManagedStructure<VkBindImagePlaneMemoryInfo>::ManagedStructure;
};


template <>
class Managed<VkBindIndexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindIndexBufferIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindIndexBufferIndirectCommandNV>::ManagedStructure;
};

template <>
class Managed<VkBindShaderGroupIndirectCommandNV>
    : public detail::ManagedStructure<VkBindShaderGroupIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindShaderGroupIndirectCommandNV>::ManagedStructure;
};

template <>
class Managed<VkBindSparseInfo>
    : public detail::ManagedStructure<VkBindSparseInfo>
{
public:
    using detail::ManagedStructure<VkBindSparseInfo>::ManagedStructure;
};

template <>
class Managed<VkBindVertexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindVertexBufferIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkBindVertexBufferIndirectCommandNV>::ManagedStructure;
};

template <>
class Managed<VkBufferCopy>
    : public detail::ManagedStructure<VkBufferCopy>
{
public:
    using detail::ManagedStructure<VkBufferCopy>::ManagedStructure;
};

template <>
class Managed<VkBufferCreateInfo>
    : public detail::ManagedStructure<VkBufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkBufferDeviceAddressCreateInfoEXT>
    : public detail::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkBufferDeviceAddressInfo>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfo>
{
public:
    using detail::ManagedStructure<VkBufferDeviceAddressInfo>::ManagedStructure;
};



template <>
class Managed<VkBufferImageCopy>
    : public detail::ManagedStructure<VkBufferImageCopy>
{
public:
    using detail::ManagedStructure<VkBufferImageCopy>::ManagedStructure;
};

template <>
class Managed<VkBufferMemoryBarrier>
    : public detail::ManagedStructure<VkBufferMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkBufferMemoryBarrier>::ManagedStructure;
};

template <>
class Managed<VkBufferMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkBufferMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkBufferMemoryRequirementsInfo2>::ManagedStructure;
};


template <>
class Managed<VkBufferOpaqueCaptureAddressCreateInfo>
    : public detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkBufferViewCreateInfo>
    : public detail::ManagedStructure<VkBufferViewCreateInfo>
{
public:
    using detail::ManagedStructure<VkBufferViewCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkCalibratedTimestampInfoEXT>
    : public detail::ManagedStructure<VkCalibratedTimestampInfoEXT>
{
public:
    using detail::ManagedStructure<VkCalibratedTimestampInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkCheckpointDataNV>
    : public detail::ManagedStructure<VkCheckpointDataNV>
{
public:
    using detail::ManagedStructure<VkCheckpointDataNV>::ManagedStructure;
};

template <>
class Managed<VkClearAttachment>
    : public detail::ManagedStructure<VkClearAttachment>
{
public:
    using detail::ManagedStructure<VkClearAttachment>::ManagedStructure;
};

template <>
class Managed<VkClearColorValue>
    : public detail::ManagedStructure<VkClearColorValue>
{
public:
    using detail::ManagedStructure<VkClearColorValue>::ManagedStructure;
};

template <>
class Managed<VkClearDepthStencilValue>
    : public detail::ManagedStructure<VkClearDepthStencilValue>
{
public:
    using detail::ManagedStructure<VkClearDepthStencilValue>::ManagedStructure;
};

template <>
class Managed<VkClearRect>
    : public detail::ManagedStructure<VkClearRect>
{
public:
    using detail::ManagedStructure<VkClearRect>::ManagedStructure;
};

template <>
class Managed<VkClearValue>
    : public detail::ManagedStructure<VkClearValue>
{
public:
    using detail::ManagedStructure<VkClearValue>::ManagedStructure;
};

template <>
class Managed<VkCoarseSampleLocationNV>
    : public detail::ManagedStructure<VkCoarseSampleLocationNV>
{
public:
    using detail::ManagedStructure<VkCoarseSampleLocationNV>::ManagedStructure;
};

template <>
class Managed<VkCoarseSampleOrderCustomNV>
    : public detail::ManagedStructure<VkCoarseSampleOrderCustomNV>
{
public:
    using detail::ManagedStructure<VkCoarseSampleOrderCustomNV>::ManagedStructure;
};

template <>
class Managed<VkCommandBufferAllocateInfo>
    : public detail::ManagedStructure<VkCommandBufferAllocateInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferAllocateInfo>::ManagedStructure;
};

template <>
class Managed<VkCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkCommandBufferBeginInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferBeginInfo>::ManagedStructure;
};

template <>
class Managed<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
    : public detail::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkCommandBufferInheritanceInfo>
    : public detail::ManagedStructure<VkCommandBufferInheritanceInfo>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceInfo>::ManagedStructure;
};

template <>
class Managed<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
    : public detail::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
{
public:
    using detail::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>::ManagedStructure;
};

template <>
class Managed<VkCommandPoolCreateInfo>
    : public detail::ManagedStructure<VkCommandPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkCommandPoolCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkComponentMapping>
    : public detail::ManagedStructure<VkComponentMapping>
{
public:
    using detail::ManagedStructure<VkComponentMapping>::ManagedStructure;
};

template <>
class Managed<VkComputePipelineCreateInfo>
    : public detail::ManagedStructure<VkComputePipelineCreateInfo>
{
public:
    using detail::ManagedStructure<VkComputePipelineCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkConditionalRenderingBeginInfoEXT>
    : public detail::ManagedStructure<VkConditionalRenderingBeginInfoEXT>
{
public:
    using detail::ManagedStructure<VkConditionalRenderingBeginInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkConformanceVersion>
    : public detail::ManagedStructure<VkConformanceVersion>
{
public:
    using detail::ManagedStructure<VkConformanceVersion>::ManagedStructure;
};


template <>
class Managed<VkCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkCooperativeMatrixPropertiesNV>
{
public:
    using detail::ManagedStructure<VkCooperativeMatrixPropertiesNV>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyAccelerationStructureInfoKHR>
    : public detail::ManagedStructure<VkCopyAccelerationStructureInfoKHR>
{
public:
    using detail::ManagedStructure<VkCopyAccelerationStructureInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyAccelerationStructureToMemoryInfoKHR>
    : public detail::ManagedStructure<VkCopyAccelerationStructureToMemoryInfoKHR>
{
public:
    using detail::ManagedStructure<VkCopyAccelerationStructureToMemoryInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkCopyDescriptorSet>
    : public detail::ManagedStructure<VkCopyDescriptorSet>
{
public:
    using detail::ManagedStructure<VkCopyDescriptorSet>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyMemoryToAccelerationStructureInfoKHR>
    : public detail::ManagedStructure<VkCopyMemoryToAccelerationStructureInfoKHR>
{
public:
    using detail::ManagedStructure<VkCopyMemoryToAccelerationStructureInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkD3D12FenceSubmitInfoKHR>
    : public detail::ManagedStructure<VkD3D12FenceSubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkD3D12FenceSubmitInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkDebugMarkerMarkerInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerMarkerInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerMarkerInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugMarkerObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugMarkerObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugReportCallbackCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugUtilsLabelEXT>
    : public detail::ManagedStructure<VkDebugUtilsLabelEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsLabelEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugUtilsMessengerCallbackDataEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugUtilsMessengerCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugUtilsObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDebugUtilsObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>
{
public:
    using detail::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDedicatedAllocationBufferCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkDedicatedAllocationImageCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkDedicatedAllocationMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>
{
public:
    using detail::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeferredOperationInfoKHR>
    : public detail::ManagedStructure<VkDeferredOperationInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeferredOperationInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkDescriptorBufferInfo>
    : public detail::ManagedStructure<VkDescriptorBufferInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorBufferInfo>::ManagedStructure;
};

template <>
class Managed<VkDescriptorImageInfo>
    : public detail::ManagedStructure<VkDescriptorImageInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorImageInfo>::ManagedStructure;
};

template <>
class Managed<VkDescriptorPoolCreateInfo>
    : public detail::ManagedStructure<VkDescriptorPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDescriptorPoolSize>
    : public detail::ManagedStructure<VkDescriptorPoolSize>
{
public:
    using detail::ManagedStructure<VkDescriptorPoolSize>::ManagedStructure;
};

template <>
class Managed<VkDescriptorSetAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetAllocateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetAllocateInfo>::ManagedStructure;
};

template <>
class Managed<VkDescriptorSetLayoutBinding>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBinding>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBinding>::ManagedStructure;
};

template <>
class Managed<VkDescriptorSetLayoutBindingFlagsCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkDescriptorSetLayoutCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkDescriptorSetLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetLayoutSupport>
{
public:
    using detail::ManagedStructure<VkDescriptorSetLayoutSupport>::ManagedStructure;
};


template <>
class Managed<VkDescriptorSetVariableDescriptorCountAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>::ManagedStructure;
};


template <>
class Managed<VkDescriptorSetVariableDescriptorCountLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>
{
public:
    using detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>::ManagedStructure;
};


template <>
class Managed<VkDescriptorUpdateTemplateCreateInfo>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkDescriptorUpdateTemplateEntry>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateEntry>
{
public:
    using detail::ManagedStructure<VkDescriptorUpdateTemplateEntry>::ManagedStructure;
};


template <>
class Managed<VkDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkDeviceDiagnosticsConfigCreateInfoNV>
    : public detail::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkDeviceEventInfoEXT>
    : public detail::ManagedStructure<VkDeviceEventInfoEXT>
{
public:
    using detail::ManagedStructure<VkDeviceEventInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDeviceGroupBindSparseInfo>
    : public detail::ManagedStructure<VkDeviceGroupBindSparseInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupBindSparseInfo>::ManagedStructure;
};


template <>
class Managed<VkDeviceGroupCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>::ManagedStructure;
};


template <>
class Managed<VkDeviceGroupDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceGroupDeviceCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupDeviceCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkDeviceGroupPresentCapabilitiesKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>::ManagedStructure;
};

template <>
class Managed<VkDeviceGroupPresentInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupPresentInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkDeviceGroupRenderPassBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>::ManagedStructure;
};


template <>
class Managed<VkDeviceGroupSubmitInfo>
    : public detail::ManagedStructure<VkDeviceGroupSubmitInfo>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSubmitInfo>::ManagedStructure;
};


template <>
class Managed<VkDeviceGroupSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkDeviceMemoryOpaqueCaptureAddressInfo>
    : public detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>::ManagedStructure;
};


template <>
class Managed<VkDeviceMemoryOverallocationCreateInfoAMD>
    : public detail::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeviceOrHostAddressConstKHR>
    : public detail::ManagedStructure<VkDeviceOrHostAddressConstKHR>
{
public:
    using detail::ManagedStructure<VkDeviceOrHostAddressConstKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeviceOrHostAddressKHR>
    : public detail::ManagedStructure<VkDeviceOrHostAddressKHR>
{
public:
    using detail::ManagedStructure<VkDeviceOrHostAddressKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkDevicePrivateDataCreateInfoEXT>
    : public detail::ManagedStructure<VkDevicePrivateDataCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDevicePrivateDataCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDeviceQueueCreateInfo>
    : public detail::ManagedStructure<VkDeviceQueueCreateInfo>
{
public:
    using detail::ManagedStructure<VkDeviceQueueCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkDeviceQueueGlobalPriorityCreateInfoEXT>
    : public detail::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDeviceQueueInfo2>
    : public detail::ManagedStructure<VkDeviceQueueInfo2>
{
public:
    using detail::ManagedStructure<VkDeviceQueueInfo2>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <>
class Managed<VkDirectFBSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkDirectFBSurfaceCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkDirectFBSurfaceCreateInfoEXT>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
class Managed<VkDispatchIndirectCommand>
    : public detail::ManagedStructure<VkDispatchIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDispatchIndirectCommand>::ManagedStructure;
};

template <>
class Managed<VkDisplayEventInfoEXT>
    : public detail::ManagedStructure<VkDisplayEventInfoEXT>
{
public:
    using detail::ManagedStructure<VkDisplayEventInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDisplayModeCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplayModeCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeCreateInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayModeParametersKHR>
    : public detail::ManagedStructure<VkDisplayModeParametersKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeParametersKHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayModeProperties2KHR>
    : public detail::ManagedStructure<VkDisplayModeProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayModeProperties2KHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayModePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayModePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayModePropertiesKHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
    : public detail::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
{
public:
    using detail::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>::ManagedStructure;
};

template <>
class Managed<VkDisplayPlaneCapabilities2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilities2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneCapabilities2KHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayPlaneCapabilitiesKHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayPlaneInfo2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneInfo2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneInfo2KHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayPlaneProperties2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlaneProperties2KHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayPlanePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPlanePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPlanePropertiesKHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayPowerInfoEXT>
    : public detail::ManagedStructure<VkDisplayPowerInfoEXT>
{
public:
    using detail::ManagedStructure<VkDisplayPowerInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkDisplayPresentInfoKHR>
    : public detail::ManagedStructure<VkDisplayPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPresentInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayProperties2KHR>
    : public detail::ManagedStructure<VkDisplayProperties2KHR>
{
public:
    using detail::ManagedStructure<VkDisplayProperties2KHR>::ManagedStructure;
};

template <>
class Managed<VkDisplayPropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkDisplayPropertiesKHR>::ManagedStructure;
};

template <>
class Managed<VkDisplaySurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkDrawIndexedIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndexedIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDrawIndexedIndirectCommand>::ManagedStructure;
};

template <>
class Managed<VkDrawIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndirectCommand>
{
public:
    using detail::ManagedStructure<VkDrawIndirectCommand>::ManagedStructure;
};

template <>
class Managed<VkDrawMeshTasksIndirectCommandNV>
    : public detail::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>::ManagedStructure;
};

template <>
class Managed<VkDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkDrmFormatModifierPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkDrmFormatModifierPropertiesListEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>
{
public:
    using detail::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>::ManagedStructure;
};

template <>
class Managed<VkEventCreateInfo>
    : public detail::ManagedStructure<VkEventCreateInfo>
{
public:
    using detail::ManagedStructure<VkEventCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkExportFenceCreateInfo>
    : public detail::ManagedStructure<VkExportFenceCreateInfo>
{
public:
    using detail::ManagedStructure<VkExportFenceCreateInfo>::ManagedStructure;
};


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportFenceWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportFenceWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExportMemoryAllocateInfo>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfo>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfo>::ManagedStructure;
};


template <>
class Managed<VkExportMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfoNV>
{
public:
    using detail::ManagedStructure<VkExportMemoryAllocateInfoNV>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportMemoryWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportMemoryWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportMemoryWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportMemoryWin32HandleInfoNV>
    : public detail::ManagedStructure<VkExportMemoryWin32HandleInfoNV>
{
public:
    using detail::ManagedStructure<VkExportMemoryWin32HandleInfoNV>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExportSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkExportSemaphoreCreateInfo>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreCreateInfo>::ManagedStructure;
};


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExtensionProperties>
    : public detail::ManagedStructure<VkExtensionProperties>
{
public:
    using detail::ManagedStructure<VkExtensionProperties>::ManagedStructure;
};

template <>
class Managed<VkExtent2D>
    : public detail::ManagedStructure<VkExtent2D>
{
public:
    using detail::ManagedStructure<VkExtent2D>::ManagedStructure;
};

template <>
class Managed<VkExtent3D>
    : public detail::ManagedStructure<VkExtent3D>
{
public:
    using detail::ManagedStructure<VkExtent3D>::ManagedStructure;
};

template <>
class Managed<VkExternalBufferProperties>
    : public detail::ManagedStructure<VkExternalBufferProperties>
{
public:
    using detail::ManagedStructure<VkExternalBufferProperties>::ManagedStructure;
};


template <>
class Managed<VkExternalFenceProperties>
    : public detail::ManagedStructure<VkExternalFenceProperties>
{
public:
    using detail::ManagedStructure<VkExternalFenceProperties>::ManagedStructure;
};


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkExternalFormatANDROID>
    : public detail::ManagedStructure<VkExternalFormatANDROID>
{
public:
    using detail::ManagedStructure<VkExternalFormatANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkExternalImageFormatProperties>
    : public detail::ManagedStructure<VkExternalImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatProperties>::ManagedStructure;
};


template <>
class Managed<VkExternalImageFormatPropertiesNV>
    : public detail::ManagedStructure<VkExternalImageFormatPropertiesNV>
{
public:
    using detail::ManagedStructure<VkExternalImageFormatPropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkExternalMemoryBufferCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryBufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkExternalMemoryBufferCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkExternalMemoryImageCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfo>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkExternalMemoryImageCreateInfoNV>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkExternalMemoryImageCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkExternalMemoryProperties>
    : public detail::ManagedStructure<VkExternalMemoryProperties>
{
public:
    using detail::ManagedStructure<VkExternalMemoryProperties>::ManagedStructure;
};


template <>
class Managed<VkExternalSemaphoreProperties>
    : public detail::ManagedStructure<VkExternalSemaphoreProperties>
{
public:
    using detail::ManagedStructure<VkExternalSemaphoreProperties>::ManagedStructure;
};


template <>
class Managed<VkFenceCreateInfo>
    : public detail::ManagedStructure<VkFenceCreateInfo>
{
public:
    using detail::ManagedStructure<VkFenceCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkFenceGetFdInfoKHR>
    : public detail::ManagedStructure<VkFenceGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkFenceGetFdInfoKHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkFenceGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkFenceGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkFenceGetWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkFilterCubicImageViewImageFormatPropertiesEXT>
    : public detail::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkFormatProperties>
    : public detail::ManagedStructure<VkFormatProperties>
{
public:
    using detail::ManagedStructure<VkFormatProperties>::ManagedStructure;
};

template <>
class Managed<VkFormatProperties2>
    : public detail::ManagedStructure<VkFormatProperties2>
{
public:
    using detail::ManagedStructure<VkFormatProperties2>::ManagedStructure;
};


template <>
class Managed<VkFramebufferAttachmentImageInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentImageInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentImageInfo>::ManagedStructure;
};


template <>
class Managed<VkFramebufferAttachmentsCreateInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentsCreateInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferAttachmentsCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkFramebufferCreateInfo>
    : public detail::ManagedStructure<VkFramebufferCreateInfo>
{
public:
    using detail::ManagedStructure<VkFramebufferCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkFramebufferMixedSamplesCombinationNV>
    : public detail::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>
{
public:
    using detail::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>::ManagedStructure;
};

template <>
class Managed<VkGeneratedCommandsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsInfoNV>
{
public:
    using detail::ManagedStructure<VkGeneratedCommandsInfoNV>::ManagedStructure;
};

template <>
class Managed<VkGeneratedCommandsMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>
{
public:
    using detail::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>::ManagedStructure;
};

template <>
class Managed<VkGeometryAABBNV>
    : public detail::ManagedStructure<VkGeometryAABBNV>
{
public:
    using detail::ManagedStructure<VkGeometryAABBNV>::ManagedStructure;
};

template <>
class Managed<VkGeometryDataNV>
    : public detail::ManagedStructure<VkGeometryDataNV>
{
public:
    using detail::ManagedStructure<VkGeometryDataNV>::ManagedStructure;
};

template <>
class Managed<VkGeometryNV>
    : public detail::ManagedStructure<VkGeometryNV>
{
public:
    using detail::ManagedStructure<VkGeometryNV>::ManagedStructure;
};

template <>
class Managed<VkGeometryTrianglesNV>
    : public detail::ManagedStructure<VkGeometryTrianglesNV>
{
public:
    using detail::ManagedStructure<VkGeometryTrianglesNV>::ManagedStructure;
};

template <>
class Managed<VkGraphicsPipelineCreateInfo>
    : public detail::ManagedStructure<VkGraphicsPipelineCreateInfo>
{
public:
    using detail::ManagedStructure<VkGraphicsPipelineCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkGraphicsPipelineShaderGroupsCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkGraphicsShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkHdrMetadataEXT>
    : public detail::ManagedStructure<VkHdrMetadataEXT>
{
public:
    using detail::ManagedStructure<VkHdrMetadataEXT>::ManagedStructure;
};

template <>
class Managed<VkHeadlessSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
class Managed<VkIOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkIOSSurfaceCreateInfoMVK>
{
public:
    using detail::ManagedStructure<VkIOSSurfaceCreateInfoMVK>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
class Managed<VkImageBlit>
    : public detail::ManagedStructure<VkImageBlit>
{
public:
    using detail::ManagedStructure<VkImageBlit>::ManagedStructure;
};

template <>
class Managed<VkImageCopy>
    : public detail::ManagedStructure<VkImageCopy>
{
public:
    using detail::ManagedStructure<VkImageCopy>::ManagedStructure;
};

template <>
class Managed<VkImageCreateInfo>
    : public detail::ManagedStructure<VkImageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkImageDrmFormatModifierExplicitCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkImageDrmFormatModifierListCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkImageDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkImageFormatListCreateInfo>
    : public detail::ManagedStructure<VkImageFormatListCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageFormatListCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkImageFormatProperties>
    : public detail::ManagedStructure<VkImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties>::ManagedStructure;
};

template <>
class Managed<VkImageFormatProperties2>
    : public detail::ManagedStructure<VkImageFormatProperties2>
{
public:
    using detail::ManagedStructure<VkImageFormatProperties2>::ManagedStructure;
};


template <>
class Managed<VkImageMemoryBarrier>
    : public detail::ManagedStructure<VkImageMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkImageMemoryBarrier>::ManagedStructure;
};

template <>
class Managed<VkImageMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkImageMemoryRequirementsInfo2>::ManagedStructure;
};


#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
class Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>
    : public detail::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>
{
public:
    using detail::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
class Managed<VkImagePlaneMemoryRequirementsInfo>
    : public detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>
{
public:
    using detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>::ManagedStructure;
};


template <>
class Managed<VkImageResolve>
    : public detail::ManagedStructure<VkImageResolve>
{
public:
    using detail::ManagedStructure<VkImageResolve>::ManagedStructure;
};

template <>
class Managed<VkImageSparseMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>
{
public:
    using detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>::ManagedStructure;
};


template <>
class Managed<VkImageStencilUsageCreateInfo>
    : public detail::ManagedStructure<VkImageStencilUsageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageStencilUsageCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkImageSubresource>
    : public detail::ManagedStructure<VkImageSubresource>
{
public:
    using detail::ManagedStructure<VkImageSubresource>::ManagedStructure;
};

template <>
class Managed<VkImageSubresourceLayers>
    : public detail::ManagedStructure<VkImageSubresourceLayers>
{
public:
    using detail::ManagedStructure<VkImageSubresourceLayers>::ManagedStructure;
};

template <>
class Managed<VkImageSubresourceRange>
    : public detail::ManagedStructure<VkImageSubresourceRange>
{
public:
    using detail::ManagedStructure<VkImageSubresourceRange>::ManagedStructure;
};

template <>
class Managed<VkImageSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkImageSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkImageSwapchainCreateInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkImageViewASTCDecodeModeEXT>
    : public detail::ManagedStructure<VkImageViewASTCDecodeModeEXT>
{
public:
    using detail::ManagedStructure<VkImageViewASTCDecodeModeEXT>::ManagedStructure;
};

template <>
class Managed<VkImageViewAddressPropertiesNVX>
    : public detail::ManagedStructure<VkImageViewAddressPropertiesNVX>
{
public:
    using detail::ManagedStructure<VkImageViewAddressPropertiesNVX>::ManagedStructure;
};

template <>
class Managed<VkImageViewCreateInfo>
    : public detail::ManagedStructure<VkImageViewCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageViewCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkImageViewHandleInfoNVX>
    : public detail::ManagedStructure<VkImageViewHandleInfoNVX>
{
public:
    using detail::ManagedStructure<VkImageViewHandleInfoNVX>::ManagedStructure;
};

template <>
class Managed<VkImageViewUsageCreateInfo>
    : public detail::ManagedStructure<VkImageViewUsageCreateInfo>
{
public:
    using detail::ManagedStructure<VkImageViewUsageCreateInfo>::ManagedStructure;
};


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkImportAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>
{
public:
    using detail::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkImportFenceFdInfoKHR>
    : public detail::ManagedStructure<VkImportFenceFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportFenceFdInfoKHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportFenceWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportFenceWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkImportMemoryFdInfoKHR>
    : public detail::ManagedStructure<VkImportMemoryFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportMemoryFdInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkImportMemoryHostPointerInfoEXT>
    : public detail::ManagedStructure<VkImportMemoryHostPointerInfoEXT>
{
public:
    using detail::ManagedStructure<VkImportMemoryHostPointerInfoEXT>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportMemoryWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportMemoryWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportMemoryWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportMemoryWin32HandleInfoNV>
    : public detail::ManagedStructure<VkImportMemoryWin32HandleInfoNV>
{
public:
    using detail::ManagedStructure<VkImportMemoryWin32HandleInfoNV>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkImportSemaphoreFdInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportSemaphoreFdInfoKHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkIndirectCommandsLayoutCreateInfoNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkIndirectCommandsLayoutTokenNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutTokenNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsLayoutTokenNV>::ManagedStructure;
};

template <>
class Managed<VkIndirectCommandsStreamNV>
    : public detail::ManagedStructure<VkIndirectCommandsStreamNV>
{
public:
    using detail::ManagedStructure<VkIndirectCommandsStreamNV>::ManagedStructure;
};

template <>
class Managed<VkInitializePerformanceApiInfoINTEL>
    : public detail::ManagedStructure<VkInitializePerformanceApiInfoINTEL>
{
public:
    using detail::ManagedStructure<VkInitializePerformanceApiInfoINTEL>::ManagedStructure;
};

template <>
class Managed<VkInputAttachmentAspectReference>
    : public detail::ManagedStructure<VkInputAttachmentAspectReference>
{
public:
    using detail::ManagedStructure<VkInputAttachmentAspectReference>::ManagedStructure;
};


template <>
class Managed<VkInstanceCreateInfo>
    : public detail::ManagedStructure<VkInstanceCreateInfo>
{
public:
    using detail::ManagedStructure<VkInstanceCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkLayerProperties>
    : public detail::ManagedStructure<VkLayerProperties>
{
public:
    using detail::ManagedStructure<VkLayerProperties>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
class Managed<VkMacOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>
{
public:
    using detail::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
class Managed<VkMappedMemoryRange>
    : public detail::ManagedStructure<VkMappedMemoryRange>
{
public:
    using detail::ManagedStructure<VkMappedMemoryRange>::ManagedStructure;
};

template <>
class Managed<VkMemoryAllocateFlagsInfo>
    : public detail::ManagedStructure<VkMemoryAllocateFlagsInfo>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateFlagsInfo>::ManagedStructure;
};


template <>
class Managed<VkMemoryAllocateInfo>
    : public detail::ManagedStructure<VkMemoryAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryAllocateInfo>::ManagedStructure;
};

template <>
class Managed<VkMemoryBarrier>
    : public detail::ManagedStructure<VkMemoryBarrier>
{
public:
    using detail::ManagedStructure<VkMemoryBarrier>::ManagedStructure;
};

template <>
class Managed<VkMemoryDedicatedAllocateInfo>
    : public detail::ManagedStructure<VkMemoryDedicatedAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedAllocateInfo>::ManagedStructure;
};


template <>
class Managed<VkMemoryDedicatedRequirements>
    : public detail::ManagedStructure<VkMemoryDedicatedRequirements>
{
public:
    using detail::ManagedStructure<VkMemoryDedicatedRequirements>::ManagedStructure;
};


template <>
class Managed<VkMemoryFdPropertiesKHR>
    : public detail::ManagedStructure<VkMemoryFdPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkMemoryFdPropertiesKHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkMemoryGetAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>
{
public:
    using detail::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkMemoryGetFdInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryGetFdInfoKHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkMemoryGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkMemoryHeap>
    : public detail::ManagedStructure<VkMemoryHeap>
{
public:
    using detail::ManagedStructure<VkMemoryHeap>::ManagedStructure;
};

template <>
class Managed<VkMemoryHostPointerPropertiesEXT>
    : public detail::ManagedStructure<VkMemoryHostPointerPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkMemoryHostPointerPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkMemoryOpaqueCaptureAddressAllocateInfo>
    : public detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>
{
public:
    using detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>::ManagedStructure;
};


template <>
class Managed<VkMemoryPriorityAllocateInfoEXT>
    : public detail::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>
{
public:
    using detail::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkMemoryRequirements>
    : public detail::ManagedStructure<VkMemoryRequirements>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements>::ManagedStructure;
};

template <>
class Managed<VkMemoryRequirements2>
    : public detail::ManagedStructure<VkMemoryRequirements2>
{
public:
    using detail::ManagedStructure<VkMemoryRequirements2>::ManagedStructure;
};


template <>
class Managed<VkMemoryType>
    : public detail::ManagedStructure<VkMemoryType>
{
public:
    using detail::ManagedStructure<VkMemoryType>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkMemoryWin32HandlePropertiesKHR>
    : public detail::ManagedStructure<VkMemoryWin32HandlePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkMemoryWin32HandlePropertiesKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
class Managed<VkMetalSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkMetalSurfaceCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkMetalSurfaceCreateInfoEXT>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
class Managed<VkMultisamplePropertiesEXT>
    : public detail::ManagedStructure<VkMultisamplePropertiesEXT>
{
public:
    using detail::ManagedStructure<VkMultisamplePropertiesEXT>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkNativeBufferANDROID>
    : public detail::ManagedStructure<VkNativeBufferANDROID>
{
public:
    using detail::ManagedStructure<VkNativeBufferANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkNativeBufferUsage2ANDROID>
    : public detail::ManagedStructure<VkNativeBufferUsage2ANDROID>
{
public:
    using detail::ManagedStructure<VkNativeBufferUsage2ANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkOffset2D>
    : public detail::ManagedStructure<VkOffset2D>
{
public:
    using detail::ManagedStructure<VkOffset2D>::ManagedStructure;
};

template <>
class Managed<VkOffset3D>
    : public detail::ManagedStructure<VkOffset3D>
{
public:
    using detail::ManagedStructure<VkOffset3D>::ManagedStructure;
};

template <>
class Managed<VkPastPresentationTimingGOOGLE>
    : public detail::ManagedStructure<VkPastPresentationTimingGOOGLE>
{
public:
    using detail::ManagedStructure<VkPastPresentationTimingGOOGLE>::ManagedStructure;
};

template <>
class Managed<VkPerformanceConfigurationAcquireInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>::ManagedStructure;
};

template <>
class Managed<VkPerformanceCounterDescriptionKHR>
    : public detail::ManagedStructure<VkPerformanceCounterDescriptionKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterDescriptionKHR>::ManagedStructure;
};

template <>
class Managed<VkPerformanceCounterKHR>
    : public detail::ManagedStructure<VkPerformanceCounterKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterKHR>::ManagedStructure;
};

template <>
class Managed<VkPerformanceCounterResultKHR>
    : public detail::ManagedStructure<VkPerformanceCounterResultKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceCounterResultKHR>::ManagedStructure;
};

template <>
class Managed<VkPerformanceMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceMarkerInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceMarkerInfoINTEL>::ManagedStructure;
};

template <>
class Managed<VkPerformanceOverrideInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceOverrideInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceOverrideInfoINTEL>::ManagedStructure;
};

template <>
class Managed<VkPerformanceQuerySubmitInfoKHR>
    : public detail::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>
{
public:
    using detail::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkPerformanceStreamMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>::ManagedStructure;
};

template <>
class Managed<VkPerformanceValueDataINTEL>
    : public detail::ManagedStructure<VkPerformanceValueDataINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceValueDataINTEL>::ManagedStructure;
};

template <>
class Managed<VkPerformanceValueINTEL>
    : public detail::ManagedStructure<VkPerformanceValueINTEL>
{
public:
    using detail::ManagedStructure<VkPerformanceValueINTEL>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDevice16BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDevice8BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceASTCDecodeFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceCornerSampledImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceCustomBorderColorFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceCustomBorderColorPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceCustomBorderColorPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceDepthStencilResolveProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceDescriptorIndexingFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceDescriptorIndexingProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceDriverProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDriverProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceDriverProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceExclusiveScissorFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceExternalBufferInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceExternalFenceInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceExternalImageFormatInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceExternalSemaphoreInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceFeatures2>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFeatures2>::ManagedStructure;
};



template <>
class Managed<VkPhysicalDeviceFloatControlsProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceGroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceGroupProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceGroupProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceHostQueryResetFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceIDProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceIDProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIDProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceImageRobustnessFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageRobustnessFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageRobustnessFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceImageViewImageFormatInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceImagelessFramebufferFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceLimits>
    : public detail::ManagedStructure<VkPhysicalDeviceLimits>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLimits>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceLineRasterizationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceLineRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceMaintenance3Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceMeshShaderFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceMeshShaderPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceMultiviewFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceMultiviewProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceMultiviewProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDevicePCIBusInfoPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDevicePerformanceQueryFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDevicePerformanceQueryPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDevicePointClippingProperties>
    : public detail::ManagedStructure<VkPhysicalDevicePointClippingProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePointClippingProperties>::ManagedStructure;
};


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkPhysicalDevicePresentationPropertiesANDROID>
    : public detail::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkPhysicalDevicePrivateDataFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePrivateDataFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePrivateDataFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProperties2>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceProtectedMemoryFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceProtectedMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDevicePushDescriptorPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPhysicalDeviceRayTracingFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRayTracingFeaturesKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPhysicalDeviceRayTracingPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkPhysicalDeviceRayTracingPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceRobustness2FeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceRobustness2FeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRobustness2FeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceRobustness2PropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceRobustness2PropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceRobustness2PropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceSampleLocationsPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceSamplerFilterMinmaxProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceScalarBlockLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderAtomicInt64Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceShaderClockFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderCoreProperties2AMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderCorePropertiesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceShaderDrawParametersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderFloat16Int8Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceShadingRateImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceShadingRateImagePropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceSparseImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceSparseProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSparseProperties>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceSubgroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupProperties>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceSurfaceInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceToolPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>::ManagedStructure;
};




template <>
class Managed<VkPhysicalDeviceVariablePointersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceVulkan11Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan11Features>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceVulkan11Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan11Properties>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceVulkan12Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Features>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan12Features>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceVulkan12Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Properties>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkan12Properties>::ManagedStructure;
};

template <>
class Managed<VkPhysicalDeviceVulkanMemoryModelFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>::ManagedStructure;
};


template <>
class Managed<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineCacheCreateInfo>
    : public detail::ManagedStructure<VkPipelineCacheCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineCacheCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineColorBlendAttachmentState>
    : public detail::ManagedStructure<VkPipelineColorBlendAttachmentState>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendAttachmentState>::ManagedStructure;
};

template <>
class Managed<VkPipelineColorBlendStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineColorBlendStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineColorBlendStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineCompilerControlCreateInfoAMD>
    : public detail::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>::ManagedStructure;
};

template <>
class Managed<VkPipelineCoverageModulationStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineCoverageReductionStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineCoverageToColorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineCreationFeedbackCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineCreationFeedbackEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackEXT>
{
public:
    using detail::ManagedStructure<VkPipelineCreationFeedbackEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineDepthStencilStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineDiscardRectangleStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineDynamicStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDynamicStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineDynamicStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineExecutableInfoKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkPipelineExecutableInternalRepresentationKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>::ManagedStructure;
};

template <>
class Managed<VkPipelineExecutablePropertiesKHR>
    : public detail::ManagedStructure<VkPipelineExecutablePropertiesKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutablePropertiesKHR>::ManagedStructure;
};

template <>
class Managed<VkPipelineExecutableStatisticKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableStatisticKHR>::ManagedStructure;
};

template <>
class Managed<VkPipelineExecutableStatisticValueKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticValueKHR>
{
public:
    using detail::ManagedStructure<VkPipelineExecutableStatisticValueKHR>::ManagedStructure;
};

template <>
class Managed<VkPipelineInfoKHR>
    : public detail::ManagedStructure<VkPipelineInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkPipelineInputAssemblyStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineLayoutCreateInfo>
    : public detail::ManagedStructure<VkPipelineLayoutCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineLayoutCreateInfo>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPipelineLibraryCreateInfoKHR>
    : public detail::ManagedStructure<VkPipelineLibraryCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkPipelineLibraryCreateInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkPipelineMultisampleStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineMultisampleStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineMultisampleStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineRasterizationConservativeStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineRasterizationLineStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineRasterizationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineRasterizationStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineRasterizationStateRasterizationOrderAMD>
    : public detail::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>::ManagedStructure;
};

template <>
class Managed<VkPipelineRasterizationStateStreamCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineSampleLocationsStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineShaderStageCreateInfo>
    : public detail::ManagedStructure<VkPipelineShaderStageCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineShaderStageCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineTessellationDomainOriginStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkPipelineTessellationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineTessellationStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineVertexInputDivisorStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkPipelineVertexInputStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineVertexInputStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineVertexInputStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineViewportShadingRateImageStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineViewportStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineViewportStateCreateInfo>
{
public:
    using detail::ManagedStructure<VkPipelineViewportStateCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkPipelineViewportSwizzleStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkPipelineViewportWScalingStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_GGP
template <>
class Managed<VkPresentFrameTokenGGP>
    : public detail::ManagedStructure<VkPresentFrameTokenGGP>
{
public:
    using detail::ManagedStructure<VkPresentFrameTokenGGP>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_GGP

template <>
class Managed<VkPresentInfoKHR>
    : public detail::ManagedStructure<VkPresentInfoKHR>
{
public:
    using detail::ManagedStructure<VkPresentInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkPresentRegionKHR>
    : public detail::ManagedStructure<VkPresentRegionKHR>
{
public:
    using detail::ManagedStructure<VkPresentRegionKHR>::ManagedStructure;
};

template <>
class Managed<VkPresentRegionsKHR>
    : public detail::ManagedStructure<VkPresentRegionsKHR>
{
public:
    using detail::ManagedStructure<VkPresentRegionsKHR>::ManagedStructure;
};

template <>
class Managed<VkPresentTimeGOOGLE>
    : public detail::ManagedStructure<VkPresentTimeGOOGLE>
{
public:
    using detail::ManagedStructure<VkPresentTimeGOOGLE>::ManagedStructure;
};

template <>
class Managed<VkPresentTimesInfoGOOGLE>
    : public detail::ManagedStructure<VkPresentTimesInfoGOOGLE>
{
public:
    using detail::ManagedStructure<VkPresentTimesInfoGOOGLE>::ManagedStructure;
};

template <>
class Managed<VkPrivateDataSlotCreateInfoEXT>
    : public detail::ManagedStructure<VkPrivateDataSlotCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkPrivateDataSlotCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkProtectedSubmitInfo>
    : public detail::ManagedStructure<VkProtectedSubmitInfo>
{
public:
    using detail::ManagedStructure<VkProtectedSubmitInfo>::ManagedStructure;
};

template <>
class Managed<VkPushConstantRange>
    : public detail::ManagedStructure<VkPushConstantRange>
{
public:
    using detail::ManagedStructure<VkPushConstantRange>::ManagedStructure;
};

template <>
class Managed<VkQueryPoolCreateInfo>
    : public detail::ManagedStructure<VkQueryPoolCreateInfo>
{
public:
    using detail::ManagedStructure<VkQueryPoolCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkQueryPoolPerformanceCreateInfoKHR>
    : public detail::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkQueryPoolPerformanceQueryCreateInfoINTEL>
    : public detail::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>
{
public:
    using detail::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>::ManagedStructure;
};

template <>
class Managed<VkQueueFamilyCheckpointPropertiesNV>
    : public detail::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>
{
public:
    using detail::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>::ManagedStructure;
};

template <>
class Managed<VkQueueFamilyProperties>
    : public detail::ManagedStructure<VkQueueFamilyProperties>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties>::ManagedStructure;
};

template <>
class Managed<VkQueueFamilyProperties2>
    : public detail::ManagedStructure<VkQueueFamilyProperties2>
{
public:
    using detail::ManagedStructure<VkQueueFamilyProperties2>::ManagedStructure;
};


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingPipelineCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkRayTracingPipelineCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineCreateInfoNV>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingPipelineInterfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingPipelineInterfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRayTracingPipelineInterfaceCreateInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingShaderGroupCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkRayTracingShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>
{
public:
    using detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>::ManagedStructure;
};

template <>
class Managed<VkRect2D>
    : public detail::ManagedStructure<VkRect2D>
{
public:
    using detail::ManagedStructure<VkRect2D>::ManagedStructure;
};

template <>
class Managed<VkRectLayerKHR>
    : public detail::ManagedStructure<VkRectLayerKHR>
{
public:
    using detail::ManagedStructure<VkRectLayerKHR>::ManagedStructure;
};

template <>
class Managed<VkRefreshCycleDurationGOOGLE>
    : public detail::ManagedStructure<VkRefreshCycleDurationGOOGLE>
{
public:
    using detail::ManagedStructure<VkRefreshCycleDurationGOOGLE>::ManagedStructure;
};

template <>
class Managed<VkRenderPassAttachmentBeginInfo>
    : public detail::ManagedStructure<VkRenderPassAttachmentBeginInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassAttachmentBeginInfo>::ManagedStructure;
};


template <>
class Managed<VkRenderPassBeginInfo>
    : public detail::ManagedStructure<VkRenderPassBeginInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassBeginInfo>::ManagedStructure;
};

template <>
class Managed<VkRenderPassCreateInfo>
    : public detail::ManagedStructure<VkRenderPassCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkRenderPassCreateInfo2>
    : public detail::ManagedStructure<VkRenderPassCreateInfo2>
{
public:
    using detail::ManagedStructure<VkRenderPassCreateInfo2>::ManagedStructure;
};


template <>
class Managed<VkRenderPassFragmentDensityMapCreateInfoEXT>
    : public detail::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkRenderPassInputAttachmentAspectCreateInfo>
    : public detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkRenderPassMultiviewCreateInfo>
    : public detail::ManagedStructure<VkRenderPassMultiviewCreateInfo>
{
public:
    using detail::ManagedStructure<VkRenderPassMultiviewCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkRenderPassSampleLocationsBeginInfoEXT>
    : public detail::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>
{
public:
    using detail::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkRenderPassTransformBeginInfoQCOM>
    : public detail::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>
{
public:
    using detail::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>::ManagedStructure;
};

template <>
class Managed<VkSampleLocationEXT>
    : public detail::ManagedStructure<VkSampleLocationEXT>
{
public:
    using detail::ManagedStructure<VkSampleLocationEXT>::ManagedStructure;
};

template <>
class Managed<VkSampleLocationsInfoEXT>
    : public detail::ManagedStructure<VkSampleLocationsInfoEXT>
{
public:
    using detail::ManagedStructure<VkSampleLocationsInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkSamplerCreateInfo>
    : public detail::ManagedStructure<VkSamplerCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkSamplerCustomBorderColorCreateInfoEXT>
    : public detail::ManagedStructure<VkSamplerCustomBorderColorCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkSamplerCustomBorderColorCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkSamplerReductionModeCreateInfo>
    : public detail::ManagedStructure<VkSamplerReductionModeCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerReductionModeCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkSamplerYcbcrConversionCreateInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkSamplerYcbcrConversionImageFormatProperties>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>::ManagedStructure;
};


template <>
class Managed<VkSamplerYcbcrConversionInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionInfo>
{
public:
    using detail::ManagedStructure<VkSamplerYcbcrConversionInfo>::ManagedStructure;
};


template <>
class Managed<VkSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreCreateInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkSemaphoreGetFdInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetFdInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreGetFdInfoKHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSemaphoreGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>
{
public:
    using detail::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSemaphoreSignalInfo>
    : public detail::ManagedStructure<VkSemaphoreSignalInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreSignalInfo>::ManagedStructure;
};


template <>
class Managed<VkSemaphoreTypeCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreTypeCreateInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreTypeCreateInfo>::ManagedStructure;
};


template <>
class Managed<VkSemaphoreWaitInfo>
    : public detail::ManagedStructure<VkSemaphoreWaitInfo>
{
public:
    using detail::ManagedStructure<VkSemaphoreWaitInfo>::ManagedStructure;
};


template <>
class Managed<VkSetStateFlagsIndirectCommandNV>
    : public detail::ManagedStructure<VkSetStateFlagsIndirectCommandNV>
{
public:
    using detail::ManagedStructure<VkSetStateFlagsIndirectCommandNV>::ManagedStructure;
};

template <>
class Managed<VkShaderModuleCreateInfo>
    : public detail::ManagedStructure<VkShaderModuleCreateInfo>
{
public:
    using detail::ManagedStructure<VkShaderModuleCreateInfo>::ManagedStructure;
};

template <>
class Managed<VkShaderModuleValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkShaderResourceUsageAMD>
    : public detail::ManagedStructure<VkShaderResourceUsageAMD>
{
public:
    using detail::ManagedStructure<VkShaderResourceUsageAMD>::ManagedStructure;
};

template <>
class Managed<VkShaderStatisticsInfoAMD>
    : public detail::ManagedStructure<VkShaderStatisticsInfoAMD>
{
public:
    using detail::ManagedStructure<VkShaderStatisticsInfoAMD>::ManagedStructure;
};

template <>
class Managed<VkShadingRatePaletteNV>
    : public detail::ManagedStructure<VkShadingRatePaletteNV>
{
public:
    using detail::ManagedStructure<VkShadingRatePaletteNV>::ManagedStructure;
};

template <>
class Managed<VkSharedPresentSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>::ManagedStructure;
};

template <>
class Managed<VkSparseBufferMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseBufferMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseBufferMemoryBindInfo>::ManagedStructure;
};

template <>
class Managed<VkSparseImageFormatProperties>
    : public detail::ManagedStructure<VkSparseImageFormatProperties>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties>::ManagedStructure;
};

template <>
class Managed<VkSparseImageFormatProperties2>
    : public detail::ManagedStructure<VkSparseImageFormatProperties2>
{
public:
    using detail::ManagedStructure<VkSparseImageFormatProperties2>::ManagedStructure;
};


template <>
class Managed<VkSparseImageMemoryBind>
    : public detail::ManagedStructure<VkSparseImageMemoryBind>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryBind>::ManagedStructure;
};

template <>
class Managed<VkSparseImageMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryBindInfo>::ManagedStructure;
};

template <>
class Managed<VkSparseImageMemoryRequirements>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements>::ManagedStructure;
};

template <>
class Managed<VkSparseImageMemoryRequirements2>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements2>
{
public:
    using detail::ManagedStructure<VkSparseImageMemoryRequirements2>::ManagedStructure;
};


template <>
class Managed<VkSparseImageOpaqueMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>
{
public:
    using detail::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>::ManagedStructure;
};

template <>
class Managed<VkSparseMemoryBind>
    : public detail::ManagedStructure<VkSparseMemoryBind>
{
public:
    using detail::ManagedStructure<VkSparseMemoryBind>::ManagedStructure;
};

template <>
class Managed<VkSpecializationInfo>
    : public detail::ManagedStructure<VkSpecializationInfo>
{
public:
    using detail::ManagedStructure<VkSpecializationInfo>::ManagedStructure;
};

template <>
class Managed<VkSpecializationMapEntry>
    : public detail::ManagedStructure<VkSpecializationMapEntry>
{
public:
    using detail::ManagedStructure<VkSpecializationMapEntry>::ManagedStructure;
};

template <>
class Managed<VkStencilOpState>
    : public detail::ManagedStructure<VkStencilOpState>
{
public:
    using detail::ManagedStructure<VkStencilOpState>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_GGP
template <>
class Managed<VkStreamDescriptorSurfaceCreateInfoGGP>
    : public detail::ManagedStructure<VkStreamDescriptorSurfaceCreateInfoGGP>
{
public:
    using detail::ManagedStructure<VkStreamDescriptorSurfaceCreateInfoGGP>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkStridedBufferRegionKHR>
    : public detail::ManagedStructure<VkStridedBufferRegionKHR>
{
public:
    using detail::ManagedStructure<VkStridedBufferRegionKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkSubmitInfo>
    : public detail::ManagedStructure<VkSubmitInfo>
{
public:
    using detail::ManagedStructure<VkSubmitInfo>::ManagedStructure;
};

template <>
class Managed<VkSubpassBeginInfo>
    : public detail::ManagedStructure<VkSubpassBeginInfo>
{
public:
    using detail::ManagedStructure<VkSubpassBeginInfo>::ManagedStructure;
};


template <>
class Managed<VkSubpassDependency>
    : public detail::ManagedStructure<VkSubpassDependency>
{
public:
    using detail::ManagedStructure<VkSubpassDependency>::ManagedStructure;
};

template <>
class Managed<VkSubpassDependency2>
    : public detail::ManagedStructure<VkSubpassDependency2>
{
public:
    using detail::ManagedStructure<VkSubpassDependency2>::ManagedStructure;
};


template <>
class Managed<VkSubpassDescription>
    : public detail::ManagedStructure<VkSubpassDescription>
{
public:
    using detail::ManagedStructure<VkSubpassDescription>::ManagedStructure;
};

template <>
class Managed<VkSubpassDescription2>
    : public detail::ManagedStructure<VkSubpassDescription2>
{
public:
    using detail::ManagedStructure<VkSubpassDescription2>::ManagedStructure;
};


template <>
class Managed<VkSubpassDescriptionDepthStencilResolve>
    : public detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>
{
public:
    using detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>::ManagedStructure;
};


template <>
class Managed<VkSubpassEndInfo>
    : public detail::ManagedStructure<VkSubpassEndInfo>
{
public:
    using detail::ManagedStructure<VkSubpassEndInfo>::ManagedStructure;
};


template <>
class Managed<VkSubpassSampleLocationsEXT>
    : public detail::ManagedStructure<VkSubpassSampleLocationsEXT>
{
public:
    using detail::ManagedStructure<VkSubpassSampleLocationsEXT>::ManagedStructure;
};

template <>
class Managed<VkSubresourceLayout>
    : public detail::ManagedStructure<VkSubresourceLayout>
{
public:
    using detail::ManagedStructure<VkSubresourceLayout>::ManagedStructure;
};

template <>
class Managed<VkSurfaceCapabilities2EXT>
    : public detail::ManagedStructure<VkSurfaceCapabilities2EXT>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilities2EXT>::ManagedStructure;
};

template <>
class Managed<VkSurfaceCapabilities2KHR>
    : public detail::ManagedStructure<VkSurfaceCapabilities2KHR>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilities2KHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceCapabilitiesKHR>::ManagedStructure;
};

template <>
class Managed<VkSurfaceFormat2KHR>
    : public detail::ManagedStructure<VkSurfaceFormat2KHR>
{
public:
    using detail::ManagedStructure<VkSurfaceFormat2KHR>::ManagedStructure;
};

template <>
class Managed<VkSurfaceFormatKHR>
    : public detail::ManagedStructure<VkSurfaceFormatKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceFormatKHR>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceFullScreenExclusiveInfoEXT>
    : public detail::ManagedStructure<VkSurfaceFullScreenExclusiveInfoEXT>
{
public:
    using detail::ManagedStructure<VkSurfaceFullScreenExclusiveInfoEXT>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceFullScreenExclusiveWin32InfoEXT>
    : public detail::ManagedStructure<VkSurfaceFullScreenExclusiveWin32InfoEXT>
{
public:
    using detail::ManagedStructure<VkSurfaceFullScreenExclusiveWin32InfoEXT>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSurfaceProtectedCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>
{
public:
    using detail::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>::ManagedStructure;
};

template <>
class Managed<VkSwapchainCounterCreateInfoEXT>
    : public detail::ManagedStructure<VkSwapchainCounterCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkSwapchainCounterCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkSwapchainCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkSwapchainCreateInfoKHR>::ManagedStructure;
};

template <>
class Managed<VkSwapchainDisplayNativeHdrCreateInfoAMD>
    : public detail::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>
{
public:
    using detail::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkSwapchainImageCreateInfoANDROID>
    : public detail::ManagedStructure<VkSwapchainImageCreateInfoANDROID>
{
public:
    using detail::ManagedStructure<VkSwapchainImageCreateInfoANDROID>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkTextureLODGatherFormatPropertiesAMD>
    : public detail::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>
{
public:
    using detail::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>::ManagedStructure;
};

template <>
class Managed<VkTimelineSemaphoreSubmitInfo>
    : public detail::ManagedStructure<VkTimelineSemaphoreSubmitInfo>
{
public:
    using detail::ManagedStructure<VkTimelineSemaphoreSubmitInfo>::ManagedStructure;
};


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkTraceRaysIndirectCommandKHR>
    : public detail::ManagedStructure<VkTraceRaysIndirectCommandKHR>
{
public:
    using detail::ManagedStructure<VkTraceRaysIndirectCommandKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkTransformMatrixKHR>
    : public detail::ManagedStructure<VkTransformMatrixKHR>
{
public:
    using detail::ManagedStructure<VkTransformMatrixKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
class Managed<VkValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkValidationCacheCreateInfoEXT>
{
public:
    using detail::ManagedStructure<VkValidationCacheCreateInfoEXT>::ManagedStructure;
};

template <>
class Managed<VkValidationFeaturesEXT>
    : public detail::ManagedStructure<VkValidationFeaturesEXT>
{
public:
    using detail::ManagedStructure<VkValidationFeaturesEXT>::ManagedStructure;
};

template <>
class Managed<VkValidationFlagsEXT>
    : public detail::ManagedStructure<VkValidationFlagsEXT>
{
public:
    using detail::ManagedStructure<VkValidationFlagsEXT>::ManagedStructure;
};

template <>
class Managed<VkVertexInputAttributeDescription>
    : public detail::ManagedStructure<VkVertexInputAttributeDescription>
{
public:
    using detail::ManagedStructure<VkVertexInputAttributeDescription>::ManagedStructure;
};

template <>
class Managed<VkVertexInputBindingDescription>
    : public detail::ManagedStructure<VkVertexInputBindingDescription>
{
public:
    using detail::ManagedStructure<VkVertexInputBindingDescription>::ManagedStructure;
};

template <>
class Managed<VkVertexInputBindingDivisorDescriptionEXT>
    : public detail::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>
{
public:
    using detail::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_VI_NN
template <>
class Managed<VkViSurfaceCreateInfoNN>
    : public detail::ManagedStructure<VkViSurfaceCreateInfoNN>
{
public:
    using detail::ManagedStructure<VkViSurfaceCreateInfoNN>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_VI_NN

template <>
class Managed<VkViewport>
    : public detail::ManagedStructure<VkViewport>
{
public:
    using detail::ManagedStructure<VkViewport>::ManagedStructure;
};

template <>
class Managed<VkViewportSwizzleNV>
    : public detail::ManagedStructure<VkViewportSwizzleNV>
{
public:
    using detail::ManagedStructure<VkViewportSwizzleNV>::ManagedStructure;
};

template <>
class Managed<VkViewportWScalingNV>
    : public detail::ManagedStructure<VkViewportWScalingNV>
{
public:
    using detail::ManagedStructure<VkViewportWScalingNV>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
class Managed<VkWaylandSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkWaylandSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkWaylandSurfaceCreateInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32KeyedMutexAcquireReleaseInfoKHR>
    : public detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoKHR>
{
public:
    using detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32KeyedMutexAcquireReleaseInfoNV>
    : public detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoNV>
{
public:
    using detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoNV>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32SurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkWin32SurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkWin32SurfaceCreateInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkWriteDescriptorSet>
    : public detail::ManagedStructure<VkWriteDescriptorSet>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSet>::ManagedStructure;
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkWriteDescriptorSetAccelerationStructureKHR>
    : public detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>::ManagedStructure;
};
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
class Managed<VkWriteDescriptorSetInlineUniformBlockEXT>
    : public detail::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>
{
public:
    using detail::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>::ManagedStructure;
};

template <>
class Managed<VkXYColorEXT>
    : public detail::ManagedStructure<VkXYColorEXT>
{
public:
    using detail::ManagedStructure<VkXYColorEXT>::ManagedStructure;
};

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
class Managed<VkXcbSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkXcbSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkXcbSurfaceCreateInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
class Managed<VkXlibSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkXlibSurfaceCreateInfoKHR>
{
public:
    using detail::ManagedStructure<VkXlibSurfaceCreateInfoKHR>::ManagedStructure;
};
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace vk
} // namespace dst
