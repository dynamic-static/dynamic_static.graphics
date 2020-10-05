
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/create-structure-copy.hpp"

namespace dst {
namespace vk {

////////////////////////////////////////////////////////////////////////////////
// NOTE : The following functions are manually implemented
#if 0
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureInstanceKHR destroy_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureVersionKHR destroy_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkClearColorValue destroy_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkClearValue destroy_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPerformanceCounterResultKHR destroy_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPerformanceValueDataINTEL destroy_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPipelineExecutableStatisticValueKHR destroy_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPipelineMultisampleStateCreateInfo destroy_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkShaderModuleCreateInfo destroy_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTransformMatrixKHR destroy_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif
////////////////////////////////////////////////////////////////////////////////

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAabbPositionsKHR destroy_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAabbPositionsKHR result { };
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildGeometryInfoKHR destroy_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureBuildGeometryInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.ppGeometries, pAllocationCallbacks);
    destroy_structure_copy(obj.scratchData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildOffsetInfoKHR destroy_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureBuildOffsetInfoKHR result { };
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateGeometryTypeInfoKHR destroy_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateGeometryTypeInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateInfoKHR destroy_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.maxGeometryCount, obj.pGeometryInfos, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureCreateInfoNV destroy_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.info, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureDeviceAddressInfoKHR destroy_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureDeviceAddressInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryAabbsDataKHR destroy_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryAabbsDataKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryDataKHR destroy_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryDataKHR result { };
    destroy_structure_copy(obj.triangles, pAllocationCallbacks);
    destroy_structure_copy(obj.aabbs, pAllocationCallbacks);
    destroy_structure_copy(obj.instances, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryInstancesDataKHR destroy_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryInstancesDataKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryKHR destroy_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.geometry, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryTrianglesDataKHR destroy_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryTrianglesDataKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexData, pAllocationCallbacks);
    destroy_structure_copy(obj.indexData, pAllocationCallbacks);
    destroy_structure_copy(obj.transformData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureInfoNV destroy_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.geometryCount, obj.pGeometries, pAllocationCallbacks);
    return result;
}



#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureMemoryRequirementsInfoKHR destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureMemoryRequirementsInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureMemoryRequirementsInfoNV destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureMemoryRequirementsInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkAcquireNextImageInfoKHR destroy_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAcquireNextImageInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkAcquireProfilingLockInfoKHR destroy_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAcquireProfilingLockInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkAllocationCallbacks destroy_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAllocationCallbacks result { };
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferFormatPropertiesANDROID destroy_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferFormatPropertiesANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.samplerYcbcrConversionComponents, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferPropertiesANDROID destroy_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferPropertiesANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferUsageANDROID destroy_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferUsageANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidSurfaceCreateInfoKHR destroy_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidSurfaceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkApplicationInfo destroy_structure_copy<VkApplicationInfo>(const VkApplicationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkApplicationInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pApplicationName, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pEngineName, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentDescription destroy_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescription result { };
    return result;
}

template <>
VkAttachmentDescription2 destroy_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescription2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkAttachmentDescriptionStencilLayout destroy_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescriptionStencilLayout result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkAttachmentReference destroy_structure_copy<VkAttachmentReference>(const VkAttachmentReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReference result { };
    return result;
}

template <>
VkAttachmentReference2 destroy_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReference2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkAttachmentReferenceStencilLayout destroy_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReferenceStencilLayout result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkAttachmentSampleLocationsEXT destroy_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentSampleLocationsEXT result { };
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkBaseInStructure destroy_structure_copy<VkBaseInStructure>(const VkBaseInStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBaseInStructure result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkBaseOutStructure destroy_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBaseOutStructure result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkBindAccelerationStructureMemoryInfoKHR destroy_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindAccelerationStructureMemoryInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkBindBufferMemoryDeviceGroupInfo destroy_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindBufferMemoryDeviceGroupInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    return result;
}


template <>
VkBindBufferMemoryInfo destroy_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindBufferMemoryInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkBindImageMemoryDeviceGroupInfo destroy_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemoryDeviceGroupInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions, pAllocationCallbacks);
    return result;
}


template <>
VkBindImageMemoryInfo destroy_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemoryInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkBindImageMemorySwapchainInfoKHR destroy_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemorySwapchainInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkBindImagePlaneMemoryInfo destroy_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImagePlaneMemoryInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkBindIndexBufferIndirectCommandNV destroy_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindIndexBufferIndirectCommandNV result { };
    return result;
}

template <>
VkBindShaderGroupIndirectCommandNV destroy_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindShaderGroupIndirectCommandNV result { };
    return result;
}

template <>
VkBindSparseInfo destroy_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindSparseInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bufferBindCount, obj.pBufferBinds, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.imageBindCount, obj.pImageBinds, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
    return result;
}

template <>
VkBindVertexBufferIndirectCommandNV destroy_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindVertexBufferIndirectCommandNV result { };
    return result;
}

template <>
VkBufferCopy destroy_structure_copy<VkBufferCopy>(const VkBufferCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferCopy result { };
    return result;
}

template <>
VkBufferCreateInfo destroy_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkBufferDeviceAddressCreateInfoEXT destroy_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferDeviceAddressCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkBufferDeviceAddressInfo destroy_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferDeviceAddressInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}



template <>
VkBufferImageCopy destroy_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferImageCopy result { };
    destroy_structure_copy(obj.imageSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.imageOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.imageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkBufferMemoryBarrier destroy_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferMemoryBarrier result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkBufferMemoryRequirementsInfo2 destroy_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferMemoryRequirementsInfo2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkBufferOpaqueCaptureAddressCreateInfo destroy_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferOpaqueCaptureAddressCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkBufferViewCreateInfo destroy_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferViewCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkCalibratedTimestampInfoEXT destroy_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCalibratedTimestampInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkCheckpointDataNV destroy_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCheckpointDataNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkClearAttachment destroy_structure_copy<VkClearAttachment>(const VkClearAttachment& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearAttachment result { };
    destroy_structure_copy(obj.clearValue, pAllocationCallbacks);
    return result;
}


template <>
VkClearDepthStencilValue destroy_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearDepthStencilValue result { };
    return result;
}

template <>
VkClearRect destroy_structure_copy<VkClearRect>(const VkClearRect& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearRect result { };
    destroy_structure_copy(obj.rect, pAllocationCallbacks);
    return result;
}


template <>
VkCoarseSampleLocationNV destroy_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCoarseSampleLocationNV result { };
    return result;
}

