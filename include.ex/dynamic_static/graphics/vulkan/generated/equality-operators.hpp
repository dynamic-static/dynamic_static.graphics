
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace vk {

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs);
bool operator==(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs);
bool operator==(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs);
bool operator==(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs);
bool operator==(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs);
bool operator==(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs);
bool operator==(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs);
bool operator==(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs);
bool operator==(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs);
bool operator==(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs);
bool operator==(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs);
bool operator==(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs);
bool operator==(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs);
bool operator==(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs);
bool operator==(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs);
bool operator==(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs);
bool operator==(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs);
bool operator==(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs);
bool operator==(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs);
bool operator==(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs);
bool operator==(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs);
bool operator==(const VkBufferCopy& lhs, const VkBufferCopy& rhs);
bool operator==(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs);
bool operator==(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs);
bool operator==(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs);
bool operator==(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs);
bool operator==(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs);
bool operator==(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs);
bool operator==(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs);
bool operator==(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs);
bool operator==(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs);
bool operator==(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs);
bool operator==(const VkClearAttachment& lhs, const VkClearAttachment& rhs);
bool operator==(const VkClearColorValue& lhs, const VkClearColorValue& rhs);
bool operator==(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs);
bool operator==(const VkClearRect& lhs, const VkClearRect& rhs);
bool operator==(const VkClearValue& lhs, const VkClearValue& rhs);
bool operator==(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs);
bool operator==(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs);
bool operator==(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs);
bool operator==(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs);
bool operator==(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs);
bool operator==(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs);
bool operator==(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs);
bool operator==(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs);
bool operator==(const VkComponentMapping& lhs, const VkComponentMapping& rhs);
bool operator==(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs);
bool operator==(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs);
bool operator==(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs);
bool operator==(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs);
bool operator==(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs);
bool operator==(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs);
bool operator==(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs);
bool operator==(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs);
bool operator==(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs);
bool operator==(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs);
bool operator==(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs);
bool operator==(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs);
bool operator==(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs);
bool operator==(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs);
bool operator==(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs);
bool operator==(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs);
bool operator==(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs);
bool operator==(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs);
bool operator==(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs);
bool operator==(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs);
bool operator==(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs);
bool operator==(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs);
bool operator==(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs);
bool operator==(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs);
bool operator==(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs);
bool operator==(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs);
bool operator==(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs);
bool operator==(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs);
bool operator==(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs);
bool operator==(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs);
bool operator==(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs);
bool operator==(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs);
bool operator==(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs);
bool operator==(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs);
bool operator==(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs);
bool operator==(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs);
bool operator==(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs);
bool operator==(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs);
bool operator==(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs);
bool operator==(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs);
bool operator==(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkDevicePrivateDataCreateInfoEXT& lhs, const VkDevicePrivateDataCreateInfoEXT& rhs);
bool operator==(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs);
bool operator==(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs);
bool operator==(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs);
bool operator==(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs);
bool operator==(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs);
bool operator==(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs);
bool operator==(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs);
bool operator==(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs);
bool operator==(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs);
bool operator==(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs);
bool operator==(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs);
bool operator==(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs);
bool operator==(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs);
bool operator==(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs);
bool operator==(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs);
bool operator==(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs);
bool operator==(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs);
bool operator==(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs);
bool operator==(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs);
bool operator==(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs);
bool operator==(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs);
bool operator==(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs);
bool operator==(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs);
bool operator==(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs);
bool operator==(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs);
bool operator==(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs);
bool operator==(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs);
bool operator==(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs);
bool operator==(const VkExtent2D& lhs, const VkExtent2D& rhs);
bool operator==(const VkExtent3D& lhs, const VkExtent3D& rhs);
bool operator==(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs);
bool operator==(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs);
bool operator==(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs);
bool operator==(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs);
bool operator==(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs);
bool operator==(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs);
bool operator==(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs);
bool operator==(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs);
bool operator==(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs);
bool operator==(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs);
bool operator==(const VkFormatProperties& lhs, const VkFormatProperties& rhs);
bool operator==(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs);
bool operator==(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs);
bool operator==(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs);
bool operator==(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs);
bool operator==(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs);
bool operator==(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs);
bool operator==(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs);
bool operator==(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs);
bool operator==(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs);
bool operator==(const VkGeometryNV& lhs, const VkGeometryNV& rhs);
bool operator==(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs);
bool operator==(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs);
bool operator==(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs);
bool operator==(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs);
bool operator==(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs);
bool operator==(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs);
#ifdef VK_USE_PLATFORM_IOS_MVK
bool operator==(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs);
#endif // VK_USE_PLATFORM_IOS_MVK
bool operator==(const VkImageBlit& lhs, const VkImageBlit& rhs);
bool operator==(const VkImageCopy& lhs, const VkImageCopy& rhs);
bool operator==(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs);
bool operator==(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs);
bool operator==(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs);
bool operator==(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs);
bool operator==(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs);
bool operator==(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs);
bool operator==(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs);
bool operator==(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs);
bool operator==(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs);
#ifdef VK_USE_PLATFORM_FUCHSIA
bool operator==(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs);
#endif // VK_USE_PLATFORM_FUCHSIA
bool operator==(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs);
bool operator==(const VkImageResolve& lhs, const VkImageResolve& rhs);
bool operator==(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs);
bool operator==(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs);
bool operator==(const VkImageSubresource& lhs, const VkImageSubresource& rhs);
bool operator==(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs);
bool operator==(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs);
bool operator==(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs);
bool operator==(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs);
bool operator==(const VkImageViewAddressPropertiesNVX& lhs, const VkImageViewAddressPropertiesNVX& rhs);
bool operator==(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs);
bool operator==(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs);
bool operator==(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs);
bool operator==(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs);
bool operator==(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs);
bool operator==(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs);
bool operator==(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs);
bool operator==(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs);
bool operator==(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs);
bool operator==(const VkLayerProperties& lhs, const VkLayerProperties& rhs);
#ifdef VK_USE_PLATFORM_MACOS_MVK
bool operator==(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs);
#endif // VK_USE_PLATFORM_MACOS_MVK
bool operator==(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs);
bool operator==(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs);
bool operator==(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs);
bool operator==(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs);
bool operator==(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs);
bool operator==(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs);
bool operator==(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs);
bool operator==(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs);
bool operator==(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs);
bool operator==(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs);
bool operator==(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs);
bool operator==(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs);
bool operator==(const VkMemoryType& lhs, const VkMemoryType& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_METAL_EXT
bool operator==(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs);
#endif // VK_USE_PLATFORM_METAL_EXT
bool operator==(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkOffset2D& lhs, const VkOffset2D& rhs);
bool operator==(const VkOffset3D& lhs, const VkOffset3D& rhs);
bool operator==(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs);
bool operator==(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs);
bool operator==(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs);
bool operator==(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs);
bool operator==(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs);
bool operator==(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs);
bool operator==(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs);
bool operator==(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs);
bool operator==(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs);
bool operator==(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs);
bool operator==(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs);
bool operator==(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs);
bool operator==(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs);
bool operator==(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs);
bool operator==(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs);
bool operator==(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs);
bool operator==(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& lhs, const VkPhysicalDeviceCustomBorderColorFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& lhs, const VkPhysicalDeviceCustomBorderColorPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs);
bool operator==(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs);
bool operator==(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs);
bool operator==(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs);
bool operator==(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs);
bool operator==(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs);
bool operator==(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs);
bool operator==(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs);
bool operator==(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs);
bool operator==(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs);
bool operator==(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs);
bool operator==(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs);
bool operator==(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs);
bool operator==(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs);
bool operator==(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs);
bool operator==(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs);
bool operator==(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs);
bool operator==(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs);
bool operator==(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs);
bool operator==(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs);
bool operator==(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs);
bool operator==(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs);
bool operator==(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs);
bool operator==(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs);
bool operator==(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs);
bool operator==(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs);
bool operator==(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs);
bool operator==(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs);
bool operator==(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs);
bool operator==(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs);
bool operator==(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs);
bool operator==(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs);
bool operator==(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkPhysicalDevicePrivateDataFeaturesEXT& lhs, const VkPhysicalDevicePrivateDataFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs);
bool operator==(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs);
bool operator==(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs);
bool operator==(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs);
bool operator==(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs);
bool operator==(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceRobustness2FeaturesEXT& lhs, const VkPhysicalDeviceRobustness2FeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceRobustness2PropertiesEXT& lhs, const VkPhysicalDeviceRobustness2PropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs);
bool operator==(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs);
bool operator==(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs);
bool operator==(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs);
bool operator==(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs);
bool operator==(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs);
bool operator==(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs);
bool operator==(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs);
bool operator==(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs);
bool operator==(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs);
bool operator==(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs);
bool operator==(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs);
bool operator==(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs);
bool operator==(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs);
bool operator==(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs);
bool operator==(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs);
bool operator==(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs);
bool operator==(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs);
bool operator==(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs);
bool operator==(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs);
bool operator==(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs);
bool operator==(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs);
bool operator==(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs);
bool operator==(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs);
bool operator==(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs);
bool operator==(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs);
bool operator==(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs);
bool operator==(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs);
bool operator==(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs);
bool operator==(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs);
bool operator==(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs);
bool operator==(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs);
bool operator==(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs);
bool operator==(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs);
bool operator==(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs);
bool operator==(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs);
bool operator==(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs);
bool operator==(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs);
bool operator==(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs);
bool operator==(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs);
bool operator==(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs);
bool operator==(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs);
bool operator==(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs);
bool operator==(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs);
bool operator==(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs);
bool operator==(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs);
bool operator==(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs);
bool operator==(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs);
bool operator==(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs);
bool operator==(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs);
bool operator==(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs);
bool operator==(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs);
bool operator==(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs);
bool operator==(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs);
bool operator==(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs);
bool operator==(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs);
bool operator==(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs);
bool operator==(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs);
bool operator==(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs);
bool operator==(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs);
bool operator==(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs);
bool operator==(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs);
bool operator==(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs);
bool operator==(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs);
bool operator==(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs);
bool operator==(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs);
bool operator==(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs);
bool operator==(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs);
bool operator==(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs);
bool operator==(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs);
bool operator==(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs);
bool operator==(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs);
#ifdef VK_USE_PLATFORM_GGP
bool operator==(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs);
#endif // VK_USE_PLATFORM_GGP
bool operator==(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs);
bool operator==(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs);
bool operator==(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs);
bool operator==(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs);
bool operator==(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs);
bool operator==(const VkPrivateDataSlotCreateInfoEXT& lhs, const VkPrivateDataSlotCreateInfoEXT& rhs);
bool operator==(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs);
bool operator==(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs);
bool operator==(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs);
bool operator==(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs);
bool operator==(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs);
bool operator==(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs);
bool operator==(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs);
bool operator==(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs);
bool operator==(const VkRect2D& lhs, const VkRect2D& rhs);
bool operator==(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs);
bool operator==(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs);
bool operator==(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs);
bool operator==(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs);
bool operator==(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs);
bool operator==(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs);
bool operator==(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs);
bool operator==(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs);
bool operator==(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs);
bool operator==(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs);
bool operator==(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs);
bool operator==(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs);
bool operator==(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs);
bool operator==(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs);
bool operator==(const VkSamplerCustomBorderColorCreateInfoEXT& lhs, const VkSamplerCustomBorderColorCreateInfoEXT& rhs);
bool operator==(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs);
bool operator==(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs);
bool operator==(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs);
bool operator==(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs);
bool operator==(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs);
bool operator==(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs);
bool operator==(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs);
bool operator==(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs);
bool operator==(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs);
bool operator==(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs);
bool operator==(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs);
bool operator==(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs);
bool operator==(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs);
bool operator==(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs);
bool operator==(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs);
bool operator==(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs);
bool operator==(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs);
bool operator==(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs);
bool operator==(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs);
bool operator==(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs);
bool operator==(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs);
bool operator==(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs);
bool operator==(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs);
bool operator==(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs);
bool operator==(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs);
bool operator==(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs);
bool operator==(const VkStencilOpState& lhs, const VkStencilOpState& rhs);
#ifdef VK_USE_PLATFORM_GGP
bool operator==(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs);
#endif // VK_USE_PLATFORM_GGP
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs);
bool operator==(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs);
bool operator==(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs);
bool operator==(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs);
bool operator==(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs);
bool operator==(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs);
bool operator==(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs);
bool operator==(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs);
bool operator==(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs);
bool operator==(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs);
bool operator==(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs);
bool operator==(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs);
bool operator==(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs);
bool operator==(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs);
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs);
bool operator==(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs);
bool operator==(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs);
bool operator==(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs);
#endif // VK_USE_PLATFORM_ANDROID_KHR
bool operator==(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs);
bool operator==(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs);
bool operator==(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs);
bool operator==(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs);
bool operator==(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs);
bool operator==(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs);
bool operator==(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs);
#ifdef VK_USE_PLATFORM_VI_NN
bool operator==(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs);
#endif // VK_USE_PLATFORM_VI_NN
bool operator==(const VkViewport& lhs, const VkViewport& rhs);
bool operator==(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs);
bool operator==(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs);
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool operator==(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs);
#endif // VK_USE_PLATFORM_WIN32_KHR
bool operator==(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs);
#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs);
#endif // VK_ENABLE_BETA_EXTENSIONS
bool operator==(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs);
bool operator==(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs);
#ifdef VK_USE_PLATFORM_XCB_KHR
bool operator==(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs);
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
bool operator==(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs);
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace vk
} // namespace dst
