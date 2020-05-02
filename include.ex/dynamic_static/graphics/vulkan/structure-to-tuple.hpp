
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.minX),
        member_to_tuple_element(obj.minY),
        member_to_tuple_element(obj.minZ),
        member_to_tuple_element(obj.maxX),
        member_to_tuple_element(obj.maxY),
        member_to_tuple_element(obj.maxZ),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.update),
        obj.srcAccelerationStructure,
        obj.dstAccelerationStructure,
        member_to_tuple_element(obj.geometryArrayOfPointers),
        member_to_tuple_element(obj.geometryCount),
        obj.ppGeometries,
        member_to_tuple_element(obj.scratchData),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.primitiveCount),
        member_to_tuple_element(obj.primitiveOffset),
        member_to_tuple_element(obj.firstVertex),
        member_to_tuple_element(obj.transformOffset),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.geometryType),
        member_to_tuple_element(obj.maxPrimitiveCount),
        member_to_tuple_element(obj.indexType),
        member_to_tuple_element(obj.maxVertexCount),
        member_to_tuple_element(obj.vertexFormat),
        member_to_tuple_element(obj.allowsTransforms),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.compactedSize),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.maxGeometryCount),
        dynamic_array_member_to_tuple_element(obj.maxGeometryCount, obj.pGeometryInfos),
        member_to_tuple_element(obj.deviceAddress),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.compactedSize),
        member_to_tuple_element(obj.info),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.accelerationStructure,
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.data),
        member_to_tuple_element(obj.stride),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.arrayOfPointers),
        member_to_tuple_element(obj.data),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.geometryType),
        member_to_tuple_element(obj.geometry),
        member_to_tuple_element(obj.flags),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.vertexFormat),
        member_to_tuple_element(obj.vertexData),
        member_to_tuple_element(obj.vertexStride),
        member_to_tuple_element(obj.indexType),
        member_to_tuple_element(obj.indexData),
        member_to_tuple_element(obj.transformData),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.instanceCount),
        member_to_tuple_element(obj.geometryCount),
        dynamic_array_member_to_tuple_element(obj.geometryCount, obj.pGeometries),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.transform),
        member_to_tuple_element(obj.instanceCustomIndex),
        member_to_tuple_element(obj.mask),
        member_to_tuple_element(obj.instanceShaderBindingTableRecordOffset),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.accelerationStructureReference),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.buildType),
        obj.accelerationStructure,
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
        obj.accelerationStructure,
    );
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_CUSTOM_HANDLING
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        dynamic_array_member_to_tuple_element(obj.2*VK_UUID_SIZE, obj.versionData),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_CUSTOM_HANDLING

template <>
inline auto structure_to_tuple<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.swapchain,
        member_to_tuple_element(obj.timeout),
        obj.semaphore,
        obj.fence,
        member_to_tuple_element(obj.deviceMask),
    );
}

template <>
inline auto structure_to_tuple<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.timeout),
    );
}

template <>
inline auto structure_to_tuple<VkAllocationCallbacks>(const VkAllocationCallbacks& obj)
{
    return std::make_tuple(
        obj.pUserData,
        obj.pfnAllocation,
        obj.pfnReallocation,
        obj.pfnFree,
        obj.pfnInternalAllocation,
        obj.pfnInternalFree,
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.externalFormat),
        member_to_tuple_element(obj.formatFeatures),
        member_to_tuple_element(obj.samplerYcbcrConversionComponents),
        member_to_tuple_element(obj.suggestedYcbcrModel),
        member_to_tuple_element(obj.suggestedYcbcrRange),
        member_to_tuple_element(obj.suggestedXChromaOffset),
        member_to_tuple_element(obj.suggestedYChromaOffset),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.allocationSize),
        member_to_tuple_element(obj.memoryTypeBits),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.androidHardwareBufferUsage),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.window,
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkApplicationInfo>(const VkApplicationInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        dynamic_string_member_to_tuple_element(obj.pApplicationName),
        member_to_tuple_element(obj.applicationVersion),
        dynamic_string_member_to_tuple_element(obj.pEngineName),
        member_to_tuple_element(obj.engineVersion),
        member_to_tuple_element(obj.apiVersion),
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentDescription>(const VkAttachmentDescription& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.samples),
        member_to_tuple_element(obj.loadOp),
        member_to_tuple_element(obj.storeOp),
        member_to_tuple_element(obj.stencilLoadOp),
        member_to_tuple_element(obj.stencilStoreOp),
        member_to_tuple_element(obj.initialLayout),
        member_to_tuple_element(obj.finalLayout),
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentDescription2>(const VkAttachmentDescription2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.samples),
        member_to_tuple_element(obj.loadOp),
        member_to_tuple_element(obj.storeOp),
        member_to_tuple_element(obj.stencilLoadOp),
        member_to_tuple_element(obj.stencilStoreOp),
        member_to_tuple_element(obj.initialLayout),
        member_to_tuple_element(obj.finalLayout),
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.stencilInitialLayout),
        member_to_tuple_element(obj.stencilFinalLayout),
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentReference>(const VkAttachmentReference& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.attachment),
        member_to_tuple_element(obj.layout),
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentReference2>(const VkAttachmentReference2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.attachment),
        member_to_tuple_element(obj.layout),
        member_to_tuple_element(obj.aspectMask),
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.stencilLayout),
    );
}

template <>
inline auto structure_to_tuple<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.attachmentIndex),
        member_to_tuple_element(obj.sampleLocationsInfo),
    );
}

template <>
inline auto structure_to_tuple<VkBaseInStructure>(const VkBaseInStructure& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
    );
}

template <>
inline auto structure_to_tuple<VkBaseOutStructure>(const VkBaseOutStructure& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.accelerationStructure,
        obj.memory,
        member_to_tuple_element(obj.memoryOffset),
        member_to_tuple_element(obj.deviceIndexCount),
        dynamic_array_member_to_tuple_element(obj.deviceIndexCount, obj.pDeviceIndices),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceIndexCount),
        dynamic_array_member_to_tuple_element(obj.deviceIndexCount, obj.pDeviceIndices),
    );
}

template <>
inline auto structure_to_tuple<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.buffer,
        obj.memory,
        member_to_tuple_element(obj.memoryOffset),
    );
}

template <>
inline auto structure_to_tuple<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceIndexCount),
        dynamic_array_member_to_tuple_element(obj.deviceIndexCount, obj.pDeviceIndices),
        member_to_tuple_element(obj.splitInstanceBindRegionCount),
        dynamic_array_member_to_tuple_element(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions),
    );
}

template <>
inline auto structure_to_tuple<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.image,
        obj.memory,
        member_to_tuple_element(obj.memoryOffset),
    );
}

template <>
inline auto structure_to_tuple<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.swapchain,
        member_to_tuple_element(obj.imageIndex),
    );
}

template <>
inline auto structure_to_tuple<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.planeAspect),
    );
}

template <>
inline auto structure_to_tuple<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.bufferAddress),
        member_to_tuple_element(obj.size),
        member_to_tuple_element(obj.indexType),
    );
}

template <>
inline auto structure_to_tuple<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.groupIndex),
    );
}

template <>
inline auto structure_to_tuple<VkBindSparseInfo>(const VkBindSparseInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.waitSemaphoreCount),
        dynamic_array_member_to_tuple_element(obj.waitSemaphoreCount, obj.pWaitSemaphores),
        member_to_tuple_element(obj.bufferBindCount),
        dynamic_array_member_to_tuple_element(obj.bufferBindCount, obj.pBufferBinds),
        member_to_tuple_element(obj.imageOpaqueBindCount),
        dynamic_array_member_to_tuple_element(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds),
        member_to_tuple_element(obj.imageBindCount),
        dynamic_array_member_to_tuple_element(obj.imageBindCount, obj.pImageBinds),
        member_to_tuple_element(obj.signalSemaphoreCount),
        dynamic_array_member_to_tuple_element(obj.signalSemaphoreCount, obj.pSignalSemaphores),
    );
}

template <>
inline auto structure_to_tuple<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.bufferAddress),
        member_to_tuple_element(obj.size),
        member_to_tuple_element(obj.stride),
    );
}

template <>
inline auto structure_to_tuple<VkBufferCopy>(const VkBufferCopy& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.srcOffset),
        member_to_tuple_element(obj.dstOffset),
        member_to_tuple_element(obj.size),
    );
}

template <>
inline auto structure_to_tuple<VkBufferCreateInfo>(const VkBufferCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.size),
        member_to_tuple_element(obj.usage),
        member_to_tuple_element(obj.sharingMode),
        member_to_tuple_element(obj.queueFamilyIndexCount),
        dynamic_array_member_to_tuple_element(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices),
    );
}

template <>
inline auto structure_to_tuple<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceAddress),
    );
}

template <>
inline auto structure_to_tuple<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.buffer,
    );
}

template <>
inline auto structure_to_tuple<VkBufferImageCopy>(const VkBufferImageCopy& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.bufferOffset),
        member_to_tuple_element(obj.bufferRowLength),
        member_to_tuple_element(obj.bufferImageHeight),
        member_to_tuple_element(obj.imageSubresource),
        member_to_tuple_element(obj.imageOffset),
        member_to_tuple_element(obj.imageExtent),
    );
}

template <>
inline auto structure_to_tuple<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.srcAccessMask),
        member_to_tuple_element(obj.dstAccessMask),
        member_to_tuple_element(obj.srcQueueFamilyIndex),
        member_to_tuple_element(obj.dstQueueFamilyIndex),
        obj.buffer,
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.size),
    );
}

template <>
inline auto structure_to_tuple<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.buffer,
    );
}

template <>
inline auto structure_to_tuple<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.opaqueCaptureAddress),
    );
}

template <>
inline auto structure_to_tuple<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.buffer,
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.range),
    );
}

template <>
inline auto structure_to_tuple<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.timeDomain),
    );
}

template <>
inline auto structure_to_tuple<VkCheckpointDataNV>(const VkCheckpointDataNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.stage),
        obj.pCheckpointMarker,
    );
}

template <>
inline auto structure_to_tuple<VkClearAttachment>(const VkClearAttachment& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.aspectMask),
        member_to_tuple_element(obj.colorAttachment),
        member_to_tuple_element(obj.clearValue),
    );
}

template <>
inline auto structure_to_tuple<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.depth),
        member_to_tuple_element(obj.stencil),
    );
}

template <>
inline auto structure_to_tuple<VkClearRect>(const VkClearRect& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.rect),
        member_to_tuple_element(obj.baseArrayLayer),
        member_to_tuple_element(obj.layerCount),
    );
}

template <>
inline auto structure_to_tuple<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.pixelX),
        member_to_tuple_element(obj.pixelY),
        member_to_tuple_element(obj.sample),
    );
}

template <>
inline auto structure_to_tuple<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.shadingRate),
        member_to_tuple_element(obj.sampleCount),
        member_to_tuple_element(obj.sampleLocationCount),
        dynamic_array_member_to_tuple_element(obj.sampleLocationCount, obj.pSampleLocations),
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.commandPool,
        member_to_tuple_element(obj.level),
        member_to_tuple_element(obj.commandBufferCount),
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.pInheritanceInfo,
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.conditionalRenderingEnable),
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.renderPass,
        member_to_tuple_element(obj.subpass),
        obj.framebuffer,
        member_to_tuple_element(obj.occlusionQueryEnable),
        member_to_tuple_element(obj.queryFlags),
        member_to_tuple_element(obj.pipelineStatistics),
    );
}

template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.transform),
        member_to_tuple_element(obj.renderArea),
    );
}

template <>
inline auto structure_to_tuple<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.queueFamilyIndex),
    );
}

template <>
inline auto structure_to_tuple<VkComponentMapping>(const VkComponentMapping& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.r),
        member_to_tuple_element(obj.g),
        member_to_tuple_element(obj.b),
        member_to_tuple_element(obj.a),
    );
}

template <>
inline auto structure_to_tuple<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.stage),
        obj.layout,
        obj.basePipelineHandle,
        member_to_tuple_element(obj.basePipelineIndex),
    );
}

template <>
inline auto structure_to_tuple<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.buffer,
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkConformanceVersion>(const VkConformanceVersion& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.major),
        member_to_tuple_element(obj.minor),
        member_to_tuple_element(obj.subminor),
        member_to_tuple_element(obj.patch),
    );
}

template <>
inline auto structure_to_tuple<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.MSize),
        member_to_tuple_element(obj.NSize),
        member_to_tuple_element(obj.KSize),
        member_to_tuple_element(obj.AType),
        member_to_tuple_element(obj.BType),
        member_to_tuple_element(obj.CType),
        member_to_tuple_element(obj.DType),
        member_to_tuple_element(obj.scope),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.src,
        obj.dst,
        member_to_tuple_element(obj.mode),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.src,
        member_to_tuple_element(obj.dst),
        member_to_tuple_element(obj.mode),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.srcSet,
        member_to_tuple_element(obj.srcBinding),
        member_to_tuple_element(obj.srcArrayElement),
        obj.dstSet,
        member_to_tuple_element(obj.dstBinding),
        member_to_tuple_element(obj.dstArrayElement),
        member_to_tuple_element(obj.descriptorCount),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.src),
        obj.dst,
        member_to_tuple_element(obj.mode),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.waitSemaphoreValuesCount),
        dynamic_array_member_to_tuple_element(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues),
        member_to_tuple_element(obj.signalSemaphoreValuesCount),
        dynamic_array_member_to_tuple_element(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        dynamic_string_member_to_tuple_element(obj.pMarkerName),
        static_array_member_to_tuple_element(result.color, obj.color),
    );
}

