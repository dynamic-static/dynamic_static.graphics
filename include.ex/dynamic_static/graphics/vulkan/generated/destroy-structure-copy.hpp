
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/structure-copy-utilities.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace vk {
namespace detail {

void destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkApplicationInfo>(const VkApplicationInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAttachmentReference>(const VkAttachmentReference&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBaseInStructure>(const VkBaseInStructure&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferCopy>(const VkBufferCopy&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkClearAttachment>(const VkClearAttachment&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkClearRect>(const VkClearRect&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkComponentMapping>(const VkComponentMapping&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkConformanceVersion>(const VkConformanceVersion&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <> void destroy_structure_copy<VkDirectFBSurfaceCreateInfoEXT>(const VkDirectFBSurfaceCreateInfoEXT&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_DIRECTFB_EXT
template <> void destroy_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkExtensionProperties>(const VkExtensionProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExtent2D>(const VkExtent2D&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExtent3D>(const VkExtent3D&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFormatProperties>(const VkFormatProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFormatProperties2>(const VkFormatProperties2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGeometryNV>(const VkGeometryNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_IOS_MVK
template <> void destroy_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_IOS_MVK
template <> void destroy_structure_copy<VkImageBlit>(const VkImageBlit&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageCopy>(const VkImageCopy&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_FUCHSIA
template <> void destroy_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_FUCHSIA
template <> void destroy_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageResolve>(const VkImageResolve&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageSubresource>(const VkImageSubresource&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkLayerProperties>(const VkLayerProperties&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_MACOS_MVK
template <> void destroy_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_MACOS_MVK
template <> void destroy_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkMemoryHeap>(const VkMemoryHeap&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkMemoryType>(const VkMemoryType&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_METAL_EXT
template <> void destroy_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_METAL_EXT
template <> void destroy_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkOffset2D>(const VkOffset2D&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkOffset3D>(const VkOffset3D&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceImageRobustnessFeaturesEXT>(const VkPhysicalDeviceImageRobustnessFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_GGP
template <> void destroy_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_GGP
template <> void destroy_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkPushConstantRange>(const VkPushConstantRange&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRect2D>(const VkRect2D&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkStencilOpState>(const VkStencilOpState&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_GGP
template <> void destroy_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_GGP
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkSubmitInfo>(const VkSubmitInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassDependency>(const VkSubpassDependency&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassDescription>(const VkSubpassDescription&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <> void destroy_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_VI_NN
template <> void destroy_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_VI_NN
template <> void destroy_structure_copy<VkViewport>(const VkViewport&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV&, const VkAllocationCallbacks*);
template <> void destroy_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <> void destroy_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <> void destroy_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet&, const VkAllocationCallbacks*);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR&, const VkAllocationCallbacks*);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkXYColorEXT>(const VkXYColorEXT&, const VkAllocationCallbacks*);
#ifdef VK_USE_PLATFORM_XCB_KHR
template <> void destroy_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
template <> void destroy_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR&, const VkAllocationCallbacks*);
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace detail
} // namespace vk
} // namespace dst