template <>
VkCoarseSampleOrderCustomNV destroy_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCoarseSampleOrderCustomNV result { };
    destroy_dynamic_array_copy(obj.sampleLocationCount, obj.pSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferAllocateInfo destroy_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferAllocateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferBeginInfo destroy_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferBeginInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pInheritanceInfo, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferInheritanceConditionalRenderingInfoEXT destroy_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceConditionalRenderingInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferInheritanceInfo destroy_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferInheritanceRenderPassTransformInfoQCOM destroy_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.renderArea, pAllocationCallbacks);
    return result;
}

template <>
VkCommandPoolCreateInfo destroy_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandPoolCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkComponentMapping destroy_structure_copy<VkComponentMapping>(const VkComponentMapping& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkComponentMapping result { };
    return result;
}

template <>
VkComputePipelineCreateInfo destroy_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkComputePipelineCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.stage, pAllocationCallbacks);
    return result;
}

template <>
VkConditionalRenderingBeginInfoEXT destroy_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkConditionalRenderingBeginInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkConformanceVersion destroy_structure_copy<VkConformanceVersion>(const VkConformanceVersion& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkConformanceVersion result { };
    return result;
}


template <>
VkCooperativeMatrixPropertiesNV destroy_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCooperativeMatrixPropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureInfoKHR destroy_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyAccelerationStructureInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureToMemoryInfoKHR destroy_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyAccelerationStructureToMemoryInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.dst, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkCopyDescriptorSet destroy_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyDescriptorSet result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyMemoryToAccelerationStructureInfoKHR destroy_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyMemoryToAccelerationStructureInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.src, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkD3D12FenceSubmitInfoKHR destroy_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkD3D12FenceSubmitInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkDebugMarkerMarkerInfoEXT destroy_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerMarkerInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pMarkerName, pAllocationCallbacks);
    destroy_static_array_copy<4>(obj.color, pAllocationCallbacks);
    return result;
}

template <>
VkDebugMarkerObjectNameInfoEXT destroy_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerObjectNameInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
    return result;
}

template <>
VkDebugMarkerObjectTagInfoEXT destroy_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerObjectTagInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
    return result;
}

template <>
VkDebugReportCallbackCreateInfoEXT destroy_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugReportCallbackCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsLabelEXT destroy_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsLabelEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pLabelName, pAllocationCallbacks);
    destroy_static_array_copy<4>(obj.color, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsMessengerCallbackDataEXT destroy_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsMessengerCallbackDataEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pMessageIdName, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pMessage, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueLabelCount, obj.pQueueLabels, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.cmdBufLabelCount, obj.pCmdBufLabels, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.objectCount, obj.pObjects, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsMessengerCreateInfoEXT destroy_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsMessengerCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsObjectNameInfoEXT destroy_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsObjectNameInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsObjectTagInfoEXT destroy_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsObjectTagInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
    return result;
}

template <>
VkDedicatedAllocationBufferCreateInfoNV destroy_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationBufferCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDedicatedAllocationImageCreateInfoNV destroy_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationImageCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDedicatedAllocationMemoryAllocateInfoNV destroy_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationMemoryAllocateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeferredOperationInfoKHR destroy_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeferredOperationInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDescriptorBufferInfo destroy_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorBufferInfo result { };
    return result;
}

template <>
VkDescriptorImageInfo destroy_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorImageInfo result { };
    return result;
}

template <>
VkDescriptorPoolCreateInfo destroy_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.poolSizeCount, obj.pPoolSizes, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorPoolInlineUniformBlockCreateInfoEXT destroy_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolInlineUniformBlockCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorPoolSize destroy_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolSize result { };
    return result;
}

template <>
VkDescriptorSetAllocateInfo destroy_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetAllocateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorSetCount, obj.pSetLayouts, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutBinding destroy_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutBinding result { };
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pImmutableSamplers, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutBindingFlagsCreateInfo destroy_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutBindingFlagsCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bindingCount, obj.pBindingFlags, pAllocationCallbacks);
    return result;
}


template <>
VkDescriptorSetLayoutCreateInfo destroy_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bindingCount, obj.pBindings, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutSupport destroy_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutSupport result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkDescriptorSetVariableDescriptorCountAllocateInfo destroy_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetVariableDescriptorCountAllocateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorSetCount, obj.pDescriptorCounts, pAllocationCallbacks);
    return result;
}


template <>
VkDescriptorSetVariableDescriptorCountLayoutSupport destroy_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetVariableDescriptorCountLayoutSupport result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkDescriptorUpdateTemplateCreateInfo destroy_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorUpdateTemplateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries, pAllocationCallbacks);
    return result;
}


template <>
VkDescriptorUpdateTemplateEntry destroy_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorUpdateTemplateEntry result { };
    return result;
}


