
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/destroy-structure-copy.hpp"

namespace dst {
namespace vk {
namespace detail {

////////////////////////////////////////////////////////////////////////////////
// NOTE : The following functions are manually implemented
#if 0
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> void destroy_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator);
template <> void destroy_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocator);
#endif
////////////////////////////////////////////////////////////////////////////////

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS



















template <>
void destroy_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.samplerYcbcrConversionComponents, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkApplicationInfo>(const VkApplicationInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_string_copy(obj.pApplicationName, pAllocator);
    destroy_dynamic_string_copy(obj.pEngineName, pAllocator);
}

template <>
void destroy_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkAttachmentReference>(const VkAttachmentReference& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocator);
}

template <>
void destroy_structure_copy<VkBaseInStructure>(const VkBaseInStructure& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
void destroy_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocator);
}


template <>
void destroy_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocator);
    destroy_dynamic_array_copy(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions, pAllocator);
}


template <>
void destroy_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocator);
    destroy_dynamic_array_copy(obj.bufferBindCount, obj.pBufferBinds, pAllocator);
    destroy_dynamic_array_copy(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds, pAllocator);
    destroy_dynamic_array_copy(obj.imageBindCount, obj.pImageBinds, pAllocator);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocator);
}

template <>
void destroy_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkBufferCopy>(const VkBufferCopy& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
}

template <>
void destroy_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}



template <>
void destroy_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.imageSubresource, pAllocator);
    destroy_structure_copy(obj.imageOffset, pAllocator);
    destroy_structure_copy(obj.imageExtent, pAllocator);
}

template <>
void destroy_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkClearAttachment>(const VkClearAttachment& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.clearValue, pAllocator);
}


template <>
void destroy_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkClearRect>(const VkClearRect& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.rect, pAllocator);
}


template <>
void destroy_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.sampleLocationCount, obj.pSampleLocations, pAllocator);
}

template <>
void destroy_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(1, obj.pInheritanceInfo, pAllocator);
}

template <>
void destroy_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.renderArea, pAllocator);
}

template <>
void destroy_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkComponentMapping>(const VkComponentMapping& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.stage, pAllocator);
}

template <>
void destroy_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkConformanceVersion>(const VkConformanceVersion& obj, const VkAllocationCallbacks* pAllocator)
{
}


template <>
void destroy_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.dst, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.src, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, pAllocator);
    destroy_dynamic_array_copy(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_string_copy(obj.pMarkerName, pAllocator);
    destroy_static_array_copy<4>(obj.color, pAllocator);
}

template <>
void destroy_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_string_copy(obj.pObjectName, pAllocator);
}


template <>
void destroy_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_string_copy(obj.pLabelName, pAllocator);
    destroy_static_array_copy<4>(obj.color, pAllocator);
}

template <>
void destroy_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_string_copy(obj.pMessageIdName, pAllocator);
    destroy_dynamic_string_copy(obj.pMessage, pAllocator);
    destroy_dynamic_array_copy(obj.queueLabelCount, obj.pQueueLabels, pAllocator);
    destroy_dynamic_array_copy(obj.cmdBufLabelCount, obj.pCmdBufLabels, pAllocator);
    destroy_dynamic_array_copy(obj.objectCount, obj.pObjects, pAllocator);
}

template <>
void destroy_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_string_copy(obj.pObjectName, pAllocator);
}


template <>
void destroy_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.poolSizeCount, obj.pPoolSizes, pAllocator);
}

template <>
void destroy_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.descriptorSetCount, obj.pSetLayouts, pAllocator);
}

template <>
void destroy_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pImmutableSamplers, pAllocator);
}

template <>
void destroy_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.bindingCount, obj.pBindingFlags, pAllocator);
}


template <>
void destroy_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.bindingCount, obj.pBindings, pAllocator);
}

template <>
void destroy_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.descriptorSetCount, obj.pDescriptorCounts, pAllocator);
}


template <>
void destroy_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries, pAllocator);
}


template <>
void destroy_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, const VkAllocationCallbacks* pAllocator)
{
}


template <>
void destroy_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.queueCreateInfoCount, obj.pQueueCreateInfos, pAllocator);
    destroy_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocator);
    destroy_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocator);
    destroy_dynamic_array_copy(1, obj.pEnabledFeatures, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.physicalDeviceCount, obj.pPhysicalDevices, pAllocator);
}


template <>
void destroy_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(obj.presentMask, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pDeviceMasks, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas, pAllocator);
}


