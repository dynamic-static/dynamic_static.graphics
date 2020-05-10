
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
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.minX, pAllocationCallbacks);
    destroy_structure_copy(obj.minY, pAllocationCallbacks);
    destroy_structure_copy(obj.minZ, pAllocationCallbacks);
    destroy_structure_copy(obj.maxX, pAllocationCallbacks);
    destroy_structure_copy(obj.maxY, pAllocationCallbacks);
    destroy_structure_copy(obj.maxZ, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.update, pAllocationCallbacks);
    destroy_structure_copy(obj.srcAccelerationStructure, pAllocationCallbacks);
    destroy_structure_copy(obj.dstAccelerationStructure, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryArrayOfPointers, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryCount, pAllocationCallbacks);
    destroy_structure_copy(obj.ppGeometries, pAllocationCallbacks);
    destroy_structure_copy(obj.scratchData, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.primitiveCount, pAllocationCallbacks);
    destroy_structure_copy(obj.primitiveOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.firstVertex, pAllocationCallbacks);
    destroy_structure_copy(obj.transformOffset, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryType, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPrimitiveCount, pAllocationCallbacks);
    destroy_structure_copy(obj.indexType, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVertexCount, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexFormat, pAllocationCallbacks);
    destroy_structure_copy(obj.allowsTransforms, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.compactedSize, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.maxGeometryCount, obj.pGeometryInfos, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceAddress, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.compactedSize, pAllocationCallbacks);
    destroy_structure_copy(obj.info, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.accelerationStructure, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.data, pAllocationCallbacks);
    destroy_structure_copy(obj.stride, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.triangles, pAllocationCallbacks);
    destroy_structure_copy(obj.aabbs, pAllocationCallbacks);
    destroy_structure_copy(obj.instances, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.arrayOfPointers, pAllocationCallbacks);
    destroy_structure_copy(obj.data, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryType, pAllocationCallbacks);
    destroy_structure_copy(obj.geometry, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexFormat, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexData, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexStride, pAllocationCallbacks);
    destroy_structure_copy(obj.indexType, pAllocationCallbacks);
    destroy_structure_copy(obj.indexData, pAllocationCallbacks);
    destroy_structure_copy(obj.transformData, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.instanceCount, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.geometryCount, obj.pGeometries, pAllocationCallbacks);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.transform, pAllocationCallbacks);
    destroy_structure_copy(obj.instanceCustomIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.mask, pAllocationCallbacks);
    destroy_structure_copy(obj.instanceShaderBindingTableRecordOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.accelerationStructureReference, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.buildType, pAllocationCallbacks);
    destroy_structure_copy(obj.accelerationStructure, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.accelerationStructure, pAllocationCallbacks);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.2*VK_UUID_SIZE, obj.versionData, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.swapchain, pAllocationCallbacks);
    destroy_structure_copy(obj.timeout, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphore, pAllocationCallbacks);
    destroy_structure_copy(obj.fence, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.timeout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.pUserData, pAllocationCallbacks);
    destroy_structure_copy(obj.pfnAllocation, pAllocationCallbacks);
    destroy_structure_copy(obj.pfnReallocation, pAllocationCallbacks);
    destroy_structure_copy(obj.pfnFree, pAllocationCallbacks);
    destroy_structure_copy(obj.pfnInternalAllocation, pAllocationCallbacks);
    destroy_structure_copy(obj.pfnInternalFree, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.externalFormat, pAllocationCallbacks);
    destroy_structure_copy(obj.formatFeatures, pAllocationCallbacks);
    destroy_structure_copy(obj.samplerYcbcrConversionComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.suggestedYcbcrModel, pAllocationCallbacks);
    destroy_structure_copy(obj.suggestedYcbcrRange, pAllocationCallbacks);
    destroy_structure_copy(obj.suggestedXChromaOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.suggestedYChromaOffset, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.allocationSize, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.androidHardwareBufferUsage, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.window, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkApplicationInfo>(const VkApplicationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pApplicationName, pAllocationCallbacks);
    destroy_structure_copy(obj.applicationVersion, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pEngineName, pAllocationCallbacks);
    destroy_structure_copy(obj.engineVersion, pAllocationCallbacks);
    destroy_structure_copy(obj.apiVersion, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.samples, pAllocationCallbacks);
    destroy_structure_copy(obj.loadOp, pAllocationCallbacks);
    destroy_structure_copy(obj.storeOp, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilLoadOp, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilStoreOp, pAllocationCallbacks);
    destroy_structure_copy(obj.initialLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.finalLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.samples, pAllocationCallbacks);
    destroy_structure_copy(obj.loadOp, pAllocationCallbacks);
    destroy_structure_copy(obj.storeOp, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilLoadOp, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilStoreOp, pAllocationCallbacks);
    destroy_structure_copy(obj.initialLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.finalLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilInitialLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilFinalLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAttachmentReference>(const VkAttachmentReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.attachment, pAllocationCallbacks);
    destroy_structure_copy(obj.layout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.attachment, pAllocationCallbacks);
    destroy_structure_copy(obj.layout, pAllocationCallbacks);
    destroy_structure_copy(obj.aspectMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.attachmentIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBaseInStructure>(const VkBaseInStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.accelerationStructure, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryOffset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    destroy_structure_copy(obj.splitInstanceBindRegionCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.image, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryOffset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.swapchain, pAllocationCallbacks);
    destroy_structure_copy(obj.imageIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.planeAspect, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.bufferAddress, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
    destroy_structure_copy(obj.indexType, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.groupIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferBindCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bufferBindCount, obj.pBufferBinds, pAllocationCallbacks);
    destroy_structure_copy(obj.imageOpaqueBindCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds, pAllocationCallbacks);
    destroy_structure_copy(obj.imageBindCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.imageBindCount, obj.pImageBinds, pAllocationCallbacks);
    destroy_structure_copy(obj.signalSemaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.bufferAddress, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
    destroy_structure_copy(obj.stride, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferCopy>(const VkBufferCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.srcOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.dstOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
    destroy_structure_copy(obj.sharingMode, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceAddress, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.bufferOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferRowLength, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferImageHeight, pAllocationCallbacks);
    destroy_structure_copy(obj.imageSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.imageOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.imageExtent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.srcQueueFamilyIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.dstQueueFamilyIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.opaqueCaptureAddress, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.range, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.timeDomain, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.stage, pAllocationCallbacks);
    destroy_structure_copy(obj.pCheckpointMarker, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkClearAttachment>(const VkClearAttachment& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.aspectMask, pAllocationCallbacks);
    destroy_structure_copy(obj.colorAttachment, pAllocationCallbacks);
    destroy_structure_copy(obj.clearValue, pAllocationCallbacks);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
void destroy_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_static_array_copy<4>(obj.float32);
    destroy_static_array_copy<4>(obj.int32);
    destroy_static_array_copy<4>(obj.uint32);
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.depth, pAllocationCallbacks);
    destroy_structure_copy(obj.stencil, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkClearRect>(const VkClearRect& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.rect, pAllocationCallbacks);
    destroy_structure_copy(obj.baseArrayLayer, pAllocationCallbacks);
    destroy_structure_copy(obj.layerCount, pAllocationCallbacks);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
void destroy_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.color, pAllocationCallbacks);
    destroy_structure_copy(obj.depthStencil, pAllocationCallbacks);
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.pixelX, pAllocationCallbacks);
    destroy_structure_copy(obj.pixelY, pAllocationCallbacks);
    destroy_structure_copy(obj.sample, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.shadingRate, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleCount, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.sampleLocationCount, obj.pSampleLocations, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.commandPool, pAllocationCallbacks);
    destroy_structure_copy(obj.level, pAllocationCallbacks);
    destroy_structure_copy(obj.commandBufferCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pInheritanceInfo, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.conditionalRenderingEnable, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.renderPass, pAllocationCallbacks);
    destroy_structure_copy(obj.subpass, pAllocationCallbacks);
    destroy_structure_copy(obj.framebuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.occlusionQueryEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.queryFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineStatistics, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.transform, pAllocationCallbacks);
    destroy_structure_copy(obj.renderArea, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkComponentMapping>(const VkComponentMapping& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.r, pAllocationCallbacks);
    destroy_structure_copy(obj.g, pAllocationCallbacks);
    destroy_structure_copy(obj.b, pAllocationCallbacks);
    destroy_structure_copy(obj.a, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.stage, pAllocationCallbacks);
    destroy_structure_copy(obj.layout, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineHandle, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkConformanceVersion>(const VkConformanceVersion& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.major, pAllocationCallbacks);
    destroy_structure_copy(obj.minor, pAllocationCallbacks);
    destroy_structure_copy(obj.subminor, pAllocationCallbacks);
    destroy_structure_copy(obj.patch, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.MSize, pAllocationCallbacks);
    destroy_structure_copy(obj.NSize, pAllocationCallbacks);
    destroy_structure_copy(obj.KSize, pAllocationCallbacks);
    destroy_structure_copy(obj.AType, pAllocationCallbacks);
    destroy_structure_copy(obj.BType, pAllocationCallbacks);
    destroy_structure_copy(obj.CType, pAllocationCallbacks);
    destroy_structure_copy(obj.DType, pAllocationCallbacks);
    destroy_structure_copy(obj.scope, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.src, pAllocationCallbacks);
    destroy_structure_copy(obj.dst, pAllocationCallbacks);
    destroy_structure_copy(obj.mode, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.src, pAllocationCallbacks);
    destroy_structure_copy(obj.dst, pAllocationCallbacks);
    destroy_structure_copy(obj.mode, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcSet, pAllocationCallbacks);
    destroy_structure_copy(obj.srcBinding, pAllocationCallbacks);
    destroy_structure_copy(obj.srcArrayElement, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSet, pAllocationCallbacks);
    destroy_structure_copy(obj.dstBinding, pAllocationCallbacks);
    destroy_structure_copy(obj.dstArrayElement, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorCount, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.src, pAllocationCallbacks);
    destroy_structure_copy(obj.dst, pAllocationCallbacks);
    destroy_structure_copy(obj.mode, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.waitSemaphoreValuesCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    destroy_structure_copy(obj.signalSemaphoreValuesCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pMarkerName, pAllocationCallbacks);
    destroy_static_array_copy<4>(obj.color);
}

template <>
void destroy_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.objectType, pAllocationCallbacks);
    destroy_structure_copy(obj.object, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.objectType, pAllocationCallbacks);
    destroy_structure_copy(obj.object, pAllocationCallbacks);
    destroy_structure_copy(obj.tagName, pAllocationCallbacks);
    destroy_structure_copy(obj.tagSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pfnCallback, pAllocationCallbacks);
    destroy_structure_copy(obj.pUserData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pLabelName, pAllocationCallbacks);
    destroy_static_array_copy<4>(obj.color);
}

template <>
void destroy_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pMessageIdName, pAllocationCallbacks);
    destroy_structure_copy(obj.messageIdNumber, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pMessage, pAllocationCallbacks);
    destroy_structure_copy(obj.queueLabelCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueLabelCount, obj.pQueueLabels, pAllocationCallbacks);
    destroy_structure_copy(obj.cmdBufLabelCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.cmdBufLabelCount, obj.pCmdBufLabels, pAllocationCallbacks);
    destroy_structure_copy(obj.objectCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.objectCount, obj.pObjects, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.messageSeverity, pAllocationCallbacks);
    destroy_structure_copy(obj.messageType, pAllocationCallbacks);
    destroy_structure_copy(obj.pfnUserCallback, pAllocationCallbacks);
    destroy_structure_copy(obj.pUserData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.objectType, pAllocationCallbacks);
    destroy_structure_copy(obj.objectHandle, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.objectType, pAllocationCallbacks);
    destroy_structure_copy(obj.objectHandle, pAllocationCallbacks);
    destroy_structure_copy(obj.tagName, pAllocationCallbacks);
    destroy_structure_copy(obj.tagSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.dedicatedAllocation, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.dedicatedAllocation, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.image, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.operationHandle, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.range, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sampler, pAllocationCallbacks);
    destroy_structure_copy(obj.imageView, pAllocationCallbacks);
    destroy_structure_copy(obj.imageLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSets, pAllocationCallbacks);
    destroy_structure_copy(obj.poolSizeCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.poolSizeCount, obj.pPoolSizes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxInlineUniformBlockBindings, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorPool, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorSetCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorSetCount, obj.pSetLayouts, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.binding, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorType, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    destroy_structure_copy(obj.stageFlags, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pImmutableSamplers, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.bindingCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bindingCount, obj.pBindingFlags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.bindingCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bindingCount, obj.pBindings, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.supported, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorSetCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorSetCount, obj.pDescriptorCounts, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVariableDescriptorCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorUpdateEntryCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries, pAllocationCallbacks);
    destroy_structure_copy(obj.templateType, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorSetLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.set, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.dstBinding, pAllocationCallbacks);
    destroy_structure_copy(obj.dstArrayElement, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorType, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.stride, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.queueCreateInfoCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueCreateInfoCount, obj.pQueueCreateInfos, pAllocationCallbacks);
    destroy_structure_copy(obj.enabledLayerCount, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    destroy_structure_copy(obj.enabledExtensionCount, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
    destroy_structure_copy(obj.pEnabledFeatures, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceEvent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.resourceDeviceIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryDeviceIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.physicalDeviceCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.physicalDeviceCount, obj.pPhysicalDevices, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(obj.presentMask);
    destroy_structure_copy(obj.modes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pDeviceMasks, pAllocationCallbacks);
    destroy_structure_copy(obj.mode, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceMask, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceRenderAreaCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, pAllocationCallbacks);
    destroy_structure_copy(obj.commandBufferCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, pAllocationCallbacks);
    destroy_structure_copy(obj.signalSemaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.modes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.overallocationBehavior, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.deviceAddress, pAllocationCallbacks);
    destroy_structure_copy(obj.hostAddress, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.deviceAddress, pAllocationCallbacks);
    destroy_structure_copy(obj.hostAddress, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.queueCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueCount, obj.pQueuePriorities, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.globalPriority, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.queueIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.x, pAllocationCallbacks);
    destroy_structure_copy(obj.y, pAllocationCallbacks);
    destroy_structure_copy(obj.z, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayEvent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.parameters, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.visibleRegion, pAllocationCallbacks);
    destroy_structure_copy(obj.refreshRate, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayModeProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.displayMode, pAllocationCallbacks);
    destroy_structure_copy(obj.parameters, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.localDimmingSupport, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.capabilities, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.supportedAlpha, pAllocationCallbacks);
    destroy_structure_copy(obj.minSrcPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSrcPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.minSrcExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSrcExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.minDstPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDstPosition, pAllocationCallbacks);
    destroy_structure_copy(obj.minDstExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDstExtent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.mode, pAllocationCallbacks);
    destroy_structure_copy(obj.planeIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPlaneProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.currentDisplay, pAllocationCallbacks);
    destroy_structure_copy(obj.currentStackIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.powerState, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcRect, pAllocationCallbacks);
    destroy_structure_copy(obj.dstRect, pAllocationCallbacks);
    destroy_structure_copy(obj.persistent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.display, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.displayName, pAllocationCallbacks);
    destroy_structure_copy(obj.physicalDimensions, pAllocationCallbacks);
    destroy_structure_copy(obj.physicalResolution, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedTransforms, pAllocationCallbacks);
    destroy_structure_copy(obj.planeReorderPossible, pAllocationCallbacks);
    destroy_structure_copy(obj.persistentContent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.displayMode, pAllocationCallbacks);
    destroy_structure_copy(obj.planeIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.planeStackIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.transform, pAllocationCallbacks);
    destroy_structure_copy(obj.globalAlpha, pAllocationCallbacks);
    destroy_structure_copy(obj.alphaMode, pAllocationCallbacks);
    destroy_structure_copy(obj.imageExtent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.indexCount, pAllocationCallbacks);
    destroy_structure_copy(obj.instanceCount, pAllocationCallbacks);
    destroy_structure_copy(obj.firstIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.firstInstance, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.vertexCount, pAllocationCallbacks);
    destroy_structure_copy(obj.instanceCount, pAllocationCallbacks);
    destroy_structure_copy(obj.firstVertex, pAllocationCallbacks);
    destroy_structure_copy(obj.firstInstance, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.taskCount, pAllocationCallbacks);
    destroy_structure_copy(obj.firstTask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifierPlaneCount, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifierTilingFeatures, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifierCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleTypes, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pAttributes, pAllocationCallbacks);
    destroy_structure_copy(obj.dwAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.name, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleTypes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleTypes, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pAttributes, pAllocationCallbacks);
    destroy_structure_copy(obj.dwAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.name, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pAttributes, pAllocationCallbacks);
    destroy_structure_copy(obj.dwAccess, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleTypes, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pAttributes, pAllocationCallbacks);
    destroy_structure_copy(obj.dwAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.name, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkExtensionProperties>(const VkExtensionProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.specVersion, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExtent2D>(const VkExtent2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.width, pAllocationCallbacks);
    destroy_structure_copy(obj.height, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExtent3D>(const VkExtent3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.width, pAllocationCallbacks);
    destroy_structure_copy(obj.height, pAllocationCallbacks);
    destroy_structure_copy(obj.depth, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    destroy_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
    destroy_structure_copy(obj.externalFenceFeatures, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.externalFormat, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
    destroy_structure_copy(obj.externalMemoryFeatures, pAllocationCallbacks);
    destroy_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    destroy_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleTypes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleTypes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleTypes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.externalMemoryFeatures, pAllocationCallbacks);
    destroy_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    destroy_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    destroy_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
    destroy_structure_copy(obj.externalSemaphoreFeatures, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fence, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fence, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.filterCubic, pAllocationCallbacks);
    destroy_structure_copy(obj.filterCubicMinmax, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFormatProperties>(const VkFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.linearTilingFeatures, pAllocationCallbacks);
    destroy_structure_copy(obj.optimalTilingFeatures, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferFeatures, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFormatProperties2>(const VkFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.formatProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
    destroy_structure_copy(obj.width, pAllocationCallbacks);
    destroy_structure_copy(obj.height, pAllocationCallbacks);
    destroy_structure_copy(obj.layerCount, pAllocationCallbacks);
    destroy_structure_copy(obj.viewFormatCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.attachmentImageInfoCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.renderPass, pAllocationCallbacks);
    destroy_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.width, pAllocationCallbacks);
    destroy_structure_copy(obj.height, pAllocationCallbacks);
    destroy_structure_copy(obj.layers, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageReductionMode, pAllocationCallbacks);
    destroy_structure_copy(obj.rasterizationSamples, pAllocationCallbacks);
    destroy_structure_copy(obj.depthStencilSamples, pAllocationCallbacks);
    destroy_structure_copy(obj.colorSamples, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    destroy_structure_copy(obj.pipeline, pAllocationCallbacks);
    destroy_structure_copy(obj.indirectCommandsLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.streamCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.streamCount, obj.pStreams, pAllocationCallbacks);
    destroy_structure_copy(obj.sequencesCount, pAllocationCallbacks);
    destroy_structure_copy(obj.preprocessBuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.preprocessOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.preprocessSize, pAllocationCallbacks);
    destroy_structure_copy(obj.sequencesCountBuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.sequencesCountOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.sequencesIndexBuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.sequencesIndexOffset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    destroy_structure_copy(obj.pipeline, pAllocationCallbacks);
    destroy_structure_copy(obj.indirectCommandsLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSequencesCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.aabbData, pAllocationCallbacks);
    destroy_structure_copy(obj.numAABBs, pAllocationCallbacks);
    destroy_structure_copy(obj.stride, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.triangles, pAllocationCallbacks);
    destroy_structure_copy(obj.aabbs, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGeometryNV>(const VkGeometryNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryType, pAllocationCallbacks);
    destroy_structure_copy(obj.geometry, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexData, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexCount, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexStride, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexFormat, pAllocationCallbacks);
    destroy_structure_copy(obj.indexData, pAllocationCallbacks);
    destroy_structure_copy(obj.indexOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.indexCount, pAllocationCallbacks);
    destroy_structure_copy(obj.indexType, pAllocationCallbacks);
    destroy_structure_copy(obj.transformData, pAllocationCallbacks);
    destroy_structure_copy(obj.transformOffset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.stageCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_structure_copy(obj.pVertexInputState, pAllocationCallbacks);
    destroy_structure_copy(obj.pInputAssemblyState, pAllocationCallbacks);
    destroy_structure_copy(obj.pTessellationState, pAllocationCallbacks);
    destroy_structure_copy(obj.pViewportState, pAllocationCallbacks);
    destroy_structure_copy(obj.pRasterizationState, pAllocationCallbacks);
    destroy_structure_copy(obj.pMultisampleState, pAllocationCallbacks);
    destroy_structure_copy(obj.pDepthStencilState, pAllocationCallbacks);
    destroy_structure_copy(obj.pColorBlendState, pAllocationCallbacks);
    destroy_structure_copy(obj.pDynamicState, pAllocationCallbacks);
    destroy_structure_copy(obj.layout, pAllocationCallbacks);
    destroy_structure_copy(obj.renderPass, pAllocationCallbacks);
    destroy_structure_copy(obj.subpass, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineHandle, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.groupCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.pipelineCount, obj.pPipelines, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.stageCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_structure_copy(obj.pVertexInputState, pAllocationCallbacks);
    destroy_structure_copy(obj.pTessellationState, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPrimaryRed, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPrimaryGreen, pAllocationCallbacks);
    destroy_structure_copy(obj.displayPrimaryBlue, pAllocationCallbacks);
    destroy_structure_copy(obj.whitePoint, pAllocationCallbacks);
    destroy_structure_copy(obj.maxLuminance, pAllocationCallbacks);
    destroy_structure_copy(obj.minLuminance, pAllocationCallbacks);
    destroy_structure_copy(obj.maxContentLightLevel, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFrameAverageLightLevel, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
void destroy_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pView, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
void destroy_structure_copy<VkImageBlit>(const VkImageBlit& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.srcOffsets);
    destroy_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.dstOffsets);
}

template <>
void destroy_structure_copy<VkImageCopy>(const VkImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.srcOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.dstOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.imageType, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    destroy_structure_copy(obj.mipLevels, pAllocationCallbacks);
    destroy_structure_copy(obj.arrayLayers, pAllocationCallbacks);
    destroy_structure_copy(obj.samples, pAllocationCallbacks);
    destroy_structure_copy(obj.tiling, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
    destroy_structure_copy(obj.sharingMode, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    destroy_structure_copy(obj.initialLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifierPlaneCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifierCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.viewFormatCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.maxExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMipLevels, pAllocationCallbacks);
    destroy_structure_copy(obj.maxArrayLayers, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.maxResourceSize, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.oldLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.newLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.srcQueueFamilyIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.dstQueueFamilyIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.image, pAllocationCallbacks);
    destroy_structure_copy(obj.subresourceRange, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.image, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
void destroy_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.imagePipeHandle, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
void destroy_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.planeAspect, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageResolve>(const VkImageResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.srcOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    destroy_structure_copy(obj.dstOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.image, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilUsage, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageSubresource>(const VkImageSubresource& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.aspectMask, pAllocationCallbacks);
    destroy_structure_copy(obj.mipLevel, pAllocationCallbacks);
    destroy_structure_copy(obj.arrayLayer, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.aspectMask, pAllocationCallbacks);
    destroy_structure_copy(obj.mipLevel, pAllocationCallbacks);
    destroy_structure_copy(obj.baseArrayLayer, pAllocationCallbacks);
    destroy_structure_copy(obj.layerCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.aspectMask, pAllocationCallbacks);
    destroy_structure_copy(obj.baseMipLevel, pAllocationCallbacks);
    destroy_structure_copy(obj.levelCount, pAllocationCallbacks);
    destroy_structure_copy(obj.baseArrayLayer, pAllocationCallbacks);
    destroy_structure_copy(obj.layerCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.swapchain, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.decodeMode, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.image, pAllocationCallbacks);
    destroy_structure_copy(obj.viewType, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.components, pAllocationCallbacks);
    destroy_structure_copy(obj.subresourceRange, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imageView, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorType, pAllocationCallbacks);
    destroy_structure_copy(obj.sampler, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fence, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.fd, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fence, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.handle, pAllocationCallbacks);
    destroy_structure_copy(obj.name, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.fd, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.pHostPointer, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.handle, pAllocationCallbacks);
    destroy_structure_copy(obj.name, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.handle, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphore, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.fd, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphore, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
    destroy_structure_copy(obj.handle, pAllocationCallbacks);
    destroy_structure_copy(obj.name, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    destroy_structure_copy(obj.tokenCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.tokenCount, obj.pTokens, pAllocationCallbacks);
    destroy_structure_copy(obj.streamCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.streamCount, obj.pStreamStrides, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.tokenType, pAllocationCallbacks);
    destroy_structure_copy(obj.stream, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexBindingUnit, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexDynamicStride, pAllocationCallbacks);
    destroy_structure_copy(obj.pushconstantPipelineLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.pushconstantShaderStageFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.pushconstantOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.pushconstantSize, pAllocationCallbacks);
    destroy_structure_copy(obj.indirectStateFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.indexTypeCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypes, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypeValues, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pUserData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.subpass, pAllocationCallbacks);
    destroy_structure_copy(obj.inputAttachmentIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.aspectMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pApplicationInfo, pAllocationCallbacks);
    destroy_structure_copy(obj.enabledLayerCount, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    destroy_structure_copy(obj.enabledExtensionCount, pAllocationCallbacks);
    destroy_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkLayerProperties>(const VkLayerProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.specVersion, pAllocationCallbacks);
    destroy_structure_copy(obj.implementationVersion, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
void destroy_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pView, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
void destroy_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.allocationSize, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryTypeIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.image, pAllocationCallbacks);
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.prefersDedicatedAllocation, pAllocationCallbacks);
    destroy_structure_copy(obj.requiresDedicatedAllocation, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkMemoryHeap>(const VkMemoryHeap& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.size, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.opaqueCaptureAddress, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.priority, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.size, pAllocationCallbacks);
    destroy_structure_copy(obj.alignment, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkMemoryType>(const VkMemoryType& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.propertyFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.heapIndex, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
void destroy_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pLayer, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
void destroy_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handle, pAllocationCallbacks);
    destroy_structure_copy(obj.stride, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
    destroy_structure_copy(obj.usage2, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.consumer, pAllocationCallbacks);
    destroy_structure_copy(obj.producer, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkOffset2D>(const VkOffset2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.x, pAllocationCallbacks);
    destroy_structure_copy(obj.y, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkOffset3D>(const VkOffset3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.x, pAllocationCallbacks);
    destroy_structure_copy(obj.y, pAllocationCallbacks);
    destroy_structure_copy(obj.z, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.presentID, pAllocationCallbacks);
    destroy_structure_copy(obj.desiredPresentTime, pAllocationCallbacks);
    destroy_structure_copy(obj.actualPresentTime, pAllocationCallbacks);
    destroy_structure_copy(obj.earliestPresentTime, pAllocationCallbacks);
    destroy_structure_copy(obj.presentMargin, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.unit, pAllocationCallbacks);
    destroy_structure_copy(obj.scope, pAllocationCallbacks);
    destroy_structure_copy(obj.storage, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.uuid);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
void destroy_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.int32, pAllocationCallbacks);
    destroy_structure_copy(obj.int64, pAllocationCallbacks);
    destroy_structure_copy(obj.uint32, pAllocationCallbacks);
    destroy_structure_copy(obj.uint64, pAllocationCallbacks);
    destroy_structure_copy(obj.float32, pAllocationCallbacks);
    destroy_structure_copy(obj.float64, pAllocationCallbacks);
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.marker, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.enable, pAllocationCallbacks);
    destroy_structure_copy(obj.parameter, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.counterPassIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.marker, pAllocationCallbacks);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
void destroy_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.value32, pAllocationCallbacks);
    destroy_structure_copy(obj.value64, pAllocationCallbacks);
    destroy_structure_copy(obj.valueFloat, pAllocationCallbacks);
    destroy_structure_copy(obj.valueBool, pAllocationCallbacks);
    destroy_structure_copy(obj.valueString, pAllocationCallbacks);
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.data, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.storageBuffer16BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformAndStorageBuffer16BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.storagePushConstant16, pAllocationCallbacks);
    destroy_structure_copy(obj.storageInputOutput16, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.storageBuffer8BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformAndStorageBuffer8BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.storagePushConstant8, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.decodeModeSharedExponent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.advancedBlendCoherentOperations, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.advancedBlendMaxColorAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.advancedBlendIndependentBlend, pAllocationCallbacks);
    destroy_structure_copy(obj.advancedBlendNonPremultipliedSrcColor, pAllocationCallbacks);
    destroy_structure_copy(obj.advancedBlendNonPremultipliedDstColor, pAllocationCallbacks);
    destroy_structure_copy(obj.advancedBlendCorrelatedOverlap, pAllocationCallbacks);
    destroy_structure_copy(obj.advancedBlendAllOperations, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddress, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddressCaptureReplay, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddressMultiDevice, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddress, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddressCaptureReplay, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddressMultiDevice, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceCoherentMemory, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.computeDerivativeGroupQuads, pAllocationCallbacks);
    destroy_structure_copy(obj.computeDerivativeGroupLinear, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.conditionalRendering, pAllocationCallbacks);
    destroy_structure_copy(obj.inheritedConditionalRendering, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.primitiveOverestimationSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxExtraPrimitiveOverestimationSize, pAllocationCallbacks);
    destroy_structure_copy(obj.extraPrimitiveOverestimationSizeGranularity, pAllocationCallbacks);
    destroy_structure_copy(obj.primitiveUnderestimation, pAllocationCallbacks);
    destroy_structure_copy(obj.conservativePointAndLineRasterization, pAllocationCallbacks);
    destroy_structure_copy(obj.degenerateTrianglesRasterized, pAllocationCallbacks);
    destroy_structure_copy(obj.degenerateLinesRasterized, pAllocationCallbacks);
    destroy_structure_copy(obj.fullyCoveredFragmentShaderInputVariable, pAllocationCallbacks);
    destroy_structure_copy(obj.conservativeRasterizationPostDepthCoverage, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.cooperativeMatrix, pAllocationCallbacks);
    destroy_structure_copy(obj.cooperativeMatrixRobustBufferAccess, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.cooperativeMatrixSupportedStages, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.cornerSampledImage, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageReductionMode, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.dedicatedAllocationImageAliasing, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.depthClipEnable, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedDepthResolveModes, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedStencilResolveModes, pAllocationCallbacks);
    destroy_structure_copy(obj.independentResolveNone, pAllocationCallbacks);
    destroy_structure_copy(obj.independentResolve, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInputAttachmentArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSampledImageArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingUniformBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingSampledImageUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingStorageImageUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingStorageBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingUpdateUnusedWhilePending, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingPartiallyBound, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingVariableDescriptorCount, pAllocationCallbacks);
    destroy_structure_copy(obj.runtimeDescriptorArray, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxUpdateAfterBindDescriptorsInAllPools, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSampledImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.robustBufferAccessUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.quadDivergentImplicitLod, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSamplers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageUpdateAfterBindResources, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindSamplers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindSampledImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindInputAttachments, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceGeneratedCommands, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGraphicsShaderGroupCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxIndirectSequenceCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxIndirectCommandsTokenCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxIndirectCommandsStreamCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxIndirectCommandsTokenOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.maxIndirectCommandsStreamStride, pAllocationCallbacks);
    destroy_structure_copy(obj.minSequencesCountBufferOffsetAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.minSequencesIndexBufferOffsetAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.minIndirectCommandsBufferOffsetAlignment, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.diagnosticsConfig, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDiscardRectangles, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.driverID, pAllocationCallbacks);
    destroy_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.exclusiveScissor, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.minImportedHostPointerAlignment, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.robustBufferAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.fullDrawIndexUint32, pAllocationCallbacks);
    destroy_structure_copy(obj.imageCubeArray, pAllocationCallbacks);
    destroy_structure_copy(obj.independentBlend, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryShader, pAllocationCallbacks);
    destroy_structure_copy(obj.tessellationShader, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleRateShading, pAllocationCallbacks);
    destroy_structure_copy(obj.dualSrcBlend, pAllocationCallbacks);
    destroy_structure_copy(obj.logicOp, pAllocationCallbacks);
    destroy_structure_copy(obj.multiDrawIndirect, pAllocationCallbacks);
    destroy_structure_copy(obj.drawIndirectFirstInstance, pAllocationCallbacks);
    destroy_structure_copy(obj.depthClamp, pAllocationCallbacks);
    destroy_structure_copy(obj.depthBiasClamp, pAllocationCallbacks);
    destroy_structure_copy(obj.fillModeNonSolid, pAllocationCallbacks);
    destroy_structure_copy(obj.depthBounds, pAllocationCallbacks);
    destroy_structure_copy(obj.wideLines, pAllocationCallbacks);
    destroy_structure_copy(obj.largePoints, pAllocationCallbacks);
    destroy_structure_copy(obj.alphaToOne, pAllocationCallbacks);
    destroy_structure_copy(obj.multiViewport, pAllocationCallbacks);
    destroy_structure_copy(obj.samplerAnisotropy, pAllocationCallbacks);
    destroy_structure_copy(obj.textureCompressionETC2, pAllocationCallbacks);
    destroy_structure_copy(obj.textureCompressionASTC_LDR, pAllocationCallbacks);
    destroy_structure_copy(obj.textureCompressionBC, pAllocationCallbacks);
    destroy_structure_copy(obj.occlusionQueryPrecise, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineStatisticsQuery, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexPipelineStoresAndAtomics, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentStoresAndAtomics, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderTessellationAndGeometryPointSize, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderImageGatherExtended, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageExtendedFormats, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageMultisample, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageReadWithoutFormat, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageWriteWithoutFormat, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformBufferArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSampledImageArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageBufferArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderClipDistance, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderCullDistance, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInt64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInt16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderResourceResidency, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderResourceMinLod, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseBinding, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidencyBuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidencyImage2D, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidencyImage3D, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidency2Samples, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidency4Samples, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidency8Samples, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidency16Samples, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseResidencyAliased, pAllocationCallbacks);
    destroy_structure_copy(obj.variableMultisampleRate, pAllocationCallbacks);
    destroy_structure_copy(obj.inheritedQueries, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.features, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.denormBehaviorIndependence, pAllocationCallbacks);
    destroy_structure_copy(obj.roundingModeIndependence, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormPreserveFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormPreserveFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormPreserveFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormFlushToZeroFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormFlushToZeroFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormFlushToZeroFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTEFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTEFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTEFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTZFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTZFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTZFloat64, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentDensityMap, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentDensityMapDynamic, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentDensityMapNonSubsampledImages, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.minFragmentDensityTexelSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFragmentDensityTexelSize, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentDensityInvocations, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentShaderBarycentric, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentShaderSampleInterlock, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentShaderPixelInterlock, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentShaderShadingRateInterlock, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.physicalDeviceCount, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(obj.physicalDevices);
    destroy_structure_copy(obj.subsetAllocation, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.hostQueryReset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.deviceUUID);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.driverUUID);
    destroy_static_array_copy<VK_LUID_SIZE>(obj.deviceLUID);
    destroy_structure_copy(obj.deviceNodeMask, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceLUIDValid, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
    destroy_structure_copy(obj.sharingMode, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.tiling, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imageViewType, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imagelessFramebuffer, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.indexTypeUint8, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.inlineUniformBlock, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingInlineUniformBlockUpdateAfterBind, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxInlineUniformBlockSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorInlineUniformBlocks, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetInlineUniformBlocks, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.maxImageDimension1D, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageDimension2D, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageDimension3D, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageDimensionCube, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageArrayLayers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTexelBufferElements, pAllocationCallbacks);
    destroy_structure_copy(obj.maxUniformBufferRange, pAllocationCallbacks);
    destroy_structure_copy(obj.maxStorageBufferRange, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPushConstantsSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMemoryAllocationCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSamplerAllocationCount, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferImageGranularity, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseAddressSpaceSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxBoundDescriptorSets, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorSamplers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUniformBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorStorageBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorSampledImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorStorageImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorInputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageResources, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetSamplers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUniformBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUniformBuffersDynamic, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetStorageBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetStorageBuffersDynamic, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetSampledImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetStorageImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetInputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVertexInputAttributes, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVertexInputBindings, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVertexInputAttributeOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVertexInputBindingStride, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVertexOutputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationGenerationLevel, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationPatchSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationControlPerVertexInputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationControlPerVertexOutputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationControlPerPatchOutputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationControlTotalOutputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationEvaluationInputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTessellationEvaluationOutputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryShaderInvocations, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryInputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryOutputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryOutputVertices, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryTotalOutputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFragmentInputComponents, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFragmentOutputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFragmentDualSrcAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFragmentCombinedOutputResources, pAllocationCallbacks);
    destroy_structure_copy(obj.maxComputeSharedMemorySize, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.maxComputeWorkGroupCount);
    destroy_structure_copy(obj.maxComputeWorkGroupInvocations, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.maxComputeWorkGroupSize);
    destroy_structure_copy(obj.subPixelPrecisionBits, pAllocationCallbacks);
    destroy_structure_copy(obj.subTexelPrecisionBits, pAllocationCallbacks);
    destroy_structure_copy(obj.mipmapPrecisionBits, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDrawIndexedIndexValue, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDrawIndirectCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSamplerLodBias, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSamplerAnisotropy, pAllocationCallbacks);
    destroy_structure_copy(obj.maxViewports, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.maxViewportDimensions);
    destroy_static_array_copy<2>(obj.viewportBoundsRange);
    destroy_structure_copy(obj.viewportSubPixelBits, pAllocationCallbacks);
    destroy_structure_copy(obj.minMemoryMapAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.minTexelBufferOffsetAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.minUniformBufferOffsetAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.minStorageBufferOffsetAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.minTexelOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTexelOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.minTexelGatherOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTexelGatherOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.minInterpolationOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.maxInterpolationOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.subPixelInterpolationOffsetBits, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFramebufferWidth, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFramebufferHeight, pAllocationCallbacks);
    destroy_structure_copy(obj.maxFramebufferLayers, pAllocationCallbacks);
    destroy_structure_copy(obj.framebufferColorSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.framebufferDepthSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.framebufferStencilSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.framebufferNoAttachmentsSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.maxColorAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.sampledImageColorSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.sampledImageIntegerSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.sampledImageDepthSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.sampledImageStencilSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.storageImageSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSampleMaskWords, pAllocationCallbacks);
    destroy_structure_copy(obj.timestampComputeAndGraphics, pAllocationCallbacks);
    destroy_structure_copy(obj.timestampPeriod, pAllocationCallbacks);
    destroy_structure_copy(obj.maxClipDistances, pAllocationCallbacks);
    destroy_structure_copy(obj.maxCullDistances, pAllocationCallbacks);
    destroy_structure_copy(obj.maxCombinedClipAndCullDistances, pAllocationCallbacks);
    destroy_structure_copy(obj.discreteQueuePriorities, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.pointSizeRange);
    destroy_static_array_copy<2>(obj.lineWidthRange);
    destroy_structure_copy(obj.pointSizeGranularity, pAllocationCallbacks);
    destroy_structure_copy(obj.lineWidthGranularity, pAllocationCallbacks);
    destroy_structure_copy(obj.strictLines, pAllocationCallbacks);
    destroy_structure_copy(obj.standardSampleLocations, pAllocationCallbacks);
    destroy_structure_copy(obj.optimalBufferCopyOffsetAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.optimalBufferCopyRowPitchAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.nonCoherentAtomSize, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.rectangularLines, pAllocationCallbacks);
    destroy_structure_copy(obj.bresenhamLines, pAllocationCallbacks);
    destroy_structure_copy(obj.smoothLines, pAllocationCallbacks);
    destroy_structure_copy(obj.stippledRectangularLines, pAllocationCallbacks);
    destroy_structure_copy(obj.stippledBresenhamLines, pAllocationCallbacks);
    destroy_structure_copy(obj.stippledSmoothLines, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.lineSubPixelPrecisionBits, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerSetDescriptors, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMemoryAllocationSize, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.heapBudget);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.heapUsage);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryPriority, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.memoryTypeCount, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_MEMORY_TYPES>(obj.memoryTypes);
    destroy_structure_copy(obj.memoryHeapCount, pAllocationCallbacks);
    destroy_static_array_copy<VK_MAX_MEMORY_HEAPS>(obj.memoryHeaps);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.taskShader, pAllocationCallbacks);
    destroy_structure_copy(obj.meshShader, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDrawMeshTasksCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTaskWorkGroupInvocations, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.maxTaskWorkGroupSize);
    destroy_structure_copy(obj.maxTaskTotalMemorySize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTaskOutputCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMeshWorkGroupInvocations, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.maxMeshWorkGroupSize);
    destroy_structure_copy(obj.maxMeshTotalMemorySize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMeshOutputVertices, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMeshOutputPrimitives, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMeshMultiviewViewCount, pAllocationCallbacks);
    destroy_structure_copy(obj.meshOutputPerVertexGranularity, pAllocationCallbacks);
    destroy_structure_copy(obj.meshOutputPerPrimitiveGranularity, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.multiview, pAllocationCallbacks);
    destroy_structure_copy(obj.multiviewGeometryShader, pAllocationCallbacks);
    destroy_structure_copy(obj.multiviewTessellationShader, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.perViewPositionAllComponents, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMultiviewViewCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMultiviewInstanceIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pciDomain, pAllocationCallbacks);
    destroy_structure_copy(obj.pciBus, pAllocationCallbacks);
    destroy_structure_copy(obj.pciDevice, pAllocationCallbacks);
    destroy_structure_copy(obj.pciFunction, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.performanceCounterQueryPools, pAllocationCallbacks);
    destroy_structure_copy(obj.performanceCounterMultipleQueryPools, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.allowCommandBufferQueryCopies, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineCreationCacheControl, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineExecutableInfo, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pointClippingBehavior, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sharedImage, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.apiVersion, pAllocationCallbacks);
    destroy_structure_copy(obj.driverVersion, pAllocationCallbacks);
    destroy_structure_copy(obj.vendorID, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceID, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceType, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.pipelineCacheUUID);
    destroy_structure_copy(obj.limits, pAllocationCallbacks);
    destroy_structure_copy(obj.sparseProperties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.properties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.protectedMemory, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.protectedNoFault, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPushDescriptors, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracing, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracingShaderGroupHandleCaptureReplay, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracingShaderGroupHandleCaptureReplayMixed, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracingAccelerationStructureCaptureReplay, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracingIndirectTraceRays, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracingIndirectAccelerationStructureBuild, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracingHostAccelerationStructureCommands, pAllocationCallbacks);
    destroy_structure_copy(obj.rayQuery, pAllocationCallbacks);
    destroy_structure_copy(obj.rayTracingPrimitiveCulling, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderGroupHandleSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    destroy_structure_copy(obj.maxShaderGroupStride, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderGroupBaseAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxInstanceCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPrimitiveCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetAccelerationStructures, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderGroupHandleCaptureReplaySize, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderGroupHandleSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    destroy_structure_copy(obj.maxShaderGroupStride, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderGroupBaseAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.maxGeometryCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxInstanceCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTriangleCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetAccelerationStructures, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.representativeFragmentTest, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationSampleCounts, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
    destroy_static_array_copy<2>(obj.sampleLocationCoordinateRange);
    destroy_structure_copy(obj.sampleLocationSubPixelBits, pAllocationCallbacks);
    destroy_structure_copy(obj.variableSampleLocations, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.filterMinmaxSingleComponentFormats, pAllocationCallbacks);
    destroy_structure_copy(obj.filterMinmaxImageComponentMapping, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.samplerYcbcrConversion, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.scalarBlockLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.separateDepthStencilLayouts, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderBufferInt64Atomics, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSharedInt64Atomics, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSubgroupClock, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDeviceClock, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderCoreFeatures, pAllocationCallbacks);
    destroy_structure_copy(obj.activeComputeUnitCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderEngineCount, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderArraysPerEngineCount, pAllocationCallbacks);
    destroy_structure_copy(obj.computeUnitsPerShaderArray, pAllocationCallbacks);
    destroy_structure_copy(obj.simdPerComputeUnit, pAllocationCallbacks);
    destroy_structure_copy(obj.wavefrontsPerSimd, pAllocationCallbacks);
    destroy_structure_copy(obj.wavefrontSize, pAllocationCallbacks);
    destroy_structure_copy(obj.sgprsPerSimd, pAllocationCallbacks);
    destroy_structure_copy(obj.minSgprAllocation, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSgprAllocation, pAllocationCallbacks);
    destroy_structure_copy(obj.sgprAllocationGranularity, pAllocationCallbacks);
    destroy_structure_copy(obj.vgprsPerSimd, pAllocationCallbacks);
    destroy_structure_copy(obj.minVgprAllocation, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVgprAllocation, pAllocationCallbacks);
    destroy_structure_copy(obj.vgprAllocationGranularity, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDemoteToHelperInvocation, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDrawParameters, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInt8, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.imageFootprint, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderIntegerFunctions2, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSMBuiltins, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSMCount, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderWarpsPerSM, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSubgroupExtendedTypes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shadingRateImage, pAllocationCallbacks);
    destroy_structure_copy(obj.shadingRateCoarseSampleOrder, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shadingRateTexelSize, pAllocationCallbacks);
    destroy_structure_copy(obj.shadingRatePaletteSize, pAllocationCallbacks);
    destroy_structure_copy(obj.shadingRateMaxCoarseSamples, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.samples, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
    destroy_structure_copy(obj.tiling, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.residencyStandard2DBlockShape, pAllocationCallbacks);
    destroy_structure_copy(obj.residencyStandard2DMultisampleBlockShape, pAllocationCallbacks);
    destroy_structure_copy(obj.residencyStandard3DBlockShape, pAllocationCallbacks);
    destroy_structure_copy(obj.residencyAlignedMipSize, pAllocationCallbacks);
    destroy_structure_copy(obj.residencyNonResidentStrict, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupSize, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedStages, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedOperations, pAllocationCallbacks);
    destroy_structure_copy(obj.quadOperationsInAllStages, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupSizeControl, pAllocationCallbacks);
    destroy_structure_copy(obj.computeFullSubgroups, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.minSubgroupSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxSubgroupSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxComputeWorkgroupSubgroups, pAllocationCallbacks);
    destroy_structure_copy(obj.requiredSubgroupSizeStages, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.surface, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.texelBufferAlignment, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.storageTexelBufferOffsetAlignmentBytes, pAllocationCallbacks);
    destroy_structure_copy(obj.storageTexelBufferOffsetSingleTexelAlignment, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformTexelBufferOffsetAlignmentBytes, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformTexelBufferOffsetSingleTexelAlignment, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.textureCompressionASTC_HDR, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.timelineSemaphore, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTimelineSemaphoreValueDifference, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.purposes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.transformFeedback, pAllocationCallbacks);
    destroy_structure_copy(obj.geometryStreams, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTransformFeedbackStreams, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTransformFeedbackBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTransformFeedbackBufferSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTransformFeedbackStreamDataSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTransformFeedbackBufferDataSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTransformFeedbackBufferDataStride, pAllocationCallbacks);
    destroy_structure_copy(obj.transformFeedbackQueries, pAllocationCallbacks);
    destroy_structure_copy(obj.transformFeedbackStreamsLinesTriangles, pAllocationCallbacks);
    destroy_structure_copy(obj.transformFeedbackRasterizationStreamSelect, pAllocationCallbacks);
    destroy_structure_copy(obj.transformFeedbackDraw, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformBufferStandardLayout, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.variablePointersStorageBuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.variablePointers, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexAttributeInstanceRateDivisor, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexAttributeInstanceRateZeroDivisor, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxVertexAttribDivisor, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.storageBuffer16BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformAndStorageBuffer16BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.storagePushConstant16, pAllocationCallbacks);
    destroy_structure_copy(obj.storageInputOutput16, pAllocationCallbacks);
    destroy_structure_copy(obj.multiview, pAllocationCallbacks);
    destroy_structure_copy(obj.multiviewGeometryShader, pAllocationCallbacks);
    destroy_structure_copy(obj.multiviewTessellationShader, pAllocationCallbacks);
    destroy_structure_copy(obj.variablePointersStorageBuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.variablePointers, pAllocationCallbacks);
    destroy_structure_copy(obj.protectedMemory, pAllocationCallbacks);
    destroy_structure_copy(obj.samplerYcbcrConversion, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDrawParameters, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.deviceUUID);
    destroy_static_array_copy<VK_UUID_SIZE>(obj.driverUUID);
    destroy_static_array_copy<VK_LUID_SIZE>(obj.deviceLUID);
    destroy_structure_copy(obj.deviceNodeMask, pAllocationCallbacks);
    destroy_structure_copy(obj.deviceLUIDValid, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupSize, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupSupportedStages, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupSupportedOperations, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupQuadOperationsInAllStages, pAllocationCallbacks);
    destroy_structure_copy(obj.pointClippingBehavior, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMultiviewViewCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMultiviewInstanceIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.protectedNoFault, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerSetDescriptors, pAllocationCallbacks);
    destroy_structure_copy(obj.maxMemoryAllocationSize, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.samplerMirrorClampToEdge, pAllocationCallbacks);
    destroy_structure_copy(obj.drawIndirectCount, pAllocationCallbacks);
    destroy_structure_copy(obj.storageBuffer8BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformAndStorageBuffer8BitAccess, pAllocationCallbacks);
    destroy_structure_copy(obj.storagePushConstant8, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderBufferInt64Atomics, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSharedInt64Atomics, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInt8, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInputAttachmentArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSampledImageArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingUniformBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingSampledImageUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingStorageImageUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingStorageBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingUpdateUnusedWhilePending, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingPartiallyBound, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorBindingVariableDescriptorCount, pAllocationCallbacks);
    destroy_structure_copy(obj.runtimeDescriptorArray, pAllocationCallbacks);
    destroy_structure_copy(obj.samplerFilterMinmax, pAllocationCallbacks);
    destroy_structure_copy(obj.scalarBlockLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.imagelessFramebuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.uniformBufferStandardLayout, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSubgroupExtendedTypes, pAllocationCallbacks);
    destroy_structure_copy(obj.separateDepthStencilLayouts, pAllocationCallbacks);
    destroy_structure_copy(obj.hostQueryReset, pAllocationCallbacks);
    destroy_structure_copy(obj.timelineSemaphore, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddress, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddressCaptureReplay, pAllocationCallbacks);
    destroy_structure_copy(obj.bufferDeviceAddressMultiDevice, pAllocationCallbacks);
    destroy_structure_copy(obj.vulkanMemoryModel, pAllocationCallbacks);
    destroy_structure_copy(obj.vulkanMemoryModelDeviceScope, pAllocationCallbacks);
    destroy_structure_copy(obj.vulkanMemoryModelAvailabilityVisibilityChains, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderOutputViewportIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderOutputLayer, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupBroadcastDynamicId, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.driverID, pAllocationCallbacks);
    destroy_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
    destroy_structure_copy(obj.denormBehaviorIndependence, pAllocationCallbacks);
    destroy_structure_copy(obj.roundingModeIndependence, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormPreserveFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormPreserveFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormPreserveFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormFlushToZeroFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormFlushToZeroFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderDenormFlushToZeroFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTEFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTEFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTEFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTZFloat16, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTZFloat32, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderRoundingModeRTZFloat64, pAllocationCallbacks);
    destroy_structure_copy(obj.maxUpdateAfterBindDescriptorsInAllPools, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderSampledImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderStorageImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexingNative, pAllocationCallbacks);
    destroy_structure_copy(obj.robustBufferAccessUpdateAfterBind, pAllocationCallbacks);
    destroy_structure_copy(obj.quadDivergentImplicitLod, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSamplers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPerStageUpdateAfterBindResources, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindSamplers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindSampledImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageImages, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDescriptorSetUpdateAfterBindInputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedDepthResolveModes, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedStencilResolveModes, pAllocationCallbacks);
    destroy_structure_copy(obj.independentResolveNone, pAllocationCallbacks);
    destroy_structure_copy(obj.independentResolve, pAllocationCallbacks);
    destroy_structure_copy(obj.filterMinmaxSingleComponentFormats, pAllocationCallbacks);
    destroy_structure_copy(obj.filterMinmaxImageComponentMapping, pAllocationCallbacks);
    destroy_structure_copy(obj.maxTimelineSemaphoreValueDifference, pAllocationCallbacks);
    destroy_structure_copy(obj.framebufferIntegerColorSampleCounts, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.vulkanMemoryModel, pAllocationCallbacks);
    destroy_structure_copy(obj.vulkanMemoryModelDeviceScope, pAllocationCallbacks);
    destroy_structure_copy(obj.vulkanMemoryModelAvailabilityVisibilityChains, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.ycbcrImageArrays, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.initialDataSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcPremultiplied, pAllocationCallbacks);
    destroy_structure_copy(obj.dstPremultiplied, pAllocationCallbacks);
    destroy_structure_copy(obj.blendOverlap, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.blendEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.srcColorBlendFactor, pAllocationCallbacks);
    destroy_structure_copy(obj.dstColorBlendFactor, pAllocationCallbacks);
    destroy_structure_copy(obj.colorBlendOp, pAllocationCallbacks);
    destroy_structure_copy(obj.srcAlphaBlendFactor, pAllocationCallbacks);
    destroy_structure_copy(obj.dstAlphaBlendFactor, pAllocationCallbacks);
    destroy_structure_copy(obj.alphaBlendOp, pAllocationCallbacks);
    destroy_structure_copy(obj.colorWriteMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.logicOpEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.logicOp, pAllocationCallbacks);
    destroy_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    destroy_static_array_copy<4>(obj.blendConstants);
}

template <>
void destroy_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.compilerControlFlags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageModulationMode, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageModulationTableEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageModulationTableCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.coverageModulationTableCount, obj.pCoverageModulationTable, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageReductionMode, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageToColorEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.coverageToColorLocation, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pPipelineCreationFeedback, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineStageCreationFeedbackCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.duration, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.depthTestEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.depthWriteEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.depthCompareOp, pAllocationCallbacks);
    destroy_structure_copy(obj.depthBoundsTestEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilTestEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.front, pAllocationCallbacks);
    destroy_structure_copy(obj.back, pAllocationCallbacks);
    destroy_structure_copy(obj.minDepthBounds, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDepthBounds, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.discardRectangleMode, pAllocationCallbacks);
    destroy_structure_copy(obj.discardRectangleCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.discardRectangleCount, obj.pDiscardRectangles, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.dynamicStateCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dynamicStateCount, obj.pDynamicStates, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pipeline, pAllocationCallbacks);
    destroy_structure_copy(obj.executableIndex, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.isText, pAllocationCallbacks);
    destroy_structure_copy(obj.dataSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.stages, pAllocationCallbacks);
    destroy_structure_copy(obj.subgroupSize, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.value, pAllocationCallbacks);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
void destroy_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.b32, pAllocationCallbacks);
    destroy_structure_copy(obj.i64, pAllocationCallbacks);
    destroy_structure_copy(obj.u64, pAllocationCallbacks);
    destroy_structure_copy(obj.f64, pAllocationCallbacks);
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.pipeline, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.topology, pAllocationCallbacks);
    destroy_structure_copy(obj.primitiveRestartEnable, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.setLayoutCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.setLayoutCount, obj.pSetLayouts, pAllocationCallbacks);
    destroy_structure_copy(obj.pushConstantRangeCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.pushConstantRangeCount, obj.pPushConstantRanges, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.libraryCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.libraryCount, obj.pLibraries, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
void destroy_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.rasterizationSamples, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleShadingEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.minSampleShading, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil], obj.pSampleMask, pAllocationCallbacks);
    destroy_structure_copy(obj.alphaToCoverageEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.alphaToOneEnable, pAllocationCallbacks);
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.conservativeRasterizationMode, pAllocationCallbacks);
    destroy_structure_copy(obj.extraPrimitiveOverestimationSize, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.depthClipEnable, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.lineRasterizationMode, pAllocationCallbacks);
    destroy_structure_copy(obj.stippledLineEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.lineStippleFactor, pAllocationCallbacks);
    destroy_structure_copy(obj.lineStipplePattern, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.depthClampEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.rasterizerDiscardEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.polygonMode, pAllocationCallbacks);
    destroy_structure_copy(obj.cullMode, pAllocationCallbacks);
    destroy_structure_copy(obj.frontFace, pAllocationCallbacks);
    destroy_structure_copy(obj.depthBiasEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.depthBiasConstantFactor, pAllocationCallbacks);
    destroy_structure_copy(obj.depthBiasClamp, pAllocationCallbacks);
    destroy_structure_copy(obj.depthBiasSlopeFactor, pAllocationCallbacks);
    destroy_structure_copy(obj.lineWidth, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.rasterizationOrder, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.rasterizationStream, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.representativeFragmentTestEnable, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationsEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.stage, pAllocationCallbacks);
    destroy_structure_copy(obj.module, pAllocationCallbacks);
    destroy_dynamic_string_copy(obj.pName, pAllocationCallbacks);
    destroy_structure_copy(obj.pSpecializationInfo, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.requiredSubgroupSize, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.domainOrigin, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.patchControlPoints, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexBindingDivisorCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexBindingDescriptionCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions, pAllocationCallbacks);
    destroy_structure_copy(obj.vertexAttributeDescriptionCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleOrderType, pAllocationCallbacks);
    destroy_structure_copy(obj.customSampleOrderCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.customSampleOrderCount, obj.pCustomSampleOrders, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.exclusiveScissorCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.exclusiveScissorCount, obj.pExclusiveScissors, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.shadingRateImageEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.viewportCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pShadingRatePalettes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.viewportCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewports, pAllocationCallbacks);
    destroy_structure_copy(obj.scissorCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.scissorCount, obj.pScissors, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.viewportCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewportSwizzles, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.viewportWScalingEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.viewportCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.viewportCount, obj.pViewportWScalings, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_GGP
template <>
void destroy_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.frameToken, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_GGP

template <>
void destroy_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    destroy_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pSwapchains, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pImageIndices, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pResults, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.rectangleCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.rectangleCount, obj.pRectangles, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pRegions, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.presentID, pAllocationCallbacks);
    destroy_structure_copy(obj.desiredPresentTime, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.swapchainCount, obj.pTimes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.protectedSubmit, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkPushConstantRange>(const VkPushConstantRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.stageFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.queryType, pAllocationCallbacks);
    destroy_structure_copy(obj.queryCount, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineStatistics, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.counterIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.counterIndexCount, obj.pCounterIndices, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.performanceCountersSampling, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.checkpointExecutionStageMask, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.queueFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.queueCount, pAllocationCallbacks);
    destroy_structure_copy(obj.timestampValidBits, pAllocationCallbacks);
    destroy_structure_copy(obj.minImageTransferGranularity, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyProperties, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.stageCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_structure_copy(obj.groupCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    destroy_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    destroy_structure_copy(obj.libraries, pAllocationCallbacks);
    destroy_structure_copy(obj.pLibraryInterface, pAllocationCallbacks);
    destroy_structure_copy(obj.layout, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineHandle, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.stageCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    destroy_structure_copy(obj.groupCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    destroy_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    destroy_structure_copy(obj.layout, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineHandle, pAllocationCallbacks);
    destroy_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.maxPayloadSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxAttributeSize, pAllocationCallbacks);
    destroy_structure_copy(obj.maxCallableSize, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.generalShader, pAllocationCallbacks);
    destroy_structure_copy(obj.closestHitShader, pAllocationCallbacks);
    destroy_structure_copy(obj.anyHitShader, pAllocationCallbacks);
    destroy_structure_copy(obj.intersectionShader, pAllocationCallbacks);
    destroy_structure_copy(obj.pShaderGroupCaptureReplayHandle, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.type, pAllocationCallbacks);
    destroy_structure_copy(obj.generalShader, pAllocationCallbacks);
    destroy_structure_copy(obj.closestHitShader, pAllocationCallbacks);
    destroy_structure_copy(obj.anyHitShader, pAllocationCallbacks);
    destroy_structure_copy(obj.intersectionShader, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRect2D>(const VkRect2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    destroy_structure_copy(obj.layer, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.refreshDuration, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.renderPass, pAllocationCallbacks);
    destroy_structure_copy(obj.framebuffer, pAllocationCallbacks);
    destroy_structure_copy(obj.renderArea, pAllocationCallbacks);
    destroy_structure_copy(obj.clearValueCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.clearValueCount, obj.pClearValues, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.subpassCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    destroy_structure_copy(obj.dependencyCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.subpassCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    destroy_structure_copy(obj.dependencyCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
    destroy_structure_copy(obj.correlatedViewMaskCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fragmentDensityMapAttachment, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.aspectReferenceCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.aspectReferenceCount, obj.pAspectReferences, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.subpassCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.subpassCount, obj.pViewMasks, pAllocationCallbacks);
    destroy_structure_copy(obj.dependencyCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dependencyCount, obj.pViewOffsets, pAllocationCallbacks);
    destroy_structure_copy(obj.correlationMaskCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.correlationMaskCount, obj.pCorrelationMasks, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.attachmentInitialSampleLocationsCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations, pAllocationCallbacks);
    destroy_structure_copy(obj.postSubpassSampleLocationsCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.transform, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.x, pAllocationCallbacks);
    destroy_structure_copy(obj.y, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationsPerPixel, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationGridSize, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationsCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.sampleLocationsCount, obj.pSampleLocations, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.magFilter, pAllocationCallbacks);
    destroy_structure_copy(obj.minFilter, pAllocationCallbacks);
    destroy_structure_copy(obj.mipmapMode, pAllocationCallbacks);
    destroy_structure_copy(obj.addressModeU, pAllocationCallbacks);
    destroy_structure_copy(obj.addressModeV, pAllocationCallbacks);
    destroy_structure_copy(obj.addressModeW, pAllocationCallbacks);
    destroy_structure_copy(obj.mipLodBias, pAllocationCallbacks);
    destroy_structure_copy(obj.anisotropyEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.maxAnisotropy, pAllocationCallbacks);
    destroy_structure_copy(obj.compareEnable, pAllocationCallbacks);
    destroy_structure_copy(obj.compareOp, pAllocationCallbacks);
    destroy_structure_copy(obj.minLod, pAllocationCallbacks);
    destroy_structure_copy(obj.maxLod, pAllocationCallbacks);
    destroy_structure_copy(obj.borderColor, pAllocationCallbacks);
    destroy_structure_copy(obj.unnormalizedCoordinates, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.reductionMode, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.ycbcrModel, pAllocationCallbacks);
    destroy_structure_copy(obj.ycbcrRange, pAllocationCallbacks);
    destroy_structure_copy(obj.components, pAllocationCallbacks);
    destroy_structure_copy(obj.xChromaOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.yChromaOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.chromaFilter, pAllocationCallbacks);
    destroy_structure_copy(obj.forceExplicitReconstruction, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.combinedImageSamplerDescriptorCount, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.conversion, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphore, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphore, pAllocationCallbacks);
    destroy_structure_copy(obj.handleType, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphore, pAllocationCallbacks);
    destroy_structure_copy(obj.value, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphoreType, pAllocationCallbacks);
    destroy_structure_copy(obj.initialValue, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.semaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.semaphoreCount, obj.pSemaphores, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.semaphoreCount, obj.pValues, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.data, pAllocationCallbacks);
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
void destroy_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.codeSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.latexmath:[\textrm{codeSize} \over 4], obj.pCode, pAllocationCallbacks);
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.validationCache, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.numUsedVgprs, pAllocationCallbacks);
    destroy_structure_copy(obj.numUsedSgprs, pAllocationCallbacks);
    destroy_structure_copy(obj.ldsSizePerLocalWorkGroup, pAllocationCallbacks);
    destroy_structure_copy(obj.ldsUsageSizeInBytes, pAllocationCallbacks);
    destroy_structure_copy(obj.scratchMemUsageInBytes, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.shaderStageMask, pAllocationCallbacks);
    destroy_structure_copy(obj.resourceUsage, pAllocationCallbacks);
    destroy_structure_copy(obj.numPhysicalVgprs, pAllocationCallbacks);
    destroy_structure_copy(obj.numPhysicalSgprs, pAllocationCallbacks);
    destroy_structure_copy(obj.numAvailableVgprs, pAllocationCallbacks);
    destroy_structure_copy(obj.numAvailableSgprs, pAllocationCallbacks);
    destroy_static_array_copy<3>(obj.computeWorkGroupSize);
}

template <>
void destroy_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.shadingRatePaletteEntryCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.sharedPresentSupportedUsageFlags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.bindCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.aspectMask, pAllocationCallbacks);
    destroy_structure_copy(obj.imageGranularity, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.properties, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.subresource, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.extent, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.image, pAllocationCallbacks);
    destroy_structure_copy(obj.bindCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.formatProperties, pAllocationCallbacks);
    destroy_structure_copy(obj.imageMipTailFirstLod, pAllocationCallbacks);
    destroy_structure_copy(obj.imageMipTailSize, pAllocationCallbacks);
    destroy_structure_copy(obj.imageMipTailOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.imageMipTailStride, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.image, pAllocationCallbacks);
    destroy_structure_copy(obj.bindCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.resourceOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
    destroy_structure_copy(obj.memory, pAllocationCallbacks);
    destroy_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.mapEntryCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.mapEntryCount, obj.pMapEntries, pAllocationCallbacks);
    destroy_structure_copy(obj.dataSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.constantID, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkStencilOpState>(const VkStencilOpState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.failOp, pAllocationCallbacks);
    destroy_structure_copy(obj.passOp, pAllocationCallbacks);
    destroy_structure_copy(obj.depthFailOp, pAllocationCallbacks);
    destroy_structure_copy(obj.compareOp, pAllocationCallbacks);
    destroy_structure_copy(obj.compareMask, pAllocationCallbacks);
    destroy_structure_copy(obj.writeMask, pAllocationCallbacks);
    destroy_structure_copy(obj.reference, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_GGP
template <>
void destroy_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.streamDescriptor, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.buffer, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.stride, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkSubmitInfo>(const VkSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitDstStageMask, pAllocationCallbacks);
    destroy_structure_copy(obj.commandBufferCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBuffers, pAllocationCallbacks);
    destroy_structure_copy(obj.signalSemaphoreCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.contents, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassDependency>(const VkSubpassDependency& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.srcSubpass, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSubpass, pAllocationCallbacks);
    destroy_structure_copy(obj.srcStageMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dstStageMask, pAllocationCallbacks);
    destroy_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dependencyFlags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.srcSubpass, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSubpass, pAllocationCallbacks);
    destroy_structure_copy(obj.srcStageMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dstStageMask, pAllocationCallbacks);
    destroy_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    destroy_structure_copy(obj.dependencyFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.viewOffset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassDescription>(const VkSubpassDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    destroy_structure_copy(obj.inputAttachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.colorAttachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.pDepthStencilAttachment, pAllocationCallbacks);
    destroy_structure_copy(obj.preserveAttachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    destroy_structure_copy(obj.viewMask, pAllocationCallbacks);
    destroy_structure_copy(obj.inputAttachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.colorAttachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    destroy_structure_copy(obj.pDepthStencilAttachment, pAllocationCallbacks);
    destroy_structure_copy(obj.preserveAttachmentCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.depthResolveMode, pAllocationCallbacks);
    destroy_structure_copy(obj.stencilResolveMode, pAllocationCallbacks);
    destroy_structure_copy(obj.pDepthStencilResolveAttachment, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.subpassIndex, pAllocationCallbacks);
    destroy_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
    destroy_structure_copy(obj.size, pAllocationCallbacks);
    destroy_structure_copy(obj.rowPitch, pAllocationCallbacks);
    destroy_structure_copy(obj.arrayPitch, pAllocationCallbacks);
    destroy_structure_copy(obj.depthPitch, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.minImageCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageCount, pAllocationCallbacks);
    destroy_structure_copy(obj.currentExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageArrayLayers, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedTransforms, pAllocationCallbacks);
    destroy_structure_copy(obj.currentTransform, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedCompositeAlpha, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedUsageFlags, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedSurfaceCounters, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.surfaceCapabilities, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fullScreenExclusiveSupported, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.minImageCount, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageCount, pAllocationCallbacks);
    destroy_structure_copy(obj.currentExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.maxImageArrayLayers, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedTransforms, pAllocationCallbacks);
    destroy_structure_copy(obj.currentTransform, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedCompositeAlpha, pAllocationCallbacks);
    destroy_structure_copy(obj.supportedUsageFlags, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.surfaceFormat, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.colorSpace, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.fullScreenExclusive, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.hmonitor, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.supportsProtected, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.surfaceCounters, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.surface, pAllocationCallbacks);
    destroy_structure_copy(obj.minImageCount, pAllocationCallbacks);
    destroy_structure_copy(obj.imageFormat, pAllocationCallbacks);
    destroy_structure_copy(obj.imageColorSpace, pAllocationCallbacks);
    destroy_structure_copy(obj.imageExtent, pAllocationCallbacks);
    destroy_structure_copy(obj.imageArrayLayers, pAllocationCallbacks);
    destroy_structure_copy(obj.imageUsage, pAllocationCallbacks);
    destroy_structure_copy(obj.imageSharingMode, pAllocationCallbacks);
    destroy_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    destroy_structure_copy(obj.preTransform, pAllocationCallbacks);
    destroy_structure_copy(obj.compositeAlpha, pAllocationCallbacks);
    destroy_structure_copy(obj.presentMode, pAllocationCallbacks);
    destroy_structure_copy(obj.clipped, pAllocationCallbacks);
    destroy_structure_copy(obj.oldSwapchain, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.localDimmingEnable, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
void destroy_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.usage, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
void destroy_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.supportsTextureGatherLODBiasAMD, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.waitSemaphoreValueCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    destroy_structure_copy(obj.signalSemaphoreValueCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.width, pAllocationCallbacks);
    destroy_structure_copy(obj.height, pAllocationCallbacks);
    destroy_structure_copy(obj.depth, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_static_array_copy<34>(obj.matrix);
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
void destroy_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.initialDataSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.enabledValidationFeatureCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, pAllocationCallbacks);
    destroy_structure_copy(obj.disabledValidationFeatureCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.disabledValidationCheckCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.location, pAllocationCallbacks);
    destroy_structure_copy(obj.binding, pAllocationCallbacks);
    destroy_structure_copy(obj.format, pAllocationCallbacks);
    destroy_structure_copy(obj.offset, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.binding, pAllocationCallbacks);
    destroy_structure_copy(obj.stride, pAllocationCallbacks);
    destroy_structure_copy(obj.inputRate, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.binding, pAllocationCallbacks);
    destroy_structure_copy(obj.divisor, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
void destroy_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.window, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
void destroy_structure_copy<VkViewport>(const VkViewport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.x, pAllocationCallbacks);
    destroy_structure_copy(obj.y, pAllocationCallbacks);
    destroy_structure_copy(obj.width, pAllocationCallbacks);
    destroy_structure_copy(obj.height, pAllocationCallbacks);
    destroy_structure_copy(obj.minDepth, pAllocationCallbacks);
    destroy_structure_copy(obj.maxDepth, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.x, pAllocationCallbacks);
    destroy_structure_copy(obj.y, pAllocationCallbacks);
    destroy_structure_copy(obj.z, pAllocationCallbacks);
    destroy_structure_copy(obj.w, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.xcoeff, pAllocationCallbacks);
    destroy_structure_copy(obj.ycoeff, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
void destroy_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.display, pAllocationCallbacks);
    destroy_structure_copy(obj.surface, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.acquireCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeouts, pAllocationCallbacks);
    destroy_structure_copy(obj.releaseCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.acquireCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, pAllocationCallbacks);
    destroy_structure_copy(obj.releaseCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
void destroy_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.hinstance, pAllocationCallbacks);
    destroy_structure_copy(obj.hwnd, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
void destroy_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.dstSet, pAllocationCallbacks);
    destroy_structure_copy(obj.dstBinding, pAllocationCallbacks);
    destroy_structure_copy(obj.dstArrayElement, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    destroy_structure_copy(obj.descriptorType, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pImageInfo, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pBufferInfo, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.descriptorCount, obj.pTexelBufferView, pAllocationCallbacks);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
void destroy_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.accelerationStructureCount, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.accelerationStructureCount, obj.pAccelerationStructures, pAllocationCallbacks);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
void destroy_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.dataSize, pAllocationCallbacks);
    destroy_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
}

template <>
void destroy_structure_copy<VkXYColorEXT>(const VkXYColorEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.x, pAllocationCallbacks);
    destroy_structure_copy(obj.y, pAllocationCallbacks);
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
void destroy_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.connection, pAllocationCallbacks);
    destroy_structure_copy(obj.window, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
void destroy_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    destroy_structure_copy(obj.sType, pAllocationCallbacks);
    destroy_pnext_copy(obj.pNext, pAllocationCallbacks);
    destroy_structure_copy(obj.flags, pAllocationCallbacks);
    destroy_structure_copy(obj.dpy, pAllocationCallbacks);
    destroy_structure_copy(obj.window, pAllocationCallbacks);
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void destroy_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks)
{
    if (pNext) {
        switch (*(VkStructureType*)pNext) {
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureBuildGeometryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureCreateGeometryTypeInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureDeviceAddressInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryAabbsDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryInstancesDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureGeometryTrianglesDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureMemoryRequirementsInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureMemoryRequirementsInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR: {
            destroy_dynamic_array_copy(1, (const VkAccelerationStructureVersionKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAcquireNextImageInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkAcquireProfilingLockInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkBindAccelerationStructureMemoryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkBindImageMemorySwapchainInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkBufferDeviceAddressCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkCalibratedTimestampInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: {
            destroy_dynamic_array_copy(1, (const VkCheckpointDataNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferInheritanceConditionalRenderingInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferInheritanceRenderPassTransformInfoQCOM*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkConditionalRenderingBeginInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkCooperativeMatrixPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkCopyAccelerationStructureInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkCopyAccelerationStructureToMemoryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkCopyMemoryToAccelerationStructureInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugMarkerMarkerInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugMarkerObjectNameInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugMarkerObjectTagInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugReportCallbackCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsLabelEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsMessengerCallbackDataEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsMessengerCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsObjectNameInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDebugUtilsObjectTagInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDedicatedAllocationBufferCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDedicatedAllocationImageCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDedicatedAllocationMemoryAllocateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeferredOperationInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDescriptorPoolInlineUniformBlockCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkDeviceDiagnosticsConfigCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDeviceEventInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupPresentCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDeviceGroupSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const VkDeviceMemoryOverallocationCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDeviceQueueGlobalPriorityCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDisplayEventInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayModeCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayModeProperties2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
            destroy_dynamic_array_copy(1, (const VkDisplayNativeHdrSurfaceCapabilitiesAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPlaneCapabilities2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPlaneInfo2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPlaneProperties2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkDisplayPowerInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplayProperties2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkDisplaySurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkDrmFormatModifierPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
            destroy_dynamic_array_copy(1, (const VkDrmFormatModifierPropertiesListEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkExportFenceWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkExportMemoryAllocateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkExportMemoryWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkExportMemoryWin32HandleInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkExportSemaphoreWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkExternalFormatANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkExternalMemoryImageCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkFenceGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkFenceGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkFilterCubicImageViewImageFormatPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: {
            destroy_dynamic_array_copy(1, (const VkFramebufferMixedSamplesCombinationNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGeneratedCommandsInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGeneratedCommandsMemoryRequirementsInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV: {
            destroy_dynamic_array_copy(1, (const VkGeometryNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: {
            destroy_dynamic_array_copy(1, (const VkGeometryTrianglesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGraphicsPipelineShaderGroupsCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkGraphicsShaderGroupCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: {
            destroy_dynamic_array_copy(1, (const VkHdrMetadataEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkHeadlessSurfaceCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkImageDrmFormatModifierExplicitCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkImageDrmFormatModifierListCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkImageDrmFormatModifierPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImageSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX: {
            destroy_dynamic_array_copy(1, (const VkImageViewHandleInfoNVX*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportFenceFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportFenceWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryHostPointerInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkImportMemoryWin32HandleInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportSemaphoreFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkImportSemaphoreWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkIndirectCommandsLayoutCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: {
            destroy_dynamic_array_copy(1, (const VkIndirectCommandsLayoutTokenNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkInitializePerformanceApiInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryFdPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkMemoryHostPointerPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkMemoryPriorityAllocateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkMemoryWin32HandlePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkMetalSurfaceCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkMultisamplePropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkNativeBufferANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceConfigurationAcquireInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: {
            destroy_dynamic_array_copy(1, (const VkPerformanceCounterDescriptionKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: {
            destroy_dynamic_array_copy(1, (const VkPerformanceCounterKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceMarkerInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceOverrideInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPerformanceQuerySubmitInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPerformanceStreamMarkerInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCoherentMemoryFeaturesAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceConditionalRenderingFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCooperativeMatrixFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCooperativeMatrixPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCornerSampledImageFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceCoverageReductionModeFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDepthClipEnableFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDiagnosticsConfigFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceDiscardRectanglePropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExclusiveScissorFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceImageDrmFormatModifierInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceImageViewImageFormatInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceInlineUniformBlockFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceInlineUniformBlockPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceLineRasterizationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceLineRasterizationPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMemoryBudgetPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMemoryPriorityFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMeshShaderFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMeshShaderPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePerformanceQueryFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePerformanceQueryPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePresentationPropertiesANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDevicePushDescriptorPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSampleLocationsPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderClockFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderCoreProperties2AMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderCorePropertiesAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderImageFootprintFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShadingRateImageFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceShadingRateImagePropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceSurfaceInfo2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceToolPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTransformFeedbackFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceTransformFeedbackPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineColorBlendAdvancedStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const VkPipelineCompilerControlCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineCoverageModulationStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineCoverageReductionStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineCoverageToColorStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineCreationFeedbackCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineDiscardRectangleStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutableInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutableInternalRepresentationKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutablePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineExecutableStatisticKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPipelineLibraryCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationConservativeStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationDepthClipStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationLineStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationStateRasterizationOrderAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationStateStreamCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineRepresentativeFragmentTestStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineSampleLocationsStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkPipelineVertexInputDivisorStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportExclusiveScissorStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportShadingRateImageStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportSwizzleStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportWScalingStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
            destroy_dynamic_array_copy(1, (const VkPresentFrameTokenGGP*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
            destroy_dynamic_array_copy(1, (const VkPresentRegionsKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
            destroy_dynamic_array_copy(1, (const VkPresentTimesInfoGOOGLE*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL: {
            destroy_dynamic_array_copy(1, (const VkQueryPoolCreateInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkQueryPoolPerformanceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
            destroy_dynamic_array_copy(1, (const VkQueueFamilyCheckpointPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkRayTracingPipelineCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkRayTracingPipelineCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkRayTracingPipelineInterfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkRayTracingShaderGroupCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkRayTracingShaderGroupCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkRenderPassFragmentDensityMapCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkRenderPassSampleLocationsBeginInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
            destroy_dynamic_array_copy(1, (const VkRenderPassTransformBeginInfoQCOM*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSampleLocationsInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkShaderModuleValidationCacheCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkSharedPresentSurfaceCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: {
            destroy_dynamic_array_copy(1, (const VkStreamDescriptorSurfaceCreateInfoGGP*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceCapabilities2EXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkSurfaceCapabilities2KHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceCapabilitiesFullScreenExclusiveEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: {
            destroy_dynamic_array_copy(1, (const VkSurfaceFormat2KHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceFullScreenExclusiveInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSurfaceFullScreenExclusiveWin32InfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
            destroy_dynamic_array_copy(1, (const VkSurfaceProtectedCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkSwapchainCounterCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
            destroy_dynamic_array_copy(1, (const VkSwapchainDisplayNativeHdrCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID: {
            destroy_dynamic_array_copy(1, (const VkSwapchainImageCreateInfoANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            destroy_dynamic_array_copy(1, (const VkValidationCacheCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
            destroy_dynamic_array_copy(1, (const VkValidationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
            destroy_dynamic_array_copy(1, (const VkValidationFlagsEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_VI_NN
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: {
            destroy_dynamic_array_copy(1, (const VkViSurfaceCreateInfoNN*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_VI_NN
        #ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkWaylandSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WAYLAND_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkWin32KeyedMutexAcquireReleaseInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
            destroy_dynamic_array_copy(1, (const VkWin32KeyedMutexAcquireReleaseInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkWin32SurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
            destroy_dynamic_array_copy(1, (const VkWriteDescriptorSetAccelerationStructureKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: {
            destroy_dynamic_array_copy(1, (const VkWriteDescriptorSetInlineUniformBlockEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkXcbSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XCB_KHR
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: {
            destroy_dynamic_array_copy(1, (const VkXlibSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_APPLICATION_INFO: {
            destroy_dynamic_array_copy(1, (const VkApplicationInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkInstanceCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkEventCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkQueryPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkBufferCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkBufferViewCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkImageCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkImageViewCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkShaderModuleCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineCacheCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineShaderStageCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineVertexInputStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceQueueCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineInputAssemblyStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineTessellationStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineViewportStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineRasterizationStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineMultisampleStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineDepthStencilStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineColorBlendStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineDynamicStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkGraphicsPipelineCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkComputePipelineCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDeviceCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkPipelineLayoutCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkSamplerCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetLayoutCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkDescriptorSetAllocateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: {
            destroy_dynamic_array_copy(1, (const VkWriteDescriptorSet*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: {
            destroy_dynamic_array_copy(1, (const VkCopyDescriptorSet*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkFramebufferCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkRenderPassCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SUBMIT_INFO: {
            destroy_dynamic_array_copy(1, (const VkSubmitInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferAllocateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferInheritanceInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkCommandBufferBeginInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: {
            destroy_dynamic_array_copy(1, (const VkRenderPassBeginInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const VkBufferMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const VkImageMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER: {
            destroy_dynamic_array_copy(1, (const VkMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkMemoryAllocateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: {
            destroy_dynamic_array_copy(1, (const VkMappedMemoryRange*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: {
            destroy_dynamic_array_copy(1, (const VkBindSparseInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkFenceCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: {
            destroy_dynamic_array_copy(1, (const VkSemaphoreCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        default: {
        } break;
        }
    }
}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
