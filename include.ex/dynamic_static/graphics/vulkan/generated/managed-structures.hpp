
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
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAabbPositionsNV>
    : public detail::ManagedStructure<VkAabbPositionsNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureBuildGeometryInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureBuildGeometryInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureBuildOffsetInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureBuildOffsetInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureCreateGeometryTypeInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureCreateGeometryTypeInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureCreateInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureCreateInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureCreateInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureCreateInfoNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureDeviceAddressInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureDeviceAddressInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryAabbsDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryAabbsDataKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryDataKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryInstancesDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryInstancesDataKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureGeometryTrianglesDataKHR>
    : public detail::ManagedStructure<VkAccelerationStructureGeometryTrianglesDataKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureInfoNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureInstanceKHR>
    : public detail::ManagedStructure<VkAccelerationStructureInstanceKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureInstanceNV>
    : public detail::ManagedStructure<VkAccelerationStructureInstanceNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoKHR>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAccelerationStructureMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkAccelerationStructureMemoryRequirementsInfoNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkAccelerationStructureVersionKHR>
    : public detail::ManagedStructure<VkAccelerationStructureVersionKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkAcquireNextImageInfoKHR>
    : public detail::ManagedStructure<VkAcquireNextImageInfoKHR>
{
};

template <>
class Managed<VkAcquireProfilingLockInfoKHR>
    : public detail::ManagedStructure<VkAcquireProfilingLockInfoKHR>
{
};