template <>
void destroy_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, pAllocator);
    destroy_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, pAllocator);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, pAllocator);
}


template <>
void destroy_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj, const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj, const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.queueCount, obj.pQueuePriorities, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <>
void destroy_structure_copy<VkDirectFBSurfaceCreateInfoEXT>(const VkDirectFBSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
void destroy_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.parameters, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.visibleRegion, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.displayModeProperties, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.parameters, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.capabilities, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.minSrcPosition, pAllocator);
    destroy_structure_copy(obj.maxSrcPosition, pAllocator);
    destroy_structure_copy(obj.minSrcExtent, pAllocator);
    destroy_structure_copy(obj.maxSrcExtent, pAllocator);
    destroy_structure_copy(obj.minDstPosition, pAllocator);
    destroy_structure_copy(obj.maxDstPosition, pAllocator);
    destroy_structure_copy(obj.minDstExtent, pAllocator);
    destroy_structure_copy(obj.maxDstExtent, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.displayPlaneProperties, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.srcRect, pAllocator);
    destroy_structure_copy(obj.dstRect, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.displayProperties, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_string_copy(obj.displayName, pAllocator);
    destroy_structure_copy(obj.physicalDimensions, pAllocator);
    destroy_structure_copy(obj.physicalResolution, pAllocator);
}

template <>
void destroy_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.imageExtent, pAllocator);
}

template <>
void destroy_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, pAllocator);
}

template <>
void destroy_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkExtensionProperties>(const VkExtensionProperties& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkExtent2D>(const VkExtent2D& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkExtent3D>(const VkExtent3D& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.externalMemoryProperties, pAllocator);
}


template <>
void destroy_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.externalMemoryProperties, pAllocator);
}


template <>
void destroy_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.imageFormatProperties, pAllocator);
}

template <>
void destroy_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, const VkAllocationCallbacks* pAllocator)
{
}


template <>
void destroy_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkFormatProperties>(const VkFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkFormatProperties2>(const VkFormatProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.formatProperties, pAllocator);
}


template <>
void destroy_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocator);
}


template <>
void destroy_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos, pAllocator);
}


template <>
void destroy_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
}

template <>
void destroy_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.streamCount, obj.pStreams, pAllocator);
}

template <>
void destroy_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.triangles, pAllocator);
    destroy_structure_copy(obj.aabbs, pAllocator);
}

template <>
void destroy_structure_copy<VkGeometryNV>(const VkGeometryNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.geometry, pAllocator);
}

template <>
void destroy_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    destroy_dynamic_array_copy(1, obj.pVertexInputState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pInputAssemblyState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pTessellationState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pViewportState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pRasterizationState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pMultisampleState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pDepthStencilState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pColorBlendState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pDynamicState, pAllocator);
}

template <>
void destroy_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocator);
    destroy_dynamic_array_copy(obj.pipelineCount, obj.pPipelines, pAllocator);
}

template <>
void destroy_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    destroy_dynamic_array_copy(1, obj.pVertexInputState, pAllocator);
    destroy_dynamic_array_copy(1, obj.pTessellationState, pAllocator);
}

template <>
void destroy_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.displayPrimaryRed, pAllocator);
    destroy_structure_copy(obj.displayPrimaryGreen, pAllocator);
    destroy_structure_copy(obj.displayPrimaryBlue, pAllocator);
    destroy_structure_copy(obj.whitePoint, pAllocator);
}

template <>
void destroy_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
void destroy_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
void destroy_structure_copy<VkImageBlit>(const VkImageBlit& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.srcSubresource, pAllocator);
    destroy_static_array_copy<2>(obj.srcOffsets, pAllocator);
    destroy_structure_copy(obj.dstSubresource, pAllocator);
    destroy_static_array_copy<2>(obj.dstOffsets, pAllocator);
}

template <>
void destroy_structure_copy<VkImageCopy>(const VkImageCopy& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.srcSubresource, pAllocator);
    destroy_structure_copy(obj.srcOffset, pAllocator);
    destroy_structure_copy(obj.dstSubresource, pAllocator);
    destroy_structure_copy(obj.dstOffset, pAllocator);
    destroy_structure_copy(obj.extent, pAllocator);
}

template <>
void destroy_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.extent, pAllocator);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
}

template <>
void destroy_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts, pAllocator);
}

template <>
void destroy_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, pAllocator);
}

template <>
void destroy_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocator);
}


template <>
void destroy_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.maxExtent, pAllocator);
}

template <>
void destroy_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.imageFormatProperties, pAllocator);
}