template <>
VkDeviceCreateInfo destroy_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueCreateInfoCount, obj.pQueueCreateInfos, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pEnabledFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceDiagnosticsConfigCreateInfoNV destroy_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceDiagnosticsConfigCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceEventInfoEXT destroy_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceEventInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupBindSparseInfo destroy_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupBindSparseInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupCommandBufferBeginInfo destroy_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupCommandBufferBeginInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupDeviceCreateInfo destroy_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupDeviceCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.physicalDeviceCount, obj.pPhysicalDevices, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupPresentCapabilitiesKHR destroy_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupPresentCapabilitiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(obj.presentMask, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupPresentInfoKHR destroy_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupPresentInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pDeviceMasks, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupRenderPassBeginInfo destroy_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupRenderPassBeginInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupSubmitInfo destroy_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupSubmitInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupSwapchainCreateInfoKHR destroy_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupSwapchainCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceMemoryOpaqueCaptureAddressInfo destroy_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceMemoryOpaqueCaptureAddressInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceMemoryOverallocationCreateInfoAMD destroy_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceMemoryOverallocationCreateInfoAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressConstKHR destroy_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceOrHostAddressConstKHR result { };
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressKHR destroy_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceOrHostAddressKHR result { };
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDevicePrivateDataCreateInfoEXT destroy_structure_copy<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDevicePrivateDataCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceQueueCreateInfo destroy_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueCount, obj.pQueuePriorities, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceQueueGlobalPriorityCreateInfoEXT destroy_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueGlobalPriorityCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceQueueInfo2 destroy_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueInfo2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <>
VkDirectFBSurfaceCreateInfoEXT destroy_structure_copy<VkDirectFBSurfaceCreateInfoEXT>(const VkDirectFBSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDirectFBSurfaceCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
VkDispatchIndirectCommand destroy_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDispatchIndirectCommand result { };
    return result;
}

template <>
VkDisplayEventInfoEXT destroy_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayEventInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModeCreateInfoKHR destroy_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.parameters, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModeParametersKHR destroy_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeParametersKHR result { };
    destroy_structure_copy(obj.visibleRegion, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModeProperties2KHR destroy_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeProperties2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayModeProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModePropertiesKHR destroy_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModePropertiesKHR result { };
    destroy_structure_copy(obj.parameters, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayNativeHdrSurfaceCapabilitiesAMD destroy_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayNativeHdrSurfaceCapabilitiesAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneCapabilities2KHR destroy_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneCapabilities2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.capabilities, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneCapabilitiesKHR destroy_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneCapabilitiesKHR result { };
    destroy_structure_copy(obj.minSrcPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSrcPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.minSrcExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSrcExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.minDstPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDstPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.minDstExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDstExtent, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneInfo2KHR destroy_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneInfo2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneProperties2KHR destroy_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneProperties2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPlaneProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlanePropertiesKHR destroy_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlanePropertiesKHR result { };
    return result;
}

template <>
VkDisplayPowerInfoEXT destroy_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPowerInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPresentInfoKHR destroy_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPresentInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcRect, pAllocationCallbacks);
    destroy_structure_copy(obj.dstRect, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayProperties2KHR destroy_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayProperties2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPropertiesKHR destroy_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPropertiesKHR result { };
    destroy_dynamic_string_copy(obj.displayName, pAllocationCallbacks);
    destroy_structure_copy(obj.physicalDimensions, pAllocationCallbacks);
    destroy_structure_copy(obj.physicalResolution, pAllocationCallbacks);
    return result;
}

template <>
VkDisplaySurfaceCreateInfoKHR destroy_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplaySurfaceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkDrawIndexedIndirectCommand destroy_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawIndexedIndirectCommand result { };
    return result;
}

template <>
VkDrawIndirectCommand destroy_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawIndirectCommand result { };
    return result;
}

template <>
VkDrawMeshTasksIndirectCommandNV destroy_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawMeshTasksIndirectCommandNV result { };
    return result;
}

template <>
VkDrmFormatModifierPropertiesEXT destroy_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrmFormatModifierPropertiesEXT result { };
    return result;
}

template <>
VkDrmFormatModifierPropertiesListEXT destroy_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrmFormatModifierPropertiesListEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, pAllocationCallbacks);
    return result;
}

template <>
VkEventCreateInfo destroy_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkEventCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkExportFenceCreateInfo destroy_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportFenceCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportFenceWin32HandleInfoKHR destroy_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportFenceWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportMemoryAllocateInfo destroy_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryAllocateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkExportMemoryAllocateInfoNV destroy_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryAllocateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoKHR destroy_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoNV destroy_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryWin32HandleInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportSemaphoreCreateInfo destroy_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportSemaphoreCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportSemaphoreWin32HandleInfoKHR destroy_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportSemaphoreWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExtensionProperties destroy_structure_copy<VkExtensionProperties>(const VkExtensionProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtensionProperties result { };
    return result;
}

template <>
VkExtent2D destroy_structure_copy<VkExtent2D>(const VkExtent2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtent2D result { };
    return result;
}

template <>
VkExtent3D destroy_structure_copy<VkExtent3D>(const VkExtent3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtent3D result { };
    return result;
}

template <>
VkExternalBufferProperties destroy_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalBufferProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
    return result;
}


template <>
VkExternalFenceProperties destroy_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalFenceProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkExternalFormatANDROID destroy_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalFormatANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkExternalImageFormatProperties destroy_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalImageFormatProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
    return result;
}


template <>
VkExternalImageFormatPropertiesNV destroy_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalImageFormatPropertiesNV result { };
    destroy_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
    return result;
}

template <>
VkExternalMemoryBufferCreateInfo destroy_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryBufferCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkExternalMemoryImageCreateInfo destroy_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryImageCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkExternalMemoryImageCreateInfoNV destroy_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryImageCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkExternalMemoryProperties destroy_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryProperties result { };
    return result;
}


template <>
VkExternalSemaphoreProperties destroy_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalSemaphoreProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkFenceCreateInfo destroy_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkFenceGetFdInfoKHR destroy_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceGetFdInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkFenceGetWin32HandleInfoKHR destroy_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceGetWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkFilterCubicImageViewImageFormatPropertiesEXT destroy_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFilterCubicImageViewImageFormatPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkFormatProperties destroy_structure_copy<VkFormatProperties>(const VkFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFormatProperties result { };
    return result;
}

template <>
VkFormatProperties2 destroy_structure_copy<VkFormatProperties2>(const VkFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFormatProperties2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.formatProperties, pAllocationCallbacks);
    return result;
}


template <>
VkFramebufferAttachmentImageInfo destroy_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferAttachmentImageInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
    return result;
}


template <>
VkFramebufferAttachmentsCreateInfo destroy_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferAttachmentsCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos, pAllocationCallbacks);
    return result;
}


template <>
VkFramebufferCreateInfo destroy_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    return result;
}

template <>
VkFramebufferMixedSamplesCombinationNV destroy_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferMixedSamplesCombinationNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkGeneratedCommandsInfoNV destroy_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeneratedCommandsInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.streamCount, obj.pStreams, pAllocationCallbacks);
    return result;
}

template <>
VkGeneratedCommandsMemoryRequirementsInfoNV destroy_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeneratedCommandsMemoryRequirementsInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryAABBNV destroy_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryAABBNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryDataNV destroy_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryDataNV result { };
    destroy_structure_copy(obj.triangles, pAllocationCallbacks);
    destroy_structure_copy(obj.aabbs, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryNV destroy_structure_copy<VkGeometryNV>(const VkGeometryNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.geometry, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryTrianglesNV destroy_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryTrianglesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkGraphicsPipelineCreateInfo destroy_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsPipelineCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pVertexInputState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pInputAssemblyState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pTessellationState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pViewportState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pRasterizationState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pMultisampleState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pDepthStencilState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pColorBlendState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pDynamicState, pAllocationCallbacks);
    return result;
}

template <>
VkGraphicsPipelineShaderGroupsCreateInfoNV destroy_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsPipelineShaderGroupsCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.pipelineCount, obj.pPipelines, pAllocationCallbacks);
    return result;
}