template <>
inline auto structure_to_tuple<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.objectType),
        member_to_tuple_element(obj.object),
        dynamic_string_member_to_tuple_element(obj.pObjectName),
    );
}

template <>
inline auto structure_to_tuple<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.objectType),
        member_to_tuple_element(obj.object),
        member_to_tuple_element(obj.tagName),
        member_to_tuple_element(obj.tagSize),
        dynamic_array_member_to_tuple_element(obj.tagSize, obj.pTag),
    );
}

template <>
inline auto structure_to_tuple<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.pfnCallback,
        obj.pUserData,
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        dynamic_string_member_to_tuple_element(obj.pLabelName),
        static_array_member_to_tuple_element(result.color, obj.color),
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        dynamic_string_member_to_tuple_element(obj.pMessageIdName),
        member_to_tuple_element(obj.messageIdNumber),
        dynamic_string_member_to_tuple_element(obj.pMessage),
        member_to_tuple_element(obj.queueLabelCount),
        dynamic_array_member_to_tuple_element(obj.queueLabelCount, obj.pQueueLabels),
        member_to_tuple_element(obj.cmdBufLabelCount),
        dynamic_array_member_to_tuple_element(obj.cmdBufLabelCount, obj.pCmdBufLabels),
        member_to_tuple_element(obj.objectCount),
        dynamic_array_member_to_tuple_element(obj.objectCount, obj.pObjects),
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.messageSeverity),
        member_to_tuple_element(obj.messageType),
        obj.pfnUserCallback,
        obj.pUserData,
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.objectType),
        member_to_tuple_element(obj.objectHandle),
        dynamic_string_member_to_tuple_element(obj.pObjectName),
    );
}

template <>
inline auto structure_to_tuple<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.objectType),
        member_to_tuple_element(obj.objectHandle),
        member_to_tuple_element(obj.tagName),
        member_to_tuple_element(obj.tagSize),
        dynamic_array_member_to_tuple_element(obj.tagSize, obj.pTag),
    );
}

template <>
inline auto structure_to_tuple<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.dedicatedAllocation),
    );
}

template <>
inline auto structure_to_tuple<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.dedicatedAllocation),
    );
}

template <>
inline auto structure_to_tuple<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.image,
        obj.buffer,
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.operationHandle,
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj)
{
    return std::make_tuple(
        obj.buffer,
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.range),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj)
{
    return std::make_tuple(
        obj.sampler,
        obj.imageView,
        member_to_tuple_element(obj.imageLayout),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.maxSets),
        member_to_tuple_element(obj.poolSizeCount),
        dynamic_array_member_to_tuple_element(obj.poolSizeCount, obj.pPoolSizes),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxInlineUniformBlockBindings),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.descriptorCount),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.descriptorPool,
        member_to_tuple_element(obj.descriptorSetCount),
        dynamic_array_member_to_tuple_element(obj.descriptorSetCount, obj.pSetLayouts),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.binding),
        member_to_tuple_element(obj.descriptorType),
        member_to_tuple_element(obj.descriptorCount),
        member_to_tuple_element(obj.stageFlags),
        dynamic_array_member_to_tuple_element(obj.descriptorCount, obj.pImmutableSamplers),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.bindingCount),
        dynamic_array_member_to_tuple_element(obj.bindingCount, obj.pBindingFlags),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.bindingCount),
        dynamic_array_member_to_tuple_element(obj.bindingCount, obj.pBindings),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.supported),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.descriptorSetCount),
        dynamic_array_member_to_tuple_element(obj.descriptorSetCount, obj.pDescriptorCounts),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxVariableDescriptorCount),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.descriptorUpdateEntryCount),
        dynamic_array_member_to_tuple_element(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries),
        member_to_tuple_element(obj.templateType),
        obj.descriptorSetLayout,
        member_to_tuple_element(obj.pipelineBindPoint),
        obj.pipelineLayout,
        member_to_tuple_element(obj.set),
    );
}

template <>
inline auto structure_to_tuple<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.dstBinding),
        member_to_tuple_element(obj.dstArrayElement),
        member_to_tuple_element(obj.descriptorCount),
        member_to_tuple_element(obj.descriptorType),
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.stride),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.queueCreateInfoCount),
        dynamic_array_member_to_tuple_element(obj.queueCreateInfoCount, obj.pQueueCreateInfos),
        member_to_tuple_element(obj.enabledLayerCount),
        dynamic_string_array_member_to_tuple_element(obj.enabledLayerCount, obj.ppEnabledLayerNames),
        member_to_tuple_element(obj.enabledExtensionCount),
        dynamic_string_array_member_to_tuple_element(obj.enabledExtensionCount, obj.ppEnabledExtensionNames),
        obj.pEnabledFeatures,
    );
}

template <>
inline auto structure_to_tuple<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceEvent),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.resourceDeviceIndex),
        member_to_tuple_element(obj.memoryDeviceIndex),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceMask),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.physicalDeviceCount),
        dynamic_array_member_to_tuple_element(obj.physicalDeviceCount, obj.pPhysicalDevices),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        static_array_member_to_tuple_element(result.presentMask, obj.presentMask),
        member_to_tuple_element(obj.modes),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.swapchainCount),
        dynamic_array_member_to_tuple_element(obj.swapchainCount, obj.pDeviceMasks),
        member_to_tuple_element(obj.mode),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceMask),
        member_to_tuple_element(obj.deviceRenderAreaCount),
        dynamic_array_member_to_tuple_element(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.waitSemaphoreCount),
        dynamic_array_member_to_tuple_element(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices),
        member_to_tuple_element(obj.commandBufferCount),
        dynamic_array_member_to_tuple_element(obj.commandBufferCount, obj.pCommandBufferDeviceMasks),
        member_to_tuple_element(obj.signalSemaphoreCount),
        dynamic_array_member_to_tuple_element(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.modes),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.memory,
    );
}

template <>
inline auto structure_to_tuple<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.overallocationBehavior),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.queueFamilyIndex),
        member_to_tuple_element(obj.queueCount),
        dynamic_array_member_to_tuple_element(obj.queueCount, obj.pQueuePriorities),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.globalPriority),
    );
}

template <>
inline auto structure_to_tuple<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.queueFamilyIndex),
        member_to_tuple_element(obj.queueIndex),
    );
}

template <>
inline auto structure_to_tuple<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.x),
        member_to_tuple_element(obj.y),
        member_to_tuple_element(obj.z),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.displayEvent),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.parameters),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.visibleRegion),
        member_to_tuple_element(obj.refreshRate),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.displayModeProperties),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj)
{
    return std::make_tuple(
        obj.displayMode,
        member_to_tuple_element(obj.parameters),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.localDimmingSupport),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.capabilities),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.supportedAlpha),
        member_to_tuple_element(obj.minSrcPosition),
        member_to_tuple_element(obj.maxSrcPosition),
        member_to_tuple_element(obj.minSrcExtent),
        member_to_tuple_element(obj.maxSrcExtent),
        member_to_tuple_element(obj.minDstPosition),
        member_to_tuple_element(obj.maxDstPosition),
        member_to_tuple_element(obj.minDstExtent),
        member_to_tuple_element(obj.maxDstExtent),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.mode,
        member_to_tuple_element(obj.planeIndex),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.displayPlaneProperties),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj)
{
    return std::make_tuple(
        obj.currentDisplay,
        member_to_tuple_element(obj.currentStackIndex),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.powerState),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.srcRect),
        member_to_tuple_element(obj.dstRect),
        member_to_tuple_element(obj.persistent),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.displayProperties),
    );
}

template <>
inline auto structure_to_tuple<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj)
{
    return std::make_tuple(
        obj.display,
        dynamic_string_member_to_tuple_element(obj.displayName),
        member_to_tuple_element(obj.physicalDimensions),
        member_to_tuple_element(obj.physicalResolution),
        member_to_tuple_element(obj.supportedTransforms),
        member_to_tuple_element(obj.planeReorderPossible),
        member_to_tuple_element(obj.persistentContent),
    );
}

template <>
inline auto structure_to_tuple<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.displayMode,
        member_to_tuple_element(obj.planeIndex),
        member_to_tuple_element(obj.planeStackIndex),
        member_to_tuple_element(obj.transform),
        member_to_tuple_element(obj.globalAlpha),
        member_to_tuple_element(obj.alphaMode),
        member_to_tuple_element(obj.imageExtent),
    );
}

template <>
inline auto structure_to_tuple<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.indexCount),
        member_to_tuple_element(obj.instanceCount),
        member_to_tuple_element(obj.firstIndex),
        member_to_tuple_element(obj.vertexOffset),
        member_to_tuple_element(obj.firstInstance),
    );
}

template <>
inline auto structure_to_tuple<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.vertexCount),
        member_to_tuple_element(obj.instanceCount),
        member_to_tuple_element(obj.firstVertex),
        member_to_tuple_element(obj.firstInstance),
    );
}

template <>
inline auto structure_to_tuple<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.taskCount),
        member_to_tuple_element(obj.firstTask),
    );
}

template <>
inline auto structure_to_tuple<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.drmFormatModifier),
        member_to_tuple_element(obj.drmFormatModifierPlaneCount),
        member_to_tuple_element(obj.drmFormatModifierTilingFeatures),
    );
}

template <>
inline auto structure_to_tuple<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.drmFormatModifierCount),
        dynamic_array_member_to_tuple_element(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties),
    );
}

template <>
inline auto structure_to_tuple<VkEventCreateInfo>(const VkEventCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleTypes),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pAttributes,
        member_to_tuple_element(obj.dwAccess),
        member_to_tuple_element(obj.name),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleTypes),
    );
}

template <>
inline auto structure_to_tuple<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleTypes),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pAttributes,
        member_to_tuple_element(obj.dwAccess),
        member_to_tuple_element(obj.name),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pAttributes,
        member_to_tuple_element(obj.dwAccess),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleTypes),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pAttributes,
        member_to_tuple_element(obj.dwAccess),
        member_to_tuple_element(obj.name),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkExtensionProperties>(const VkExtensionProperties& obj)
{
    return std::make_tuple(
        static_array_member_to_tuple_element(result.extensionName, obj.extensionName);
        member_to_tuple_element(obj.specVersion),
    );
}

template <>
inline auto structure_to_tuple<VkExtent2D>(const VkExtent2D& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.width),
        member_to_tuple_element(obj.height),
    );
}

template <>
inline auto structure_to_tuple<VkExtent3D>(const VkExtent3D& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.width),
        member_to_tuple_element(obj.height),
        member_to_tuple_element(obj.depth),
    );
}

template <>
inline auto structure_to_tuple<VkExternalBufferProperties>(const VkExternalBufferProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.externalMemoryProperties),
    );
}

template <>
inline auto structure_to_tuple<VkExternalFenceProperties>(const VkExternalFenceProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.exportFromImportedHandleTypes),
        member_to_tuple_element(obj.compatibleHandleTypes),
        member_to_tuple_element(obj.externalFenceFeatures),
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.externalFormat),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.externalMemoryProperties),
    );
}

template <>
inline auto structure_to_tuple<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.imageFormatProperties),
        member_to_tuple_element(obj.externalMemoryFeatures),
        member_to_tuple_element(obj.exportFromImportedHandleTypes),
        member_to_tuple_element(obj.compatibleHandleTypes),
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleTypes),
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleTypes),
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleTypes),
    );
}

template <>
inline auto structure_to_tuple<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.externalMemoryFeatures),
        member_to_tuple_element(obj.exportFromImportedHandleTypes),
        member_to_tuple_element(obj.compatibleHandleTypes),
    );
}

template <>
inline auto structure_to_tuple<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.exportFromImportedHandleTypes),
        member_to_tuple_element(obj.compatibleHandleTypes),
        member_to_tuple_element(obj.externalSemaphoreFeatures),
    );
}

template <>
inline auto structure_to_tuple<VkFenceCreateInfo>(const VkFenceCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.fence,
        member_to_tuple_element(obj.handleType),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.fence,
        member_to_tuple_element(obj.handleType),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.filterCubic),
        member_to_tuple_element(obj.filterCubicMinmax),
    );
}

template <>
inline auto structure_to_tuple<VkFormatProperties>(const VkFormatProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.linearTilingFeatures),
        member_to_tuple_element(obj.optimalTilingFeatures),
        member_to_tuple_element(obj.bufferFeatures),
    );
}

template <>
inline auto structure_to_tuple<VkFormatProperties2>(const VkFormatProperties2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.formatProperties),
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.usage),
        member_to_tuple_element(obj.width),
        member_to_tuple_element(obj.height),
        member_to_tuple_element(obj.layerCount),
        member_to_tuple_element(obj.viewFormatCount),
        dynamic_array_member_to_tuple_element(obj.viewFormatCount, obj.pViewFormats),
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.attachmentImageInfoCount),
        dynamic_array_member_to_tuple_element(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos),
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.renderPass,
        member_to_tuple_element(obj.attachmentCount),
        dynamic_array_member_to_tuple_element(obj.attachmentCount, obj.pAttachments),
        member_to_tuple_element(obj.width),
        member_to_tuple_element(obj.height),
        member_to_tuple_element(obj.layers),
    );
}

template <>
inline auto structure_to_tuple<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.coverageReductionMode),
        member_to_tuple_element(obj.rasterizationSamples),
        member_to_tuple_element(obj.depthStencilSamples),
        member_to_tuple_element(obj.colorSamples),
    );
}

template <>
inline auto structure_to_tuple<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.pipelineBindPoint),
        obj.pipeline,
        obj.indirectCommandsLayout,
        member_to_tuple_element(obj.streamCount),
        dynamic_array_member_to_tuple_element(obj.streamCount, obj.pStreams),
        member_to_tuple_element(obj.sequencesCount),
        obj.preprocessBuffer,
        member_to_tuple_element(obj.preprocessOffset),
        member_to_tuple_element(obj.preprocessSize),
        obj.sequencesCountBuffer,
        member_to_tuple_element(obj.sequencesCountOffset),
        obj.sequencesIndexBuffer,
        member_to_tuple_element(obj.sequencesIndexOffset),
    );
}