template <>
void destroy_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.subresourceRange, pAllocator);
}

template <>
void destroy_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
void destroy_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
void destroy_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkImageResolve>(const VkImageResolve& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.srcSubresource, pAllocator);
    destroy_structure_copy(obj.srcOffset, pAllocator);
    destroy_structure_copy(obj.dstSubresource, pAllocator);
    destroy_structure_copy(obj.dstOffset, pAllocator);
    destroy_structure_copy(obj.extent, pAllocator);
}

template <>
void destroy_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkImageSubresource>(const VkImageSubresource& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.components, pAllocator);
    destroy_structure_copy(obj.subresourceRange, pAllocator);
}

template <>
void destroy_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.tokenCount, obj.pTokens, pAllocator);
    destroy_dynamic_array_copy(obj.streamCount, obj.pStreamStrides, pAllocator);
}

template <>
void destroy_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypes, pAllocator);
    destroy_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypeValues, pAllocator);
}

template <>
void destroy_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, const VkAllocationCallbacks* pAllocator)
{
}


template <>
void destroy_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(1, obj.pApplicationInfo, pAllocator);
    destroy_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocator);
    destroy_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocator);
}

template <>
void destroy_structure_copy<VkLayerProperties>(const VkLayerProperties& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
void destroy_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
void destroy_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkMemoryHeap>(const VkMemoryHeap& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.memoryRequirements, pAllocator);
}


template <>
void destroy_structure_copy<VkMemoryType>(const VkMemoryType& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
void destroy_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
void destroy_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.maxSampleLocationGridSize, pAllocator);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.usage2, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkOffset2D>(const VkOffset2D& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkOffset3D>(const VkOffset3D& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.uuid, pAllocator);
}


template <>
void destroy_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.data, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.conformanceVersion, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.features, pAllocator);
}



template <>
void destroy_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.minFragmentDensityTexelSize, pAllocator);
    destroy_structure_copy(obj.maxFragmentDensityTexelSize, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(obj.physicalDevices, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.deviceUUID, pAllocator);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.driverUUID, pAllocator);
    destroy_static_array_copy<VK_LUID_SIZE>(obj.deviceLUID, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceImageRobustnessFeaturesEXT>(const VkPhysicalDeviceImageRobustnessFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_static_array_copy<3>(obj.maxComputeWorkGroupCount, pAllocator);
    destroy_static_array_copy<3>(obj.maxComputeWorkGroupSize, pAllocator);
    destroy_static_array_copy<2>(obj.maxViewportDimensions, pAllocator);
    destroy_static_array_copy<2>(obj.viewportBoundsRange, pAllocator);
    destroy_static_array_copy<2>(obj.pointSizeRange, pAllocator);
    destroy_static_array_copy<2>(obj.lineWidthRange, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.heapBudget, pAllocator);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.heapUsage, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_static_array_copy<VK_MAX_MEMORY_TYPES>(obj.memoryTypes, pAllocator);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.memoryHeaps, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.memoryProperties, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_static_array_copy<3>(obj.maxTaskWorkGroupSize, pAllocator);
    destroy_static_array_copy<3>(obj.maxMeshWorkGroupSize, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_static_array_copy<VK_UUID_SIZE>(obj.pipelineCacheUUID, pAllocator);
    destroy_structure_copy(obj.limits, pAllocator);
    destroy_structure_copy(obj.sparseProperties, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.properties, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.maxSampleLocationGridSize, pAllocator);
    destroy_static_array_copy<2>(obj.sampleLocationCoordinateRange, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.shadingRateTexelSize, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}




template <>
void destroy_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.deviceUUID, pAllocator);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.driverUUID, pAllocator);
    destroy_static_array_copy<VK_LUID_SIZE>(obj.deviceLUID, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.conformanceVersion, pAllocator);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    destroy_static_array_copy<4>(obj.blendConstants, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.coverageModulationTableCount, obj.pCoverageModulationTable, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(1, obj.pPipelineCreationFeedback, pAllocator);
    destroy_dynamic_array_copy(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.front, pAllocator);
    destroy_structure_copy(obj.back, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.discardRectangleCount, obj.pDiscardRectangles, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.dynamicStateCount, obj.pDynamicStates, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.value, pAllocator);
}


template <>
void destroy_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.setLayoutCount, obj.pSetLayouts, pAllocator);
    destroy_dynamic_array_copy(obj.pushConstantRangeCount, obj.pPushConstantRanges, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.libraryCount, obj.pLibraries, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
void destroy_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_string_copy(obj.pName, pAllocator);
    destroy_dynamic_array_copy(1, obj.pSpecializationInfo, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions, pAllocator);
    destroy_dynamic_array_copy(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.customSampleOrderCount, obj.pCustomSampleOrders, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.exclusiveScissorCount, obj.pExclusiveScissors, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pShadingRatePalettes, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewports, pAllocator);
    destroy_dynamic_array_copy(obj.scissorCount, obj.pScissors, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewportSwizzles, pAllocator);
}