template <>
VkGraphicsShaderGroupCreateInfoNV destroy_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsShaderGroupCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pVertexInputState, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pTessellationState, pAllocationCallbacks);
    return result;
}

template <>
VkHdrMetadataEXT destroy_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkHdrMetadataEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPrimaryRed, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPrimaryGreen, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPrimaryBlue, pAllocationCallbacks);
    destroy_structure_copy(obj.whitePoint, pAllocationCallbacks);
    return result;
}

template <>
VkHeadlessSurfaceCreateInfoEXT destroy_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkHeadlessSurfaceCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
VkIOSSurfaceCreateInfoMVK destroy_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIOSSurfaceCreateInfoMVK result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
VkImageBlit destroy_structure_copy<VkImageBlit>(const VkImageBlit& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageBlit result { };
    destroy_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.srcOffsets, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.dstOffsets, pAllocationCallbacks);
    return result;
}

template <>
VkImageCopy destroy_structure_copy<VkImageCopy>(const VkImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageCopy result { };
    destroy_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.srcOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.dstOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkImageCreateInfo destroy_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierExplicitCreateInfoEXT destroy_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierExplicitCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierListCreateInfoEXT destroy_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierListCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierPropertiesEXT destroy_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkImageFormatListCreateInfo destroy_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatListCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
    return result;
}


template <>
VkImageFormatProperties destroy_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatProperties result { };
    destroy_structure_copy(obj.maxExtent, pAllocationCallbacks);
    return result;
}

template <>
VkImageFormatProperties2 destroy_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatProperties2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
    return result;
}


template <>
VkImageMemoryBarrier destroy_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageMemoryBarrier result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.subresourceRange, pAllocationCallbacks);
    return result;
}

template <>
VkImageMemoryRequirementsInfo2 destroy_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageMemoryRequirementsInfo2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
VkImagePipeSurfaceCreateInfoFUCHSIA destroy_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImagePipeSurfaceCreateInfoFUCHSIA result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
VkImagePlaneMemoryRequirementsInfo destroy_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImagePlaneMemoryRequirementsInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkImageResolve destroy_structure_copy<VkImageResolve>(const VkImageResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageResolve result { };
    destroy_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.srcOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.dstOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkImageSparseMemoryRequirementsInfo2 destroy_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSparseMemoryRequirementsInfo2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkImageStencilUsageCreateInfo destroy_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageStencilUsageCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkImageSubresource destroy_structure_copy<VkImageSubresource>(const VkImageSubresource& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresource result { };
    return result;
}

template <>
VkImageSubresourceLayers destroy_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresourceLayers result { };
    return result;
}

template <>
VkImageSubresourceRange destroy_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresourceRange result { };
    return result;
}

template <>
VkImageSwapchainCreateInfoKHR destroy_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSwapchainCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewASTCDecodeModeEXT destroy_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewASTCDecodeModeEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewAddressPropertiesNVX destroy_structure_copy<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewAddressPropertiesNVX result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewCreateInfo destroy_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.components, pAllocationCallbacks);
    destroy_structure_copy(obj.subresourceRange, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewHandleInfoNVX destroy_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewHandleInfoNVX result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewUsageCreateInfo destroy_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewUsageCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkImportAndroidHardwareBufferInfoANDROID destroy_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportAndroidHardwareBufferInfoANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkImportFenceFdInfoKHR destroy_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportFenceFdInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportFenceWin32HandleInfoKHR destroy_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportFenceWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportMemoryFdInfoKHR destroy_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryFdInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkImportMemoryHostPointerInfoEXT destroy_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryHostPointerInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoKHR destroy_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoNV destroy_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryWin32HandleInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportSemaphoreFdInfoKHR destroy_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportSemaphoreFdInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportSemaphoreWin32HandleInfoKHR destroy_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportSemaphoreWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkIndirectCommandsLayoutCreateInfoNV destroy_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsLayoutCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.tokenCount, obj.pTokens, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.streamCount, obj.pStreamStrides, pAllocationCallbacks);
    return result;
}

template <>
VkIndirectCommandsLayoutTokenNV destroy_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsLayoutTokenNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypes, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypeValues, pAllocationCallbacks);
    return result;
}

template <>
VkIndirectCommandsStreamNV destroy_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsStreamNV result { };
    return result;
}

template <>
VkInitializePerformanceApiInfoINTEL destroy_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInitializePerformanceApiInfoINTEL result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkInputAttachmentAspectReference destroy_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInputAttachmentAspectReference result { };
    return result;
}


template <>
VkInstanceCreateInfo destroy_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInstanceCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pApplicationInfo, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
    return result;
}

template <>
VkLayerProperties destroy_structure_copy<VkLayerProperties>(const VkLayerProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkLayerProperties result { };
    return result;
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
VkMacOSSurfaceCreateInfoMVK destroy_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMacOSSurfaceCreateInfoMVK result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
VkMappedMemoryRange destroy_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMappedMemoryRange result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryAllocateFlagsInfo destroy_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryAllocateFlagsInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkMemoryAllocateInfo destroy_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryAllocateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryBarrier destroy_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryBarrier result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryDedicatedAllocateInfo destroy_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryDedicatedAllocateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkMemoryDedicatedRequirements destroy_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryDedicatedRequirements result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkMemoryFdPropertiesKHR destroy_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryFdPropertiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkMemoryGetAndroidHardwareBufferInfoANDROID destroy_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetAndroidHardwareBufferInfoANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkMemoryGetFdInfoKHR destroy_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetFdInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryGetWin32HandleInfoKHR destroy_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkMemoryHeap destroy_structure_copy<VkMemoryHeap>(const VkMemoryHeap& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryHeap result { };
    return result;
}

template <>
VkMemoryHostPointerPropertiesEXT destroy_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryHostPointerPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryOpaqueCaptureAddressAllocateInfo destroy_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryOpaqueCaptureAddressAllocateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkMemoryPriorityAllocateInfoEXT destroy_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryPriorityAllocateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryRequirements destroy_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryRequirements result { };
    return result;
}

template <>
VkMemoryRequirements2 destroy_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryRequirements2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
    return result;
}