template <>
inline auto structure_to_tuple<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.pipelineBindPoint),
        obj.pipeline,
        obj.indirectCommandsLayout,
        member_to_tuple_element(obj.maxSequencesCount),
    );
}

template <>
inline auto structure_to_tuple<VkGeometryAABBNV>(const VkGeometryAABBNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.aabbData,
        member_to_tuple_element(obj.numAABBs),
        member_to_tuple_element(obj.stride),
        member_to_tuple_element(obj.offset),
    );
}

template <>
inline auto structure_to_tuple<VkGeometryDataNV>(const VkGeometryDataNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.triangles),
        member_to_tuple_element(obj.aabbs),
    );
}

template <>
inline auto structure_to_tuple<VkGeometryNV>(const VkGeometryNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.geometryType),
        member_to_tuple_element(obj.geometry),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.vertexData,
        member_to_tuple_element(obj.vertexOffset),
        member_to_tuple_element(obj.vertexCount),
        member_to_tuple_element(obj.vertexStride),
        member_to_tuple_element(obj.vertexFormat),
        obj.indexData,
        member_to_tuple_element(obj.indexOffset),
        member_to_tuple_element(obj.indexCount),
        member_to_tuple_element(obj.indexType),
        obj.transformData,
        member_to_tuple_element(obj.transformOffset),
    );
}

template <>
inline auto structure_to_tuple<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.stageCount),
        dynamic_array_member_to_tuple_element(obj.stageCount, obj.pStages),
        obj.pVertexInputState,
        obj.pInputAssemblyState,
        obj.pTessellationState,
        obj.pViewportState,
        obj.pRasterizationState,
        obj.pMultisampleState,
        obj.pDepthStencilState,
        obj.pColorBlendState,
        obj.pDynamicState,
        obj.layout,
        obj.renderPass,
        member_to_tuple_element(obj.subpass),
        obj.basePipelineHandle,
        member_to_tuple_element(obj.basePipelineIndex),
    );
}

template <>
inline auto structure_to_tuple<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.groupCount),
        dynamic_array_member_to_tuple_element(obj.groupCount, obj.pGroups),
        member_to_tuple_element(obj.pipelineCount),
        dynamic_array_member_to_tuple_element(obj.pipelineCount, obj.pPipelines),
    );
}

template <>
inline auto structure_to_tuple<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.stageCount),
        dynamic_array_member_to_tuple_element(obj.stageCount, obj.pStages),
        obj.pVertexInputState,
        obj.pTessellationState,
    );
}

template <>
inline auto structure_to_tuple<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.displayPrimaryRed),
        member_to_tuple_element(obj.displayPrimaryGreen),
        member_to_tuple_element(obj.displayPrimaryBlue),
        member_to_tuple_element(obj.whitePoint),
        member_to_tuple_element(obj.maxLuminance),
        member_to_tuple_element(obj.minLuminance),
        member_to_tuple_element(obj.maxContentLightLevel),
        member_to_tuple_element(obj.maxFrameAverageLightLevel),
    );
}

template <>
inline auto structure_to_tuple<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
    );
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
inline auto structure_to_tuple<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.pView,
    );
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
inline auto structure_to_tuple<VkImageBlit>(const VkImageBlit& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.srcSubresource),
        static_array_member_to_tuple_element(result.srcOffsets, obj.srcOffsets),
        member_to_tuple_element(obj.dstSubresource),
        static_array_member_to_tuple_element(result.dstOffsets, obj.dstOffsets),
    );
}

template <>
inline auto structure_to_tuple<VkImageCopy>(const VkImageCopy& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.srcSubresource),
        member_to_tuple_element(obj.srcOffset),
        member_to_tuple_element(obj.dstSubresource),
        member_to_tuple_element(obj.dstOffset),
        member_to_tuple_element(obj.extent),
    );
}

template <>
inline auto structure_to_tuple<VkImageCreateInfo>(const VkImageCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.imageType),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.extent),
        member_to_tuple_element(obj.mipLevels),
        member_to_tuple_element(obj.arrayLayers),
        member_to_tuple_element(obj.samples),
        member_to_tuple_element(obj.tiling),
        member_to_tuple_element(obj.usage),
        member_to_tuple_element(obj.sharingMode),
        member_to_tuple_element(obj.queueFamilyIndexCount),
        dynamic_array_member_to_tuple_element(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices),
        member_to_tuple_element(obj.initialLayout),
    );
}

template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.drmFormatModifier),
        member_to_tuple_element(obj.drmFormatModifierPlaneCount),
        dynamic_array_member_to_tuple_element(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts),
    );
}

template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.drmFormatModifierCount),
        dynamic_array_member_to_tuple_element(obj.drmFormatModifierCount, obj.pDrmFormatModifiers),
    );
}

template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.drmFormatModifier),
    );
}

template <>
inline auto structure_to_tuple<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.viewFormatCount),
        dynamic_array_member_to_tuple_element(obj.viewFormatCount, obj.pViewFormats),
    );
}

template <>
inline auto structure_to_tuple<VkImageFormatProperties>(const VkImageFormatProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.maxExtent),
        member_to_tuple_element(obj.maxMipLevels),
        member_to_tuple_element(obj.maxArrayLayers),
        member_to_tuple_element(obj.sampleCounts),
        member_to_tuple_element(obj.maxResourceSize),
    );
}

template <>
inline auto structure_to_tuple<VkImageFormatProperties2>(const VkImageFormatProperties2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.imageFormatProperties),
    );
}

template <>
inline auto structure_to_tuple<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.srcAccessMask),
        member_to_tuple_element(obj.dstAccessMask),
        member_to_tuple_element(obj.oldLayout),
        member_to_tuple_element(obj.newLayout),
        member_to_tuple_element(obj.srcQueueFamilyIndex),
        member_to_tuple_element(obj.dstQueueFamilyIndex),
        obj.image,
        member_to_tuple_element(obj.subresourceRange),
    );
}

template <>
inline auto structure_to_tuple<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.image,
    );
}

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
inline auto structure_to_tuple<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.imagePipeHandle),
    );
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
inline auto structure_to_tuple<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.planeAspect),
    );
}

template <>
inline auto structure_to_tuple<VkImageResolve>(const VkImageResolve& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.srcSubresource),
        member_to_tuple_element(obj.srcOffset),
        member_to_tuple_element(obj.dstSubresource),
        member_to_tuple_element(obj.dstOffset),
        member_to_tuple_element(obj.extent),
    );
}

template <>
inline auto structure_to_tuple<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.image,
    );
}

template <>
inline auto structure_to_tuple<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.stencilUsage),
    );
}

template <>
inline auto structure_to_tuple<VkImageSubresource>(const VkImageSubresource& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.aspectMask),
        member_to_tuple_element(obj.mipLevel),
        member_to_tuple_element(obj.arrayLayer),
    );
}

template <>
inline auto structure_to_tuple<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.aspectMask),
        member_to_tuple_element(obj.mipLevel),
        member_to_tuple_element(obj.baseArrayLayer),
        member_to_tuple_element(obj.layerCount),
    );
}

template <>
inline auto structure_to_tuple<VkImageSubresourceRange>(const VkImageSubresourceRange& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.aspectMask),
        member_to_tuple_element(obj.baseMipLevel),
        member_to_tuple_element(obj.levelCount),
        member_to_tuple_element(obj.baseArrayLayer),
        member_to_tuple_element(obj.layerCount),
    );
}

template <>
inline auto structure_to_tuple<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.swapchain,
    );
}

template <>
inline auto structure_to_tuple<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.decodeMode),
    );
}

template <>
inline auto structure_to_tuple<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.image,
        member_to_tuple_element(obj.viewType),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.components),
        member_to_tuple_element(obj.subresourceRange),
    );
}

template <>
inline auto structure_to_tuple<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.imageView,
        member_to_tuple_element(obj.descriptorType),
        obj.sampler,
    );
}

template <>
inline auto structure_to_tuple<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.usage),
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.buffer,
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.fence,
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.handleType),
        member_to_tuple_element(obj.fd),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.fence,
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.handleType),
        member_to_tuple_element(obj.handle),
        member_to_tuple_element(obj.name),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleType),
        member_to_tuple_element(obj.fd),
    );
}

template <>
inline auto structure_to_tuple<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleType),
        obj.pHostPointer,
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleType),
        member_to_tuple_element(obj.handle),
        member_to_tuple_element(obj.name),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleType),
        member_to_tuple_element(obj.handle),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.semaphore,
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.handleType),
        member_to_tuple_element(obj.fd),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.semaphore,
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.handleType),
        member_to_tuple_element(obj.handle),
        member_to_tuple_element(obj.name),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.pipelineBindPoint),
        member_to_tuple_element(obj.tokenCount),
        dynamic_array_member_to_tuple_element(obj.tokenCount, obj.pTokens),
        member_to_tuple_element(obj.streamCount),
        dynamic_array_member_to_tuple_element(obj.streamCount, obj.pStreamStrides),
    );
}

template <>
inline auto structure_to_tuple<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.tokenType),
        member_to_tuple_element(obj.stream),
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.vertexBindingUnit),
        member_to_tuple_element(obj.vertexDynamicStride),
        obj.pushconstantPipelineLayout,
        member_to_tuple_element(obj.pushconstantShaderStageFlags),
        member_to_tuple_element(obj.pushconstantOffset),
        member_to_tuple_element(obj.pushconstantSize),
        member_to_tuple_element(obj.indirectStateFlags),
        member_to_tuple_element(obj.indexTypeCount),
        dynamic_array_member_to_tuple_element(obj.indexTypeCount, obj.pIndexTypes),
        dynamic_array_member_to_tuple_element(obj.indexTypeCount, obj.pIndexTypeValues),
    );
}

template <>
inline auto structure_to_tuple<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj)
{
    return std::make_tuple(
        obj.buffer,
        member_to_tuple_element(obj.offset),
    );
}

template <>
inline auto structure_to_tuple<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pUserData,
    );
}

template <>
inline auto structure_to_tuple<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.subpass),
        member_to_tuple_element(obj.inputAttachmentIndex),
        member_to_tuple_element(obj.aspectMask),
    );
}

template <>
inline auto structure_to_tuple<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.pApplicationInfo,
        member_to_tuple_element(obj.enabledLayerCount),
        dynamic_string_array_member_to_tuple_element(obj.enabledLayerCount, obj.ppEnabledLayerNames),
        member_to_tuple_element(obj.enabledExtensionCount),
        dynamic_string_array_member_to_tuple_element(obj.enabledExtensionCount, obj.ppEnabledExtensionNames),
    );
}

template <>
inline auto structure_to_tuple<VkLayerProperties>(const VkLayerProperties& obj)
{
    return std::make_tuple(
        static_array_member_to_tuple_element(result.layerName, obj.layerName);
        member_to_tuple_element(obj.specVersion),
        member_to_tuple_element(obj.implementationVersion),
        static_array_member_to_tuple_element(result.description, obj.description);
    );
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
inline auto structure_to_tuple<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.pView,
    );
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
inline auto structure_to_tuple<VkMappedMemoryRange>(const VkMappedMemoryRange& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.memory,
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.size),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.deviceMask),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.allocationSize),
        member_to_tuple_element(obj.memoryTypeIndex),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryBarrier>(const VkMemoryBarrier& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.srcAccessMask),
        member_to_tuple_element(obj.dstAccessMask),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.image,
        obj.buffer,
    );
}

template <>
inline auto structure_to_tuple<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.prefersDedicatedAllocation),
        member_to_tuple_element(obj.requiresDedicatedAllocation),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.memoryTypeBits),
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.memory,
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.memory,
        member_to_tuple_element(obj.handleType),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.memory,
        member_to_tuple_element(obj.handleType),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkMemoryHeap>(const VkMemoryHeap& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.size),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.memoryTypeBits),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.opaqueCaptureAddress),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.priority),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryRequirements>(const VkMemoryRequirements& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.size),
        member_to_tuple_element(obj.alignment),
        member_to_tuple_element(obj.memoryTypeBits),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryRequirements2>(const VkMemoryRequirements2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.memoryRequirements),
    );
}

template <>
inline auto structure_to_tuple<VkMemoryType>(const VkMemoryType& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.propertyFlags),
        member_to_tuple_element(obj.heapIndex),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.memoryTypeBits),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
inline auto structure_to_tuple<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.pLayer,
    );
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
inline auto structure_to_tuple<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxSampleLocationGridSize),
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.handle,
        member_to_tuple_element(obj.stride),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.usage),
        member_to_tuple_element(obj.usage2),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.consumer),
        member_to_tuple_element(obj.producer),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkOffset2D>(const VkOffset2D& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.x),
        member_to_tuple_element(obj.y),
    );
}

template <>
inline auto structure_to_tuple<VkOffset3D>(const VkOffset3D& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.x),
        member_to_tuple_element(obj.y),
        member_to_tuple_element(obj.z),
    );
}

template <>
inline auto structure_to_tuple<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.presentID),
        member_to_tuple_element(obj.desiredPresentTime),
        member_to_tuple_element(obj.actualPresentTime),
        member_to_tuple_element(obj.earliestPresentTime),
        member_to_tuple_element(obj.presentMargin),
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        static_array_member_to_tuple_element(result.name, obj.name);
        static_array_member_to_tuple_element(result.category, obj.category);
        static_array_member_to_tuple_element(result.description, obj.description);
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.unit),
        member_to_tuple_element(obj.scope),
        member_to_tuple_element(obj.storage),
        static_array_member_to_tuple_element(result.uuid, obj.uuid),
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.marker),
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.enable),
        member_to_tuple_element(obj.parameter),
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.counterPassIndex),
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.marker),
    );
}