template <>
void destroy_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewportWScalings, pAllocator);
}

#ifdef VK_USE_PLATFORM_GGP
template <>
void destroy_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_GGP

template <>
void destroy_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocator);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pSwapchains, pAllocator);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pImageIndices, pAllocator);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pResults, pAllocator);
}

template <>
void destroy_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.rectangleCount, obj.pRectangles, pAllocator);
}

template <>
void destroy_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pRegions, pAllocator);
}

template <>
void destroy_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pTimes, pAllocator);
}

template <>
void destroy_structure_copy<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkPushConstantRange>(const VkPushConstantRange& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.counterIndexCount, obj.pCounterIndices, pAllocator);
}

template <>
void destroy_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.minImageTransferGranularity, pAllocator);
}

template <>
void destroy_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.queueFamilyProperties, pAllocator);
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocator);
    destroy_structure_copy(obj.libraries, pAllocator);
    destroy_dynamic_array_copy(1, obj.pLibraryInterface, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkRect2D>(const VkRect2D& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.offset, pAllocator);
    destroy_structure_copy(obj.extent, pAllocator);
}

template <>
void destroy_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.offset, pAllocator);
    destroy_structure_copy(obj.extent, pAllocator);
}

template <>
void destroy_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
}


template <>
void destroy_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.renderArea, pAllocator);
    destroy_dynamic_array_copy(obj.clearValueCount, obj.pClearValues, pAllocator);
}

template <>
void destroy_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocator);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocator);
}

template <>
void destroy_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocator);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocator);
    destroy_dynamic_array_copy(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, pAllocator);
}


template <>
void destroy_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.fragmentDensityMapAttachment, pAllocator);
}

template <>
void destroy_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.aspectReferenceCount, obj.pAspectReferences, pAllocator);
}


template <>
void destroy_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pViewMasks, pAllocator);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pViewOffsets, pAllocator);
    destroy_dynamic_array_copy(obj.correlationMaskCount, obj.pCorrelationMasks, pAllocator);
}


template <>
void destroy_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations, pAllocator);
    destroy_dynamic_array_copy(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations, pAllocator);
}

template <>
void destroy_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.sampleLocationGridSize, pAllocator);
    destroy_dynamic_array_copy(obj.sampleLocationsCount, obj.pSampleLocations, pAllocator);
}

template <>
void destroy_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.customBorderColor, pAllocator);
}

template <>
void destroy_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.components, pAllocator);
}


template <>
void destroy_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.semaphoreCount, obj.pSemaphores, pAllocator);
    destroy_dynamic_array_copy(obj.semaphoreCount, obj.pValues, pAllocator);
}


template <>
void destroy_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
}


template <>
void destroy_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.resourceUsage, pAllocator);
    destroy_static_array_copy<3>(obj.computeWorkGroupSize, pAllocator);
}

template <>
void destroy_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, pAllocator);
}

template <>
void destroy_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocator);
}

template <>
void destroy_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.imageGranularity, pAllocator);
}

template <>
void destroy_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.properties, pAllocator);
}


template <>
void destroy_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.subresource, pAllocator);
    destroy_structure_copy(obj.offset, pAllocator);
    destroy_structure_copy(obj.extent, pAllocator);
}

template <>
void destroy_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocator);
}

template <>
void destroy_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.formatProperties, pAllocator);
}

template <>
void destroy_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.memoryRequirements, pAllocator);
}


template <>
void destroy_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocator);
}

template <>
void destroy_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, const VkAllocationCallbacks* pAllocator)
{
}


template <>
void destroy_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkStencilOpState>(const VkStencilOpState& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_GGP
template <>
void destroy_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj, const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkSubmitInfo>(const VkSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocator);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitDstStageMask, pAllocator);
    destroy_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBuffers, pAllocator);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocator);
}

template <>
void destroy_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSubpassDependency>(const VkSubpassDependency& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSubpassDescription>(const VkSubpassDescription& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocator);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocator);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocator);
    destroy_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocator);
    destroy_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocator);
}

