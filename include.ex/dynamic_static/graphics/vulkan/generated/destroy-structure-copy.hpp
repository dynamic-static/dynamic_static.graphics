
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

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAabbPositionsKHR destroy_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildGeometryInfoKHR destroy_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildOffsetInfoKHR destroy_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateGeometryTypeInfoKHR destroy_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateInfoKHR destroy_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateInfoNV destroy_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureDeviceAddressInfoKHR destroy_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryAabbsDataKHR destroy_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryDataKHR destroy_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryInstancesDataKHR destroy_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryKHR destroy_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryTrianglesDataKHR destroy_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureInfoNV destroy_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureInstanceKHR destroy_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureMemoryRequirementsInfoKHR destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureMemoryRequirementsInfoNV destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureVersionKHR destroy_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkAcquireNextImageInfoKHR destroy_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAcquireProfilingLockInfoKHR destroy_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAllocationCallbacks destroy_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferFormatPropertiesANDROID destroy_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferPropertiesANDROID destroy_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferUsageANDROID destroy_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidSurfaceCreateInfoKHR destroy_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <>
VkApplicationInfo destroy_structure_copy<VkApplicationInfo>(const VkApplicationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAttachmentDescription destroy_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAttachmentDescription2 destroy_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAttachmentDescriptionStencilLayout destroy_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAttachmentReference destroy_structure_copy<VkAttachmentReference>(const VkAttachmentReference& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAttachmentReference2 destroy_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAttachmentReferenceStencilLayout destroy_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkAttachmentSampleLocationsEXT destroy_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBaseInStructure destroy_structure_copy<VkBaseInStructure>(const VkBaseInStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBaseOutStructure destroy_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkBindAccelerationStructureMemoryInfoKHR destroy_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkBindBufferMemoryDeviceGroupInfo destroy_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindBufferMemoryInfo destroy_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindImageMemoryDeviceGroupInfo destroy_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindImageMemoryInfo destroy_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindImageMemorySwapchainInfoKHR destroy_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindImagePlaneMemoryInfo destroy_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindIndexBufferIndirectCommandNV destroy_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindShaderGroupIndirectCommandNV destroy_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindSparseInfo destroy_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBindVertexBufferIndirectCommandNV destroy_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferCopy destroy_structure_copy<VkBufferCopy>(const VkBufferCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferCreateInfo destroy_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferDeviceAddressCreateInfoEXT destroy_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferDeviceAddressInfo destroy_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferImageCopy destroy_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferMemoryBarrier destroy_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferMemoryRequirementsInfo2 destroy_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferOpaqueCaptureAddressCreateInfo destroy_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkBufferViewCreateInfo destroy_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCalibratedTimestampInfoEXT destroy_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCheckpointDataNV destroy_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkClearAttachment destroy_structure_copy<VkClearAttachment>(const VkClearAttachment& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkClearColorValue destroy_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkClearDepthStencilValue destroy_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkClearRect destroy_structure_copy<VkClearRect>(const VkClearRect& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkClearValue destroy_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCoarseSampleLocationNV destroy_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCoarseSampleOrderCustomNV destroy_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCommandBufferAllocateInfo destroy_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCommandBufferBeginInfo destroy_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCommandBufferInheritanceConditionalRenderingInfoEXT destroy_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCommandBufferInheritanceInfo destroy_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCommandBufferInheritanceRenderPassTransformInfoQCOM destroy_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCommandPoolCreateInfo destroy_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkComponentMapping destroy_structure_copy<VkComponentMapping>(const VkComponentMapping& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkComputePipelineCreateInfo destroy_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkConditionalRenderingBeginInfoEXT destroy_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkConformanceVersion destroy_structure_copy<VkConformanceVersion>(const VkConformanceVersion& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkCooperativeMatrixPropertiesNV destroy_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureInfoKHR destroy_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureToMemoryInfoKHR destroy_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyDescriptorSet destroy_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyMemoryToAccelerationStructureInfoKHR destroy_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkD3D12FenceSubmitInfoKHR destroy_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkDebugMarkerMarkerInfoEXT destroy_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugMarkerObjectNameInfoEXT destroy_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugMarkerObjectTagInfoEXT destroy_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugReportCallbackCreateInfoEXT destroy_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugUtilsLabelEXT destroy_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugUtilsMessengerCallbackDataEXT destroy_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugUtilsMessengerCreateInfoEXT destroy_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugUtilsObjectNameInfoEXT destroy_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDebugUtilsObjectTagInfoEXT destroy_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDedicatedAllocationBufferCreateInfoNV destroy_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDedicatedAllocationImageCreateInfoNV destroy_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDedicatedAllocationMemoryAllocateInfoNV destroy_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeferredOperationInfoKHR destroy_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkDescriptorBufferInfo destroy_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorImageInfo destroy_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorPoolCreateInfo destroy_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorPoolInlineUniformBlockCreateInfoEXT destroy_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorPoolSize destroy_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorSetAllocateInfo destroy_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorSetLayoutBinding destroy_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorSetLayoutBindingFlagsCreateInfo destroy_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorSetLayoutCreateInfo destroy_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorSetLayoutSupport destroy_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorSetVariableDescriptorCountAllocateInfo destroy_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorSetVariableDescriptorCountLayoutSupport destroy_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorUpdateTemplateCreateInfo destroy_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDescriptorUpdateTemplateEntry destroy_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceCreateInfo destroy_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceDiagnosticsConfigCreateInfoNV destroy_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceEventInfoEXT destroy_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupBindSparseInfo destroy_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupCommandBufferBeginInfo destroy_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupDeviceCreateInfo destroy_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupPresentCapabilitiesKHR destroy_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupPresentInfoKHR destroy_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupRenderPassBeginInfo destroy_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupSubmitInfo destroy_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceGroupSwapchainCreateInfoKHR destroy_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceMemoryOpaqueCaptureAddressInfo destroy_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceMemoryOverallocationCreateInfoAMD destroy_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressConstKHR destroy_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressKHR destroy_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkDevicePrivateDataCreateInfoEXT destroy_structure_copy<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceQueueCreateInfo destroy_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceQueueGlobalPriorityCreateInfoEXT destroy_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDeviceQueueInfo2 destroy_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDispatchIndirectCommand destroy_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayEventInfoEXT destroy_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayModeCreateInfoKHR destroy_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayModeParametersKHR destroy_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayModeProperties2KHR destroy_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayModePropertiesKHR destroy_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayNativeHdrSurfaceCapabilitiesAMD destroy_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPlaneCapabilities2KHR destroy_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPlaneCapabilitiesKHR destroy_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPlaneInfo2KHR destroy_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPlaneProperties2KHR destroy_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPlanePropertiesKHR destroy_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPowerInfoEXT destroy_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPresentInfoKHR destroy_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayProperties2KHR destroy_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplayPropertiesKHR destroy_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDisplaySurfaceCreateInfoKHR destroy_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDrawIndexedIndirectCommand destroy_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDrawIndirectCommand destroy_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDrawMeshTasksIndirectCommandNV destroy_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDrmFormatModifierPropertiesEXT destroy_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkDrmFormatModifierPropertiesListEXT destroy_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkEventCreateInfo destroy_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExportFenceCreateInfo destroy_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportFenceWin32HandleInfoKHR destroy_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryAllocateInfo destroy_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExportMemoryAllocateInfoNV destroy_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoKHR destroy_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoNV destroy_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportSemaphoreCreateInfo destroy_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportSemaphoreWin32HandleInfoKHR destroy_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkExtensionProperties destroy_structure_copy<VkExtensionProperties>(const VkExtensionProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExtent2D destroy_structure_copy<VkExtent2D>(const VkExtent2D& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExtent3D destroy_structure_copy<VkExtent3D>(const VkExtent3D& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalBufferProperties destroy_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalFenceProperties destroy_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkExternalFormatANDROID destroy_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <>
VkExternalImageFormatProperties destroy_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalImageFormatPropertiesNV destroy_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalMemoryBufferCreateInfo destroy_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalMemoryImageCreateInfo destroy_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalMemoryImageCreateInfoNV destroy_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalMemoryProperties destroy_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkExternalSemaphoreProperties destroy_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFenceCreateInfo destroy_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFenceGetFdInfoKHR destroy_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkFenceGetWin32HandleInfoKHR destroy_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkFilterCubicImageViewImageFormatPropertiesEXT destroy_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFormatProperties destroy_structure_copy<VkFormatProperties>(const VkFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFormatProperties2 destroy_structure_copy<VkFormatProperties2>(const VkFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFramebufferAttachmentImageInfo destroy_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFramebufferAttachmentsCreateInfo destroy_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFramebufferCreateInfo destroy_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkFramebufferMixedSamplesCombinationNV destroy_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGeneratedCommandsInfoNV destroy_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGeneratedCommandsMemoryRequirementsInfoNV destroy_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGeometryAABBNV destroy_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGeometryDataNV destroy_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGeometryNV destroy_structure_copy<VkGeometryNV>(const VkGeometryNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGeometryTrianglesNV destroy_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGraphicsPipelineCreateInfo destroy_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGraphicsPipelineShaderGroupsCreateInfoNV destroy_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkGraphicsShaderGroupCreateInfoNV destroy_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkHdrMetadataEXT destroy_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkHeadlessSurfaceCreateInfoEXT destroy_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
VkIOSSurfaceCreateInfoMVK destroy_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_IOS_MVK
template <>
VkImageBlit destroy_structure_copy<VkImageBlit>(const VkImageBlit& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageCopy destroy_structure_copy<VkImageCopy>(const VkImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageCreateInfo destroy_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageDrmFormatModifierExplicitCreateInfoEXT destroy_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageDrmFormatModifierListCreateInfoEXT destroy_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageDrmFormatModifierPropertiesEXT destroy_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageFormatListCreateInfo destroy_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageFormatProperties destroy_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageFormatProperties2 destroy_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageMemoryBarrier destroy_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageMemoryRequirementsInfo2 destroy_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
VkImagePipeSurfaceCreateInfoFUCHSIA destroy_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_FUCHSIA
template <>
VkImagePlaneMemoryRequirementsInfo destroy_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageResolve destroy_structure_copy<VkImageResolve>(const VkImageResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageSparseMemoryRequirementsInfo2 destroy_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageStencilUsageCreateInfo destroy_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageSubresource destroy_structure_copy<VkImageSubresource>(const VkImageSubresource& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageSubresourceLayers destroy_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageSubresourceRange destroy_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageSwapchainCreateInfoKHR destroy_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageViewASTCDecodeModeEXT destroy_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageViewAddressPropertiesNVX destroy_structure_copy<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageViewCreateInfo destroy_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageViewHandleInfoNVX destroy_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImageViewUsageCreateInfo destroy_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkImportAndroidHardwareBufferInfoANDROID destroy_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <>
VkImportFenceFdInfoKHR destroy_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportFenceWin32HandleInfoKHR destroy_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryFdInfoKHR destroy_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkImportMemoryHostPointerInfoEXT destroy_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoKHR destroy_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoNV destroy_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportSemaphoreFdInfoKHR destroy_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportSemaphoreWin32HandleInfoKHR destroy_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkIndirectCommandsLayoutCreateInfoNV destroy_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkIndirectCommandsLayoutTokenNV destroy_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkIndirectCommandsStreamNV destroy_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkInitializePerformanceApiInfoINTEL destroy_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkInputAttachmentAspectReference destroy_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkInstanceCreateInfo destroy_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkLayerProperties destroy_structure_copy<VkLayerProperties>(const VkLayerProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
VkMacOSSurfaceCreateInfoMVK destroy_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_MACOS_MVK
template <>
VkMappedMemoryRange destroy_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryAllocateFlagsInfo destroy_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryAllocateInfo destroy_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryBarrier destroy_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryDedicatedAllocateInfo destroy_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryDedicatedRequirements destroy_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryFdPropertiesKHR destroy_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkMemoryGetAndroidHardwareBufferInfoANDROID destroy_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <>
VkMemoryGetFdInfoKHR destroy_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryGetWin32HandleInfoKHR destroy_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryHeap destroy_structure_copy<VkMemoryHeap>(const VkMemoryHeap& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryHostPointerPropertiesEXT destroy_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryOpaqueCaptureAddressAllocateInfo destroy_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryPriorityAllocateInfoEXT destroy_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryRequirements destroy_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryRequirements2 destroy_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkMemoryType destroy_structure_copy<VkMemoryType>(const VkMemoryType& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryWin32HandlePropertiesKHR destroy_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
VkMetalSurfaceCreateInfoEXT destroy_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_METAL_EXT
template <>
VkMultisamplePropertiesEXT destroy_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferANDROID destroy_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferUsage2ANDROID destroy_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <>
VkOffset2D destroy_structure_copy<VkOffset2D>(const VkOffset2D& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkOffset3D destroy_structure_copy<VkOffset3D>(const VkOffset3D& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPastPresentationTimingGOOGLE destroy_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceConfigurationAcquireInfoINTEL destroy_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceCounterDescriptionKHR destroy_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceCounterKHR destroy_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceCounterResultKHR destroy_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceMarkerInfoINTEL destroy_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceOverrideInfoINTEL destroy_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceQuerySubmitInfoKHR destroy_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceStreamMarkerInfoINTEL destroy_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceValueDataINTEL destroy_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPerformanceValueINTEL destroy_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevice16BitStorageFeatures destroy_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevice8BitStorageFeatures destroy_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceASTCDecodeFeaturesEXT destroy_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceBufferDeviceAddressFeatures destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceBufferDeviceAddressFeaturesEXT destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceCoherentMemoryFeaturesAMD destroy_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceComputeShaderDerivativesFeaturesNV destroy_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceConditionalRenderingFeaturesEXT destroy_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceConservativeRasterizationPropertiesEXT destroy_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceCooperativeMatrixFeaturesNV destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceCooperativeMatrixPropertiesNV destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceCornerSampledImageFeaturesNV destroy_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceCoverageReductionModeFeaturesNV destroy_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceCustomBorderColorFeaturesEXT destroy_structure_copy<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceCustomBorderColorPropertiesEXT destroy_structure_copy<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV destroy_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDepthClipEnableFeaturesEXT destroy_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDepthStencilResolveProperties destroy_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDescriptorIndexingFeatures destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDescriptorIndexingProperties destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDiagnosticsConfigFeaturesNV destroy_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDiscardRectanglePropertiesEXT destroy_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceDriverProperties destroy_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceExclusiveScissorFeaturesNV destroy_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceExternalBufferInfo destroy_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceExternalFenceInfo destroy_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceExternalImageFormatInfo destroy_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceExternalMemoryHostPropertiesEXT destroy_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceExternalSemaphoreInfo destroy_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceFeatures destroy_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceFeatures2 destroy_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceFloatControlsProperties destroy_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceFragmentDensityMapFeaturesEXT destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceFragmentDensityMapPropertiesEXT destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV destroy_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT destroy_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceGroupProperties destroy_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceHostQueryResetFeatures destroy_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceIDProperties destroy_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceImageDrmFormatModifierInfoEXT destroy_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceImageFormatInfo2 destroy_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceImageViewImageFormatInfoEXT destroy_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceImagelessFramebufferFeatures destroy_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceIndexTypeUint8FeaturesEXT destroy_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceInlineUniformBlockFeaturesEXT destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceInlineUniformBlockPropertiesEXT destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceLimits destroy_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceLineRasterizationFeaturesEXT destroy_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceLineRasterizationPropertiesEXT destroy_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMaintenance3Properties destroy_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMemoryBudgetPropertiesEXT destroy_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMemoryPriorityFeaturesEXT destroy_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMemoryProperties destroy_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMemoryProperties2 destroy_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMeshShaderFeaturesNV destroy_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMeshShaderPropertiesNV destroy_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMultiviewFeatures destroy_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX destroy_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceMultiviewProperties destroy_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevicePCIBusInfoPropertiesEXT destroy_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevicePerformanceQueryFeaturesKHR destroy_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevicePerformanceQueryPropertiesKHR destroy_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT destroy_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR destroy_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevicePointClippingProperties destroy_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkPhysicalDevicePresentationPropertiesANDROID destroy_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <>
VkPhysicalDevicePrivateDataFeaturesEXT destroy_structure_copy<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceProperties destroy_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceProperties2 destroy_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceProtectedMemoryFeatures destroy_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceProtectedMemoryProperties destroy_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDevicePushDescriptorPropertiesKHR destroy_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingFeaturesKHR destroy_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingPropertiesKHR destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingPropertiesNV destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV destroy_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceRobustness2FeaturesEXT destroy_structure_copy<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceRobustness2PropertiesEXT destroy_structure_copy<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSampleLocationsPropertiesEXT destroy_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSamplerFilterMinmaxProperties destroy_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSamplerYcbcrConversionFeatures destroy_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceScalarBlockLayoutFeatures destroy_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures destroy_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderAtomicInt64Features destroy_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderClockFeaturesKHR destroy_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderCoreProperties2AMD destroy_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderCorePropertiesAMD destroy_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT destroy_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderDrawParametersFeatures destroy_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderFloat16Int8Features destroy_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderImageFootprintFeaturesNV destroy_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL destroy_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderSMBuiltinsFeaturesNV destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderSMBuiltinsPropertiesNV destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures destroy_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShadingRateImageFeaturesNV destroy_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceShadingRateImagePropertiesNV destroy_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSparseImageFormatInfo2 destroy_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSparseProperties destroy_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSubgroupProperties destroy_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSubgroupSizeControlFeaturesEXT destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSubgroupSizeControlPropertiesEXT destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceSurfaceInfo2KHR destroy_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT destroy_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceTimelineSemaphoreFeatures destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceTimelineSemaphoreProperties destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceToolPropertiesEXT destroy_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceTransformFeedbackFeaturesEXT destroy_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceTransformFeedbackPropertiesEXT destroy_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceUniformBufferStandardLayoutFeatures destroy_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVariablePointersFeatures destroy_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVulkan11Features destroy_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVulkan11Properties destroy_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVulkan12Features destroy_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVulkan12Properties destroy_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceVulkanMemoryModelFeatures destroy_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPhysicalDeviceYcbcrImageArraysFeaturesEXT destroy_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineCacheCreateInfo destroy_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineColorBlendAdvancedStateCreateInfoEXT destroy_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineColorBlendAttachmentState destroy_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineColorBlendStateCreateInfo destroy_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineCompilerControlCreateInfoAMD destroy_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineCoverageModulationStateCreateInfoNV destroy_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineCoverageReductionStateCreateInfoNV destroy_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineCoverageToColorStateCreateInfoNV destroy_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineCreationFeedbackCreateInfoEXT destroy_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineCreationFeedbackEXT destroy_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineDepthStencilStateCreateInfo destroy_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineDiscardRectangleStateCreateInfoEXT destroy_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineDynamicStateCreateInfo destroy_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineExecutableInfoKHR destroy_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineExecutableInternalRepresentationKHR destroy_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineExecutablePropertiesKHR destroy_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineExecutableStatisticKHR destroy_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineExecutableStatisticValueKHR destroy_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineInfoKHR destroy_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineInputAssemblyStateCreateInfo destroy_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineLayoutCreateInfo destroy_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPipelineLibraryCreateInfoKHR destroy_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkPipelineMultisampleStateCreateInfo destroy_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineRasterizationConservativeStateCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineRasterizationDepthClipStateCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineRasterizationLineStateCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineRasterizationStateCreateInfo destroy_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineRasterizationStateRasterizationOrderAMD destroy_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineRasterizationStateStreamCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineRepresentativeFragmentTestStateCreateInfoNV destroy_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineSampleLocationsStateCreateInfoEXT destroy_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineShaderStageCreateInfo destroy_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT destroy_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineTessellationDomainOriginStateCreateInfo destroy_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineTessellationStateCreateInfo destroy_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineVertexInputDivisorStateCreateInfoEXT destroy_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineVertexInputStateCreateInfo destroy_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineViewportCoarseSampleOrderStateCreateInfoNV destroy_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineViewportExclusiveScissorStateCreateInfoNV destroy_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineViewportShadingRateImageStateCreateInfoNV destroy_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineViewportStateCreateInfo destroy_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineViewportSwizzleStateCreateInfoNV destroy_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPipelineViewportWScalingStateCreateInfoNV destroy_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_GGP
template <>
VkPresentFrameTokenGGP destroy_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_GGP
template <>
VkPresentInfoKHR destroy_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPresentRegionKHR destroy_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPresentRegionsKHR destroy_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPresentTimeGOOGLE destroy_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPresentTimesInfoGOOGLE destroy_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPrivateDataSlotCreateInfoEXT destroy_structure_copy<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkProtectedSubmitInfo destroy_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkPushConstantRange destroy_structure_copy<VkPushConstantRange>(const VkPushConstantRange& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkQueryPoolCreateInfo destroy_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkQueryPoolPerformanceCreateInfoKHR destroy_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkQueryPoolPerformanceQueryCreateInfoINTEL destroy_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkQueueFamilyCheckpointPropertiesNV destroy_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkQueueFamilyProperties destroy_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkQueueFamilyProperties2 destroy_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineCreateInfoKHR destroy_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineCreateInfoNV destroy_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineInterfaceCreateInfoKHR destroy_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingShaderGroupCreateInfoKHR destroy_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingShaderGroupCreateInfoNV destroy_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRect2D destroy_structure_copy<VkRect2D>(const VkRect2D& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRectLayerKHR destroy_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRefreshCycleDurationGOOGLE destroy_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassAttachmentBeginInfo destroy_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassBeginInfo destroy_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassCreateInfo destroy_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassCreateInfo2 destroy_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassFragmentDensityMapCreateInfoEXT destroy_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassInputAttachmentAspectCreateInfo destroy_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassMultiviewCreateInfo destroy_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassSampleLocationsBeginInfoEXT destroy_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkRenderPassTransformBeginInfoQCOM destroy_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSampleLocationEXT destroy_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSampleLocationsInfoEXT destroy_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSamplerCreateInfo destroy_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSamplerCustomBorderColorCreateInfoEXT destroy_structure_copy<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSamplerReductionModeCreateInfo destroy_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSamplerYcbcrConversionCreateInfo destroy_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSamplerYcbcrConversionImageFormatProperties destroy_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSamplerYcbcrConversionInfo destroy_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSemaphoreCreateInfo destroy_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSemaphoreGetFdInfoKHR destroy_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSemaphoreGetWin32HandleInfoKHR destroy_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkSemaphoreSignalInfo destroy_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSemaphoreTypeCreateInfo destroy_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSemaphoreWaitInfo destroy_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSetStateFlagsIndirectCommandNV destroy_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkShaderModuleCreateInfo destroy_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkShaderModuleValidationCacheCreateInfoEXT destroy_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkShaderResourceUsageAMD destroy_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkShaderStatisticsInfoAMD destroy_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkShadingRatePaletteNV destroy_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSharedPresentSurfaceCapabilitiesKHR destroy_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseBufferMemoryBindInfo destroy_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseImageFormatProperties destroy_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseImageFormatProperties2 destroy_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseImageMemoryBind destroy_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseImageMemoryBindInfo destroy_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseImageMemoryRequirements destroy_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseImageMemoryRequirements2 destroy_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseImageOpaqueMemoryBindInfo destroy_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSparseMemoryBind destroy_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSpecializationInfo destroy_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSpecializationMapEntry destroy_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkStencilOpState destroy_structure_copy<VkStencilOpState>(const VkStencilOpState& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_GGP
template <>
VkStreamDescriptorSurfaceCreateInfoGGP destroy_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_GGP
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkStridedBufferRegionKHR destroy_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkSubmitInfo destroy_structure_copy<VkSubmitInfo>(const VkSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassBeginInfo destroy_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassDependency destroy_structure_copy<VkSubpassDependency>(const VkSubpassDependency& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassDependency2 destroy_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassDescription destroy_structure_copy<VkSubpassDescription>(const VkSubpassDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassDescription2 destroy_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassDescriptionDepthStencilResolve destroy_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassEndInfo destroy_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubpassSampleLocationsEXT destroy_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSubresourceLayout destroy_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSurfaceCapabilities2EXT destroy_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSurfaceCapabilities2KHR destroy_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceCapabilitiesFullScreenExclusiveEXT destroy_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceCapabilitiesKHR destroy_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSurfaceFormat2KHR destroy_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSurfaceFormatKHR destroy_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveInfoEXT destroy_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveWin32InfoEXT destroy_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceProtectedCapabilitiesKHR destroy_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSwapchainCounterCreateInfoEXT destroy_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSwapchainCreateInfoKHR destroy_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkSwapchainDisplayNativeHdrCreateInfoAMD destroy_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkSwapchainImageCreateInfoANDROID destroy_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_ANDROID_KHR
template <>
VkTextureLODGatherFormatPropertiesAMD destroy_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkTimelineSemaphoreSubmitInfo destroy_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTraceRaysIndirectCommandKHR destroy_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTransformMatrixKHR destroy_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkValidationCacheCreateInfoEXT destroy_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkValidationFeaturesEXT destroy_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkValidationFlagsEXT destroy_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkVertexInputAttributeDescription destroy_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkVertexInputBindingDescription destroy_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkVertexInputBindingDivisorDescriptionEXT destroy_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_VI_NN
template <>
VkViSurfaceCreateInfoNN destroy_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_VI_NN
template <>
VkViewport destroy_structure_copy<VkViewport>(const VkViewport& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkViewportSwizzleNV destroy_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkViewportWScalingNV destroy_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
VkWaylandSurfaceCreateInfoKHR destroy_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WAYLAND_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoKHR destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoNV destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32SurfaceCreateInfoKHR destroy_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_WIN32_KHR
template <>
VkWriteDescriptorSet destroy_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkWriteDescriptorSetAccelerationStructureKHR destroy_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <>
VkWriteDescriptorSetInlineUniformBlockEXT destroy_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
template <>
VkXYColorEXT destroy_structure_copy<VkXYColorEXT>(const VkXYColorEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
VkXcbSurfaceCreateInfoKHR destroy_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_XCB_KHR
#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
VkXlibSurfaceCreateInfoKHR destroy_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace vk
} // namespace dst