template <>
inline auto structure_to_tuple<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.data),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.storageBuffer16BitAccess),
        member_to_tuple_element(obj.uniformAndStorageBuffer16BitAccess),
        member_to_tuple_element(obj.storagePushConstant16),
        member_to_tuple_element(obj.storageInputOutput16),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.storageBuffer8BitAccess),
        member_to_tuple_element(obj.uniformAndStorageBuffer8BitAccess),
        member_to_tuple_element(obj.storagePushConstant8),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.decodeModeSharedExponent),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.advancedBlendCoherentOperations),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.advancedBlendMaxColorAttachments),
        member_to_tuple_element(obj.advancedBlendIndependentBlend),
        member_to_tuple_element(obj.advancedBlendNonPremultipliedSrcColor),
        member_to_tuple_element(obj.advancedBlendNonPremultipliedDstColor),
        member_to_tuple_element(obj.advancedBlendCorrelatedOverlap),
        member_to_tuple_element(obj.advancedBlendAllOperations),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.bufferDeviceAddress),
        member_to_tuple_element(obj.bufferDeviceAddressCaptureReplay),
        member_to_tuple_element(obj.bufferDeviceAddressMultiDevice),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.bufferDeviceAddress),
        member_to_tuple_element(obj.bufferDeviceAddressCaptureReplay),
        member_to_tuple_element(obj.bufferDeviceAddressMultiDevice),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceCoherentMemory),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.computeDerivativeGroupQuads),
        member_to_tuple_element(obj.computeDerivativeGroupLinear),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.conditionalRendering),
        member_to_tuple_element(obj.inheritedConditionalRendering),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.primitiveOverestimationSize),
        member_to_tuple_element(obj.maxExtraPrimitiveOverestimationSize),
        member_to_tuple_element(obj.extraPrimitiveOverestimationSizeGranularity),
        member_to_tuple_element(obj.primitiveUnderestimation),
        member_to_tuple_element(obj.conservativePointAndLineRasterization),
        member_to_tuple_element(obj.degenerateTrianglesRasterized),
        member_to_tuple_element(obj.degenerateLinesRasterized),
        member_to_tuple_element(obj.fullyCoveredFragmentShaderInputVariable),
        member_to_tuple_element(obj.conservativeRasterizationPostDepthCoverage),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.cooperativeMatrix),
        member_to_tuple_element(obj.cooperativeMatrixRobustBufferAccess),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.cooperativeMatrixSupportedStages),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.cornerSampledImage),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.coverageReductionMode),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.dedicatedAllocationImageAliasing),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.depthClipEnable),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.supportedDepthResolveModes),
        member_to_tuple_element(obj.supportedStencilResolveModes),
        member_to_tuple_element(obj.independentResolveNone),
        member_to_tuple_element(obj.independentResolve),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderInputAttachmentArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderUniformTexelBufferArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderStorageTexelBufferArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderUniformBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderSampledImageArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderStorageBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderStorageImageArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderInputAttachmentArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderUniformTexelBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderStorageTexelBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.descriptorBindingUniformBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingSampledImageUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingStorageImageUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingStorageBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingUniformTexelBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingStorageTexelBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingUpdateUnusedWhilePending),
        member_to_tuple_element(obj.descriptorBindingPartiallyBound),
        member_to_tuple_element(obj.descriptorBindingVariableDescriptorCount),
        member_to_tuple_element(obj.runtimeDescriptorArray),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxUpdateAfterBindDescriptorsInAllPools),
        member_to_tuple_element(obj.shaderUniformBufferArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderSampledImageArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderStorageBufferArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderStorageImageArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderInputAttachmentArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.robustBufferAccessUpdateAfterBind),
        member_to_tuple_element(obj.quadDivergentImplicitLod),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindSamplers),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindSampledImages),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindStorageImages),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments),
        member_to_tuple_element(obj.maxPerStageUpdateAfterBindResources),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindSamplers),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindUniformBuffers),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindStorageBuffers),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindSampledImages),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindStorageImages),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindInputAttachments),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.deviceGeneratedCommands),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxGraphicsShaderGroupCount),
        member_to_tuple_element(obj.maxIndirectSequenceCount),
        member_to_tuple_element(obj.maxIndirectCommandsTokenCount),
        member_to_tuple_element(obj.maxIndirectCommandsStreamCount),
        member_to_tuple_element(obj.maxIndirectCommandsTokenOffset),
        member_to_tuple_element(obj.maxIndirectCommandsStreamStride),
        member_to_tuple_element(obj.minSequencesCountBufferOffsetAlignment),
        member_to_tuple_element(obj.minSequencesIndexBufferOffsetAlignment),
        member_to_tuple_element(obj.minIndirectCommandsBufferOffsetAlignment),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.diagnosticsConfig),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxDiscardRectangles),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.driverID),
        static_array_member_to_tuple_element(result.driverName, obj.driverName);
        static_array_member_to_tuple_element(result.driverInfo, obj.driverInfo);
        member_to_tuple_element(obj.conformanceVersion),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.exclusiveScissor),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.usage),
        member_to_tuple_element(obj.handleType),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleType),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleType),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.minImportedHostPointerAlignment),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.handleType),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.robustBufferAccess),
        member_to_tuple_element(obj.fullDrawIndexUint32),
        member_to_tuple_element(obj.imageCubeArray),
        member_to_tuple_element(obj.independentBlend),
        member_to_tuple_element(obj.geometryShader),
        member_to_tuple_element(obj.tessellationShader),
        member_to_tuple_element(obj.sampleRateShading),
        member_to_tuple_element(obj.dualSrcBlend),
        member_to_tuple_element(obj.logicOp),
        member_to_tuple_element(obj.multiDrawIndirect),
        member_to_tuple_element(obj.drawIndirectFirstInstance),
        member_to_tuple_element(obj.depthClamp),
        member_to_tuple_element(obj.depthBiasClamp),
        member_to_tuple_element(obj.fillModeNonSolid),
        member_to_tuple_element(obj.depthBounds),
        member_to_tuple_element(obj.wideLines),
        member_to_tuple_element(obj.largePoints),
        member_to_tuple_element(obj.alphaToOne),
        member_to_tuple_element(obj.multiViewport),
        member_to_tuple_element(obj.samplerAnisotropy),
        member_to_tuple_element(obj.textureCompressionETC2),
        member_to_tuple_element(obj.textureCompressionASTC_LDR),
        member_to_tuple_element(obj.textureCompressionBC),
        member_to_tuple_element(obj.occlusionQueryPrecise),
        member_to_tuple_element(obj.pipelineStatisticsQuery),
        member_to_tuple_element(obj.vertexPipelineStoresAndAtomics),
        member_to_tuple_element(obj.fragmentStoresAndAtomics),
        member_to_tuple_element(obj.shaderTessellationAndGeometryPointSize),
        member_to_tuple_element(obj.shaderImageGatherExtended),
        member_to_tuple_element(obj.shaderStorageImageExtendedFormats),
        member_to_tuple_element(obj.shaderStorageImageMultisample),
        member_to_tuple_element(obj.shaderStorageImageReadWithoutFormat),
        member_to_tuple_element(obj.shaderStorageImageWriteWithoutFormat),
        member_to_tuple_element(obj.shaderUniformBufferArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderSampledImageArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderStorageBufferArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderStorageImageArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderClipDistance),
        member_to_tuple_element(obj.shaderCullDistance),
        member_to_tuple_element(obj.shaderFloat64),
        member_to_tuple_element(obj.shaderInt64),
        member_to_tuple_element(obj.shaderInt16),
        member_to_tuple_element(obj.shaderResourceResidency),
        member_to_tuple_element(obj.shaderResourceMinLod),
        member_to_tuple_element(obj.sparseBinding),
        member_to_tuple_element(obj.sparseResidencyBuffer),
        member_to_tuple_element(obj.sparseResidencyImage2D),
        member_to_tuple_element(obj.sparseResidencyImage3D),
        member_to_tuple_element(obj.sparseResidency2Samples),
        member_to_tuple_element(obj.sparseResidency4Samples),
        member_to_tuple_element(obj.sparseResidency8Samples),
        member_to_tuple_element(obj.sparseResidency16Samples),
        member_to_tuple_element(obj.sparseResidencyAliased),
        member_to_tuple_element(obj.variableMultisampleRate),
        member_to_tuple_element(obj.inheritedQueries),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.features),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.denormBehaviorIndependence),
        member_to_tuple_element(obj.roundingModeIndependence),
        member_to_tuple_element(obj.shaderSignedZeroInfNanPreserveFloat16),
        member_to_tuple_element(obj.shaderSignedZeroInfNanPreserveFloat32),
        member_to_tuple_element(obj.shaderSignedZeroInfNanPreserveFloat64),
        member_to_tuple_element(obj.shaderDenormPreserveFloat16),
        member_to_tuple_element(obj.shaderDenormPreserveFloat32),
        member_to_tuple_element(obj.shaderDenormPreserveFloat64),
        member_to_tuple_element(obj.shaderDenormFlushToZeroFloat16),
        member_to_tuple_element(obj.shaderDenormFlushToZeroFloat32),
        member_to_tuple_element(obj.shaderDenormFlushToZeroFloat64),
        member_to_tuple_element(obj.shaderRoundingModeRTEFloat16),
        member_to_tuple_element(obj.shaderRoundingModeRTEFloat32),
        member_to_tuple_element(obj.shaderRoundingModeRTEFloat64),
        member_to_tuple_element(obj.shaderRoundingModeRTZFloat16),
        member_to_tuple_element(obj.shaderRoundingModeRTZFloat32),
        member_to_tuple_element(obj.shaderRoundingModeRTZFloat64),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.fragmentDensityMap),
        member_to_tuple_element(obj.fragmentDensityMapDynamic),
        member_to_tuple_element(obj.fragmentDensityMapNonSubsampledImages),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.minFragmentDensityTexelSize),
        member_to_tuple_element(obj.maxFragmentDensityTexelSize),
        member_to_tuple_element(obj.fragmentDensityInvocations),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.fragmentShaderBarycentric),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.fragmentShaderSampleInterlock),
        member_to_tuple_element(obj.fragmentShaderPixelInterlock),
        member_to_tuple_element(obj.fragmentShaderShadingRateInterlock),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.physicalDeviceCount),
        static_array_member_to_tuple_element(result.physicalDevices, obj.physicalDevices),
        member_to_tuple_element(obj.subsetAllocation),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.hostQueryReset),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        static_array_member_to_tuple_element(result.deviceUUID, obj.deviceUUID),
        static_array_member_to_tuple_element(result.driverUUID, obj.driverUUID),
        static_array_member_to_tuple_element(result.deviceLUID, obj.deviceLUID),
        member_to_tuple_element(obj.deviceNodeMask),
        member_to_tuple_element(obj.deviceLUIDValid),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.drmFormatModifier),
        member_to_tuple_element(obj.sharingMode),
        member_to_tuple_element(obj.queueFamilyIndexCount),
        dynamic_array_member_to_tuple_element(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.tiling),
        member_to_tuple_element(obj.usage),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.imageViewType),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.imagelessFramebuffer),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.indexTypeUint8),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.inlineUniformBlock),
        member_to_tuple_element(obj.descriptorBindingInlineUniformBlockUpdateAfterBind),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxInlineUniformBlockSize),
        member_to_tuple_element(obj.maxPerStageDescriptorInlineUniformBlocks),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks),
        member_to_tuple_element(obj.maxDescriptorSetInlineUniformBlocks),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.maxImageDimension1D),
        member_to_tuple_element(obj.maxImageDimension2D),
        member_to_tuple_element(obj.maxImageDimension3D),
        member_to_tuple_element(obj.maxImageDimensionCube),
        member_to_tuple_element(obj.maxImageArrayLayers),
        member_to_tuple_element(obj.maxTexelBufferElements),
        member_to_tuple_element(obj.maxUniformBufferRange),
        member_to_tuple_element(obj.maxStorageBufferRange),
        member_to_tuple_element(obj.maxPushConstantsSize),
        member_to_tuple_element(obj.maxMemoryAllocationCount),
        member_to_tuple_element(obj.maxSamplerAllocationCount),
        member_to_tuple_element(obj.bufferImageGranularity),
        member_to_tuple_element(obj.sparseAddressSpaceSize),
        member_to_tuple_element(obj.maxBoundDescriptorSets),
        member_to_tuple_element(obj.maxPerStageDescriptorSamplers),
        member_to_tuple_element(obj.maxPerStageDescriptorUniformBuffers),
        member_to_tuple_element(obj.maxPerStageDescriptorStorageBuffers),
        member_to_tuple_element(obj.maxPerStageDescriptorSampledImages),
        member_to_tuple_element(obj.maxPerStageDescriptorStorageImages),
        member_to_tuple_element(obj.maxPerStageDescriptorInputAttachments),
        member_to_tuple_element(obj.maxPerStageResources),
        member_to_tuple_element(obj.maxDescriptorSetSamplers),
        member_to_tuple_element(obj.maxDescriptorSetUniformBuffers),
        member_to_tuple_element(obj.maxDescriptorSetUniformBuffersDynamic),
        member_to_tuple_element(obj.maxDescriptorSetStorageBuffers),
        member_to_tuple_element(obj.maxDescriptorSetStorageBuffersDynamic),
        member_to_tuple_element(obj.maxDescriptorSetSampledImages),
        member_to_tuple_element(obj.maxDescriptorSetStorageImages),
        member_to_tuple_element(obj.maxDescriptorSetInputAttachments),
        member_to_tuple_element(obj.maxVertexInputAttributes),
        member_to_tuple_element(obj.maxVertexInputBindings),
        member_to_tuple_element(obj.maxVertexInputAttributeOffset),
        member_to_tuple_element(obj.maxVertexInputBindingStride),
        member_to_tuple_element(obj.maxVertexOutputComponents),
        member_to_tuple_element(obj.maxTessellationGenerationLevel),
        member_to_tuple_element(obj.maxTessellationPatchSize),
        member_to_tuple_element(obj.maxTessellationControlPerVertexInputComponents),
        member_to_tuple_element(obj.maxTessellationControlPerVertexOutputComponents),
        member_to_tuple_element(obj.maxTessellationControlPerPatchOutputComponents),
        member_to_tuple_element(obj.maxTessellationControlTotalOutputComponents),
        member_to_tuple_element(obj.maxTessellationEvaluationInputComponents),
        member_to_tuple_element(obj.maxTessellationEvaluationOutputComponents),
        member_to_tuple_element(obj.maxGeometryShaderInvocations),
        member_to_tuple_element(obj.maxGeometryInputComponents),
        member_to_tuple_element(obj.maxGeometryOutputComponents),
        member_to_tuple_element(obj.maxGeometryOutputVertices),
        member_to_tuple_element(obj.maxGeometryTotalOutputComponents),
        member_to_tuple_element(obj.maxFragmentInputComponents),
        member_to_tuple_element(obj.maxFragmentOutputAttachments),
        member_to_tuple_element(obj.maxFragmentDualSrcAttachments),
        member_to_tuple_element(obj.maxFragmentCombinedOutputResources),
        member_to_tuple_element(obj.maxComputeSharedMemorySize),
        static_array_member_to_tuple_element(result.maxComputeWorkGroupCount, obj.maxComputeWorkGroupCount),
        member_to_tuple_element(obj.maxComputeWorkGroupInvocations),
        static_array_member_to_tuple_element(result.maxComputeWorkGroupSize, obj.maxComputeWorkGroupSize),
        member_to_tuple_element(obj.subPixelPrecisionBits),
        member_to_tuple_element(obj.subTexelPrecisionBits),
        member_to_tuple_element(obj.mipmapPrecisionBits),
        member_to_tuple_element(obj.maxDrawIndexedIndexValue),
        member_to_tuple_element(obj.maxDrawIndirectCount),
        member_to_tuple_element(obj.maxSamplerLodBias),
        member_to_tuple_element(obj.maxSamplerAnisotropy),
        member_to_tuple_element(obj.maxViewports),
        static_array_member_to_tuple_element(result.maxViewportDimensions, obj.maxViewportDimensions),
        static_array_member_to_tuple_element(result.viewportBoundsRange, obj.viewportBoundsRange),
        member_to_tuple_element(obj.viewportSubPixelBits),
        member_to_tuple_element(obj.minMemoryMapAlignment),
        member_to_tuple_element(obj.minTexelBufferOffsetAlignment),
        member_to_tuple_element(obj.minUniformBufferOffsetAlignment),
        member_to_tuple_element(obj.minStorageBufferOffsetAlignment),
        member_to_tuple_element(obj.minTexelOffset),
        member_to_tuple_element(obj.maxTexelOffset),
        member_to_tuple_element(obj.minTexelGatherOffset),
        member_to_tuple_element(obj.maxTexelGatherOffset),
        member_to_tuple_element(obj.minInterpolationOffset),
        member_to_tuple_element(obj.maxInterpolationOffset),
        member_to_tuple_element(obj.subPixelInterpolationOffsetBits),
        member_to_tuple_element(obj.maxFramebufferWidth),
        member_to_tuple_element(obj.maxFramebufferHeight),
        member_to_tuple_element(obj.maxFramebufferLayers),
        member_to_tuple_element(obj.framebufferColorSampleCounts),
        member_to_tuple_element(obj.framebufferDepthSampleCounts),
        member_to_tuple_element(obj.framebufferStencilSampleCounts),
        member_to_tuple_element(obj.framebufferNoAttachmentsSampleCounts),
        member_to_tuple_element(obj.maxColorAttachments),
        member_to_tuple_element(obj.sampledImageColorSampleCounts),
        member_to_tuple_element(obj.sampledImageIntegerSampleCounts),
        member_to_tuple_element(obj.sampledImageDepthSampleCounts),
        member_to_tuple_element(obj.sampledImageStencilSampleCounts),
        member_to_tuple_element(obj.storageImageSampleCounts),
        member_to_tuple_element(obj.maxSampleMaskWords),
        member_to_tuple_element(obj.timestampComputeAndGraphics),
        member_to_tuple_element(obj.timestampPeriod),
        member_to_tuple_element(obj.maxClipDistances),
        member_to_tuple_element(obj.maxCullDistances),
        member_to_tuple_element(obj.maxCombinedClipAndCullDistances),
        member_to_tuple_element(obj.discreteQueuePriorities),
        static_array_member_to_tuple_element(result.pointSizeRange, obj.pointSizeRange),
        static_array_member_to_tuple_element(result.lineWidthRange, obj.lineWidthRange),
        member_to_tuple_element(obj.pointSizeGranularity),
        member_to_tuple_element(obj.lineWidthGranularity),
        member_to_tuple_element(obj.strictLines),
        member_to_tuple_element(obj.standardSampleLocations),
        member_to_tuple_element(obj.optimalBufferCopyOffsetAlignment),
        member_to_tuple_element(obj.optimalBufferCopyRowPitchAlignment),
        member_to_tuple_element(obj.nonCoherentAtomSize),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.rectangularLines),
        member_to_tuple_element(obj.bresenhamLines),
        member_to_tuple_element(obj.smoothLines),
        member_to_tuple_element(obj.stippledRectangularLines),
        member_to_tuple_element(obj.stippledBresenhamLines),
        member_to_tuple_element(obj.stippledSmoothLines),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.lineSubPixelPrecisionBits),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxPerSetDescriptors),
        member_to_tuple_element(obj.maxMemoryAllocationSize),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        static_array_member_to_tuple_element(result.heapBudget, obj.heapBudget),
        static_array_member_to_tuple_element(result.heapUsage, obj.heapUsage),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.memoryPriority),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.memoryTypeCount),
        static_array_member_to_tuple_element(result.memoryTypes, obj.memoryTypes),
        member_to_tuple_element(obj.memoryHeapCount),
        static_array_member_to_tuple_element(result.memoryHeaps, obj.memoryHeaps),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.memoryProperties),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.taskShader),
        member_to_tuple_element(obj.meshShader),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxDrawMeshTasksCount),
        member_to_tuple_element(obj.maxTaskWorkGroupInvocations),
        static_array_member_to_tuple_element(result.maxTaskWorkGroupSize, obj.maxTaskWorkGroupSize),
        member_to_tuple_element(obj.maxTaskTotalMemorySize),
        member_to_tuple_element(obj.maxTaskOutputCount),
        member_to_tuple_element(obj.maxMeshWorkGroupInvocations),
        static_array_member_to_tuple_element(result.maxMeshWorkGroupSize, obj.maxMeshWorkGroupSize),
        member_to_tuple_element(obj.maxMeshTotalMemorySize),
        member_to_tuple_element(obj.maxMeshOutputVertices),
        member_to_tuple_element(obj.maxMeshOutputPrimitives),
        member_to_tuple_element(obj.maxMeshMultiviewViewCount),
        member_to_tuple_element(obj.meshOutputPerVertexGranularity),
        member_to_tuple_element(obj.meshOutputPerPrimitiveGranularity),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.multiview),
        member_to_tuple_element(obj.multiviewGeometryShader),
        member_to_tuple_element(obj.multiviewTessellationShader),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.perViewPositionAllComponents),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxMultiviewViewCount),
        member_to_tuple_element(obj.maxMultiviewInstanceIndex),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.pciDomain),
        member_to_tuple_element(obj.pciBus),
        member_to_tuple_element(obj.pciDevice),
        member_to_tuple_element(obj.pciFunction),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.performanceCounterQueryPools),
        member_to_tuple_element(obj.performanceCounterMultipleQueryPools),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.allowCommandBufferQueryCopies),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.pipelineCreationCacheControl),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.pipelineExecutableInfo),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.pointClippingBehavior),
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.sharedImage),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.apiVersion),
        member_to_tuple_element(obj.driverVersion),
        member_to_tuple_element(obj.vendorID),
        member_to_tuple_element(obj.deviceID),
        member_to_tuple_element(obj.deviceType),
        static_array_member_to_tuple_element(result.deviceName, obj.deviceName);
        static_array_member_to_tuple_element(result.pipelineCacheUUID, obj.pipelineCacheUUID),
        member_to_tuple_element(obj.limits),
        member_to_tuple_element(obj.sparseProperties),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.properties),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.protectedMemory),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.protectedNoFault),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxPushDescriptors),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.rayTracing),
        member_to_tuple_element(obj.rayTracingShaderGroupHandleCaptureReplay),
        member_to_tuple_element(obj.rayTracingShaderGroupHandleCaptureReplayMixed),
        member_to_tuple_element(obj.rayTracingAccelerationStructureCaptureReplay),
        member_to_tuple_element(obj.rayTracingIndirectTraceRays),
        member_to_tuple_element(obj.rayTracingIndirectAccelerationStructureBuild),
        member_to_tuple_element(obj.rayTracingHostAccelerationStructureCommands),
        member_to_tuple_element(obj.rayQuery),
        member_to_tuple_element(obj.rayTracingPrimitiveCulling),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderGroupHandleSize),
        member_to_tuple_element(obj.maxRecursionDepth),
        member_to_tuple_element(obj.maxShaderGroupStride),
        member_to_tuple_element(obj.shaderGroupBaseAlignment),
        member_to_tuple_element(obj.maxGeometryCount),
        member_to_tuple_element(obj.maxInstanceCount),
        member_to_tuple_element(obj.maxPrimitiveCount),
        member_to_tuple_element(obj.maxDescriptorSetAccelerationStructures),
        member_to_tuple_element(obj.shaderGroupHandleCaptureReplaySize),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderGroupHandleSize),
        member_to_tuple_element(obj.maxRecursionDepth),
        member_to_tuple_element(obj.maxShaderGroupStride),
        member_to_tuple_element(obj.shaderGroupBaseAlignment),
        member_to_tuple_element(obj.maxGeometryCount),
        member_to_tuple_element(obj.maxInstanceCount),
        member_to_tuple_element(obj.maxTriangleCount),
        member_to_tuple_element(obj.maxDescriptorSetAccelerationStructures),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.representativeFragmentTest),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.sampleLocationSampleCounts),
        member_to_tuple_element(obj.maxSampleLocationGridSize),
        static_array_member_to_tuple_element(result.sampleLocationCoordinateRange, obj.sampleLocationCoordinateRange),
        member_to_tuple_element(obj.sampleLocationSubPixelBits),
        member_to_tuple_element(obj.variableSampleLocations),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.filterMinmaxSingleComponentFormats),
        member_to_tuple_element(obj.filterMinmaxImageComponentMapping),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.samplerYcbcrConversion),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.scalarBlockLayout),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.separateDepthStencilLayouts),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderBufferInt64Atomics),
        member_to_tuple_element(obj.shaderSharedInt64Atomics),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderSubgroupClock),
        member_to_tuple_element(obj.shaderDeviceClock),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderCoreFeatures),
        member_to_tuple_element(obj.activeComputeUnitCount),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderEngineCount),
        member_to_tuple_element(obj.shaderArraysPerEngineCount),
        member_to_tuple_element(obj.computeUnitsPerShaderArray),
        member_to_tuple_element(obj.simdPerComputeUnit),
        member_to_tuple_element(obj.wavefrontsPerSimd),
        member_to_tuple_element(obj.wavefrontSize),
        member_to_tuple_element(obj.sgprsPerSimd),
        member_to_tuple_element(obj.minSgprAllocation),
        member_to_tuple_element(obj.maxSgprAllocation),
        member_to_tuple_element(obj.sgprAllocationGranularity),
        member_to_tuple_element(obj.vgprsPerSimd),
        member_to_tuple_element(obj.minVgprAllocation),
        member_to_tuple_element(obj.maxVgprAllocation),
        member_to_tuple_element(obj.vgprAllocationGranularity),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderDemoteToHelperInvocation),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderDrawParameters),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderFloat16),
        member_to_tuple_element(obj.shaderInt8),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.imageFootprint),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderIntegerFunctions2),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderSMBuiltins),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderSMCount),
        member_to_tuple_element(obj.shaderWarpsPerSM),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shaderSubgroupExtendedTypes),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shadingRateImage),
        member_to_tuple_element(obj.shadingRateCoarseSampleOrder),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shadingRateTexelSize),
        member_to_tuple_element(obj.shadingRatePaletteSize),
        member_to_tuple_element(obj.shadingRateMaxCoarseSamples),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.samples),
        member_to_tuple_element(obj.usage),
        member_to_tuple_element(obj.tiling),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.residencyStandard2DBlockShape),
        member_to_tuple_element(obj.residencyStandard2DMultisampleBlockShape),
        member_to_tuple_element(obj.residencyStandard3DBlockShape),
        member_to_tuple_element(obj.residencyAlignedMipSize),
        member_to_tuple_element(obj.residencyNonResidentStrict),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.subgroupSize),
        member_to_tuple_element(obj.supportedStages),
        member_to_tuple_element(obj.supportedOperations),
        member_to_tuple_element(obj.quadOperationsInAllStages),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.subgroupSizeControl),
        member_to_tuple_element(obj.computeFullSubgroups),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.minSubgroupSize),
        member_to_tuple_element(obj.maxSubgroupSize),
        member_to_tuple_element(obj.maxComputeWorkgroupSubgroups),
        member_to_tuple_element(obj.requiredSubgroupSizeStages),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.surface,
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.texelBufferAlignment),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.storageTexelBufferOffsetAlignmentBytes),
        member_to_tuple_element(obj.storageTexelBufferOffsetSingleTexelAlignment),
        member_to_tuple_element(obj.uniformTexelBufferOffsetAlignmentBytes),
        member_to_tuple_element(obj.uniformTexelBufferOffsetSingleTexelAlignment),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.textureCompressionASTC_HDR),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.timelineSemaphore),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxTimelineSemaphoreValueDifference),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        static_array_member_to_tuple_element(result.name, obj.name);
        static_array_member_to_tuple_element(result.version, obj.version);
        member_to_tuple_element(obj.purposes),
        static_array_member_to_tuple_element(result.description, obj.description);
        static_array_member_to_tuple_element(result.layer, obj.layer);
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.transformFeedback),
        member_to_tuple_element(obj.geometryStreams),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxTransformFeedbackStreams),
        member_to_tuple_element(obj.maxTransformFeedbackBuffers),
        member_to_tuple_element(obj.maxTransformFeedbackBufferSize),
        member_to_tuple_element(obj.maxTransformFeedbackStreamDataSize),
        member_to_tuple_element(obj.maxTransformFeedbackBufferDataSize),
        member_to_tuple_element(obj.maxTransformFeedbackBufferDataStride),
        member_to_tuple_element(obj.transformFeedbackQueries),
        member_to_tuple_element(obj.transformFeedbackStreamsLinesTriangles),
        member_to_tuple_element(obj.transformFeedbackRasterizationStreamSelect),
        member_to_tuple_element(obj.transformFeedbackDraw),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.uniformBufferStandardLayout),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.variablePointersStorageBuffer),
        member_to_tuple_element(obj.variablePointers),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.vertexAttributeInstanceRateDivisor),
        member_to_tuple_element(obj.vertexAttributeInstanceRateZeroDivisor),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxVertexAttribDivisor),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.storageBuffer16BitAccess),
        member_to_tuple_element(obj.uniformAndStorageBuffer16BitAccess),
        member_to_tuple_element(obj.storagePushConstant16),
        member_to_tuple_element(obj.storageInputOutput16),
        member_to_tuple_element(obj.multiview),
        member_to_tuple_element(obj.multiviewGeometryShader),
        member_to_tuple_element(obj.multiviewTessellationShader),
        member_to_tuple_element(obj.variablePointersStorageBuffer),
        member_to_tuple_element(obj.variablePointers),
        member_to_tuple_element(obj.protectedMemory),
        member_to_tuple_element(obj.samplerYcbcrConversion),
        member_to_tuple_element(obj.shaderDrawParameters),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        static_array_member_to_tuple_element(result.deviceUUID, obj.deviceUUID),
        static_array_member_to_tuple_element(result.driverUUID, obj.driverUUID),
        static_array_member_to_tuple_element(result.deviceLUID, obj.deviceLUID),
        member_to_tuple_element(obj.deviceNodeMask),
        member_to_tuple_element(obj.deviceLUIDValid),
        member_to_tuple_element(obj.subgroupSize),
        member_to_tuple_element(obj.subgroupSupportedStages),
        member_to_tuple_element(obj.subgroupSupportedOperations),
        member_to_tuple_element(obj.subgroupQuadOperationsInAllStages),
        member_to_tuple_element(obj.pointClippingBehavior),
        member_to_tuple_element(obj.maxMultiviewViewCount),
        member_to_tuple_element(obj.maxMultiviewInstanceIndex),
        member_to_tuple_element(obj.protectedNoFault),
        member_to_tuple_element(obj.maxPerSetDescriptors),
        member_to_tuple_element(obj.maxMemoryAllocationSize),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.samplerMirrorClampToEdge),
        member_to_tuple_element(obj.drawIndirectCount),
        member_to_tuple_element(obj.storageBuffer8BitAccess),
        member_to_tuple_element(obj.uniformAndStorageBuffer8BitAccess),
        member_to_tuple_element(obj.storagePushConstant8),
        member_to_tuple_element(obj.shaderBufferInt64Atomics),
        member_to_tuple_element(obj.shaderSharedInt64Atomics),
        member_to_tuple_element(obj.shaderFloat16),
        member_to_tuple_element(obj.shaderInt8),
        member_to_tuple_element(obj.descriptorIndexing),
        member_to_tuple_element(obj.shaderInputAttachmentArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderUniformTexelBufferArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderStorageTexelBufferArrayDynamicIndexing),
        member_to_tuple_element(obj.shaderUniformBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderSampledImageArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderStorageBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderStorageImageArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderInputAttachmentArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderUniformTexelBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.shaderStorageTexelBufferArrayNonUniformIndexing),
        member_to_tuple_element(obj.descriptorBindingUniformBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingSampledImageUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingStorageImageUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingStorageBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingUniformTexelBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingStorageTexelBufferUpdateAfterBind),
        member_to_tuple_element(obj.descriptorBindingUpdateUnusedWhilePending),
        member_to_tuple_element(obj.descriptorBindingPartiallyBound),
        member_to_tuple_element(obj.descriptorBindingVariableDescriptorCount),
        member_to_tuple_element(obj.runtimeDescriptorArray),
        member_to_tuple_element(obj.samplerFilterMinmax),
        member_to_tuple_element(obj.scalarBlockLayout),
        member_to_tuple_element(obj.imagelessFramebuffer),
        member_to_tuple_element(obj.uniformBufferStandardLayout),
        member_to_tuple_element(obj.shaderSubgroupExtendedTypes),
        member_to_tuple_element(obj.separateDepthStencilLayouts),
        member_to_tuple_element(obj.hostQueryReset),
        member_to_tuple_element(obj.timelineSemaphore),
        member_to_tuple_element(obj.bufferDeviceAddress),
        member_to_tuple_element(obj.bufferDeviceAddressCaptureReplay),
        member_to_tuple_element(obj.bufferDeviceAddressMultiDevice),
        member_to_tuple_element(obj.vulkanMemoryModel),
        member_to_tuple_element(obj.vulkanMemoryModelDeviceScope),
        member_to_tuple_element(obj.vulkanMemoryModelAvailabilityVisibilityChains),
        member_to_tuple_element(obj.shaderOutputViewportIndex),
        member_to_tuple_element(obj.shaderOutputLayer),
        member_to_tuple_element(obj.subgroupBroadcastDynamicId),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.driverID),
        static_array_member_to_tuple_element(result.driverName, obj.driverName);
        static_array_member_to_tuple_element(result.driverInfo, obj.driverInfo);
        member_to_tuple_element(obj.conformanceVersion),
        member_to_tuple_element(obj.denormBehaviorIndependence),
        member_to_tuple_element(obj.roundingModeIndependence),
        member_to_tuple_element(obj.shaderSignedZeroInfNanPreserveFloat16),
        member_to_tuple_element(obj.shaderSignedZeroInfNanPreserveFloat32),
        member_to_tuple_element(obj.shaderSignedZeroInfNanPreserveFloat64),
        member_to_tuple_element(obj.shaderDenormPreserveFloat16),
        member_to_tuple_element(obj.shaderDenormPreserveFloat32),
        member_to_tuple_element(obj.shaderDenormPreserveFloat64),
        member_to_tuple_element(obj.shaderDenormFlushToZeroFloat16),
        member_to_tuple_element(obj.shaderDenormFlushToZeroFloat32),
        member_to_tuple_element(obj.shaderDenormFlushToZeroFloat64),
        member_to_tuple_element(obj.shaderRoundingModeRTEFloat16),
        member_to_tuple_element(obj.shaderRoundingModeRTEFloat32),
        member_to_tuple_element(obj.shaderRoundingModeRTEFloat64),
        member_to_tuple_element(obj.shaderRoundingModeRTZFloat16),
        member_to_tuple_element(obj.shaderRoundingModeRTZFloat32),
        member_to_tuple_element(obj.shaderRoundingModeRTZFloat64),
        member_to_tuple_element(obj.maxUpdateAfterBindDescriptorsInAllPools),
        member_to_tuple_element(obj.shaderUniformBufferArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderSampledImageArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderStorageBufferArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderStorageImageArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.shaderInputAttachmentArrayNonUniformIndexingNative),
        member_to_tuple_element(obj.robustBufferAccessUpdateAfterBind),
        member_to_tuple_element(obj.quadDivergentImplicitLod),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindSamplers),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindSampledImages),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindStorageImages),
        member_to_tuple_element(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments),
        member_to_tuple_element(obj.maxPerStageUpdateAfterBindResources),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindSamplers),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindUniformBuffers),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindStorageBuffers),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindSampledImages),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindStorageImages),
        member_to_tuple_element(obj.maxDescriptorSetUpdateAfterBindInputAttachments),
        member_to_tuple_element(obj.supportedDepthResolveModes),
        member_to_tuple_element(obj.supportedStencilResolveModes),
        member_to_tuple_element(obj.independentResolveNone),
        member_to_tuple_element(obj.independentResolve),
        member_to_tuple_element(obj.filterMinmaxSingleComponentFormats),
        member_to_tuple_element(obj.filterMinmaxImageComponentMapping),
        member_to_tuple_element(obj.maxTimelineSemaphoreValueDifference),
        member_to_tuple_element(obj.framebufferIntegerColorSampleCounts),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.vulkanMemoryModel),
        member_to_tuple_element(obj.vulkanMemoryModelDeviceScope),
        member_to_tuple_element(obj.vulkanMemoryModelAvailabilityVisibilityChains),
    );
}