template <>
void destroy_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocator);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocator);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocator);
    destroy_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocator);
    destroy_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocator);
}


template <>
void destroy_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(1, obj.pDepthStencilResolveAttachment, pAllocator);
}


template <>
void destroy_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}


template <>
void destroy_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocator);
}

template <>
void destroy_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.currentExtent, pAllocator);
    destroy_structure_copy(obj.minImageExtent, pAllocator);
    destroy_structure_copy(obj.maxImageExtent, pAllocator);
}

template <>
void destroy_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.surfaceCapabilities, pAllocator);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_structure_copy(obj.currentExtent, pAllocator);
    destroy_structure_copy(obj.minImageExtent, pAllocator);
    destroy_structure_copy(obj.maxImageExtent, pAllocator);
}

template <>
void destroy_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.surfaceFormat, pAllocator);
}

template <>
void destroy_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_structure_copy(obj.imageExtent, pAllocator);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
}

template <>
void destroy_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}

template <>
void destroy_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, pAllocator);
    destroy_dynamic_array_copy(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, pAllocator);
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, const VkAllocationCallbacks* pAllocator)
{
}
#endif // VK_ENABLE_BETA_EXTENSIONS




template <>
void destroy_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, pAllocator);
    destroy_dynamic_array_copy(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, pAllocator);
}

template <>
void destroy_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, pAllocator);
}

template <>
void destroy_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
void destroy_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
void destroy_structure_copy<VkViewport>(const VkViewport& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

template <>
void destroy_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
void destroy_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocator);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocator);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeouts, pAllocator);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocator);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocator);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocator);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, pAllocator);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocator);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pImageInfo, pAllocator);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pBufferInfo, pAllocator);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pTexelBufferView, pAllocator);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
    destroy_dynamic_array_copy(obj.accelerationStructureCount, obj.pAccelerationStructures, pAllocator);
}
#endif // VK_ENABLE_BETA_EXTENSIONS