template <>
VkMemoryType destroy_structure_copy<VkMemoryType>(const VkMemoryType& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryType result { };
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryWin32HandlePropertiesKHR destroy_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryWin32HandlePropertiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
VkMetalSurfaceCreateInfoEXT destroy_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMetalSurfaceCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
VkMultisamplePropertiesEXT destroy_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMultisamplePropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferANDROID destroy_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkNativeBufferANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.usage2, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferUsage2ANDROID destroy_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkNativeBufferUsage2ANDROID result { };
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkOffset2D destroy_structure_copy<VkOffset2D>(const VkOffset2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkOffset2D result { };
    return result;
}

template <>
VkOffset3D destroy_structure_copy<VkOffset3D>(const VkOffset3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkOffset3D result { };
    return result;
}

template <>
VkPastPresentationTimingGOOGLE destroy_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPastPresentationTimingGOOGLE result { };
    return result;
}

template <>
VkPerformanceConfigurationAcquireInfoINTEL destroy_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceConfigurationAcquireInfoINTEL result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceCounterDescriptionKHR destroy_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceCounterDescriptionKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceCounterKHR destroy_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceCounterKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.uuid, pAllocationCallbacks);
    return result;
}


template <>
VkPerformanceMarkerInfoINTEL destroy_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceMarkerInfoINTEL result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceOverrideInfoINTEL destroy_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceOverrideInfoINTEL result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceQuerySubmitInfoKHR destroy_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceQuerySubmitInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceStreamMarkerInfoINTEL destroy_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceStreamMarkerInfoINTEL result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPerformanceValueINTEL destroy_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceValueINTEL result { };
    destroy_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevice16BitStorageFeatures destroy_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevice16BitStorageFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDevice8BitStorageFeatures destroy_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevice8BitStorageFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceASTCDecodeFeaturesEXT destroy_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceASTCDecodeFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceBufferDeviceAddressFeatures destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBufferDeviceAddressFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceBufferDeviceAddressFeaturesEXT destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBufferDeviceAddressFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceCoherentMemoryFeaturesAMD destroy_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCoherentMemoryFeaturesAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceComputeShaderDerivativesFeaturesNV destroy_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceComputeShaderDerivativesFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceConditionalRenderingFeaturesEXT destroy_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceConditionalRenderingFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceConservativeRasterizationPropertiesEXT destroy_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixFeaturesNV destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCooperativeMatrixFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixPropertiesNV destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCooperativeMatrixPropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCornerSampledImageFeaturesNV destroy_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCornerSampledImageFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCoverageReductionModeFeaturesNV destroy_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCoverageReductionModeFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCustomBorderColorFeaturesEXT destroy_structure_copy<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCustomBorderColorFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCustomBorderColorPropertiesEXT destroy_structure_copy<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCustomBorderColorPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV destroy_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDepthClipEnableFeaturesEXT destroy_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDepthClipEnableFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDepthStencilResolveProperties destroy_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDepthStencilResolveProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceDescriptorIndexingFeatures destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDescriptorIndexingFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceDescriptorIndexingProperties destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDescriptorIndexingProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDiagnosticsConfigFeaturesNV destroy_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDiagnosticsConfigFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDiscardRectanglePropertiesEXT destroy_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDiscardRectanglePropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDriverProperties destroy_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDriverProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceExclusiveScissorFeaturesNV destroy_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExclusiveScissorFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExtendedDynamicStateFeaturesEXT destroy_structure_copy<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExternalBufferInfo destroy_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalBufferInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceExternalFenceInfo destroy_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalFenceInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceExternalImageFormatInfo destroy_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalImageFormatInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceExternalMemoryHostPropertiesEXT destroy_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExternalSemaphoreInfo destroy_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalSemaphoreInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceFeatures destroy_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFeatures result { };
    return result;
}

template <>
VkPhysicalDeviceFeatures2 destroy_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFeatures2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.features, pAllocationCallbacks);
    return result;
}