template <>
inline auto structure_to_tuple<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.ycbcrImageArrays),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.initialDataSize),
        dynamic_array_member_to_tuple_element(obj.initialDataSize, obj.pInitialData),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.srcPremultiplied),
        member_to_tuple_element(obj.dstPremultiplied),
        member_to_tuple_element(obj.blendOverlap),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.blendEnable),
        member_to_tuple_element(obj.srcColorBlendFactor),
        member_to_tuple_element(obj.dstColorBlendFactor),
        member_to_tuple_element(obj.colorBlendOp),
        member_to_tuple_element(obj.srcAlphaBlendFactor),
        member_to_tuple_element(obj.dstAlphaBlendFactor),
        member_to_tuple_element(obj.alphaBlendOp),
        member_to_tuple_element(obj.colorWriteMask),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.logicOpEnable),
        member_to_tuple_element(obj.logicOp),
        member_to_tuple_element(obj.attachmentCount),
        dynamic_array_member_to_tuple_element(obj.attachmentCount, obj.pAttachments),
        static_array_member_to_tuple_element(result.blendConstants, obj.blendConstants),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.compilerControlFlags),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.coverageModulationMode),
        member_to_tuple_element(obj.coverageModulationTableEnable),
        member_to_tuple_element(obj.coverageModulationTableCount),
        dynamic_array_member_to_tuple_element(obj.coverageModulationTableCount, obj.pCoverageModulationTable),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.coverageReductionMode),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.coverageToColorEnable),
        member_to_tuple_element(obj.coverageToColorLocation),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pPipelineCreationFeedback,
        member_to_tuple_element(obj.pipelineStageCreationFeedbackCount),
        dynamic_array_member_to_tuple_element(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.duration),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.depthTestEnable),
        member_to_tuple_element(obj.depthWriteEnable),
        member_to_tuple_element(obj.depthCompareOp),
        member_to_tuple_element(obj.depthBoundsTestEnable),
        member_to_tuple_element(obj.stencilTestEnable),
        member_to_tuple_element(obj.front),
        member_to_tuple_element(obj.back),
        member_to_tuple_element(obj.minDepthBounds),
        member_to_tuple_element(obj.maxDepthBounds),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.discardRectangleMode),
        member_to_tuple_element(obj.discardRectangleCount),
        dynamic_array_member_to_tuple_element(obj.discardRectangleCount, obj.pDiscardRectangles),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.dynamicStateCount),
        dynamic_array_member_to_tuple_element(obj.dynamicStateCount, obj.pDynamicStates),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pipeline,
        member_to_tuple_element(obj.executableIndex),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        static_array_member_to_tuple_element(result.name, obj.name);
        static_array_member_to_tuple_element(result.description, obj.description);
        member_to_tuple_element(obj.isText),
        member_to_tuple_element(obj.dataSize),
        dynamic_array_member_to_tuple_element(obj.dataSize, obj.pData),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.stages),
        static_array_member_to_tuple_element(result.name, obj.name);
        static_array_member_to_tuple_element(result.description, obj.description);
        member_to_tuple_element(obj.subgroupSize),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        static_array_member_to_tuple_element(result.name, obj.name);
        static_array_member_to_tuple_element(result.description, obj.description);
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.value),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.pipeline,
    );
}