template <>
void destroy_structure_copy<VkXYColorEXT>(const VkXYColorEXT& obj, const VkAllocationCallbacks* pAllocator)
{
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
void destroy_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
void destroy_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    destroy_pnext_copy(obj.pNext, pAllocator);
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocator)
{
    if (pNext) {
        switch (*(VkStructureType*)pNext) {
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureBuildGeometryInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureCreateGeometryTypeInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureCreateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureDeviceAddressInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryAabbsDataKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryInstancesDataKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryTrianglesDataKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureMemoryRequirementsInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureMemoryRequirementsInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureVersionKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAcquireNextImageInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAcquireProfilingLockInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkAndroidHardwareBufferFormatPropertiesANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkAndroidHardwareBufferPropertiesANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkAndroidHardwareBufferUsageANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAndroidSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_APPLICATION_INFO: {
            destroy_dynamic_array_copy(1, (const VkApplicationInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2: {
            destroy_dynamic_array_copy(1, (const VkAttachmentDescription2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: {
            destroy_dynamic_array_copy(1, (const VkAttachmentDescriptionStencilLayout*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2: {
            destroy_dynamic_array_copy(1, (const VkAttachmentReference2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: {
            destroy_dynamic_array_copy(1, (const VkAttachmentReferenceStencilLayout*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkBindAccelerationStructureMemoryInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: {
            destroy_dynamic_array_copy(1, (const VkBindBufferMemoryDeviceGroupInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO: {
            destroy_dynamic_array_copy(1, (const VkBindBufferMemoryInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: {
            destroy_dynamic_array_copy(1, (const VkBindImageMemoryDeviceGroupInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO: {
            destroy_dynamic_array_copy(1, (const VkBindImageMemoryInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkBindImageMemorySwapchainInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: {
            destroy_dynamic_array_copy(1, (const VkBindImagePlaneMemoryInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: {
            destroy_dynamic_array_copy(1, (const VkBindSparseInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkBufferCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkBufferDeviceAddressCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO: {
            destroy_dynamic_array_copy(1, (const VkBufferDeviceAddressInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const VkBufferMemoryBarrier*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2: {
            destroy_dynamic_array_copy(1, (const VkBufferMemoryRequirementsInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkBufferOpaqueCaptureAddressCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkBufferViewCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkCalibratedTimestampInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: {
            destroy_dynamic_array_copy(1, (const VkCheckpointDataNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferInheritanceConditionalRenderingInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferInheritanceInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferInheritanceRenderPassTransformInfoQCOM*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandPoolCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkComputePipelineCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkConditionalRenderingBeginInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkCooperativeMatrixPropertiesNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkCopyAccelerationStructureInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkCopyAccelerationStructureToMemoryInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: {
            destroy_dynamic_array_copy(1, (const VkCopyDescriptorSet*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkCopyMemoryToAccelerationStructureInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkD3D12FenceSubmitInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugMarkerMarkerInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugMarkerObjectNameInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugMarkerObjectTagInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugReportCallbackCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsLabelEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsMessengerCallbackDataEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsMessengerCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsObjectNameInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsObjectTagInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDedicatedAllocationBufferCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDedicatedAllocationImageCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDedicatedAllocationMemoryAllocateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeferredOperationInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorPoolCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDescriptorPoolInlineUniformBlockCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetLayoutBindingFlagsCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetLayoutCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetLayoutSupport*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetVariableDescriptorCountAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetVariableDescriptorCountLayoutSupport*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorUpdateTemplateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDeviceDiagnosticsConfigCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDeviceEventInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupBindSparseInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupCommandBufferBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupDeviceCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupPresentCapabilitiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupPresentInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupRenderPassBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupSwapchainCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceMemoryOpaqueCaptureAddressInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const VkDeviceMemoryOverallocationCreateInfoAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDevicePrivateDataCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceQueueCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDeviceQueueGlobalPriorityCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2: {
            destroy_dynamic_array_copy(1, (const VkDeviceQueueInfo2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        case VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDirectFBSurfaceCreateInfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_DIRECTFB_EXT
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDisplayEventInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayModeCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayModeProperties2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
            destroy_dynamic_array_copy(1, (const VkDisplayNativeHdrSurfaceCapabilitiesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPlaneCapabilities2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPlaneInfo2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPlaneProperties2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDisplayPowerInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPresentInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayProperties2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplaySurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
            destroy_dynamic_array_copy(1, (const VkDrmFormatModifierPropertiesListEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkEventCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkExportFenceCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkExportFenceWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkExportMemoryAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkExportMemoryAllocateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkExportMemoryWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkExportMemoryWin32HandleInfoNV*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkExportSemaphoreCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkExportSemaphoreWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkExternalBufferProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkExternalFenceProperties*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkExternalFormatANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkExternalImageFormatProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkExternalMemoryBufferCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkExternalMemoryImageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkExternalMemoryImageCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkExternalSemaphoreProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkFenceCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkFenceGetFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkFenceGetWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkFilterCubicImageViewImageFormatPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const VkFormatProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO: {
            destroy_dynamic_array_copy(1, (const VkFramebufferAttachmentImageInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkFramebufferAttachmentsCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkFramebufferCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: {
            destroy_dynamic_array_copy(1, (const VkFramebufferMixedSamplesCombinationNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGeneratedCommandsInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGeneratedCommandsMemoryRequirementsInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV: {
            destroy_dynamic_array_copy(1, (const VkGeometryAABBNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV: {
            destroy_dynamic_array_copy(1, (const VkGeometryNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: {
            destroy_dynamic_array_copy(1, (const VkGeometryTrianglesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkGraphicsPipelineCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGraphicsPipelineShaderGroupsCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGraphicsShaderGroupCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: {
            destroy_dynamic_array_copy(1, (const VkHdrMetadataEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkHeadlessSurfaceCreateInfoEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_IOS_MVK
        case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK: {
            destroy_dynamic_array_copy(1, (const VkIOSSurfaceCreateInfoMVK*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_IOS_MVK
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkImageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkImageDrmFormatModifierExplicitCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkImageDrmFormatModifierListCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkImageDrmFormatModifierPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkImageFormatListCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const VkImageFormatProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const VkImageMemoryBarrier*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2: {
            destroy_dynamic_array_copy(1, (const VkImageMemoryRequirementsInfo2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA: {
            destroy_dynamic_array_copy(1, (const VkImagePipeSurfaceCreateInfoFUCHSIA*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: {
            destroy_dynamic_array_copy(1, (const VkImagePlaneMemoryRequirementsInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2: {
            destroy_dynamic_array_copy(1, (const VkImageSparseMemoryRequirementsInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkImageStencilUsageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImageSwapchainCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: {
            destroy_dynamic_array_copy(1, (const VkImageViewASTCDecodeModeEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX: {
            destroy_dynamic_array_copy(1, (const VkImageViewAddressPropertiesNVX*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkImageViewCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX: {
            destroy_dynamic_array_copy(1, (const VkImageViewHandleInfoNVX*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkImageViewUsageCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkImportAndroidHardwareBufferInfoANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportFenceFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportFenceWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryFdInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryHostPointerInfoEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryWin32HandleInfoNV*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportSemaphoreFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportSemaphoreWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkIndirectCommandsLayoutCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: {
            destroy_dynamic_array_copy(1, (const VkIndirectCommandsLayoutTokenNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkInitializePerformanceApiInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkInstanceCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_MACOS_MVK
        case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK: {
            destroy_dynamic_array_copy(1, (const VkMacOSSurfaceCreateInfoMVK*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_MACOS_MVK
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: {
            destroy_dynamic_array_copy(1, (const VkMappedMemoryRange*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: {
            destroy_dynamic_array_copy(1, (const VkMemoryAllocateFlagsInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkMemoryAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const VkMemoryBarrier*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkMemoryDedicatedAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: {
            destroy_dynamic_array_copy(1, (const VkMemoryDedicatedRequirements*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryFdPropertiesKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkMemoryGetAndroidHardwareBufferInfoANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryGetFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryGetWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkMemoryHostPointerPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkMemoryOpaqueCaptureAddressAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkMemoryPriorityAllocateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2: {
            destroy_dynamic_array_copy(1, (const VkMemoryRequirements2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryWin32HandlePropertiesKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkMetalSurfaceCreateInfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkMultisamplePropertiesEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkNativeBufferANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceConfigurationAcquireInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: {
            destroy_dynamic_array_copy(1, (const VkPerformanceCounterDescriptionKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: {
            destroy_dynamic_array_copy(1, (const VkPerformanceCounterKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceMarkerInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceOverrideInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPerformanceQuerySubmitInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceStreamMarkerInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevice16BitStorageFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevice8BitStorageFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceASTCDecodeFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceBufferDeviceAddressFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCoherentMemoryFeaturesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceConditionalRenderingFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCooperativeMatrixFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCooperativeMatrixPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCornerSampledImageFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCoverageReductionModeFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCustomBorderColorFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCustomBorderColorPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDepthClipEnableFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDepthStencilResolveProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDescriptorIndexingFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDescriptorIndexingProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDiagnosticsConfigFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDiscardRectanglePropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDriverProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExclusiveScissorFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExternalBufferInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExternalFenceInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExternalImageFormatInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExternalSemaphoreInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFeatures2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFloatControlsProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceGroupProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceHostQueryResetFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceIDProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceImageDrmFormatModifierInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceImageFormatInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceImageRobustnessFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceImageViewImageFormatInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceImagelessFramebufferFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceInlineUniformBlockFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceInlineUniformBlockPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceLineRasterizationFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceLineRasterizationPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMaintenance3Properties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMemoryBudgetPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMemoryPriorityFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMemoryProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMeshShaderFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMeshShaderPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMultiviewFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMultiviewProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePCIBusInfoPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePerformanceQueryFeaturesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePerformanceQueryPropertiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePointClippingProperties*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePresentationPropertiesANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePrivateDataFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceProtectedMemoryFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceProtectedMemoryProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePushDescriptorPropertiesKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingFeaturesKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingPropertiesKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRobustness2FeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRobustness2PropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSampleLocationsPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSamplerFilterMinmaxProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSamplerYcbcrConversionFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceScalarBlockLayoutFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderAtomicInt64Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderClockFeaturesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderCoreProperties2AMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderCorePropertiesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderDrawParametersFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderFloat16Int8Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderImageFootprintFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShadingRateImageFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShadingRateImagePropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSparseImageFormatInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSubgroupProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSurfaceInfo2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTimelineSemaphoreFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTimelineSemaphoreProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceToolPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTransformFeedbackFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTransformFeedbackPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceUniformBufferStandardLayoutFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVariablePointersFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVulkan11Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVulkan11Properties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVulkan12Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVulkan12Properties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVulkanMemoryModelFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineCacheCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineColorBlendAdvancedStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineColorBlendStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const VkPipelineCompilerControlCreateInfoAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineCoverageModulationStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineCoverageReductionStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineCoverageToColorStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineCreationFeedbackCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineDepthStencilStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineDiscardRectangleStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineDynamicStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutableInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutableInternalRepresentationKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutablePropertiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutableStatisticKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineInputAssemblyStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineLayoutCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineLibraryCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineMultisampleStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationConservativeStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationDepthClipStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationLineStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationStateRasterizationOrderAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationStateStreamCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineRepresentativeFragmentTestStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineSampleLocationsStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineShaderStageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineTessellationDomainOriginStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineTessellationStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineVertexInputDivisorStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineVertexInputStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportExclusiveScissorStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportShadingRateImageStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportSwizzleStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportWScalingStateCreateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
            destroy_dynamic_array_copy(1, (const VkPresentFrameTokenGGP*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPresentInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
            destroy_dynamic_array_copy(1, (const VkPresentRegionsKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
            destroy_dynamic_array_copy(1, (const VkPresentTimesInfoGOOGLE*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPrivateDataSlotCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const VkProtectedSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkQueryPoolCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkQueryPoolPerformanceCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkQueryPoolPerformanceQueryCreateInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkQueueFamilyCheckpointPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const VkQueueFamilyProperties2*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkRayTracingPipelineCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkRayTracingPipelineCreateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkRayTracingPipelineInterfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkRayTracingShaderGroupCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkRayTracingShaderGroupCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkRenderPassAttachmentBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkRenderPassBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkRenderPassCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2: {
            destroy_dynamic_array_copy(1, (const VkRenderPassCreateInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkRenderPassFragmentDensityMapCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkRenderPassInputAttachmentAspectCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkRenderPassMultiviewCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkRenderPassSampleLocationsBeginInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
            destroy_dynamic_array_copy(1, (const VkRenderPassTransformBeginInfoQCOM*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSampleLocationsInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkSamplerCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSamplerCustomBorderColorCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkSamplerReductionModeCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkSamplerYcbcrConversionCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const VkSamplerYcbcrConversionImageFormatProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: {
            destroy_dynamic_array_copy(1, (const VkSamplerYcbcrConversionInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreGetFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreGetWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreSignalInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreTypeCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreWaitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkShaderModuleCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkShaderModuleValidationCacheCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkSharedPresentSurfaceCapabilitiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const VkSparseImageFormatProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2: {
            destroy_dynamic_array_copy(1, (const VkSparseImageMemoryRequirements2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: {
            destroy_dynamic_array_copy(1, (const VkStreamDescriptorSurfaceCreateInfoGGP*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const VkSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkSubpassBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2: {
            destroy_dynamic_array_copy(1, (const VkSubpassDependency2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2: {
            destroy_dynamic_array_copy(1, (const VkSubpassDescription2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: {
            destroy_dynamic_array_copy(1, (const VkSubpassDescriptionDepthStencilResolve*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_END_INFO: {
            destroy_dynamic_array_copy(1, (const VkSubpassEndInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceCapabilities2EXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkSurfaceCapabilities2KHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceCapabilitiesFullScreenExclusiveEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkSurfaceFormat2KHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceFullScreenExclusiveInfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceFullScreenExclusiveWin32InfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkSurfaceProtectedCapabilitiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSwapchainCounterCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkSwapchainCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const VkSwapchainDisplayNativeHdrCreateInfoAMD*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkSwapchainImageCreateInfoANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: {
            destroy_dynamic_array_copy(1, (const VkTextureLODGatherFormatPropertiesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const VkTimelineSemaphoreSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkValidationCacheCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkValidationFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
            destroy_dynamic_array_copy(1, (const VkValidationFlagsEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_VI_NN
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: {
            destroy_dynamic_array_copy(1, (const VkViSurfaceCreateInfoNN*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_VI_NN
        #ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkWaylandSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WAYLAND_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkWin32KeyedMutexAcquireReleaseInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkWin32KeyedMutexAcquireReleaseInfoNV*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkWin32SurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: {
            destroy_dynamic_array_copy(1, (const VkWriteDescriptorSet*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
            destroy_dynamic_array_copy(1, (const VkWriteDescriptorSetAccelerationStructureKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: {
            destroy_dynamic_array_copy(1, (const VkWriteDescriptorSetInlineUniformBlockEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkXcbSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_XCB_KHR
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkXlibSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_XLIB_KHR
        default: {
        } break;
        }
    }
}

} // namespace detail
} // namespace vk
} // namespace dst