template <>
VkPhysicalDeviceFloatControlsProperties destroy_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFloatControlsProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceFragmentDensityMap2FeaturesEXT destroy_structure_copy<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMap2FeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMap2PropertiesEXT destroy_structure_copy<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMap2PropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapFeaturesEXT destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMapFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapPropertiesEXT destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.minFragmentDensityTexelSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFragmentDensityTexelSize, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV destroy_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT destroy_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceGroupProperties destroy_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceGroupProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(obj.physicalDevices, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceHostQueryResetFeatures destroy_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceHostQueryResetFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceIDProperties destroy_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceIDProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.deviceUUID, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.driverUUID, pAllocationCallbacks);
    destroy_static_array_copy<VK_LUID_SIZE>(obj.deviceLUID, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceImageDrmFormatModifierInfoEXT destroy_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImageFormatInfo2 destroy_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageFormatInfo2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceImageRobustnessFeaturesEXT destroy_structure_copy<VkPhysicalDeviceImageRobustnessFeaturesEXT>(const VkPhysicalDeviceImageRobustnessFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageRobustnessFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImageViewImageFormatInfoEXT destroy_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageViewImageFormatInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImagelessFramebufferFeatures destroy_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImagelessFramebufferFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceIndexTypeUint8FeaturesEXT destroy_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceIndexTypeUint8FeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockFeaturesEXT destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceInlineUniformBlockFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockPropertiesEXT destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceInlineUniformBlockPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceLimits destroy_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLimits result { };
    destroy_static_array_copy<3>(obj.maxComputeWorkGroupCount, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.maxComputeWorkGroupSize, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.maxViewportDimensions, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.viewportBoundsRange, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.pointSizeRange, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.lineWidthRange, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationFeaturesEXT destroy_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLineRasterizationFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationPropertiesEXT destroy_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLineRasterizationPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMaintenance3Properties destroy_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMaintenance3Properties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceMemoryBudgetPropertiesEXT destroy_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryBudgetPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.heapBudget, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.heapUsage, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMemoryPriorityFeaturesEXT destroy_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryPriorityFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties destroy_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryProperties result { };
    destroy_static_array_copy<VK_MAX_MEMORY_TYPES>(obj.memoryTypes, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.memoryHeaps, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties2 destroy_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryProperties2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryProperties, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceMeshShaderFeaturesNV destroy_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMeshShaderFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMeshShaderPropertiesNV destroy_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMeshShaderPropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.maxTaskWorkGroupSize, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.maxMeshWorkGroupSize, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMultiviewFeatures destroy_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX destroy_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMultiviewProperties destroy_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDevicePCIBusInfoPropertiesEXT destroy_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePCIBusInfoPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryFeaturesKHR destroy_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePerformanceQueryFeaturesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryPropertiesKHR destroy_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePerformanceQueryPropertiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT destroy_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR destroy_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePointClippingProperties destroy_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePointClippingProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkPhysicalDevicePresentationPropertiesANDROID destroy_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePresentationPropertiesANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkPhysicalDevicePrivateDataFeaturesEXT destroy_structure_copy<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePrivateDataFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceProperties destroy_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProperties result { };
    destroy_static_array_copy<VK_UUID_SIZE>(obj.pipelineCacheUUID, pAllocationCallbacks);
    destroy_structure_copy(obj.limits, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseProperties, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceProperties2 destroy_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProperties2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.properties, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceProtectedMemoryFeatures destroy_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProtectedMemoryFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceProtectedMemoryProperties destroy_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProtectedMemoryProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePushDescriptorPropertiesKHR destroy_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePushDescriptorPropertiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingFeaturesKHR destroy_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingFeaturesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingPropertiesKHR destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingPropertiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkPhysicalDeviceRayTracingPropertiesNV destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingPropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV destroy_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceRobustness2FeaturesEXT destroy_structure_copy<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRobustness2FeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceRobustness2PropertiesEXT destroy_structure_copy<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRobustness2PropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSampleLocationsPropertiesEXT destroy_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSampleLocationsPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.sampleLocationCoordinateRange, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSamplerFilterMinmaxProperties destroy_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSamplerFilterMinmaxProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceSamplerYcbcrConversionFeatures destroy_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSamplerYcbcrConversionFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceScalarBlockLayoutFeatures destroy_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceScalarBlockLayoutFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures destroy_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceShaderAtomicFloatFeaturesEXT destroy_structure_copy<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderAtomicFloatFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderAtomicInt64Features destroy_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderAtomicInt64Features result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceShaderClockFeaturesKHR destroy_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderClockFeaturesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderCoreProperties2AMD destroy_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderCoreProperties2AMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderCorePropertiesAMD destroy_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderCorePropertiesAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT destroy_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceShaderDrawParametersFeatures destroy_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderDrawParametersFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderFloat16Int8Features destroy_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderFloat16Int8Features result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceShaderImageFootprintFeaturesNV destroy_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderImageFootprintFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL destroy_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsFeaturesNV destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSMBuiltinsFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsPropertiesNV destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures destroy_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceShadingRateImageFeaturesNV destroy_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShadingRateImageFeaturesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShadingRateImagePropertiesNV destroy_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShadingRateImagePropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shadingRateTexelSize, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSparseImageFormatInfo2 destroy_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSparseImageFormatInfo2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceSparseProperties destroy_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSparseProperties result { };
    return result;
}

template <>
VkPhysicalDeviceSubgroupProperties destroy_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlFeaturesEXT destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupSizeControlFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlPropertiesEXT destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupSizeControlPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSurfaceInfo2KHR destroy_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSurfaceInfo2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT destroy_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTimelineSemaphoreFeatures destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTimelineSemaphoreFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceTimelineSemaphoreProperties destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTimelineSemaphoreProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceToolPropertiesEXT destroy_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceToolPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackFeaturesEXT destroy_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTransformFeedbackFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackPropertiesEXT destroy_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTransformFeedbackPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceUniformBufferStandardLayoutFeatures destroy_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}




template <>
VkPhysicalDeviceVariablePointersFeatures destroy_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVariablePointersFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan11Features destroy_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan11Features result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan11Properties destroy_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan11Properties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.deviceUUID, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.driverUUID, pAllocationCallbacks);
    destroy_static_array_copy<VK_LUID_SIZE>(obj.deviceLUID, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan12Features destroy_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan12Features result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan12Properties destroy_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan12Properties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkanMemoryModelFeatures destroy_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkanMemoryModelFeatures result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceYcbcrImageArraysFeaturesEXT destroy_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceYcbcrImageArraysFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCacheCreateInfo destroy_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCacheCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineColorBlendAdvancedStateCreateInfoEXT destroy_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendAdvancedStateCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineColorBlendAttachmentState destroy_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendAttachmentState result { };
    return result;
}

template <>
VkPipelineColorBlendStateCreateInfo destroy_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    destroy_static_array_copy<4>(obj.blendConstants, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCompilerControlCreateInfoAMD destroy_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCompilerControlCreateInfoAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCoverageModulationStateCreateInfoNV destroy_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageModulationStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.coverageModulationTableCount, obj.pCoverageModulationTable, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCoverageReductionStateCreateInfoNV destroy_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageReductionStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCoverageToColorStateCreateInfoNV destroy_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageToColorStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCreationFeedbackCreateInfoEXT destroy_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCreationFeedbackCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pPipelineCreationFeedback, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCreationFeedbackEXT destroy_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCreationFeedbackEXT result { };
    return result;
}

template <>
VkPipelineDepthStencilStateCreateInfo destroy_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDepthStencilStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.front, pAllocationCallbacks);
    destroy_structure_copy(obj.back, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineDiscardRectangleStateCreateInfoEXT destroy_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDiscardRectangleStateCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.discardRectangleCount, obj.pDiscardRectangles, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineDynamicStateCreateInfo destroy_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDynamicStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dynamicStateCount, obj.pDynamicStates, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutableInfoKHR destroy_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutableInternalRepresentationKHR destroy_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableInternalRepresentationKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutablePropertiesKHR destroy_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutablePropertiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutableStatisticKHR destroy_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableStatisticKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.value, pAllocationCallbacks);
    return result;
}