template <>
class Managed<VkAllocationCallbacks>
    : public detail::ManagedStructure<VkAllocationCallbacks>
{
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferFormatPropertiesANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferFormatPropertiesANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferPropertiesANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferPropertiesANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidHardwareBufferUsageANDROID>
    : public detail::ManagedStructure<VkAndroidHardwareBufferUsageANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkAndroidSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkAndroidSurfaceCreateInfoKHR>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkApplicationInfo>
    : public detail::ManagedStructure<VkApplicationInfo>
{
};

template <>
class Managed<VkAttachmentDescription>
    : public detail::ManagedStructure<VkAttachmentDescription>
{
};

template <>
class Managed<VkAttachmentDescription2>
    : public detail::ManagedStructure<VkAttachmentDescription2>
{
};

template <>
class Managed<VkAttachmentDescription2KHR>
    : public detail::ManagedStructure<VkAttachmentDescription2KHR>
{
};

template <>
class Managed<VkAttachmentDescriptionStencilLayout>
    : public detail::ManagedStructure<VkAttachmentDescriptionStencilLayout>
{
};

template <>
class Managed<VkAttachmentDescriptionStencilLayoutKHR>
    : public detail::ManagedStructure<VkAttachmentDescriptionStencilLayoutKHR>
{
};

template <>
class Managed<VkAttachmentReference>
    : public detail::ManagedStructure<VkAttachmentReference>
{
};

template <>
class Managed<VkAttachmentReference2>
    : public detail::ManagedStructure<VkAttachmentReference2>
{
};

template <>
class Managed<VkAttachmentReference2KHR>
    : public detail::ManagedStructure<VkAttachmentReference2KHR>
{
};

template <>
class Managed<VkAttachmentReferenceStencilLayout>
    : public detail::ManagedStructure<VkAttachmentReferenceStencilLayout>
{
};

template <>
class Managed<VkAttachmentReferenceStencilLayoutKHR>
    : public detail::ManagedStructure<VkAttachmentReferenceStencilLayoutKHR>
{
};

template <>
class Managed<VkAttachmentSampleLocationsEXT>
    : public detail::ManagedStructure<VkAttachmentSampleLocationsEXT>
{
};

template <>
class Managed<VkBaseInStructure>
    : public detail::ManagedStructure<VkBaseInStructure>
{
};

template <>
class Managed<VkBaseOutStructure>
    : public detail::ManagedStructure<VkBaseOutStructure>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkBindAccelerationStructureMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkBindAccelerationStructureMemoryInfoNV>
    : public detail::ManagedStructure<VkBindAccelerationStructureMemoryInfoNV>
{
};

template <>
class Managed<VkBindBufferMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfo>
{
};

template <>
class Managed<VkBindBufferMemoryDeviceGroupInfoKHR>
    : public detail::ManagedStructure<VkBindBufferMemoryDeviceGroupInfoKHR>
{
};

template <>
class Managed<VkBindBufferMemoryInfo>
    : public detail::ManagedStructure<VkBindBufferMemoryInfo>
{
};

template <>
class Managed<VkBindBufferMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindBufferMemoryInfoKHR>
{
};

template <>
class Managed<VkBindImageMemoryDeviceGroupInfo>
    : public detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfo>
{
};

template <>
class Managed<VkBindImageMemoryDeviceGroupInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemoryDeviceGroupInfoKHR>
{
};

template <>
class Managed<VkBindImageMemoryInfo>
    : public detail::ManagedStructure<VkBindImageMemoryInfo>
{
};

template <>
class Managed<VkBindImageMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemoryInfoKHR>
{
};

template <>
class Managed<VkBindImageMemorySwapchainInfoKHR>
    : public detail::ManagedStructure<VkBindImageMemorySwapchainInfoKHR>
{
};

template <>
class Managed<VkBindImagePlaneMemoryInfo>
    : public detail::ManagedStructure<VkBindImagePlaneMemoryInfo>
{
};

template <>
class Managed<VkBindImagePlaneMemoryInfoKHR>
    : public detail::ManagedStructure<VkBindImagePlaneMemoryInfoKHR>
{
};

template <>
class Managed<VkBindIndexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindIndexBufferIndirectCommandNV>
{
};

template <>
class Managed<VkBindShaderGroupIndirectCommandNV>
    : public detail::ManagedStructure<VkBindShaderGroupIndirectCommandNV>
{
};

template <>
class Managed<VkBindSparseInfo>
    : public detail::ManagedStructure<VkBindSparseInfo>
{
};

template <>
class Managed<VkBindVertexBufferIndirectCommandNV>
    : public detail::ManagedStructure<VkBindVertexBufferIndirectCommandNV>
{
};

template <>
class Managed<VkBufferCopy>
    : public detail::ManagedStructure<VkBufferCopy>
{
};

template <>
class Managed<VkBufferCreateInfo>
    : public detail::ManagedStructure<VkBufferCreateInfo>
{
};

template <>
class Managed<VkBufferDeviceAddressCreateInfoEXT>
    : public detail::ManagedStructure<VkBufferDeviceAddressCreateInfoEXT>
{
};

template <>
class Managed<VkBufferDeviceAddressInfo>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfo>
{
};

template <>
class Managed<VkBufferDeviceAddressInfoEXT>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfoEXT>
{
};

template <>
class Managed<VkBufferDeviceAddressInfoKHR>
    : public detail::ManagedStructure<VkBufferDeviceAddressInfoKHR>
{
};

template <>
class Managed<VkBufferImageCopy>
    : public detail::ManagedStructure<VkBufferImageCopy>
{
};

template <>
class Managed<VkBufferMemoryBarrier>
    : public detail::ManagedStructure<VkBufferMemoryBarrier>
{
};

template <>
class Managed<VkBufferMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkBufferMemoryRequirementsInfo2>
{
};

template <>
class Managed<VkBufferMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkBufferMemoryRequirementsInfo2KHR>
{
};

template <>
class Managed<VkBufferOpaqueCaptureAddressCreateInfo>
    : public detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfo>
{
};

template <>
class Managed<VkBufferOpaqueCaptureAddressCreateInfoKHR>
    : public detail::ManagedStructure<VkBufferOpaqueCaptureAddressCreateInfoKHR>
{
};

template <>
class Managed<VkBufferViewCreateInfo>
    : public detail::ManagedStructure<VkBufferViewCreateInfo>
{
};

template <>
class Managed<VkCalibratedTimestampInfoEXT>
    : public detail::ManagedStructure<VkCalibratedTimestampInfoEXT>
{
};

template <>
class Managed<VkCheckpointDataNV>
    : public detail::ManagedStructure<VkCheckpointDataNV>
{
};

template <>
class Managed<VkClearAttachment>
    : public detail::ManagedStructure<VkClearAttachment>
{
};

template <>
class Managed<VkClearColorValue>
    : public detail::ManagedStructure<VkClearColorValue>
{
};

template <>
class Managed<VkClearDepthStencilValue>
    : public detail::ManagedStructure<VkClearDepthStencilValue>
{
};

template <>
class Managed<VkClearRect>
    : public detail::ManagedStructure<VkClearRect>
{
};

template <>
class Managed<VkClearValue>
    : public detail::ManagedStructure<VkClearValue>
{
};

template <>
class Managed<VkCoarseSampleLocationNV>
    : public detail::ManagedStructure<VkCoarseSampleLocationNV>
{
};

template <>
class Managed<VkCoarseSampleOrderCustomNV>
    : public detail::ManagedStructure<VkCoarseSampleOrderCustomNV>
{
};

template <>
class Managed<VkCommandBufferAllocateInfo>
    : public detail::ManagedStructure<VkCommandBufferAllocateInfo>
{
};

template <>
class Managed<VkCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkCommandBufferBeginInfo>
{
};

template <>
class Managed<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
    : public detail::ManagedStructure<VkCommandBufferInheritanceConditionalRenderingInfoEXT>
{
};

template <>
class Managed<VkCommandBufferInheritanceInfo>
    : public detail::ManagedStructure<VkCommandBufferInheritanceInfo>
{
};

template <>
class Managed<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
    : public detail::ManagedStructure<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>
{
};

template <>
class Managed<VkCommandPoolCreateInfo>
    : public detail::ManagedStructure<VkCommandPoolCreateInfo>
{
};

template <>
class Managed<VkComponentMapping>
    : public detail::ManagedStructure<VkComponentMapping>
{
};

template <>
class Managed<VkComputePipelineCreateInfo>
    : public detail::ManagedStructure<VkComputePipelineCreateInfo>
{
};

template <>
class Managed<VkConditionalRenderingBeginInfoEXT>
    : public detail::ManagedStructure<VkConditionalRenderingBeginInfoEXT>
{
};

template <>
class Managed<VkConformanceVersion>
    : public detail::ManagedStructure<VkConformanceVersion>
{
};

template <>
class Managed<VkConformanceVersionKHR>
    : public detail::ManagedStructure<VkConformanceVersionKHR>
{
};

template <>
class Managed<VkCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkCooperativeMatrixPropertiesNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyAccelerationStructureInfoKHR>
    : public detail::ManagedStructure<VkCopyAccelerationStructureInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyAccelerationStructureToMemoryInfoKHR>
    : public detail::ManagedStructure<VkCopyAccelerationStructureToMemoryInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkCopyDescriptorSet>
    : public detail::ManagedStructure<VkCopyDescriptorSet>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkCopyMemoryToAccelerationStructureInfoKHR>
    : public detail::ManagedStructure<VkCopyMemoryToAccelerationStructureInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkD3D12FenceSubmitInfoKHR>
    : public detail::ManagedStructure<VkD3D12FenceSubmitInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkDebugMarkerMarkerInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerMarkerInfoEXT>
{
};

template <>
class Managed<VkDebugMarkerObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectNameInfoEXT>
{
};

template <>
class Managed<VkDebugMarkerObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugMarkerObjectTagInfoEXT>
{
};

template <>
class Managed<VkDebugReportCallbackCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugReportCallbackCreateInfoEXT>
{
};

template <>
class Managed<VkDebugUtilsLabelEXT>
    : public detail::ManagedStructure<VkDebugUtilsLabelEXT>
{
};

template <>
class Managed<VkDebugUtilsMessengerCallbackDataEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCallbackDataEXT>
{
};

template <>
class Managed<VkDebugUtilsMessengerCreateInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsMessengerCreateInfoEXT>
{
};

template <>
class Managed<VkDebugUtilsObjectNameInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectNameInfoEXT>
{
};

template <>
class Managed<VkDebugUtilsObjectTagInfoEXT>
    : public detail::ManagedStructure<VkDebugUtilsObjectTagInfoEXT>
{
};

template <>
class Managed<VkDedicatedAllocationBufferCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationBufferCreateInfoNV>
{
};

template <>
class Managed<VkDedicatedAllocationImageCreateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationImageCreateInfoNV>
{
};

template <>
class Managed<VkDedicatedAllocationMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkDedicatedAllocationMemoryAllocateInfoNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeferredOperationInfoKHR>
    : public detail::ManagedStructure<VkDeferredOperationInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkDescriptorBufferInfo>
    : public detail::ManagedStructure<VkDescriptorBufferInfo>
{
};

template <>
class Managed<VkDescriptorImageInfo>
    : public detail::ManagedStructure<VkDescriptorImageInfo>
{
};

template <>
class Managed<VkDescriptorPoolCreateInfo>
    : public detail::ManagedStructure<VkDescriptorPoolCreateInfo>
{
};

template <>
class Managed<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>
{
};

template <>
class Managed<VkDescriptorPoolSize>
    : public detail::ManagedStructure<VkDescriptorPoolSize>
{
};

template <>
class Managed<VkDescriptorSetAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetAllocateInfo>
{
};

template <>
class Managed<VkDescriptorSetLayoutBinding>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBinding>
{
};

template <>
class Managed<VkDescriptorSetLayoutBindingFlagsCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfo>
{
};

template <>
class Managed<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorSetLayoutBindingFlagsCreateInfoEXT>
{
};

template <>
class Managed<VkDescriptorSetLayoutCreateInfo>
    : public detail::ManagedStructure<VkDescriptorSetLayoutCreateInfo>
{
};

template <>
class Managed<VkDescriptorSetLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetLayoutSupport>
{
};

template <>
class Managed<VkDescriptorSetLayoutSupportKHR>
    : public detail::ManagedStructure<VkDescriptorSetLayoutSupportKHR>
{
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountAllocateInfo>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfo>
{
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountAllocateInfoEXT>
{
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountLayoutSupport>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupport>
{
};

template <>
class Managed<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>
    : public detail::ManagedStructure<VkDescriptorSetVariableDescriptorCountLayoutSupportEXT>
{
};

template <>
class Managed<VkDescriptorUpdateTemplateCreateInfo>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfo>
{
};

template <>
class Managed<VkDescriptorUpdateTemplateCreateInfoKHR>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateCreateInfoKHR>
{
};

template <>
class Managed<VkDescriptorUpdateTemplateEntry>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateEntry>
{
};

template <>
class Managed<VkDescriptorUpdateTemplateEntryKHR>
    : public detail::ManagedStructure<VkDescriptorUpdateTemplateEntryKHR>
{
};

template <>
class Managed<VkDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceCreateInfo>
{
};

template <>
class Managed<VkDeviceDiagnosticsConfigCreateInfoNV>
    : public detail::ManagedStructure<VkDeviceDiagnosticsConfigCreateInfoNV>
{
};

template <>
class Managed<VkDeviceEventInfoEXT>
    : public detail::ManagedStructure<VkDeviceEventInfoEXT>
{
};

template <>
class Managed<VkDeviceGroupBindSparseInfo>
    : public detail::ManagedStructure<VkDeviceGroupBindSparseInfo>
{
};

template <>
class Managed<VkDeviceGroupBindSparseInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupBindSparseInfoKHR>
{
};

template <>
class Managed<VkDeviceGroupCommandBufferBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfo>
{
};

template <>
class Managed<VkDeviceGroupCommandBufferBeginInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupCommandBufferBeginInfoKHR>
{
};

template <>
class Managed<VkDeviceGroupDeviceCreateInfo>
    : public detail::ManagedStructure<VkDeviceGroupDeviceCreateInfo>
{
};

template <>
class Managed<VkDeviceGroupDeviceCreateInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupDeviceCreateInfoKHR>
{
};

template <>
class Managed<VkDeviceGroupPresentCapabilitiesKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentCapabilitiesKHR>
{
};

template <>
class Managed<VkDeviceGroupPresentInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupPresentInfoKHR>
{
};

template <>
class Managed<VkDeviceGroupRenderPassBeginInfo>
    : public detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfo>
{
};

template <>
class Managed<VkDeviceGroupRenderPassBeginInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupRenderPassBeginInfoKHR>
{
};

template <>
class Managed<VkDeviceGroupSubmitInfo>
    : public detail::ManagedStructure<VkDeviceGroupSubmitInfo>
{
};

template <>
class Managed<VkDeviceGroupSubmitInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupSubmitInfoKHR>
{
};

template <>
class Managed<VkDeviceGroupSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkDeviceGroupSwapchainCreateInfoKHR>
{
};

template <>
class Managed<VkDeviceMemoryOpaqueCaptureAddressInfo>
    : public detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfo>
{
};

template <>
class Managed<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>
    : public detail::ManagedStructure<VkDeviceMemoryOpaqueCaptureAddressInfoKHR>
{
};

template <>
class Managed<VkDeviceMemoryOverallocationCreateInfoAMD>
    : public detail::ManagedStructure<VkDeviceMemoryOverallocationCreateInfoAMD>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeviceOrHostAddressConstKHR>
    : public detail::ManagedStructure<VkDeviceOrHostAddressConstKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkDeviceOrHostAddressKHR>
    : public detail::ManagedStructure<VkDeviceOrHostAddressKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkDeviceQueueCreateInfo>
    : public detail::ManagedStructure<VkDeviceQueueCreateInfo>
{
};

template <>
class Managed<VkDeviceQueueGlobalPriorityCreateInfoEXT>
    : public detail::ManagedStructure<VkDeviceQueueGlobalPriorityCreateInfoEXT>
{
};

template <>
class Managed<VkDeviceQueueInfo2>
    : public detail::ManagedStructure<VkDeviceQueueInfo2>
{
};

template <>
class Managed<VkDispatchIndirectCommand>
    : public detail::ManagedStructure<VkDispatchIndirectCommand>
{
};

template <>
class Managed<VkDisplayEventInfoEXT>
    : public detail::ManagedStructure<VkDisplayEventInfoEXT>
{
};

template <>
class Managed<VkDisplayModeCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplayModeCreateInfoKHR>
{
};

template <>
class Managed<VkDisplayModeParametersKHR>
    : public detail::ManagedStructure<VkDisplayModeParametersKHR>
{
};

template <>
class Managed<VkDisplayModeProperties2KHR>
    : public detail::ManagedStructure<VkDisplayModeProperties2KHR>
{
};

template <>
class Managed<VkDisplayModePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayModePropertiesKHR>
{
};

template <>
class Managed<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
    : public detail::ManagedStructure<VkDisplayNativeHdrSurfaceCapabilitiesAMD>
{
};

template <>
class Managed<VkDisplayPlaneCapabilities2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilities2KHR>
{
};

template <>
class Managed<VkDisplayPlaneCapabilitiesKHR>
    : public detail::ManagedStructure<VkDisplayPlaneCapabilitiesKHR>
{
};

template <>
class Managed<VkDisplayPlaneInfo2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneInfo2KHR>
{
};

template <>
class Managed<VkDisplayPlaneProperties2KHR>
    : public detail::ManagedStructure<VkDisplayPlaneProperties2KHR>
{
};

template <>
class Managed<VkDisplayPlanePropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPlanePropertiesKHR>
{
};

template <>
class Managed<VkDisplayPowerInfoEXT>
    : public detail::ManagedStructure<VkDisplayPowerInfoEXT>
{
};

template <>
class Managed<VkDisplayPresentInfoKHR>
    : public detail::ManagedStructure<VkDisplayPresentInfoKHR>
{
};

template <>
class Managed<VkDisplayProperties2KHR>
    : public detail::ManagedStructure<VkDisplayProperties2KHR>
{
};

template <>
class Managed<VkDisplayPropertiesKHR>
    : public detail::ManagedStructure<VkDisplayPropertiesKHR>
{
};

template <>
class Managed<VkDisplaySurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkDisplaySurfaceCreateInfoKHR>
{
};

template <>
class Managed<VkDrawIndexedIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndexedIndirectCommand>
{
};

template <>
class Managed<VkDrawIndirectCommand>
    : public detail::ManagedStructure<VkDrawIndirectCommand>
{
};

template <>
class Managed<VkDrawMeshTasksIndirectCommandNV>
    : public detail::ManagedStructure<VkDrawMeshTasksIndirectCommandNV>
{
};

template <>
class Managed<VkDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesEXT>
{
};

template <>
class Managed<VkDrmFormatModifierPropertiesListEXT>
    : public detail::ManagedStructure<VkDrmFormatModifierPropertiesListEXT>
{
};

template <>
class Managed<VkEventCreateInfo>
    : public detail::ManagedStructure<VkEventCreateInfo>
{
};

template <>
class Managed<VkExportFenceCreateInfo>
    : public detail::ManagedStructure<VkExportFenceCreateInfo>
{
};

template <>
class Managed<VkExportFenceCreateInfoKHR>
    : public detail::ManagedStructure<VkExportFenceCreateInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportFenceWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExportMemoryAllocateInfo>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfo>
{
};

template <>
class Managed<VkExportMemoryAllocateInfoKHR>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfoKHR>
{
};

template <>
class Managed<VkExportMemoryAllocateInfoNV>
    : public detail::ManagedStructure<VkExportMemoryAllocateInfoNV>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportMemoryWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportMemoryWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportMemoryWin32HandleInfoNV>
    : public detail::ManagedStructure<VkExportMemoryWin32HandleInfoNV>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExportSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkExportSemaphoreCreateInfo>
{
};

template <>
class Managed<VkExportSemaphoreCreateInfoKHR>
    : public detail::ManagedStructure<VkExportSemaphoreCreateInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkExportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkExportSemaphoreWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkExtensionProperties>
    : public detail::ManagedStructure<VkExtensionProperties>
{
};

template <>
class Managed<VkExtent2D>
    : public detail::ManagedStructure<VkExtent2D>
{
};

template <>
class Managed<VkExtent3D>
    : public detail::ManagedStructure<VkExtent3D>
{
};

template <>
class Managed<VkExternalBufferProperties>
    : public detail::ManagedStructure<VkExternalBufferProperties>
{
};

template <>
class Managed<VkExternalBufferPropertiesKHR>
    : public detail::ManagedStructure<VkExternalBufferPropertiesKHR>
{
};

template <>
class Managed<VkExternalFenceProperties>
    : public detail::ManagedStructure<VkExternalFenceProperties>
{
};

template <>
class Managed<VkExternalFencePropertiesKHR>
    : public detail::ManagedStructure<VkExternalFencePropertiesKHR>
{
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkExternalFormatANDROID>
    : public detail::ManagedStructure<VkExternalFormatANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkExternalImageFormatProperties>
    : public detail::ManagedStructure<VkExternalImageFormatProperties>
{
};

template <>
class Managed<VkExternalImageFormatPropertiesKHR>
    : public detail::ManagedStructure<VkExternalImageFormatPropertiesKHR>
{
};

template <>
class Managed<VkExternalImageFormatPropertiesNV>
    : public detail::ManagedStructure<VkExternalImageFormatPropertiesNV>
{
};

template <>
class Managed<VkExternalMemoryBufferCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryBufferCreateInfo>
{
};

template <>
class Managed<VkExternalMemoryBufferCreateInfoKHR>
    : public detail::ManagedStructure<VkExternalMemoryBufferCreateInfoKHR>
{
};

template <>
class Managed<VkExternalMemoryImageCreateInfo>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfo>
{
};

template <>
class Managed<VkExternalMemoryImageCreateInfoKHR>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfoKHR>
{
};

template <>
class Managed<VkExternalMemoryImageCreateInfoNV>
    : public detail::ManagedStructure<VkExternalMemoryImageCreateInfoNV>
{
};

template <>
class Managed<VkExternalMemoryProperties>
    : public detail::ManagedStructure<VkExternalMemoryProperties>
{
};

template <>
class Managed<VkExternalMemoryPropertiesKHR>
    : public detail::ManagedStructure<VkExternalMemoryPropertiesKHR>
{
};

template <>
class Managed<VkExternalSemaphoreProperties>
    : public detail::ManagedStructure<VkExternalSemaphoreProperties>
{
};

template <>
class Managed<VkExternalSemaphorePropertiesKHR>
    : public detail::ManagedStructure<VkExternalSemaphorePropertiesKHR>
{
};

template <>
class Managed<VkFenceCreateInfo>
    : public detail::ManagedStructure<VkFenceCreateInfo>
{
};

template <>
class Managed<VkFenceGetFdInfoKHR>
    : public detail::ManagedStructure<VkFenceGetFdInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkFenceGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkFenceGetWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkFilterCubicImageViewImageFormatPropertiesEXT>
    : public detail::ManagedStructure<VkFilterCubicImageViewImageFormatPropertiesEXT>
{
};

template <>
class Managed<VkFormatProperties>
    : public detail::ManagedStructure<VkFormatProperties>
{
};

template <>
class Managed<VkFormatProperties2>
    : public detail::ManagedStructure<VkFormatProperties2>
{
};

template <>
class Managed<VkFormatProperties2KHR>
    : public detail::ManagedStructure<VkFormatProperties2KHR>
{
};

template <>
class Managed<VkFramebufferAttachmentImageInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentImageInfo>
{
};

template <>
class Managed<VkFramebufferAttachmentImageInfoKHR>
    : public detail::ManagedStructure<VkFramebufferAttachmentImageInfoKHR>
{
};

template <>
class Managed<VkFramebufferAttachmentsCreateInfo>
    : public detail::ManagedStructure<VkFramebufferAttachmentsCreateInfo>
{
};

template <>
class Managed<VkFramebufferAttachmentsCreateInfoKHR>
    : public detail::ManagedStructure<VkFramebufferAttachmentsCreateInfoKHR>
{
};

template <>
class Managed<VkFramebufferCreateInfo>
    : public detail::ManagedStructure<VkFramebufferCreateInfo>
{
};

template <>
class Managed<VkFramebufferMixedSamplesCombinationNV>
    : public detail::ManagedStructure<VkFramebufferMixedSamplesCombinationNV>
{
};

template <>
class Managed<VkGeneratedCommandsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsInfoNV>
{
};

template <>
class Managed<VkGeneratedCommandsMemoryRequirementsInfoNV>
    : public detail::ManagedStructure<VkGeneratedCommandsMemoryRequirementsInfoNV>
{
};

template <>
class Managed<VkGeometryAABBNV>
    : public detail::ManagedStructure<VkGeometryAABBNV>
{
};

template <>
class Managed<VkGeometryDataNV>
    : public detail::ManagedStructure<VkGeometryDataNV>
{
};

template <>
class Managed<VkGeometryNV>
    : public detail::ManagedStructure<VkGeometryNV>
{
};

template <>
class Managed<VkGeometryTrianglesNV>
    : public detail::ManagedStructure<VkGeometryTrianglesNV>
{
};

template <>
class Managed<VkGraphicsPipelineCreateInfo>
    : public detail::ManagedStructure<VkGraphicsPipelineCreateInfo>
{
};

template <>
class Managed<VkGraphicsPipelineShaderGroupsCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsPipelineShaderGroupsCreateInfoNV>
{
};

template <>
class Managed<VkGraphicsShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkGraphicsShaderGroupCreateInfoNV>
{
};

template <>
class Managed<VkHdrMetadataEXT>
    : public detail::ManagedStructure<VkHdrMetadataEXT>
{
};

template <>
class Managed<VkHeadlessSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkHeadlessSurfaceCreateInfoEXT>
{
};

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
class Managed<VkIOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkIOSSurfaceCreateInfoMVK>
{
};
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
class Managed<VkImageBlit>
    : public detail::ManagedStructure<VkImageBlit>
{
};

template <>
class Managed<VkImageCopy>
    : public detail::ManagedStructure<VkImageCopy>
{
};

template <>
class Managed<VkImageCreateInfo>
    : public detail::ManagedStructure<VkImageCreateInfo>
{
};

template <>
class Managed<VkImageDrmFormatModifierExplicitCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierExplicitCreateInfoEXT>
{
};

template <>
class Managed<VkImageDrmFormatModifierListCreateInfoEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierListCreateInfoEXT>
{
};

template <>
class Managed<VkImageDrmFormatModifierPropertiesEXT>
    : public detail::ManagedStructure<VkImageDrmFormatModifierPropertiesEXT>
{
};

template <>
class Managed<VkImageFormatListCreateInfo>
    : public detail::ManagedStructure<VkImageFormatListCreateInfo>
{
};

template <>
class Managed<VkImageFormatListCreateInfoKHR>
    : public detail::ManagedStructure<VkImageFormatListCreateInfoKHR>
{
};

template <>
class Managed<VkImageFormatProperties>
    : public detail::ManagedStructure<VkImageFormatProperties>
{
};

template <>
class Managed<VkImageFormatProperties2>
    : public detail::ManagedStructure<VkImageFormatProperties2>
{
};

template <>
class Managed<VkImageFormatProperties2KHR>
    : public detail::ManagedStructure<VkImageFormatProperties2KHR>
{
};

template <>
class Managed<VkImageMemoryBarrier>
    : public detail::ManagedStructure<VkImageMemoryBarrier>
{
};

template <>
class Managed<VkImageMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageMemoryRequirementsInfo2>
{
};

template <>
class Managed<VkImageMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkImageMemoryRequirementsInfo2KHR>
{
};

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
class Managed<VkImagePipeSurfaceCreateInfoFUCHSIA>
    : public detail::ManagedStructure<VkImagePipeSurfaceCreateInfoFUCHSIA>
{
};
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
class Managed<VkImagePlaneMemoryRequirementsInfo>
    : public detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfo>
{
};

template <>
class Managed<VkImagePlaneMemoryRequirementsInfoKHR>
    : public detail::ManagedStructure<VkImagePlaneMemoryRequirementsInfoKHR>
{
};

template <>
class Managed<VkImageResolve>
    : public detail::ManagedStructure<VkImageResolve>
{
};

template <>
class Managed<VkImageSparseMemoryRequirementsInfo2>
    : public detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2>
{
};

template <>
class Managed<VkImageSparseMemoryRequirementsInfo2KHR>
    : public detail::ManagedStructure<VkImageSparseMemoryRequirementsInfo2KHR>
{
};

template <>
class Managed<VkImageStencilUsageCreateInfo>
    : public detail::ManagedStructure<VkImageStencilUsageCreateInfo>
{
};

template <>
class Managed<VkImageStencilUsageCreateInfoEXT>
    : public detail::ManagedStructure<VkImageStencilUsageCreateInfoEXT>
{
};

template <>
class Managed<VkImageSubresource>
    : public detail::ManagedStructure<VkImageSubresource>
{
};

template <>
class Managed<VkImageSubresourceLayers>
    : public detail::ManagedStructure<VkImageSubresourceLayers>
{
};

template <>
class Managed<VkImageSubresourceRange>
    : public detail::ManagedStructure<VkImageSubresourceRange>
{
};

template <>
class Managed<VkImageSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkImageSwapchainCreateInfoKHR>
{
};

template <>
class Managed<VkImageViewASTCDecodeModeEXT>
    : public detail::ManagedStructure<VkImageViewASTCDecodeModeEXT>
{
};

template <>
class Managed<VkImageViewCreateInfo>
    : public detail::ManagedStructure<VkImageViewCreateInfo>
{
};

template <>
class Managed<VkImageViewHandleInfoNVX>
    : public detail::ManagedStructure<VkImageViewHandleInfoNVX>
{
};

template <>
class Managed<VkImageViewUsageCreateInfo>
    : public detail::ManagedStructure<VkImageViewUsageCreateInfo>
{
};

template <>
class Managed<VkImageViewUsageCreateInfoKHR>
    : public detail::ManagedStructure<VkImageViewUsageCreateInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkImportAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkImportAndroidHardwareBufferInfoANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkImportFenceFdInfoKHR>
    : public detail::ManagedStructure<VkImportFenceFdInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportFenceWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportFenceWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkImportMemoryFdInfoKHR>
    : public detail::ManagedStructure<VkImportMemoryFdInfoKHR>
{
};

template <>
class Managed<VkImportMemoryHostPointerInfoEXT>
    : public detail::ManagedStructure<VkImportMemoryHostPointerInfoEXT>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportMemoryWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportMemoryWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportMemoryWin32HandleInfoNV>
    : public detail::ManagedStructure<VkImportMemoryWin32HandleInfoNV>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkImportSemaphoreFdInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreFdInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkImportSemaphoreWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkImportSemaphoreWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkIndirectCommandsLayoutCreateInfoNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutCreateInfoNV>
{
};

template <>
class Managed<VkIndirectCommandsLayoutTokenNV>
    : public detail::ManagedStructure<VkIndirectCommandsLayoutTokenNV>
{
};

template <>
class Managed<VkIndirectCommandsStreamNV>
    : public detail::ManagedStructure<VkIndirectCommandsStreamNV>
{
};

template <>
class Managed<VkInitializePerformanceApiInfoINTEL>
    : public detail::ManagedStructure<VkInitializePerformanceApiInfoINTEL>
{
};

template <>
class Managed<VkInputAttachmentAspectReference>
    : public detail::ManagedStructure<VkInputAttachmentAspectReference>
{
};

template <>
class Managed<VkInputAttachmentAspectReferenceKHR>
    : public detail::ManagedStructure<VkInputAttachmentAspectReferenceKHR>
{
};

template <>
class Managed<VkInstanceCreateInfo>
    : public detail::ManagedStructure<VkInstanceCreateInfo>
{
};

template <>
class Managed<VkLayerProperties>
    : public detail::ManagedStructure<VkLayerProperties>
{
};

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
class Managed<VkMacOSSurfaceCreateInfoMVK>
    : public detail::ManagedStructure<VkMacOSSurfaceCreateInfoMVK>
{
};
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
class Managed<VkMappedMemoryRange>
    : public detail::ManagedStructure<VkMappedMemoryRange>
{
};

template <>
class Managed<VkMemoryAllocateFlagsInfo>
    : public detail::ManagedStructure<VkMemoryAllocateFlagsInfo>
{
};

template <>
class Managed<VkMemoryAllocateFlagsInfoKHR>
    : public detail::ManagedStructure<VkMemoryAllocateFlagsInfoKHR>
{
};

template <>
class Managed<VkMemoryAllocateInfo>
    : public detail::ManagedStructure<VkMemoryAllocateInfo>
{
};

template <>
class Managed<VkMemoryBarrier>
    : public detail::ManagedStructure<VkMemoryBarrier>
{
};

template <>
class Managed<VkMemoryDedicatedAllocateInfo>
    : public detail::ManagedStructure<VkMemoryDedicatedAllocateInfo>
{
};

template <>
class Managed<VkMemoryDedicatedAllocateInfoKHR>
    : public detail::ManagedStructure<VkMemoryDedicatedAllocateInfoKHR>
{
};

template <>
class Managed<VkMemoryDedicatedRequirements>
    : public detail::ManagedStructure<VkMemoryDedicatedRequirements>
{
};

template <>
class Managed<VkMemoryDedicatedRequirementsKHR>
    : public detail::ManagedStructure<VkMemoryDedicatedRequirementsKHR>
{
};

template <>
class Managed<VkMemoryFdPropertiesKHR>
    : public detail::ManagedStructure<VkMemoryFdPropertiesKHR>
{
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkMemoryGetAndroidHardwareBufferInfoANDROID>
    : public detail::ManagedStructure<VkMemoryGetAndroidHardwareBufferInfoANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkMemoryGetFdInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetFdInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkMemoryGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkMemoryGetWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkMemoryHeap>
    : public detail::ManagedStructure<VkMemoryHeap>
{
};

template <>
class Managed<VkMemoryHostPointerPropertiesEXT>
    : public detail::ManagedStructure<VkMemoryHostPointerPropertiesEXT>
{
};

template <>
class Managed<VkMemoryOpaqueCaptureAddressAllocateInfo>
    : public detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfo>
{
};

template <>
class Managed<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>
    : public detail::ManagedStructure<VkMemoryOpaqueCaptureAddressAllocateInfoKHR>
{
};

template <>
class Managed<VkMemoryPriorityAllocateInfoEXT>
    : public detail::ManagedStructure<VkMemoryPriorityAllocateInfoEXT>
{
};

template <>
class Managed<VkMemoryRequirements>
    : public detail::ManagedStructure<VkMemoryRequirements>
{
};

template <>
class Managed<VkMemoryRequirements2>
    : public detail::ManagedStructure<VkMemoryRequirements2>
{
};

template <>
class Managed<VkMemoryRequirements2KHR>
    : public detail::ManagedStructure<VkMemoryRequirements2KHR>
{
};

template <>
class Managed<VkMemoryType>
    : public detail::ManagedStructure<VkMemoryType>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkMemoryWin32HandlePropertiesKHR>
    : public detail::ManagedStructure<VkMemoryWin32HandlePropertiesKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
class Managed<VkMetalSurfaceCreateInfoEXT>
    : public detail::ManagedStructure<VkMetalSurfaceCreateInfoEXT>
{
};
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
class Managed<VkMultisamplePropertiesEXT>
    : public detail::ManagedStructure<VkMultisamplePropertiesEXT>
{
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkNativeBufferANDROID>
    : public detail::ManagedStructure<VkNativeBufferANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkNativeBufferUsage2ANDROID>
    : public detail::ManagedStructure<VkNativeBufferUsage2ANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkOffset2D>
    : public detail::ManagedStructure<VkOffset2D>
{
};

template <>
class Managed<VkOffset3D>
    : public detail::ManagedStructure<VkOffset3D>
{
};

template <>
class Managed<VkPastPresentationTimingGOOGLE>
    : public detail::ManagedStructure<VkPastPresentationTimingGOOGLE>
{
};

template <>
class Managed<VkPerformanceConfigurationAcquireInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceConfigurationAcquireInfoINTEL>
{
};

template <>
class Managed<VkPerformanceCounterDescriptionKHR>
    : public detail::ManagedStructure<VkPerformanceCounterDescriptionKHR>
{
};

template <>
class Managed<VkPerformanceCounterKHR>
    : public detail::ManagedStructure<VkPerformanceCounterKHR>
{
};

template <>
class Managed<VkPerformanceCounterResultKHR>
    : public detail::ManagedStructure<VkPerformanceCounterResultKHR>
{
};

template <>
class Managed<VkPerformanceMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceMarkerInfoINTEL>
{
};

template <>
class Managed<VkPerformanceOverrideInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceOverrideInfoINTEL>
{
};

template <>
class Managed<VkPerformanceQuerySubmitInfoKHR>
    : public detail::ManagedStructure<VkPerformanceQuerySubmitInfoKHR>
{
};

template <>
class Managed<VkPerformanceStreamMarkerInfoINTEL>
    : public detail::ManagedStructure<VkPerformanceStreamMarkerInfoINTEL>
{
};

template <>
class Managed<VkPerformanceValueDataINTEL>
    : public detail::ManagedStructure<VkPerformanceValueDataINTEL>
{
};

template <>
class Managed<VkPerformanceValueINTEL>
    : public detail::ManagedStructure<VkPerformanceValueINTEL>
{
};

template <>
class Managed<VkPhysicalDevice16BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice16BitStorageFeatures>
{
};

template <>
class Managed<VkPhysicalDevice16BitStorageFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevice16BitStorageFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDevice8BitStorageFeatures>
    : public detail::ManagedStructure<VkPhysicalDevice8BitStorageFeatures>
{
};

template <>
class Managed<VkPhysicalDevice8BitStorageFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevice8BitStorageFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceASTCDecodeFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceASTCDecodeFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceBufferAddressFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferAddressFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceBufferDeviceAddressFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceCoherentMemoryFeaturesAMD>
{
};

template <>
class Managed<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConditionalRenderingFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCooperativeMatrixPropertiesNV>
{
};

template <>
class Managed<VkPhysicalDeviceCornerSampledImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCornerSampledImageFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceCoverageReductionModeFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthClipEnableFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceDepthStencilResolveProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolveProperties>
{
};

template <>
class Managed<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceDepthStencilResolvePropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingProperties>
{
};

template <>
class Managed<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDescriptorIndexingPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>
{
};

template <>
class Managed<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceDiscardRectanglePropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceDriverProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceDriverProperties>
{
};

template <>
class Managed<VkPhysicalDeviceDriverPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceDriverPropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceExclusiveScissorFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceExclusiveScissorFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceExternalBufferInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfo>
{
};

template <>
class Managed<VkPhysicalDeviceExternalBufferInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalBufferInfoKHR>
{
};

template <>
class Managed<VkPhysicalDeviceExternalFenceInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfo>
{
};

template <>
class Managed<VkPhysicalDeviceExternalFenceInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalFenceInfoKHR>
{
};

template <>
class Managed<VkPhysicalDeviceExternalImageFormatInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfo>
{
};

template <>
class Managed<VkPhysicalDeviceExternalImageFormatInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalImageFormatInfoKHR>
{
};

template <>
class Managed<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceExternalSemaphoreInfo>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfo>
{
};

template <>
class Managed<VkPhysicalDeviceExternalSemaphoreInfoKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceExternalSemaphoreInfoKHR>
{
};

template <>
class Managed<VkPhysicalDeviceFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceFeatures2>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures2>
{
};

template <>
class Managed<VkPhysicalDeviceFeatures2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFeatures2KHR>
{
};

template <>
class Managed<VkPhysicalDeviceFloat16Int8FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFloat16Int8FeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceFloatControlsProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceFloatControlsProperties>
{
};

template <>
class Managed<VkPhysicalDeviceFloatControlsPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceFloatControlsPropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceGroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceGroupProperties>
{
};

template <>
class Managed<VkPhysicalDeviceGroupPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceGroupPropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceHostQueryResetFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceHostQueryResetFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceHostQueryResetFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceIDProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceIDProperties>
{
};

template <>
class Managed<VkPhysicalDeviceIDPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceIDPropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>
{
};

template <>
class Managed<VkPhysicalDeviceImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2>
{
};

template <>
class Managed<VkPhysicalDeviceImageFormatInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceImageFormatInfo2KHR>
{
};

template <>
class Managed<VkPhysicalDeviceImageViewImageFormatInfoEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceImageViewImageFormatInfoEXT>
{
};

template <>
class Managed<VkPhysicalDeviceImagelessFramebufferFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceImagelessFramebufferFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceLimits>
    : public detail::ManagedStructure<VkPhysicalDeviceLimits>
{
};

template <>
class Managed<VkPhysicalDeviceLineRasterizationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceLineRasterizationPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceLineRasterizationPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceMaintenance3Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceMaintenance3Properties>
{
};

template <>
class Managed<VkPhysicalDeviceMaintenance3PropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMaintenance3PropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryBudgetPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryPriorityFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties>
{
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2>
{
};

template <>
class Managed<VkPhysicalDeviceMemoryProperties2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMemoryProperties2KHR>
{
};

template <>
class Managed<VkPhysicalDeviceMeshShaderFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceMeshShaderPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceMeshShaderPropertiesNV>
{
};

template <>
class Managed<VkPhysicalDeviceMultiviewFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceMultiviewFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>
{
};

template <>
class Managed<VkPhysicalDeviceMultiviewProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewProperties>
{
};

template <>
class Managed<VkPhysicalDeviceMultiviewPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceMultiviewPropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDevicePCIBusInfoPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePCIBusInfoPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDevicePerformanceQueryFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDevicePerformanceQueryPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePerformanceQueryPropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDevicePointClippingProperties>
    : public detail::ManagedStructure<VkPhysicalDevicePointClippingProperties>
{
};

template <>
class Managed<VkPhysicalDevicePointClippingPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePointClippingPropertiesKHR>
{
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkPhysicalDevicePresentationPropertiesANDROID>
    : public detail::ManagedStructure<VkPhysicalDevicePresentationPropertiesANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkPhysicalDeviceProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties>
{
};

template <>
class Managed<VkPhysicalDeviceProperties2>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties2>
{
};

template <>
class Managed<VkPhysicalDeviceProperties2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceProperties2KHR>
{
};

template <>
class Managed<VkPhysicalDeviceProtectedMemoryFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceProtectedMemoryProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceProtectedMemoryProperties>
{
};

template <>
class Managed<VkPhysicalDevicePushDescriptorPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDevicePushDescriptorPropertiesKHR>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPhysicalDeviceRayTracingFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingFeaturesKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPhysicalDeviceRayTracingPropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkPhysicalDeviceRayTracingPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRayTracingPropertiesNV>
{
};

template <>
class Managed<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceSampleLocationsPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSampleLocationsPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceSamplerFilterMinmaxProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxProperties>
{
};

template <>
class Managed<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceScalarBlockLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceShaderAtomicInt64Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64Features>
{
};

template <>
class Managed<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderAtomicInt64FeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceShaderClockFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderClockFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceShaderCoreProperties2AMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCoreProperties2AMD>
{
};

template <>
class Managed<VkPhysicalDeviceShaderCorePropertiesAMD>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderCorePropertiesAMD>
{
};

template <>
class Managed<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceShaderDrawParameterFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDrawParameterFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceShaderDrawParametersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderDrawParametersFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceShaderFloat16Int8Features>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8Features>
{
};

template <>
class Managed<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderFloat16Int8FeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderImageFootprintFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>
{
};

template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>
{
};

template <>
class Managed<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceShadingRateImageFeaturesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImageFeaturesNV>
{
};

template <>
class Managed<VkPhysicalDeviceShadingRateImagePropertiesNV>
    : public detail::ManagedStructure<VkPhysicalDeviceShadingRateImagePropertiesNV>
{
};

template <>
class Managed<VkPhysicalDeviceSparseImageFormatInfo2>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2>
{
};

template <>
class Managed<VkPhysicalDeviceSparseImageFormatInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseImageFormatInfo2KHR>
{
};

template <>
class Managed<VkPhysicalDeviceSparseProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSparseProperties>
{
};

template <>
class Managed<VkPhysicalDeviceSubgroupProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupProperties>
{
};

template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceSurfaceInfo2KHR>
    : public detail::ManagedStructure<VkPhysicalDeviceSurfaceInfo2KHR>
{
};

template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphoreProperties>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphoreProperties>
{
};

template <>
class Managed<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceTimelineSemaphorePropertiesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceToolPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceToolPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceTransformFeedbackPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceVariablePointerFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceVariablePointerFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointerFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceVariablePointersFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceVariablePointersFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVariablePointersFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>
{
};

template <>
class Managed<VkPhysicalDeviceVulkan11Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Features>
{
};

template <>
class Managed<VkPhysicalDeviceVulkan11Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan11Properties>
{
};

template <>
class Managed<VkPhysicalDeviceVulkan12Features>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Features>
{
};

template <>
class Managed<VkPhysicalDeviceVulkan12Properties>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkan12Properties>
{
};

template <>
class Managed<VkPhysicalDeviceVulkanMemoryModelFeatures>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeatures>
{
};

template <>
class Managed<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>
    : public detail::ManagedStructure<VkPhysicalDeviceVulkanMemoryModelFeaturesKHR>
{
};

template <>
class Managed<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
    : public detail::ManagedStructure<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>
{
};

template <>
class Managed<VkPipelineCacheCreateInfo>
    : public detail::ManagedStructure<VkPipelineCacheCreateInfo>
{
};

template <>
class Managed<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineColorBlendAdvancedStateCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineColorBlendAttachmentState>
    : public detail::ManagedStructure<VkPipelineColorBlendAttachmentState>
{
};

template <>
class Managed<VkPipelineColorBlendStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineColorBlendStateCreateInfo>
{
};

template <>
class Managed<VkPipelineCompilerControlCreateInfoAMD>
    : public detail::ManagedStructure<VkPipelineCompilerControlCreateInfoAMD>
{
};

template <>
class Managed<VkPipelineCoverageModulationStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageModulationStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineCoverageReductionStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageReductionStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineCoverageToColorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineCoverageToColorStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineCreationFeedbackCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineCreationFeedbackEXT>
    : public detail::ManagedStructure<VkPipelineCreationFeedbackEXT>
{
};

template <>
class Managed<VkPipelineDepthStencilStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDepthStencilStateCreateInfo>
{
};

template <>
class Managed<VkPipelineDiscardRectangleStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineDiscardRectangleStateCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineDynamicStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineDynamicStateCreateInfo>
{
};

template <>
class Managed<VkPipelineExecutableInfoKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInfoKHR>
{
};

template <>
class Managed<VkPipelineExecutableInternalRepresentationKHR>
    : public detail::ManagedStructure<VkPipelineExecutableInternalRepresentationKHR>
{
};

template <>
class Managed<VkPipelineExecutablePropertiesKHR>
    : public detail::ManagedStructure<VkPipelineExecutablePropertiesKHR>
{
};

template <>
class Managed<VkPipelineExecutableStatisticKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticKHR>
{
};

template <>
class Managed<VkPipelineExecutableStatisticValueKHR>
    : public detail::ManagedStructure<VkPipelineExecutableStatisticValueKHR>
{
};

template <>
class Managed<VkPipelineInfoKHR>
    : public detail::ManagedStructure<VkPipelineInfoKHR>
{
};

template <>
class Managed<VkPipelineInputAssemblyStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineInputAssemblyStateCreateInfo>
{
};

template <>
class Managed<VkPipelineLayoutCreateInfo>
    : public detail::ManagedStructure<VkPipelineLayoutCreateInfo>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkPipelineLibraryCreateInfoKHR>
    : public detail::ManagedStructure<VkPipelineLibraryCreateInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkPipelineMultisampleStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineMultisampleStateCreateInfo>
{
};

template <>
class Managed<VkPipelineRasterizationConservativeStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationConservativeStateCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationDepthClipStateCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineRasterizationLineStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationLineStateCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineRasterizationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineRasterizationStateCreateInfo>
{
};

template <>
class Managed<VkPipelineRasterizationStateRasterizationOrderAMD>
    : public detail::ManagedStructure<VkPipelineRasterizationStateRasterizationOrderAMD>
{
};

template <>
class Managed<VkPipelineRasterizationStateStreamCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineRasterizationStateStreamCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineSampleLocationsStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineSampleLocationsStateCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineShaderStageCreateInfo>
    : public detail::ManagedStructure<VkPipelineShaderStageCreateInfo>
{
};

template <>
class Managed<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineTessellationDomainOriginStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfo>
{
};

template <>
class Managed<VkPipelineTessellationDomainOriginStateCreateInfoKHR>
    : public detail::ManagedStructure<VkPipelineTessellationDomainOriginStateCreateInfoKHR>
{
};

template <>
class Managed<VkPipelineTessellationStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineTessellationStateCreateInfo>
{
};

template <>
class Managed<VkPipelineVertexInputDivisorStateCreateInfoEXT>
    : public detail::ManagedStructure<VkPipelineVertexInputDivisorStateCreateInfoEXT>
{
};

template <>
class Managed<VkPipelineVertexInputStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineVertexInputStateCreateInfo>
{
};

template <>
class Managed<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportExclusiveScissorStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineViewportShadingRateImageStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportShadingRateImageStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineViewportStateCreateInfo>
    : public detail::ManagedStructure<VkPipelineViewportStateCreateInfo>
{
};

template <>
class Managed<VkPipelineViewportSwizzleStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportSwizzleStateCreateInfoNV>
{
};

template <>
class Managed<VkPipelineViewportWScalingStateCreateInfoNV>
    : public detail::ManagedStructure<VkPipelineViewportWScalingStateCreateInfoNV>
{
};

#ifdef VK_USE_PLATFORM_GGP
template <>
class Managed<VkPresentFrameTokenGGP>
    : public detail::ManagedStructure<VkPresentFrameTokenGGP>
{
};
#endif // VK_USE_PLATFORM_GGP

template <>
class Managed<VkPresentInfoKHR>
    : public detail::ManagedStructure<VkPresentInfoKHR>
{
};

template <>
class Managed<VkPresentRegionKHR>
    : public detail::ManagedStructure<VkPresentRegionKHR>
{
};

template <>
class Managed<VkPresentRegionsKHR>
    : public detail::ManagedStructure<VkPresentRegionsKHR>
{
};

template <>
class Managed<VkPresentTimeGOOGLE>
    : public detail::ManagedStructure<VkPresentTimeGOOGLE>
{
};

template <>
class Managed<VkPresentTimesInfoGOOGLE>
    : public detail::ManagedStructure<VkPresentTimesInfoGOOGLE>
{
};

template <>
class Managed<VkProtectedSubmitInfo>
    : public detail::ManagedStructure<VkProtectedSubmitInfo>
{
};

template <>
class Managed<VkPushConstantRange>
    : public detail::ManagedStructure<VkPushConstantRange>
{
};

template <>
class Managed<VkQueryPoolCreateInfo>
    : public detail::ManagedStructure<VkQueryPoolCreateInfo>
{
};

template <>
class Managed<VkQueryPoolCreateInfoINTEL>
    : public detail::ManagedStructure<VkQueryPoolCreateInfoINTEL>
{
};

template <>
class Managed<VkQueryPoolPerformanceCreateInfoKHR>
    : public detail::ManagedStructure<VkQueryPoolPerformanceCreateInfoKHR>
{
};

template <>
class Managed<VkQueryPoolPerformanceQueryCreateInfoINTEL>
    : public detail::ManagedStructure<VkQueryPoolPerformanceQueryCreateInfoINTEL>
{
};

template <>
class Managed<VkQueueFamilyCheckpointPropertiesNV>
    : public detail::ManagedStructure<VkQueueFamilyCheckpointPropertiesNV>
{
};

template <>
class Managed<VkQueueFamilyProperties>
    : public detail::ManagedStructure<VkQueueFamilyProperties>
{
};

template <>
class Managed<VkQueueFamilyProperties2>
    : public detail::ManagedStructure<VkQueueFamilyProperties2>
{
};

template <>
class Managed<VkQueueFamilyProperties2KHR>
    : public detail::ManagedStructure<VkQueueFamilyProperties2KHR>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingPipelineCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkRayTracingPipelineCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingPipelineCreateInfoNV>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingPipelineInterfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingPipelineInterfaceCreateInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkRayTracingShaderGroupCreateInfoKHR>
    : public detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkRayTracingShaderGroupCreateInfoNV>
    : public detail::ManagedStructure<VkRayTracingShaderGroupCreateInfoNV>
{
};

template <>
class Managed<VkRect2D>
    : public detail::ManagedStructure<VkRect2D>
{
};

template <>
class Managed<VkRectLayerKHR>
    : public detail::ManagedStructure<VkRectLayerKHR>
{
};

template <>
class Managed<VkRefreshCycleDurationGOOGLE>
    : public detail::ManagedStructure<VkRefreshCycleDurationGOOGLE>
{
};

template <>
class Managed<VkRenderPassAttachmentBeginInfo>
    : public detail::ManagedStructure<VkRenderPassAttachmentBeginInfo>
{
};

template <>
class Managed<VkRenderPassAttachmentBeginInfoKHR>
    : public detail::ManagedStructure<VkRenderPassAttachmentBeginInfoKHR>
{
};

template <>
class Managed<VkRenderPassBeginInfo>
    : public detail::ManagedStructure<VkRenderPassBeginInfo>
{
};

template <>
class Managed<VkRenderPassCreateInfo>
    : public detail::ManagedStructure<VkRenderPassCreateInfo>
{
};

template <>
class Managed<VkRenderPassCreateInfo2>
    : public detail::ManagedStructure<VkRenderPassCreateInfo2>
{
};

template <>
class Managed<VkRenderPassCreateInfo2KHR>
    : public detail::ManagedStructure<VkRenderPassCreateInfo2KHR>
{
};

template <>
class Managed<VkRenderPassFragmentDensityMapCreateInfoEXT>
    : public detail::ManagedStructure<VkRenderPassFragmentDensityMapCreateInfoEXT>
{
};

template <>
class Managed<VkRenderPassInputAttachmentAspectCreateInfo>
    : public detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfo>
{
};

template <>
class Managed<VkRenderPassInputAttachmentAspectCreateInfoKHR>
    : public detail::ManagedStructure<VkRenderPassInputAttachmentAspectCreateInfoKHR>
{
};

template <>
class Managed<VkRenderPassMultiviewCreateInfo>
    : public detail::ManagedStructure<VkRenderPassMultiviewCreateInfo>
{
};

template <>
class Managed<VkRenderPassMultiviewCreateInfoKHR>
    : public detail::ManagedStructure<VkRenderPassMultiviewCreateInfoKHR>
{
};

template <>
class Managed<VkRenderPassSampleLocationsBeginInfoEXT>
    : public detail::ManagedStructure<VkRenderPassSampleLocationsBeginInfoEXT>
{
};

template <>
class Managed<VkRenderPassTransformBeginInfoQCOM>
    : public detail::ManagedStructure<VkRenderPassTransformBeginInfoQCOM>
{
};

template <>
class Managed<VkSampleLocationEXT>
    : public detail::ManagedStructure<VkSampleLocationEXT>
{
};

template <>
class Managed<VkSampleLocationsInfoEXT>
    : public detail::ManagedStructure<VkSampleLocationsInfoEXT>
{
};

template <>
class Managed<VkSamplerCreateInfo>
    : public detail::ManagedStructure<VkSamplerCreateInfo>
{
};

template <>
class Managed<VkSamplerReductionModeCreateInfo>
    : public detail::ManagedStructure<VkSamplerReductionModeCreateInfo>
{
};

template <>
class Managed<VkSamplerReductionModeCreateInfoEXT>
    : public detail::ManagedStructure<VkSamplerReductionModeCreateInfoEXT>
{
};

template <>
class Managed<VkSamplerYcbcrConversionCreateInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfo>
{
};

template <>
class Managed<VkSamplerYcbcrConversionCreateInfoKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionCreateInfoKHR>
{
};

template <>
class Managed<VkSamplerYcbcrConversionImageFormatProperties>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatProperties>
{
};

template <>
class Managed<VkSamplerYcbcrConversionImageFormatPropertiesKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionImageFormatPropertiesKHR>
{
};

template <>
class Managed<VkSamplerYcbcrConversionInfo>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionInfo>
{
};

template <>
class Managed<VkSamplerYcbcrConversionInfoKHR>
    : public detail::ManagedStructure<VkSamplerYcbcrConversionInfoKHR>
{
};

template <>
class Managed<VkSemaphoreCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreCreateInfo>
{
};

template <>
class Managed<VkSemaphoreGetFdInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetFdInfoKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSemaphoreGetWin32HandleInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreGetWin32HandleInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSemaphoreSignalInfo>
    : public detail::ManagedStructure<VkSemaphoreSignalInfo>
{
};

template <>
class Managed<VkSemaphoreSignalInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreSignalInfoKHR>
{
};

template <>
class Managed<VkSemaphoreTypeCreateInfo>
    : public detail::ManagedStructure<VkSemaphoreTypeCreateInfo>
{
};

template <>
class Managed<VkSemaphoreTypeCreateInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreTypeCreateInfoKHR>
{
};

template <>
class Managed<VkSemaphoreWaitInfo>
    : public detail::ManagedStructure<VkSemaphoreWaitInfo>
{
};

template <>
class Managed<VkSemaphoreWaitInfoKHR>
    : public detail::ManagedStructure<VkSemaphoreWaitInfoKHR>
{
};

template <>
class Managed<VkSetStateFlagsIndirectCommandNV>
    : public detail::ManagedStructure<VkSetStateFlagsIndirectCommandNV>
{
};

template <>
class Managed<VkShaderModuleCreateInfo>
    : public detail::ManagedStructure<VkShaderModuleCreateInfo>
{
};

template <>
class Managed<VkShaderModuleValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkShaderModuleValidationCacheCreateInfoEXT>
{
};

template <>
class Managed<VkShaderResourceUsageAMD>
    : public detail::ManagedStructure<VkShaderResourceUsageAMD>
{
};

template <>
class Managed<VkShaderStatisticsInfoAMD>
    : public detail::ManagedStructure<VkShaderStatisticsInfoAMD>
{
};

template <>
class Managed<VkShadingRatePaletteNV>
    : public detail::ManagedStructure<VkShadingRatePaletteNV>
{
};

template <>
class Managed<VkSharedPresentSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSharedPresentSurfaceCapabilitiesKHR>
{
};

template <>
class Managed<VkSparseBufferMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseBufferMemoryBindInfo>
{
};

template <>
class Managed<VkSparseImageFormatProperties>
    : public detail::ManagedStructure<VkSparseImageFormatProperties>
{
};

template <>
class Managed<VkSparseImageFormatProperties2>
    : public detail::ManagedStructure<VkSparseImageFormatProperties2>
{
};

template <>
class Managed<VkSparseImageFormatProperties2KHR>
    : public detail::ManagedStructure<VkSparseImageFormatProperties2KHR>
{
};

template <>
class Managed<VkSparseImageMemoryBind>
    : public detail::ManagedStructure<VkSparseImageMemoryBind>
{
};

template <>
class Managed<VkSparseImageMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageMemoryBindInfo>
{
};

template <>
class Managed<VkSparseImageMemoryRequirements>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements>
{
};

template <>
class Managed<VkSparseImageMemoryRequirements2>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements2>
{
};

template <>
class Managed<VkSparseImageMemoryRequirements2KHR>
    : public detail::ManagedStructure<VkSparseImageMemoryRequirements2KHR>
{
};

template <>
class Managed<VkSparseImageOpaqueMemoryBindInfo>
    : public detail::ManagedStructure<VkSparseImageOpaqueMemoryBindInfo>
{
};

template <>
class Managed<VkSparseMemoryBind>
    : public detail::ManagedStructure<VkSparseMemoryBind>
{
};

template <>
class Managed<VkSpecializationInfo>
    : public detail::ManagedStructure<VkSpecializationInfo>
{
};

template <>
class Managed<VkSpecializationMapEntry>
    : public detail::ManagedStructure<VkSpecializationMapEntry>
{
};

template <>
class Managed<VkStencilOpState>
    : public detail::ManagedStructure<VkStencilOpState>
{
};

#ifdef VK_USE_PLATFORM_GGP
template <>
class Managed<VkStreamDescriptorSurfaceCreateInfoGGP>
    : public detail::ManagedStructure<VkStreamDescriptorSurfaceCreateInfoGGP>
{
};
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkStridedBufferRegionKHR>
    : public detail::ManagedStructure<VkStridedBufferRegionKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkSubmitInfo>
    : public detail::ManagedStructure<VkSubmitInfo>
{
};

template <>
class Managed<VkSubpassBeginInfo>
    : public detail::ManagedStructure<VkSubpassBeginInfo>
{
};

template <>
class Managed<VkSubpassBeginInfoKHR>
    : public detail::ManagedStructure<VkSubpassBeginInfoKHR>
{
};

template <>
class Managed<VkSubpassDependency>
    : public detail::ManagedStructure<VkSubpassDependency>
{
};

template <>
class Managed<VkSubpassDependency2>
    : public detail::ManagedStructure<VkSubpassDependency2>
{
};

template <>
class Managed<VkSubpassDependency2KHR>
    : public detail::ManagedStructure<VkSubpassDependency2KHR>
{
};

template <>
class Managed<VkSubpassDescription>
    : public detail::ManagedStructure<VkSubpassDescription>
{
};

template <>
class Managed<VkSubpassDescription2>
    : public detail::ManagedStructure<VkSubpassDescription2>
{
};

template <>
class Managed<VkSubpassDescription2KHR>
    : public detail::ManagedStructure<VkSubpassDescription2KHR>
{
};

template <>
class Managed<VkSubpassDescriptionDepthStencilResolve>
    : public detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolve>
{
};

template <>
class Managed<VkSubpassDescriptionDepthStencilResolveKHR>
    : public detail::ManagedStructure<VkSubpassDescriptionDepthStencilResolveKHR>
{
};

template <>
class Managed<VkSubpassEndInfo>
    : public detail::ManagedStructure<VkSubpassEndInfo>
{
};

template <>
class Managed<VkSubpassEndInfoKHR>
    : public detail::ManagedStructure<VkSubpassEndInfoKHR>
{
};

template <>
class Managed<VkSubpassSampleLocationsEXT>
    : public detail::ManagedStructure<VkSubpassSampleLocationsEXT>
{
};

template <>
class Managed<VkSubresourceLayout>
    : public detail::ManagedStructure<VkSubresourceLayout>
{
};

template <>
class Managed<VkSurfaceCapabilities2EXT>
    : public detail::ManagedStructure<VkSurfaceCapabilities2EXT>
{
};

template <>
class Managed<VkSurfaceCapabilities2KHR>
    : public detail::ManagedStructure<VkSurfaceCapabilities2KHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesFullScreenExclusiveEXT>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSurfaceCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceCapabilitiesKHR>
{
};

template <>
class Managed<VkSurfaceFormat2KHR>
    : public detail::ManagedStructure<VkSurfaceFormat2KHR>
{
};

template <>
class Managed<VkSurfaceFormatKHR>
    : public detail::ManagedStructure<VkSurfaceFormatKHR>
{
};

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceFullScreenExclusiveInfoEXT>
    : public detail::ManagedStructure<VkSurfaceFullScreenExclusiveInfoEXT>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkSurfaceFullScreenExclusiveWin32InfoEXT>
    : public detail::ManagedStructure<VkSurfaceFullScreenExclusiveWin32InfoEXT>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkSurfaceProtectedCapabilitiesKHR>
    : public detail::ManagedStructure<VkSurfaceProtectedCapabilitiesKHR>
{
};

template <>
class Managed<VkSwapchainCounterCreateInfoEXT>
    : public detail::ManagedStructure<VkSwapchainCounterCreateInfoEXT>
{
};

template <>
class Managed<VkSwapchainCreateInfoKHR>
    : public detail::ManagedStructure<VkSwapchainCreateInfoKHR>
{
};

template <>
class Managed<VkSwapchainDisplayNativeHdrCreateInfoAMD>
    : public detail::ManagedStructure<VkSwapchainDisplayNativeHdrCreateInfoAMD>
{
};

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
class Managed<VkSwapchainImageCreateInfoANDROID>
    : public detail::ManagedStructure<VkSwapchainImageCreateInfoANDROID>
{
};
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
class Managed<VkTextureLODGatherFormatPropertiesAMD>
    : public detail::ManagedStructure<VkTextureLODGatherFormatPropertiesAMD>
{
};

template <>
class Managed<VkTimelineSemaphoreSubmitInfo>
    : public detail::ManagedStructure<VkTimelineSemaphoreSubmitInfo>
{
};

template <>
class Managed<VkTimelineSemaphoreSubmitInfoKHR>
    : public detail::ManagedStructure<VkTimelineSemaphoreSubmitInfoKHR>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkTraceRaysIndirectCommandKHR>
    : public detail::ManagedStructure<VkTraceRaysIndirectCommandKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkTransformMatrixKHR>
    : public detail::ManagedStructure<VkTransformMatrixKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkTransformMatrixNV>
    : public detail::ManagedStructure<VkTransformMatrixNV>
{
};

template <>
class Managed<VkValidationCacheCreateInfoEXT>
    : public detail::ManagedStructure<VkValidationCacheCreateInfoEXT>
{
};

template <>
class Managed<VkValidationFeaturesEXT>
    : public detail::ManagedStructure<VkValidationFeaturesEXT>
{
};

template <>
class Managed<VkValidationFlagsEXT>
    : public detail::ManagedStructure<VkValidationFlagsEXT>
{
};

template <>
class Managed<VkVertexInputAttributeDescription>
    : public detail::ManagedStructure<VkVertexInputAttributeDescription>
{
};

template <>
class Managed<VkVertexInputBindingDescription>
    : public detail::ManagedStructure<VkVertexInputBindingDescription>
{
};

template <>
class Managed<VkVertexInputBindingDivisorDescriptionEXT>
    : public detail::ManagedStructure<VkVertexInputBindingDivisorDescriptionEXT>
{
};

#ifdef VK_USE_PLATFORM_VI_NN
template <>
class Managed<VkViSurfaceCreateInfoNN>
    : public detail::ManagedStructure<VkViSurfaceCreateInfoNN>
{
};
#endif // VK_USE_PLATFORM_VI_NN

template <>
class Managed<VkViewport>
    : public detail::ManagedStructure<VkViewport>
{
};

template <>
class Managed<VkViewportSwizzleNV>
    : public detail::ManagedStructure<VkViewportSwizzleNV>
{
};

template <>
class Managed<VkViewportWScalingNV>
    : public detail::ManagedStructure<VkViewportWScalingNV>
{
};

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
class Managed<VkWaylandSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkWaylandSurfaceCreateInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32KeyedMutexAcquireReleaseInfoKHR>
    : public detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32KeyedMutexAcquireReleaseInfoNV>
    : public detail::ManagedStructure<VkWin32KeyedMutexAcquireReleaseInfoNV>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
class Managed<VkWin32SurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkWin32SurfaceCreateInfoKHR>
{
};
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
class Managed<VkWriteDescriptorSet>
    : public detail::ManagedStructure<VkWriteDescriptorSet>
{
};

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
class Managed<VkWriteDescriptorSetAccelerationStructureKHR>
    : public detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureKHR>
{
};
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
class Managed<VkWriteDescriptorSetAccelerationStructureNV>
    : public detail::ManagedStructure<VkWriteDescriptorSetAccelerationStructureNV>
{
};

template <>
class Managed<VkWriteDescriptorSetInlineUniformBlockEXT>
    : public detail::ManagedStructure<VkWriteDescriptorSetInlineUniformBlockEXT>
{
};

template <>
class Managed<VkXYColorEXT>
    : public detail::ManagedStructure<VkXYColorEXT>
{
};

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
class Managed<VkXcbSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkXcbSurfaceCreateInfoKHR>
{
};
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
class Managed<VkXlibSurfaceCreateInfoKHR>
    : public detail::ManagedStructure<VkXlibSurfaceCreateInfoKHR>
{
};
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace vk
} // namespace gfx
} // namespace dst