template <>
inline auto structure_to_tuple<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.topology),
        member_to_tuple_element(obj.primitiveRestartEnable),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.setLayoutCount),
        dynamic_array_member_to_tuple_element(obj.setLayoutCount, obj.pSetLayouts),
        member_to_tuple_element(obj.pushConstantRangeCount),
        dynamic_array_member_to_tuple_element(obj.pushConstantRangeCount, obj.pPushConstantRanges),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.libraryCount),
        dynamic_array_member_to_tuple_element(obj.libraryCount, obj.pLibraries),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.rasterizationSamples),
        member_to_tuple_element(obj.sampleShadingEnable),
        member_to_tuple_element(obj.minSampleShading),
        dynamic_array_member_to_tuple_element(obj.latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil], obj.pSampleMask),
        member_to_tuple_element(obj.alphaToCoverageEnable),
        member_to_tuple_element(obj.alphaToOneEnable),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.conservativeRasterizationMode),
        member_to_tuple_element(obj.extraPrimitiveOverestimationSize),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.depthClipEnable),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.lineRasterizationMode),
        member_to_tuple_element(obj.stippledLineEnable),
        member_to_tuple_element(obj.lineStippleFactor),
        member_to_tuple_element(obj.lineStipplePattern),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.depthClampEnable),
        member_to_tuple_element(obj.rasterizerDiscardEnable),
        member_to_tuple_element(obj.polygonMode),
        member_to_tuple_element(obj.cullMode),
        member_to_tuple_element(obj.frontFace),
        member_to_tuple_element(obj.depthBiasEnable),
        member_to_tuple_element(obj.depthBiasConstantFactor),
        member_to_tuple_element(obj.depthBiasClamp),
        member_to_tuple_element(obj.depthBiasSlopeFactor),
        member_to_tuple_element(obj.lineWidth),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.rasterizationOrder),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.rasterizationStream),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.representativeFragmentTestEnable),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.sampleLocationsEnable),
        member_to_tuple_element(obj.sampleLocationsInfo),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.stage),
        obj.module,
        dynamic_string_member_to_tuple_element(obj.pName),
        obj.pSpecializationInfo,
    );
}