template <>
VkPipelineInfoKHR destroy_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineInputAssemblyStateCreateInfo destroy_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineInputAssemblyStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineLayoutCreateInfo destroy_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineLayoutCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.setLayoutCount, obj.pSetLayouts, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.pushConstantRangeCount, obj.pPushConstantRanges, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPipelineLibraryCreateInfoKHR destroy_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineLibraryCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.libraryCount, obj.pLibraries, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkPipelineRasterizationConservativeStateCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationConservativeStateCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationDepthClipStateCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationDepthClipStateCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationLineStateCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationLineStateCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationStateCreateInfo destroy_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationStateRasterizationOrderAMD destroy_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateRasterizationOrderAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationStateStreamCreateInfoEXT destroy_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateStreamCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRepresentativeFragmentTestStateCreateInfoNV destroy_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineSampleLocationsStateCreateInfoEXT destroy_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineSampleLocationsStateCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineShaderStageCreateInfo destroy_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineShaderStageCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pName, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pSpecializationInfo, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT destroy_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineTessellationDomainOriginStateCreateInfo destroy_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineTessellationDomainOriginStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkPipelineTessellationStateCreateInfo destroy_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineTessellationStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineVertexInputDivisorStateCreateInfoEXT destroy_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineVertexInputDivisorStateCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineVertexInputStateCreateInfo destroy_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineVertexInputStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportCoarseSampleOrderStateCreateInfoNV destroy_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.customSampleOrderCount, obj.pCustomSampleOrders, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportExclusiveScissorStateCreateInfoNV destroy_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportExclusiveScissorStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.exclusiveScissorCount, obj.pExclusiveScissors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportShadingRateImageStateCreateInfoNV destroy_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportShadingRateImageStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pShadingRatePalettes, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportStateCreateInfo destroy_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportStateCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewports, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.scissorCount, obj.pScissors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportSwizzleStateCreateInfoNV destroy_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportSwizzleStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewportSwizzles, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportWScalingStateCreateInfoNV destroy_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportWScalingStateCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewportWScalings, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkPresentFrameTokenGGP destroy_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentFrameTokenGGP result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_GGP

template <>
VkPresentInfoKHR destroy_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pSwapchains, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pImageIndices, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pResults, pAllocationCallbacks);
    return result;
}

template <>
VkPresentRegionKHR destroy_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentRegionKHR result { };
    destroy_dynamic_array_copy(obj.rectangleCount, obj.pRectangles, pAllocationCallbacks);
    return result;
}

template <>
VkPresentRegionsKHR destroy_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentRegionsKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pRegions, pAllocationCallbacks);
    return result;
}

template <>
VkPresentTimeGOOGLE destroy_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentTimeGOOGLE result { };
    return result;
}

template <>
VkPresentTimesInfoGOOGLE destroy_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentTimesInfoGOOGLE result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pTimes, pAllocationCallbacks);
    return result;
}

template <>
VkPrivateDataSlotCreateInfoEXT destroy_structure_copy<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPrivateDataSlotCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkProtectedSubmitInfo destroy_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkProtectedSubmitInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkPushConstantRange destroy_structure_copy<VkPushConstantRange>(const VkPushConstantRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPushConstantRange result { };
    return result;
}

template <>
VkQueryPoolCreateInfo destroy_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkQueryPoolPerformanceCreateInfoKHR destroy_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolPerformanceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.counterIndexCount, obj.pCounterIndices, pAllocationCallbacks);
    return result;
}

template <>
VkQueryPoolPerformanceQueryCreateInfoINTEL destroy_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolPerformanceQueryCreateInfoINTEL result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkQueueFamilyCheckpointPropertiesNV destroy_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyCheckpointPropertiesNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkQueueFamilyProperties destroy_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyProperties result { };
    destroy_structure_copy(obj.minImageTransferGranularity, pAllocationCallbacks);
    return result;
}

template <>
VkQueueFamilyProperties2 destroy_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyProperties2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyProperties, pAllocationCallbacks);
    return result;
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineCreateInfoKHR destroy_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    destroy_structure_copy(obj.libraries, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pLibraryInterface, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingPipelineCreateInfoNV destroy_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineInterfaceCreateInfoKHR destroy_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineInterfaceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingShaderGroupCreateInfoKHR destroy_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingShaderGroupCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingShaderGroupCreateInfoNV destroy_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingShaderGroupCreateInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkRect2D destroy_structure_copy<VkRect2D>(const VkRect2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRect2D result { };
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkRectLayerKHR destroy_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRectLayerKHR result { };
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkRefreshCycleDurationGOOGLE destroy_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRefreshCycleDurationGOOGLE result { };
    return result;
}

template <>
VkRenderPassAttachmentBeginInfo destroy_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassAttachmentBeginInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassBeginInfo destroy_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassBeginInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.renderArea, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.clearValueCount, obj.pClearValues, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassCreateInfo destroy_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassCreateInfo2 destroy_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassCreateInfo2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassFragmentDensityMapCreateInfoEXT destroy_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassFragmentDensityMapCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentDensityMapAttachment, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassInputAttachmentAspectCreateInfo destroy_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassInputAttachmentAspectCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.aspectReferenceCount, obj.pAspectReferences, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassMultiviewCreateInfo destroy_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassMultiviewCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pViewMasks, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pViewOffsets, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.correlationMaskCount, obj.pCorrelationMasks, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassSampleLocationsBeginInfoEXT destroy_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassSampleLocationsBeginInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassTransformBeginInfoQCOM destroy_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassTransformBeginInfoQCOM result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkSampleLocationEXT destroy_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSampleLocationEXT result { };
    return result;
}

template <>
VkSampleLocationsInfoEXT destroy_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSampleLocationsInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationGridSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.sampleLocationsCount, obj.pSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerCreateInfo destroy_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerCustomBorderColorCreateInfoEXT destroy_structure_copy<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerCustomBorderColorCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.customBorderColor, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerReductionModeCreateInfo destroy_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerReductionModeCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSamplerYcbcrConversionCreateInfo destroy_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.components, pAllocationCallbacks);
    return result;
}


template <>
VkSamplerYcbcrConversionImageFormatProperties destroy_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionImageFormatProperties result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSamplerYcbcrConversionInfo destroy_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSemaphoreCreateInfo destroy_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkSemaphoreGetFdInfoKHR destroy_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreGetFdInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSemaphoreGetWin32HandleInfoKHR destroy_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreGetWin32HandleInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSemaphoreSignalInfo destroy_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreSignalInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSemaphoreTypeCreateInfo destroy_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreTypeCreateInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSemaphoreWaitInfo destroy_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreWaitInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.semaphoreCount, obj.pSemaphores, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.semaphoreCount, obj.pValues, pAllocationCallbacks);
    return result;
}


template <>
VkSetStateFlagsIndirectCommandNV destroy_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSetStateFlagsIndirectCommandNV result { };
    return result;
}


template <>
VkShaderModuleValidationCacheCreateInfoEXT destroy_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderModuleValidationCacheCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkShaderResourceUsageAMD destroy_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderResourceUsageAMD result { };
    return result;
}

template <>
VkShaderStatisticsInfoAMD destroy_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderStatisticsInfoAMD result { };
    destroy_structure_copy(obj.resourceUsage, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.computeWorkGroupSize, pAllocationCallbacks);
    return result;
}

template <>
VkShadingRatePaletteNV destroy_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShadingRatePaletteNV result { };
    destroy_dynamic_array_copy(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, pAllocationCallbacks);
    return result;
}

