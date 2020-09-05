
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/less-than-or-equal-operators.hpp"
#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple.hpp"

namespace dst {
namespace vk {


#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<=(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferCopy& lhs, const VkBufferCopy& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkClearAttachment& lhs, const VkClearAttachment& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkClearColorValue& lhs, const VkClearColorValue& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkClearRect& lhs, const VkClearRect& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkClearValue& lhs, const VkClearValue& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkComponentMapping& lhs, const VkComponentMapping& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkDevicePrivateDataCreateInfoEXT& lhs, const VkDevicePrivateDataCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExtent2D& lhs, const VkExtent2D& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExtent3D& lhs, const VkExtent3D& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<=(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFormatProperties& lhs, const VkFormatProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGeometryNV& lhs, const VkGeometryNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_IOS_MVK
bool operator<=(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_IOS_MVK

bool operator<=(const VkImageBlit& lhs, const VkImageBlit& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageCopy& lhs, const VkImageCopy& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_FUCHSIA
bool operator<=(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_FUCHSIA

bool operator<=(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageResolve& lhs, const VkImageResolve& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageSubresource& lhs, const VkImageSubresource& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageViewAddressPropertiesNVX& lhs, const VkImageViewAddressPropertiesNVX& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<=(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkLayerProperties& lhs, const VkLayerProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
bool operator<=(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_MACOS_MVK

bool operator<=(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<=(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkMemoryType& lhs, const VkMemoryType& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
bool operator<=(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_METAL_EXT

bool operator<=(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<=(const VkOffset2D& lhs, const VkOffset2D& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkOffset3D& lhs, const VkOffset3D& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& lhs, const VkPhysicalDeviceCustomBorderColorFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& lhs, const VkPhysicalDeviceCustomBorderColorPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<=(const VkPhysicalDevicePrivateDataFeaturesEXT& lhs, const VkPhysicalDevicePrivateDataFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRobustness2FeaturesEXT& lhs, const VkPhysicalDeviceRobustness2FeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRobustness2PropertiesEXT& lhs, const VkPhysicalDeviceRobustness2PropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator<=(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_GGP

bool operator<=(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPrivateDataSlotCreateInfoEXT& lhs, const VkPrivateDataSlotCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRect2D& lhs, const VkRect2D& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSamplerCustomBorderColorCreateInfoEXT& lhs, const VkSamplerCustomBorderColorCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkStencilOpState& lhs, const VkStencilOpState& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator<=(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<=(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_VI_NN
bool operator<=(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_VI_NN

bool operator<=(const VkViewport& lhs, const VkViewport& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool operator<=(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<=(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<=(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

bool operator<=(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}

#ifdef VK_USE_PLATFORM_XCB_KHR
bool operator<=(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
bool operator<=(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs)
{
    return to_tuple(lhs) <= to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace vk
} // namespace dst