template <>
inline auto structure_to_tuple<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.requiredSubgroupSize),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.domainOrigin),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.patchControlPoints),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.vertexBindingDivisorCount),
        dynamic_array_member_to_tuple_element(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.vertexBindingDescriptionCount),
        dynamic_array_member_to_tuple_element(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions),
        member_to_tuple_element(obj.vertexAttributeDescriptionCount),
        dynamic_array_member_to_tuple_element(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.sampleOrderType),
        member_to_tuple_element(obj.customSampleOrderCount),
        dynamic_array_member_to_tuple_element(obj.customSampleOrderCount, obj.pCustomSampleOrders),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.exclusiveScissorCount),
        dynamic_array_member_to_tuple_element(obj.exclusiveScissorCount, obj.pExclusiveScissors),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.shadingRateImageEnable),
        member_to_tuple_element(obj.viewportCount),
        dynamic_array_member_to_tuple_element(obj.viewportCount, obj.pShadingRatePalettes),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.viewportCount),
        dynamic_array_member_to_tuple_element(obj.viewportCount, obj.pViewports),
        member_to_tuple_element(obj.scissorCount),
        dynamic_array_member_to_tuple_element(obj.scissorCount, obj.pScissors),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.viewportCount),
        dynamic_array_member_to_tuple_element(obj.viewportCount, obj.pViewportSwizzles),
    );
}

template <>
inline auto structure_to_tuple<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.viewportWScalingEnable),
        member_to_tuple_element(obj.viewportCount),
        dynamic_array_member_to_tuple_element(obj.viewportCount, obj.pViewportWScalings),
    );
}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto structure_to_tuple<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.frameToken),
    );
}
#endif // VK_USE_PLATFORM_GGP

template <>
inline auto structure_to_tuple<VkPresentInfoKHR>(const VkPresentInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.waitSemaphoreCount),
        dynamic_array_member_to_tuple_element(obj.waitSemaphoreCount, obj.pWaitSemaphores),
        member_to_tuple_element(obj.swapchainCount),
        dynamic_array_member_to_tuple_element(obj.swapchainCount, obj.pSwapchains),
        dynamic_array_member_to_tuple_element(obj.swapchainCount, obj.pImageIndices),
        dynamic_array_member_to_tuple_element(obj.swapchainCount, obj.pResults),
    );
}

template <>
inline auto structure_to_tuple<VkPresentRegionKHR>(const VkPresentRegionKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.rectangleCount),
        dynamic_array_member_to_tuple_element(obj.rectangleCount, obj.pRectangles),
    );
}

template <>
inline auto structure_to_tuple<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.swapchainCount),
        dynamic_array_member_to_tuple_element(obj.swapchainCount, obj.pRegions),
    );
}

template <>
inline auto structure_to_tuple<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.presentID),
        member_to_tuple_element(obj.desiredPresentTime),
    );
}

template <>
inline auto structure_to_tuple<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.swapchainCount),
        dynamic_array_member_to_tuple_element(obj.swapchainCount, obj.pTimes),
    );
}

template <>
inline auto structure_to_tuple<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.protectedSubmit),
    );
}

template <>
inline auto structure_to_tuple<VkPushConstantRange>(const VkPushConstantRange& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.stageFlags),
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.size),
    );
}

template <>
inline auto structure_to_tuple<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.queryType),
        member_to_tuple_element(obj.queryCount),
        member_to_tuple_element(obj.pipelineStatistics),
    );
}

template <>
inline auto structure_to_tuple<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.queueFamilyIndex),
        member_to_tuple_element(obj.counterIndexCount),
        dynamic_array_member_to_tuple_element(obj.counterIndexCount, obj.pCounterIndices),
    );
}

template <>
inline auto structure_to_tuple<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.performanceCountersSampling),
    );
}

template <>
inline auto structure_to_tuple<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.checkpointExecutionStageMask),
    );
}

template <>
inline auto structure_to_tuple<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.queueFlags),
        member_to_tuple_element(obj.queueCount),
        member_to_tuple_element(obj.timestampValidBits),
        member_to_tuple_element(obj.minImageTransferGranularity),
    );
}

template <>
inline auto structure_to_tuple<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.queueFamilyProperties),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.stageCount),
        dynamic_array_member_to_tuple_element(obj.stageCount, obj.pStages),
        member_to_tuple_element(obj.groupCount),
        dynamic_array_member_to_tuple_element(obj.groupCount, obj.pGroups),
        member_to_tuple_element(obj.maxRecursionDepth),
        member_to_tuple_element(obj.libraries),
        obj.pLibraryInterface,
        obj.layout,
        obj.basePipelineHandle,
        member_to_tuple_element(obj.basePipelineIndex),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.stageCount),
        dynamic_array_member_to_tuple_element(obj.stageCount, obj.pStages),
        member_to_tuple_element(obj.groupCount),
        dynamic_array_member_to_tuple_element(obj.groupCount, obj.pGroups),
        member_to_tuple_element(obj.maxRecursionDepth),
        obj.layout,
        obj.basePipelineHandle,
        member_to_tuple_element(obj.basePipelineIndex),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.maxPayloadSize),
        member_to_tuple_element(obj.maxAttributeSize),
        member_to_tuple_element(obj.maxCallableSize),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.generalShader),
        member_to_tuple_element(obj.closestHitShader),
        member_to_tuple_element(obj.anyHitShader),
        member_to_tuple_element(obj.intersectionShader),
        obj.pShaderGroupCaptureReplayHandle,
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.type),
        member_to_tuple_element(obj.generalShader),
        member_to_tuple_element(obj.closestHitShader),
        member_to_tuple_element(obj.anyHitShader),
        member_to_tuple_element(obj.intersectionShader),
    );
}

template <>
inline auto structure_to_tuple<VkRect2D>(const VkRect2D& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.extent),
    );
}

template <>
inline auto structure_to_tuple<VkRectLayerKHR>(const VkRectLayerKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.extent),
        member_to_tuple_element(obj.layer),
    );
}

template <>
inline auto structure_to_tuple<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.refreshDuration),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.attachmentCount),
        dynamic_array_member_to_tuple_element(obj.attachmentCount, obj.pAttachments),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.renderPass,
        obj.framebuffer,
        member_to_tuple_element(obj.renderArea),
        member_to_tuple_element(obj.clearValueCount),
        dynamic_array_member_to_tuple_element(obj.clearValueCount, obj.pClearValues),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.attachmentCount),
        dynamic_array_member_to_tuple_element(obj.attachmentCount, obj.pAttachments),
        member_to_tuple_element(obj.subpassCount),
        dynamic_array_member_to_tuple_element(obj.subpassCount, obj.pSubpasses),
        member_to_tuple_element(obj.dependencyCount),
        dynamic_array_member_to_tuple_element(obj.dependencyCount, obj.pDependencies),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.attachmentCount),
        dynamic_array_member_to_tuple_element(obj.attachmentCount, obj.pAttachments),
        member_to_tuple_element(obj.subpassCount),
        dynamic_array_member_to_tuple_element(obj.subpassCount, obj.pSubpasses),
        member_to_tuple_element(obj.dependencyCount),
        dynamic_array_member_to_tuple_element(obj.dependencyCount, obj.pDependencies),
        member_to_tuple_element(obj.correlatedViewMaskCount),
        dynamic_array_member_to_tuple_element(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.fragmentDensityMapAttachment),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.aspectReferenceCount),
        dynamic_array_member_to_tuple_element(obj.aspectReferenceCount, obj.pAspectReferences),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.subpassCount),
        dynamic_array_member_to_tuple_element(obj.subpassCount, obj.pViewMasks),
        member_to_tuple_element(obj.dependencyCount),
        dynamic_array_member_to_tuple_element(obj.dependencyCount, obj.pViewOffsets),
        member_to_tuple_element(obj.correlationMaskCount),
        dynamic_array_member_to_tuple_element(obj.correlationMaskCount, obj.pCorrelationMasks),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.attachmentInitialSampleLocationsCount),
        dynamic_array_member_to_tuple_element(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations),
        member_to_tuple_element(obj.postSubpassSampleLocationsCount),
        dynamic_array_member_to_tuple_element(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations),
    );
}

template <>
inline auto structure_to_tuple<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.transform),
    );
}

template <>
inline auto structure_to_tuple<VkSampleLocationEXT>(const VkSampleLocationEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.x),
        member_to_tuple_element(obj.y),
    );
}

template <>
inline auto structure_to_tuple<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.sampleLocationsPerPixel),
        member_to_tuple_element(obj.sampleLocationGridSize),
        member_to_tuple_element(obj.sampleLocationsCount),
        dynamic_array_member_to_tuple_element(obj.sampleLocationsCount, obj.pSampleLocations),
    );
}

template <>
inline auto structure_to_tuple<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.magFilter),
        member_to_tuple_element(obj.minFilter),
        member_to_tuple_element(obj.mipmapMode),
        member_to_tuple_element(obj.addressModeU),
        member_to_tuple_element(obj.addressModeV),
        member_to_tuple_element(obj.addressModeW),
        member_to_tuple_element(obj.mipLodBias),
        member_to_tuple_element(obj.anisotropyEnable),
        member_to_tuple_element(obj.maxAnisotropy),
        member_to_tuple_element(obj.compareEnable),
        member_to_tuple_element(obj.compareOp),
        member_to_tuple_element(obj.minLod),
        member_to_tuple_element(obj.maxLod),
        member_to_tuple_element(obj.borderColor),
        member_to_tuple_element(obj.unnormalizedCoordinates),
    );
}

template <>
inline auto structure_to_tuple<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.reductionMode),
    );
}

template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.ycbcrModel),
        member_to_tuple_element(obj.ycbcrRange),
        member_to_tuple_element(obj.components),
        member_to_tuple_element(obj.xChromaOffset),
        member_to_tuple_element(obj.yChromaOffset),
        member_to_tuple_element(obj.chromaFilter),
        member_to_tuple_element(obj.forceExplicitReconstruction),
    );
}

template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.combinedImageSamplerDescriptorCount),
    );
}

template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.conversion,
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.semaphore,
        member_to_tuple_element(obj.handleType),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.semaphore,
        member_to_tuple_element(obj.handleType),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.semaphore,
        member_to_tuple_element(obj.value),
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.semaphoreType),
        member_to_tuple_element(obj.initialValue),
    );
}

template <>
inline auto structure_to_tuple<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.semaphoreCount),
        dynamic_array_member_to_tuple_element(obj.semaphoreCount, obj.pSemaphores),
        dynamic_array_member_to_tuple_element(obj.semaphoreCount, obj.pValues),
    );
}

template <>
inline auto structure_to_tuple<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.data),
    );
}

template <>
inline auto structure_to_tuple<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.codeSize),
        dynamic_array_member_to_tuple_element(obj.latexmath:[\textrm{codeSize} \over 4], obj.pCode),
    );
}

template <>
inline auto structure_to_tuple<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.validationCache,
    );
}

template <>
inline auto structure_to_tuple<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.numUsedVgprs),
        member_to_tuple_element(obj.numUsedSgprs),
        member_to_tuple_element(obj.ldsSizePerLocalWorkGroup),
        member_to_tuple_element(obj.ldsUsageSizeInBytes),
        member_to_tuple_element(obj.scratchMemUsageInBytes),
    );
}

template <>
inline auto structure_to_tuple<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.shaderStageMask),
        member_to_tuple_element(obj.resourceUsage),
        member_to_tuple_element(obj.numPhysicalVgprs),
        member_to_tuple_element(obj.numPhysicalSgprs),
        member_to_tuple_element(obj.numAvailableVgprs),
        member_to_tuple_element(obj.numAvailableSgprs),
        static_array_member_to_tuple_element(result.computeWorkGroupSize, obj.computeWorkGroupSize),
    );
}

template <>
inline auto structure_to_tuple<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.shadingRatePaletteEntryCount),
        dynamic_array_member_to_tuple_element(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries),
    );
}

template <>
inline auto structure_to_tuple<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.sharedPresentSupportedUsageFlags),
    );
}