template <>
VkSharedPresentSurfaceCapabilitiesKHR destroy_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSharedPresentSurfaceCapabilitiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkSparseBufferMemoryBindInfo destroy_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseBufferMemoryBindInfo result { };
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageFormatProperties destroy_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageFormatProperties result { };
    destroy_structure_copy(obj.imageGranularity, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageFormatProperties2 destroy_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageFormatProperties2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.properties, pAllocationCallbacks);
    return result;
}


template <>
VkSparseImageMemoryBind destroy_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryBind result { };
    destroy_structure_copy(obj.subresource, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryBindInfo destroy_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryBindInfo result { };
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryRequirements destroy_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryRequirements result { };
    destroy_structure_copy(obj.formatProperties, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryRequirements2 destroy_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryRequirements2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
    return result;
}


template <>
VkSparseImageOpaqueMemoryBindInfo destroy_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageOpaqueMemoryBindInfo result { };
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseMemoryBind destroy_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseMemoryBind result { };
    return result;
}

template <>
VkSpecializationInfo destroy_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSpecializationInfo result { };
    destroy_dynamic_array_copy(obj.mapEntryCount, obj.pMapEntries, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkSpecializationMapEntry destroy_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSpecializationMapEntry result { };
    return result;
}

template <>
VkStencilOpState destroy_structure_copy<VkStencilOpState>(const VkStencilOpState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStencilOpState result { };
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkStreamDescriptorSurfaceCreateInfoGGP destroy_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStreamDescriptorSurfaceCreateInfoGGP result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkStridedBufferRegionKHR destroy_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStridedBufferRegionKHR result { };
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkSubmitInfo destroy_structure_copy<VkSubmitInfo>(const VkSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubmitInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitDstStageMask, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBuffers, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassBeginInfo destroy_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassBeginInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassDependency destroy_structure_copy<VkSubpassDependency>(const VkSubpassDependency& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDependency result { };
    return result;
}

template <>
VkSubpassDependency2 destroy_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDependency2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassDescription destroy_structure_copy<VkSubpassDescription>(const VkSubpassDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescription result { };
    destroy_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassDescription2 destroy_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescription2 result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassDescriptionDepthStencilResolve destroy_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescriptionDepthStencilResolve result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(1, obj.pDepthStencilResolveAttachment, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassEndInfo destroy_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassEndInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassSampleLocationsEXT destroy_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassSampleLocationsEXT result { };
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkSubresourceLayout destroy_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubresourceLayout result { };
    return result;
}

template <>
VkSurfaceCapabilities2EXT destroy_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilities2EXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.currentExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceCapabilities2KHR destroy_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilities2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.surfaceCapabilities, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceCapabilitiesFullScreenExclusiveEXT destroy_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilitiesFullScreenExclusiveEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceCapabilitiesKHR destroy_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilitiesKHR result { };
    destroy_structure_copy(obj.currentExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceFormat2KHR destroy_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFormat2KHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.surfaceFormat, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceFormatKHR destroy_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFormatKHR result { };
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveInfoEXT destroy_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFullScreenExclusiveInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveWin32InfoEXT destroy_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFullScreenExclusiveWin32InfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceProtectedCapabilitiesKHR destroy_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceProtectedCapabilitiesKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkSwapchainCounterCreateInfoEXT destroy_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainCounterCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkSwapchainCreateInfoKHR destroy_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imageExtent, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkSwapchainDisplayNativeHdrCreateInfoAMD destroy_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainDisplayNativeHdrCreateInfoAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkSwapchainImageCreateInfoANDROID destroy_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainImageCreateInfoANDROID result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkTextureLODGatherFormatPropertiesAMD destroy_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTextureLODGatherFormatPropertiesAMD result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkTimelineSemaphoreSubmitInfo destroy_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTimelineSemaphoreSubmitInfo result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
    return result;
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTraceRaysIndirectCommandKHR destroy_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTraceRaysIndirectCommandKHR result { };
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS



template <>
VkValidationCacheCreateInfoEXT destroy_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationCacheCreateInfoEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
    return result;
}

template <>
VkValidationFeaturesEXT destroy_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationFeaturesEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkValidationFlagsEXT destroy_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationFlagsEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, pAllocationCallbacks);
    return result;
}

template <>
VkVertexInputAttributeDescription destroy_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputAttributeDescription result { };
    return result;
}

template <>
VkVertexInputBindingDescription destroy_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputBindingDescription result { };
    return result;
}

template <>
VkVertexInputBindingDivisorDescriptionEXT destroy_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputBindingDivisorDescriptionEXT result { };
    return result;
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
VkViSurfaceCreateInfoNN destroy_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViSurfaceCreateInfoNN result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
VkViewport destroy_structure_copy<VkViewport>(const VkViewport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewport result { };
    return result;
}

template <>
VkViewportSwizzleNV destroy_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewportSwizzleNV result { };
    return result;
}

template <>
VkViewportWScalingNV destroy_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewportWScalingNV result { };
    return result;
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
VkWaylandSurfaceCreateInfoKHR destroy_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWaylandSurfaceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoKHR destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32KeyedMutexAcquireReleaseInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeouts, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoNV destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32KeyedMutexAcquireReleaseInfoNV result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32SurfaceCreateInfoKHR destroy_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32SurfaceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkWriteDescriptorSet destroy_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSet result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pImageInfo, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pBufferInfo, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pTexelBufferView, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkWriteDescriptorSetAccelerationStructureKHR destroy_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSetAccelerationStructureKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.accelerationStructureCount, obj.pAccelerationStructures, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkWriteDescriptorSetInlineUniformBlockEXT destroy_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSetInlineUniformBlockEXT result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkXYColorEXT destroy_structure_copy<VkXYColorEXT>(const VkXYColorEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXYColorEXT result { };
    return result;
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
VkXcbSurfaceCreateInfoKHR destroy_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXcbSurfaceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
VkXlibSurfaceCreateInfoKHR destroy_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXlibSurfaceCreateInfoKHR result { };
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks)
{
    if (pNext) {
        swtich (*(VkStructureType*)pNext) {
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_APPLICATION_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        case VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_DIRECTFB_EXT
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_IOS_MVK
        case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_IOS_MVK
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_MACOS_MVK
        case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_MACOS_MVK
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_END_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_VI_NN
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_VI_NN
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WAYLAND_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        case : {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XCB_KHR
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const *)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XLIB_KHR
        default:
        }
    }
}

} // namespace vk
} // namespace dst