template <>
inline auto structure_to_tuple<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj)
{
    return std::make_tuple(
        obj.buffer,
        member_to_tuple_element(obj.bindCount),
        dynamic_array_member_to_tuple_element(obj.bindCount, obj.pBinds),
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.aspectMask),
        member_to_tuple_element(obj.imageGranularity),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.properties),
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.subresource),
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.extent),
        obj.memory,
        member_to_tuple_element(obj.memoryOffset),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj)
{
    return std::make_tuple(
        obj.image,
        member_to_tuple_element(obj.bindCount),
        dynamic_array_member_to_tuple_element(obj.bindCount, obj.pBinds),
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.formatProperties),
        member_to_tuple_element(obj.imageMipTailFirstLod),
        member_to_tuple_element(obj.imageMipTailSize),
        member_to_tuple_element(obj.imageMipTailOffset),
        member_to_tuple_element(obj.imageMipTailStride),
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.memoryRequirements),
    );
}

template <>
inline auto structure_to_tuple<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj)
{
    return std::make_tuple(
        obj.image,
        member_to_tuple_element(obj.bindCount),
        dynamic_array_member_to_tuple_element(obj.bindCount, obj.pBinds),
    );
}

template <>
inline auto structure_to_tuple<VkSparseMemoryBind>(const VkSparseMemoryBind& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.resourceOffset),
        member_to_tuple_element(obj.size),
        obj.memory,
        member_to_tuple_element(obj.memoryOffset),
        member_to_tuple_element(obj.flags),
    );
}

template <>
inline auto structure_to_tuple<VkSpecializationInfo>(const VkSpecializationInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.mapEntryCount),
        dynamic_array_member_to_tuple_element(obj.mapEntryCount, obj.pMapEntries),
        member_to_tuple_element(obj.dataSize),
        dynamic_array_member_to_tuple_element(obj.dataSize, obj.pData),
    );
}

template <>
inline auto structure_to_tuple<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.constantID),
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.size),
    );
}

template <>
inline auto structure_to_tuple<VkStencilOpState>(const VkStencilOpState& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.failOp),
        member_to_tuple_element(obj.passOp),
        member_to_tuple_element(obj.depthFailOp),
        member_to_tuple_element(obj.compareOp),
        member_to_tuple_element(obj.compareMask),
        member_to_tuple_element(obj.writeMask),
        member_to_tuple_element(obj.reference),
    );
}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto structure_to_tuple<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.streamDescriptor),
    );
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj)
{
    return std::make_tuple(
        obj.buffer,
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.stride),
        member_to_tuple_element(obj.size),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkSubmitInfo>(const VkSubmitInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.waitSemaphoreCount),
        dynamic_array_member_to_tuple_element(obj.waitSemaphoreCount, obj.pWaitSemaphores),
        dynamic_array_member_to_tuple_element(obj.waitSemaphoreCount, obj.pWaitDstStageMask),
        member_to_tuple_element(obj.commandBufferCount),
        dynamic_array_member_to_tuple_element(obj.commandBufferCount, obj.pCommandBuffers),
        member_to_tuple_element(obj.signalSemaphoreCount),
        dynamic_array_member_to_tuple_element(obj.signalSemaphoreCount, obj.pSignalSemaphores),
    );
}

template <>
inline auto structure_to_tuple<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.contents),
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDependency>(const VkSubpassDependency& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.srcSubpass),
        member_to_tuple_element(obj.dstSubpass),
        member_to_tuple_element(obj.srcStageMask),
        member_to_tuple_element(obj.dstStageMask),
        member_to_tuple_element(obj.srcAccessMask),
        member_to_tuple_element(obj.dstAccessMask),
        member_to_tuple_element(obj.dependencyFlags),
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDependency2>(const VkSubpassDependency2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.srcSubpass),
        member_to_tuple_element(obj.dstSubpass),
        member_to_tuple_element(obj.srcStageMask),
        member_to_tuple_element(obj.dstStageMask),
        member_to_tuple_element(obj.srcAccessMask),
        member_to_tuple_element(obj.dstAccessMask),
        member_to_tuple_element(obj.dependencyFlags),
        member_to_tuple_element(obj.viewOffset),
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDescription>(const VkSubpassDescription& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.pipelineBindPoint),
        member_to_tuple_element(obj.inputAttachmentCount),
        dynamic_array_member_to_tuple_element(obj.inputAttachmentCount, obj.pInputAttachments),
        member_to_tuple_element(obj.colorAttachmentCount),
        dynamic_array_member_to_tuple_element(obj.colorAttachmentCount, obj.pColorAttachments),
        dynamic_array_member_to_tuple_element(obj.colorAttachmentCount, obj.pResolveAttachments),
        obj.pDepthStencilAttachment,
        member_to_tuple_element(obj.preserveAttachmentCount),
        dynamic_array_member_to_tuple_element(obj.preserveAttachmentCount, obj.pPreserveAttachments),
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDescription2>(const VkSubpassDescription2& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.pipelineBindPoint),
        member_to_tuple_element(obj.viewMask),
        member_to_tuple_element(obj.inputAttachmentCount),
        dynamic_array_member_to_tuple_element(obj.inputAttachmentCount, obj.pInputAttachments),
        member_to_tuple_element(obj.colorAttachmentCount),
        dynamic_array_member_to_tuple_element(obj.colorAttachmentCount, obj.pColorAttachments),
        dynamic_array_member_to_tuple_element(obj.colorAttachmentCount, obj.pResolveAttachments),
        obj.pDepthStencilAttachment,
        member_to_tuple_element(obj.preserveAttachmentCount),
        dynamic_array_member_to_tuple_element(obj.preserveAttachmentCount, obj.pPreserveAttachments),
    );
}

template <>
inline auto structure_to_tuple<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.depthResolveMode),
        member_to_tuple_element(obj.stencilResolveMode),
        obj.pDepthStencilResolveAttachment,
    );
}

template <>
inline auto structure_to_tuple<VkSubpassEndInfo>(const VkSubpassEndInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
    );
}

template <>
inline auto structure_to_tuple<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.subpassIndex),
        member_to_tuple_element(obj.sampleLocationsInfo),
    );
}

template <>
inline auto structure_to_tuple<VkSubresourceLayout>(const VkSubresourceLayout& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.offset),
        member_to_tuple_element(obj.size),
        member_to_tuple_element(obj.rowPitch),
        member_to_tuple_element(obj.arrayPitch),
        member_to_tuple_element(obj.depthPitch),
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.minImageCount),
        member_to_tuple_element(obj.maxImageCount),
        member_to_tuple_element(obj.currentExtent),
        member_to_tuple_element(obj.minImageExtent),
        member_to_tuple_element(obj.maxImageExtent),
        member_to_tuple_element(obj.maxImageArrayLayers),
        member_to_tuple_element(obj.supportedTransforms),
        member_to_tuple_element(obj.currentTransform),
        member_to_tuple_element(obj.supportedCompositeAlpha),
        member_to_tuple_element(obj.supportedUsageFlags),
        member_to_tuple_element(obj.supportedSurfaceCounters),
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.surfaceCapabilities),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.fullScreenExclusiveSupported),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.minImageCount),
        member_to_tuple_element(obj.maxImageCount),
        member_to_tuple_element(obj.currentExtent),
        member_to_tuple_element(obj.minImageExtent),
        member_to_tuple_element(obj.maxImageExtent),
        member_to_tuple_element(obj.maxImageArrayLayers),
        member_to_tuple_element(obj.supportedTransforms),
        member_to_tuple_element(obj.currentTransform),
        member_to_tuple_element(obj.supportedCompositeAlpha),
        member_to_tuple_element(obj.supportedUsageFlags),
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.surfaceFormat),
    );
}

template <>
inline auto structure_to_tuple<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.colorSpace),
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.fullScreenExclusive),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.hmonitor),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.supportsProtected),
    );
}

template <>
inline auto structure_to_tuple<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.surfaceCounters),
    );
}

template <>
inline auto structure_to_tuple<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.surface,
        member_to_tuple_element(obj.minImageCount),
        member_to_tuple_element(obj.imageFormat),
        member_to_tuple_element(obj.imageColorSpace),
        member_to_tuple_element(obj.imageExtent),
        member_to_tuple_element(obj.imageArrayLayers),
        member_to_tuple_element(obj.imageUsage),
        member_to_tuple_element(obj.imageSharingMode),
        member_to_tuple_element(obj.queueFamilyIndexCount),
        dynamic_array_member_to_tuple_element(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices),
        member_to_tuple_element(obj.preTransform),
        member_to_tuple_element(obj.compositeAlpha),
        member_to_tuple_element(obj.presentMode),
        member_to_tuple_element(obj.clipped),
        obj.oldSwapchain,
    );
}

template <>
inline auto structure_to_tuple<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.localDimmingEnable),
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.usage),
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto structure_to_tuple<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.supportsTextureGatherLODBiasAMD),
    );
}

template <>
inline auto structure_to_tuple<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.waitSemaphoreValueCount),
        dynamic_array_member_to_tuple_element(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues),
        member_to_tuple_element(obj.signalSemaphoreValueCount),
        dynamic_array_member_to_tuple_element(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.width),
        member_to_tuple_element(obj.height),
        member_to_tuple_element(obj.depth),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_CUSTOM_HANDLING
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj)
{
    return std::make_tuple(
        static_array_member_to_tuple_element(result.matrix, obj.matrix),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_REQUIRES_CUSTOM_HANDLING

template <>
inline auto structure_to_tuple<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.initialDataSize),
        dynamic_array_member_to_tuple_element(obj.initialDataSize, obj.pInitialData),
    );
}

template <>
inline auto structure_to_tuple<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.enabledValidationFeatureCount),
        dynamic_array_member_to_tuple_element(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures),
        member_to_tuple_element(obj.disabledValidationFeatureCount),
        dynamic_array_member_to_tuple_element(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures),
    );
}

template <>
inline auto structure_to_tuple<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.disabledValidationCheckCount),
        dynamic_array_member_to_tuple_element(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks),
    );
}

template <>
inline auto structure_to_tuple<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.location),
        member_to_tuple_element(obj.binding),
        member_to_tuple_element(obj.format),
        member_to_tuple_element(obj.offset),
    );
}

template <>
inline auto structure_to_tuple<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.binding),
        member_to_tuple_element(obj.stride),
        member_to_tuple_element(obj.inputRate),
    );
}

template <>
inline auto structure_to_tuple<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.binding),
        member_to_tuple_element(obj.divisor),
    );
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
inline auto structure_to_tuple<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.window,
    );
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
inline auto structure_to_tuple<VkViewport>(const VkViewport& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.x),
        member_to_tuple_element(obj.y),
        member_to_tuple_element(obj.width),
        member_to_tuple_element(obj.height),
        member_to_tuple_element(obj.minDepth),
        member_to_tuple_element(obj.maxDepth),
    );
}

template <>
inline auto structure_to_tuple<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.x),
        member_to_tuple_element(obj.y),
        member_to_tuple_element(obj.z),
        member_to_tuple_element(obj.w),
    );
}

template <>
inline auto structure_to_tuple<VkViewportWScalingNV>(const VkViewportWScalingNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.xcoeff),
        member_to_tuple_element(obj.ycoeff),
    );
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
inline auto structure_to_tuple<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.display,
        obj.surface,
    );
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.acquireCount),
        dynamic_array_member_to_tuple_element(obj.acquireCount, obj.pAcquireSyncs),
        dynamic_array_member_to_tuple_element(obj.acquireCount, obj.pAcquireKeys),
        dynamic_array_member_to_tuple_element(obj.acquireCount, obj.pAcquireTimeouts),
        member_to_tuple_element(obj.releaseCount),
        dynamic_array_member_to_tuple_element(obj.releaseCount, obj.pReleaseSyncs),
        dynamic_array_member_to_tuple_element(obj.releaseCount, obj.pReleaseKeys),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.acquireCount),
        dynamic_array_member_to_tuple_element(obj.acquireCount, obj.pAcquireSyncs),
        dynamic_array_member_to_tuple_element(obj.acquireCount, obj.pAcquireKeys),
        dynamic_array_member_to_tuple_element(obj.acquireCount, obj.pAcquireTimeoutMilliseconds),
        member_to_tuple_element(obj.releaseCount),
        dynamic_array_member_to_tuple_element(obj.releaseCount, obj.pReleaseSyncs),
        dynamic_array_member_to_tuple_element(obj.releaseCount, obj.pReleaseKeys),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        member_to_tuple_element(obj.hinstance),
        member_to_tuple_element(obj.hwnd),
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto structure_to_tuple<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        obj.dstSet,
        member_to_tuple_element(obj.dstBinding),
        member_to_tuple_element(obj.dstArrayElement),
        member_to_tuple_element(obj.descriptorCount),
        member_to_tuple_element(obj.descriptorType),
        dynamic_array_member_to_tuple_element(obj.descriptorCount, obj.pImageInfo),
        dynamic_array_member_to_tuple_element(obj.descriptorCount, obj.pBufferInfo),
        dynamic_array_member_to_tuple_element(obj.descriptorCount, obj.pTexelBufferView),
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.accelerationStructureCount),
        dynamic_array_member_to_tuple_element(obj.accelerationStructureCount, obj.pAccelerationStructures),
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto structure_to_tuple<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.dataSize),
        dynamic_array_member_to_tuple_element(obj.dataSize, obj.pData),
    );
}

template <>
inline auto structure_to_tuple<VkXYColorEXT>(const VkXYColorEXT& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.x),
        member_to_tuple_element(obj.y),
    );
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
inline auto structure_to_tuple<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.connection,
        member_to_tuple_element(obj.window),
    );
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
inline auto structure_to_tuple<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        member_to_tuple_element(obj.sType),
        pnext_member_to_tuple_element(obj.pNext),
        member_to_tuple_element(obj.flags),
        obj.dpy,
        member_to_tuple_element(obj.window),
    );
}
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
