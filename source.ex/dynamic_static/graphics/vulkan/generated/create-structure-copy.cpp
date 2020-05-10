
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
namespace gfx {
namespace vk {
namespace detail {

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAabbPositionsKHR create_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAabbPositionsKHR result { };
    result.minX = create_structure_copy(obj.minX, pAllocationCallbacks);
    result.minY = create_structure_copy(obj.minY, pAllocationCallbacks);
    result.minZ = create_structure_copy(obj.minZ, pAllocationCallbacks);
    result.maxX = create_structure_copy(obj.maxX, pAllocationCallbacks);
    result.maxY = create_structure_copy(obj.maxY, pAllocationCallbacks);
    result.maxZ = create_structure_copy(obj.maxZ, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildGeometryInfoKHR create_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureBuildGeometryInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.update = create_structure_copy(obj.update, pAllocationCallbacks);
    result.srcAccelerationStructure = obj.srcAccelerationStructure;
    result.dstAccelerationStructure = obj.dstAccelerationStructure;
    result.geometryArrayOfPointers = create_structure_copy(obj.geometryArrayOfPointers, pAllocationCallbacks);
    result.geometryCount = create_structure_copy(obj.geometryCount, pAllocationCallbacks);
    result.ppGeometries = obj.ppGeometries;
    result.scratchData = create_structure_copy(obj.scratchData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildOffsetInfoKHR create_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureBuildOffsetInfoKHR result { };
    result.primitiveCount = create_structure_copy(obj.primitiveCount, pAllocationCallbacks);
    result.primitiveOffset = create_structure_copy(obj.primitiveOffset, pAllocationCallbacks);
    result.firstVertex = create_structure_copy(obj.firstVertex, pAllocationCallbacks);
    result.transformOffset = create_structure_copy(obj.transformOffset, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateGeometryTypeInfoKHR create_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateGeometryTypeInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.geometryType = create_structure_copy(obj.geometryType, pAllocationCallbacks);
    result.maxPrimitiveCount = create_structure_copy(obj.maxPrimitiveCount, pAllocationCallbacks);
    result.indexType = create_structure_copy(obj.indexType, pAllocationCallbacks);
    result.maxVertexCount = create_structure_copy(obj.maxVertexCount, pAllocationCallbacks);
    result.vertexFormat = create_structure_copy(obj.vertexFormat, pAllocationCallbacks);
    result.allowsTransforms = create_structure_copy(obj.allowsTransforms, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateInfoKHR create_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.compactedSize = create_structure_copy(obj.compactedSize, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.maxGeometryCount = create_structure_copy(obj.maxGeometryCount, pAllocationCallbacks);
    result.pGeometryInfos = create_dynamic_array_copy(obj.maxGeometryCount, obj.pGeometryInfos, pAllocationCallbacks);
    result.deviceAddress = create_structure_copy(obj.deviceAddress, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureCreateInfoNV create_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.compactedSize = create_structure_copy(obj.compactedSize, pAllocationCallbacks);
    result.info = create_structure_copy(obj.info, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureDeviceAddressInfoKHR create_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureDeviceAddressInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.accelerationStructure = obj.accelerationStructure;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryAabbsDataKHR create_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryAabbsDataKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.data = create_structure_copy(obj.data, pAllocationCallbacks);
    result.stride = create_structure_copy(obj.stride, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryDataKHR create_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryDataKHR result { };
    result.triangles = create_structure_copy(obj.triangles, pAllocationCallbacks);
    result.aabbs = create_structure_copy(obj.aabbs, pAllocationCallbacks);
    result.instances = create_structure_copy(obj.instances, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryInstancesDataKHR create_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryInstancesDataKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.arrayOfPointers = create_structure_copy(obj.arrayOfPointers, pAllocationCallbacks);
    result.data = create_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryKHR create_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.geometryType = create_structure_copy(obj.geometryType, pAllocationCallbacks);
    result.geometry = create_structure_copy(obj.geometry, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryTrianglesDataKHR create_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryTrianglesDataKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.vertexFormat = create_structure_copy(obj.vertexFormat, pAllocationCallbacks);
    result.vertexData = create_structure_copy(obj.vertexData, pAllocationCallbacks);
    result.vertexStride = create_structure_copy(obj.vertexStride, pAllocationCallbacks);
    result.indexType = create_structure_copy(obj.indexType, pAllocationCallbacks);
    result.indexData = create_structure_copy(obj.indexData, pAllocationCallbacks);
    result.transformData = create_structure_copy(obj.transformData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureInfoNV create_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.instanceCount = create_structure_copy(obj.instanceCount, pAllocationCallbacks);
    result.geometryCount = create_structure_copy(obj.geometryCount, pAllocationCallbacks);
    result.pGeometries = create_dynamic_array_copy(obj.geometryCount, obj.pGeometries, pAllocationCallbacks);
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureInstanceKHR create_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureInstanceKHR result { };
    result.transform = create_structure_copy(obj.transform, pAllocationCallbacks);
    result.instanceCustomIndex = create_structure_copy(obj.instanceCustomIndex, pAllocationCallbacks);
    result.mask = create_structure_copy(obj.mask, pAllocationCallbacks);
    result.instanceShaderBindingTableRecordOffset = create_structure_copy(obj.instanceShaderBindingTableRecordOffset, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.accelerationStructureReference = create_structure_copy(obj.accelerationStructureReference, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureMemoryRequirementsInfoKHR create_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureMemoryRequirementsInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.buildType = create_structure_copy(obj.buildType, pAllocationCallbacks);
    result.accelerationStructure = obj.accelerationStructure;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureMemoryRequirementsInfoNV create_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureMemoryRequirementsInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.accelerationStructure = obj.accelerationStructure;
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureVersionKHR create_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureVersionKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.versionData = create_dynamic_array_copy(obj.2*VK_UUID_SIZE, obj.versionData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkAcquireNextImageInfoKHR create_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAcquireNextImageInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.swapchain = obj.swapchain;
    result.timeout = create_structure_copy(obj.timeout, pAllocationCallbacks);
    result.semaphore = obj.semaphore;
    result.fence = obj.fence;
    result.deviceMask = create_structure_copy(obj.deviceMask, pAllocationCallbacks);
    return result;
}

template <>
VkAcquireProfilingLockInfoKHR create_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAcquireProfilingLockInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.timeout = create_structure_copy(obj.timeout, pAllocationCallbacks);
    return result;
}

template <>
VkAllocationCallbacks create_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAllocationCallbacks result { };
    result.pUserData = obj.pUserData;
    result.pfnAllocation = obj.pfnAllocation;
    result.pfnReallocation = obj.pfnReallocation;
    result.pfnFree = obj.pfnFree;
    result.pfnInternalAllocation = obj.pfnInternalAllocation;
    result.pfnInternalFree = obj.pfnInternalFree;
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferFormatPropertiesANDROID create_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferFormatPropertiesANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.externalFormat = create_structure_copy(obj.externalFormat, pAllocationCallbacks);
    result.formatFeatures = create_structure_copy(obj.formatFeatures, pAllocationCallbacks);
    result.samplerYcbcrConversionComponents = create_structure_copy(obj.samplerYcbcrConversionComponents, pAllocationCallbacks);
    result.suggestedYcbcrModel = create_structure_copy(obj.suggestedYcbcrModel, pAllocationCallbacks);
    result.suggestedYcbcrRange = create_structure_copy(obj.suggestedYcbcrRange, pAllocationCallbacks);
    result.suggestedXChromaOffset = create_structure_copy(obj.suggestedXChromaOffset, pAllocationCallbacks);
    result.suggestedYChromaOffset = create_structure_copy(obj.suggestedYChromaOffset, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferPropertiesANDROID create_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferPropertiesANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.allocationSize = create_structure_copy(obj.allocationSize, pAllocationCallbacks);
    result.memoryTypeBits = create_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferUsageANDROID create_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferUsageANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.androidHardwareBufferUsage = create_structure_copy(obj.androidHardwareBufferUsage, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidSurfaceCreateInfoKHR create_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidSurfaceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkApplicationInfo create_structure_copy<VkApplicationInfo>(const VkApplicationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkApplicationInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pApplicationName = create_dynamic_string_copy(obj.pApplicationName, pAllocationCallbacks);
    result.applicationVersion = create_structure_copy(obj.applicationVersion, pAllocationCallbacks);
    result.pEngineName = create_dynamic_string_copy(obj.pEngineName, pAllocationCallbacks);
    result.engineVersion = create_structure_copy(obj.engineVersion, pAllocationCallbacks);
    result.apiVersion = create_structure_copy(obj.apiVersion, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentDescription create_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescription result { };
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.samples = create_structure_copy(obj.samples, pAllocationCallbacks);
    result.loadOp = create_structure_copy(obj.loadOp, pAllocationCallbacks);
    result.storeOp = create_structure_copy(obj.storeOp, pAllocationCallbacks);
    result.stencilLoadOp = create_structure_copy(obj.stencilLoadOp, pAllocationCallbacks);
    result.stencilStoreOp = create_structure_copy(obj.stencilStoreOp, pAllocationCallbacks);
    result.initialLayout = create_structure_copy(obj.initialLayout, pAllocationCallbacks);
    result.finalLayout = create_structure_copy(obj.finalLayout, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentDescription2 create_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescription2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.samples = create_structure_copy(obj.samples, pAllocationCallbacks);
    result.loadOp = create_structure_copy(obj.loadOp, pAllocationCallbacks);
    result.storeOp = create_structure_copy(obj.storeOp, pAllocationCallbacks);
    result.stencilLoadOp = create_structure_copy(obj.stencilLoadOp, pAllocationCallbacks);
    result.stencilStoreOp = create_structure_copy(obj.stencilStoreOp, pAllocationCallbacks);
    result.initialLayout = create_structure_copy(obj.initialLayout, pAllocationCallbacks);
    result.finalLayout = create_structure_copy(obj.finalLayout, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentDescriptionStencilLayout create_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescriptionStencilLayout result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.stencilInitialLayout = create_structure_copy(obj.stencilInitialLayout, pAllocationCallbacks);
    result.stencilFinalLayout = create_structure_copy(obj.stencilFinalLayout, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentReference create_structure_copy<VkAttachmentReference>(const VkAttachmentReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReference result { };
    result.attachment = create_structure_copy(obj.attachment, pAllocationCallbacks);
    result.layout = create_structure_copy(obj.layout, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentReference2 create_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReference2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.attachment = create_structure_copy(obj.attachment, pAllocationCallbacks);
    result.layout = create_structure_copy(obj.layout, pAllocationCallbacks);
    result.aspectMask = create_structure_copy(obj.aspectMask, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentReferenceStencilLayout create_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReferenceStencilLayout result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.stencilLayout = create_structure_copy(obj.stencilLayout, pAllocationCallbacks);
    return result;
}

template <>
VkAttachmentSampleLocationsEXT create_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentSampleLocationsEXT result { };
    result.attachmentIndex = create_structure_copy(obj.attachmentIndex, pAllocationCallbacks);
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkBaseInStructure create_structure_copy<VkBaseInStructure>(const VkBaseInStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBaseInStructure result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const VkBaseInStructure*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkBaseOutStructure create_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBaseOutStructure result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (VkBaseOutStructure*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkBindAccelerationStructureMemoryInfoKHR create_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindAccelerationStructureMemoryInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.accelerationStructure = obj.accelerationStructure;
    result.memory = obj.memory;
    result.memoryOffset = create_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    result.deviceIndexCount = create_structure_copy(obj.deviceIndexCount, pAllocationCallbacks);
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkBindBufferMemoryDeviceGroupInfo create_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindBufferMemoryDeviceGroupInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceIndexCount = create_structure_copy(obj.deviceIndexCount, pAllocationCallbacks);
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    return result;
}

template <>
VkBindBufferMemoryInfo create_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindBufferMemoryInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.buffer = obj.buffer;
    result.memory = obj.memory;
    result.memoryOffset = create_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    return result;
}

template <>
VkBindImageMemoryDeviceGroupInfo create_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemoryDeviceGroupInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceIndexCount = create_structure_copy(obj.deviceIndexCount, pAllocationCallbacks);
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    result.splitInstanceBindRegionCount = create_structure_copy(obj.splitInstanceBindRegionCount, pAllocationCallbacks);
    result.pSplitInstanceBindRegions = create_dynamic_array_copy(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions, pAllocationCallbacks);
    return result;
}

template <>
VkBindImageMemoryInfo create_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemoryInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.image = obj.image;
    result.memory = obj.memory;
    result.memoryOffset = create_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    return result;
}

template <>
VkBindImageMemorySwapchainInfoKHR create_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemorySwapchainInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.swapchain = obj.swapchain;
    result.imageIndex = create_structure_copy(obj.imageIndex, pAllocationCallbacks);
    return result;
}

template <>
VkBindImagePlaneMemoryInfo create_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImagePlaneMemoryInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.planeAspect = create_structure_copy(obj.planeAspect, pAllocationCallbacks);
    return result;
}

template <>
VkBindIndexBufferIndirectCommandNV create_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindIndexBufferIndirectCommandNV result { };
    result.bufferAddress = create_structure_copy(obj.bufferAddress, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    result.indexType = create_structure_copy(obj.indexType, pAllocationCallbacks);
    return result;
}

template <>
VkBindShaderGroupIndirectCommandNV create_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindShaderGroupIndirectCommandNV result { };
    result.groupIndex = create_structure_copy(obj.groupIndex, pAllocationCallbacks);
    return result;
}

template <>
VkBindSparseInfo create_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindSparseInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.waitSemaphoreCount = create_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    result.bufferBindCount = create_structure_copy(obj.bufferBindCount, pAllocationCallbacks);
    result.pBufferBinds = create_dynamic_array_copy(obj.bufferBindCount, obj.pBufferBinds, pAllocationCallbacks);
    result.imageOpaqueBindCount = create_structure_copy(obj.imageOpaqueBindCount, pAllocationCallbacks);
    result.pImageOpaqueBinds = create_dynamic_array_copy(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds, pAllocationCallbacks);
    result.imageBindCount = create_structure_copy(obj.imageBindCount, pAllocationCallbacks);
    result.pImageBinds = create_dynamic_array_copy(obj.imageBindCount, obj.pImageBinds, pAllocationCallbacks);
    result.signalSemaphoreCount = create_structure_copy(obj.signalSemaphoreCount, pAllocationCallbacks);
    result.pSignalSemaphores = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
    return result;
}

template <>
VkBindVertexBufferIndirectCommandNV create_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindVertexBufferIndirectCommandNV result { };
    result.bufferAddress = create_structure_copy(obj.bufferAddress, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    result.stride = create_structure_copy(obj.stride, pAllocationCallbacks);
    return result;
}

template <>
VkBufferCopy create_structure_copy<VkBufferCopy>(const VkBufferCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferCopy result { };
    result.srcOffset = create_structure_copy(obj.srcOffset, pAllocationCallbacks);
    result.dstOffset = create_structure_copy(obj.dstOffset, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    return result;
}

template <>
VkBufferCreateInfo create_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    result.sharingMode = create_structure_copy(obj.sharingMode, pAllocationCallbacks);
    result.queueFamilyIndexCount = create_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkBufferDeviceAddressCreateInfoEXT create_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferDeviceAddressCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceAddress = create_structure_copy(obj.deviceAddress, pAllocationCallbacks);
    return result;
}

template <>
VkBufferDeviceAddressInfo create_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferDeviceAddressInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.buffer = obj.buffer;
    return result;
}

template <>
VkBufferImageCopy create_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferImageCopy result { };
    result.bufferOffset = create_structure_copy(obj.bufferOffset, pAllocationCallbacks);
    result.bufferRowLength = create_structure_copy(obj.bufferRowLength, pAllocationCallbacks);
    result.bufferImageHeight = create_structure_copy(obj.bufferImageHeight, pAllocationCallbacks);
    result.imageSubresource = create_structure_copy(obj.imageSubresource, pAllocationCallbacks);
    result.imageOffset = create_structure_copy(obj.imageOffset, pAllocationCallbacks);
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkBufferMemoryBarrier create_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferMemoryBarrier result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.srcAccessMask = create_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    result.dstAccessMask = create_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    result.srcQueueFamilyIndex = create_structure_copy(obj.srcQueueFamilyIndex, pAllocationCallbacks);
    result.dstQueueFamilyIndex = create_structure_copy(obj.dstQueueFamilyIndex, pAllocationCallbacks);
    result.buffer = obj.buffer;
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    return result;
}

template <>
VkBufferMemoryRequirementsInfo2 create_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferMemoryRequirementsInfo2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.buffer = obj.buffer;
    return result;
}

template <>
VkBufferOpaqueCaptureAddressCreateInfo create_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferOpaqueCaptureAddressCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.opaqueCaptureAddress = create_structure_copy(obj.opaqueCaptureAddress, pAllocationCallbacks);
    return result;
}

template <>
VkBufferViewCreateInfo create_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferViewCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.buffer = obj.buffer;
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.range = create_structure_copy(obj.range, pAllocationCallbacks);
    return result;
}

template <>
VkCalibratedTimestampInfoEXT create_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCalibratedTimestampInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.timeDomain = create_structure_copy(obj.timeDomain, pAllocationCallbacks);
    return result;
}

template <>
VkCheckpointDataNV create_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCheckpointDataNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.stage = create_structure_copy(obj.stage, pAllocationCallbacks);
    result.pCheckpointMarker = obj.pCheckpointMarker;
    return result;
}

template <>
VkClearAttachment create_structure_copy<VkClearAttachment>(const VkClearAttachment& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearAttachment result { };
    result.aspectMask = create_structure_copy(obj.aspectMask, pAllocationCallbacks);
    result.colorAttachment = create_structure_copy(obj.colorAttachment, pAllocationCallbacks);
    result.clearValue = create_structure_copy(obj.clearValue, pAllocationCallbacks);
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
VkClearColorValue create_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearColorValue result { };
    create_static_array_copy<4>(result.float32, obj.float32);
    create_static_array_copy<4>(result.int32, obj.int32);
    create_static_array_copy<4>(result.uint32, obj.uint32);
    return result;
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkClearDepthStencilValue create_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearDepthStencilValue result { };
    result.depth = create_structure_copy(obj.depth, pAllocationCallbacks);
    result.stencil = create_structure_copy(obj.stencil, pAllocationCallbacks);
    return result;
}

template <>
VkClearRect create_structure_copy<VkClearRect>(const VkClearRect& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearRect result { };
    result.rect = create_structure_copy(obj.rect, pAllocationCallbacks);
    result.baseArrayLayer = create_structure_copy(obj.baseArrayLayer, pAllocationCallbacks);
    result.layerCount = create_structure_copy(obj.layerCount, pAllocationCallbacks);
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
VkClearValue create_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearValue result { };
    result.color = create_structure_copy(obj.color, pAllocationCallbacks);
    result.depthStencil = create_structure_copy(obj.depthStencil, pAllocationCallbacks);
    return result;
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkCoarseSampleLocationNV create_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCoarseSampleLocationNV result { };
    result.pixelX = create_structure_copy(obj.pixelX, pAllocationCallbacks);
    result.pixelY = create_structure_copy(obj.pixelY, pAllocationCallbacks);
    result.sample = create_structure_copy(obj.sample, pAllocationCallbacks);
    return result;
}

template <>
VkCoarseSampleOrderCustomNV create_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCoarseSampleOrderCustomNV result { };
    result.shadingRate = create_structure_copy(obj.shadingRate, pAllocationCallbacks);
    result.sampleCount = create_structure_copy(obj.sampleCount, pAllocationCallbacks);
    result.sampleLocationCount = create_structure_copy(obj.sampleLocationCount, pAllocationCallbacks);
    result.pSampleLocations = create_dynamic_array_copy(obj.sampleLocationCount, obj.pSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferAllocateInfo create_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferAllocateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.commandPool = obj.commandPool;
    result.level = create_structure_copy(obj.level, pAllocationCallbacks);
    result.commandBufferCount = create_structure_copy(obj.commandBufferCount, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferBeginInfo create_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferBeginInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pInheritanceInfo = obj.pInheritanceInfo;
    return result;
}

template <>
VkCommandBufferInheritanceConditionalRenderingInfoEXT create_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceConditionalRenderingInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.conditionalRenderingEnable = create_structure_copy(obj.conditionalRenderingEnable, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferInheritanceInfo create_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.renderPass = obj.renderPass;
    result.subpass = create_structure_copy(obj.subpass, pAllocationCallbacks);
    result.framebuffer = obj.framebuffer;
    result.occlusionQueryEnable = create_structure_copy(obj.occlusionQueryEnable, pAllocationCallbacks);
    result.queryFlags = create_structure_copy(obj.queryFlags, pAllocationCallbacks);
    result.pipelineStatistics = create_structure_copy(obj.pipelineStatistics, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferInheritanceRenderPassTransformInfoQCOM create_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.transform = create_structure_copy(obj.transform, pAllocationCallbacks);
    result.renderArea = create_structure_copy(obj.renderArea, pAllocationCallbacks);
    return result;
}

template <>
VkCommandPoolCreateInfo create_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandPoolCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.queueFamilyIndex = create_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
    return result;
}

template <>
VkComponentMapping create_structure_copy<VkComponentMapping>(const VkComponentMapping& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkComponentMapping result { };
    result.r = create_structure_copy(obj.r, pAllocationCallbacks);
    result.g = create_structure_copy(obj.g, pAllocationCallbacks);
    result.b = create_structure_copy(obj.b, pAllocationCallbacks);
    result.a = create_structure_copy(obj.a, pAllocationCallbacks);
    return result;
}

template <>
VkComputePipelineCreateInfo create_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkComputePipelineCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.stage = create_structure_copy(obj.stage, pAllocationCallbacks);
    result.layout = obj.layout;
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = create_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
    return result;
}

template <>
VkConditionalRenderingBeginInfoEXT create_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkConditionalRenderingBeginInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.buffer = obj.buffer;
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkConformanceVersion create_structure_copy<VkConformanceVersion>(const VkConformanceVersion& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkConformanceVersion result { };
    result.major = create_structure_copy(obj.major, pAllocationCallbacks);
    result.minor = create_structure_copy(obj.minor, pAllocationCallbacks);
    result.subminor = create_structure_copy(obj.subminor, pAllocationCallbacks);
    result.patch = create_structure_copy(obj.patch, pAllocationCallbacks);
    return result;
}

template <>
VkCooperativeMatrixPropertiesNV create_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCooperativeMatrixPropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.MSize = create_structure_copy(obj.MSize, pAllocationCallbacks);
    result.NSize = create_structure_copy(obj.NSize, pAllocationCallbacks);
    result.KSize = create_structure_copy(obj.KSize, pAllocationCallbacks);
    result.AType = create_structure_copy(obj.AType, pAllocationCallbacks);
    result.BType = create_structure_copy(obj.BType, pAllocationCallbacks);
    result.CType = create_structure_copy(obj.CType, pAllocationCallbacks);
    result.DType = create_structure_copy(obj.DType, pAllocationCallbacks);
    result.scope = create_structure_copy(obj.scope, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureInfoKHR create_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyAccelerationStructureInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.src = obj.src;
    result.dst = obj.dst;
    result.mode = create_structure_copy(obj.mode, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureToMemoryInfoKHR create_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyAccelerationStructureToMemoryInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.src = obj.src;
    result.dst = create_structure_copy(obj.dst, pAllocationCallbacks);
    result.mode = create_structure_copy(obj.mode, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkCopyDescriptorSet create_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyDescriptorSet result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.srcSet = obj.srcSet;
    result.srcBinding = create_structure_copy(obj.srcBinding, pAllocationCallbacks);
    result.srcArrayElement = create_structure_copy(obj.srcArrayElement, pAllocationCallbacks);
    result.dstSet = obj.dstSet;
    result.dstBinding = create_structure_copy(obj.dstBinding, pAllocationCallbacks);
    result.dstArrayElement = create_structure_copy(obj.dstArrayElement, pAllocationCallbacks);
    result.descriptorCount = create_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyMemoryToAccelerationStructureInfoKHR create_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyMemoryToAccelerationStructureInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.src = create_structure_copy(obj.src, pAllocationCallbacks);
    result.dst = obj.dst;
    result.mode = create_structure_copy(obj.mode, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkD3D12FenceSubmitInfoKHR create_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkD3D12FenceSubmitInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.waitSemaphoreValuesCount = create_structure_copy(obj.waitSemaphoreValuesCount, pAllocationCallbacks);
    result.pWaitSemaphoreValues = create_dynamic_array_copy(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    result.signalSemaphoreValuesCount = create_structure_copy(obj.signalSemaphoreValuesCount, pAllocationCallbacks);
    result.pSignalSemaphoreValues = create_dynamic_array_copy(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkDebugMarkerMarkerInfoEXT create_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerMarkerInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pMarkerName = create_dynamic_string_copy(obj.pMarkerName, pAllocationCallbacks);
    create_static_array_copy<4>(result.color, obj.color);
    return result;
}

template <>
VkDebugMarkerObjectNameInfoEXT create_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerObjectNameInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.objectType = create_structure_copy(obj.objectType, pAllocationCallbacks);
    result.object = create_structure_copy(obj.object, pAllocationCallbacks);
    result.pObjectName = create_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
    return result;
}

template <>
VkDebugMarkerObjectTagInfoEXT create_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerObjectTagInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.objectType = create_structure_copy(obj.objectType, pAllocationCallbacks);
    result.object = create_structure_copy(obj.object, pAllocationCallbacks);
    result.tagName = create_structure_copy(obj.tagName, pAllocationCallbacks);
    result.tagSize = create_structure_copy(obj.tagSize, pAllocationCallbacks);
    result.pTag = create_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
    return result;
}

template <>
VkDebugReportCallbackCreateInfoEXT create_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugReportCallbackCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pfnCallback = obj.pfnCallback;
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkDebugUtilsLabelEXT create_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsLabelEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pLabelName = create_dynamic_string_copy(obj.pLabelName, pAllocationCallbacks);
    create_static_array_copy<4>(result.color, obj.color);
    return result;
}

template <>
VkDebugUtilsMessengerCallbackDataEXT create_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsMessengerCallbackDataEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pMessageIdName = create_dynamic_string_copy(obj.pMessageIdName, pAllocationCallbacks);
    result.messageIdNumber = create_structure_copy(obj.messageIdNumber, pAllocationCallbacks);
    result.pMessage = create_dynamic_string_copy(obj.pMessage, pAllocationCallbacks);
    result.queueLabelCount = create_structure_copy(obj.queueLabelCount, pAllocationCallbacks);
    result.pQueueLabels = create_dynamic_array_copy(obj.queueLabelCount, obj.pQueueLabels, pAllocationCallbacks);
    result.cmdBufLabelCount = create_structure_copy(obj.cmdBufLabelCount, pAllocationCallbacks);
    result.pCmdBufLabels = create_dynamic_array_copy(obj.cmdBufLabelCount, obj.pCmdBufLabels, pAllocationCallbacks);
    result.objectCount = create_structure_copy(obj.objectCount, pAllocationCallbacks);
    result.pObjects = create_dynamic_array_copy(obj.objectCount, obj.pObjects, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsMessengerCreateInfoEXT create_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsMessengerCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.messageSeverity = create_structure_copy(obj.messageSeverity, pAllocationCallbacks);
    result.messageType = create_structure_copy(obj.messageType, pAllocationCallbacks);
    result.pfnUserCallback = obj.pfnUserCallback;
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkDebugUtilsObjectNameInfoEXT create_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsObjectNameInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.objectType = create_structure_copy(obj.objectType, pAllocationCallbacks);
    result.objectHandle = create_structure_copy(obj.objectHandle, pAllocationCallbacks);
    result.pObjectName = create_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsObjectTagInfoEXT create_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsObjectTagInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.objectType = create_structure_copy(obj.objectType, pAllocationCallbacks);
    result.objectHandle = create_structure_copy(obj.objectHandle, pAllocationCallbacks);
    result.tagName = create_structure_copy(obj.tagName, pAllocationCallbacks);
    result.tagSize = create_structure_copy(obj.tagSize, pAllocationCallbacks);
    result.pTag = create_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
    return result;
}

template <>
VkDedicatedAllocationBufferCreateInfoNV create_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationBufferCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.dedicatedAllocation = create_structure_copy(obj.dedicatedAllocation, pAllocationCallbacks);
    return result;
}

template <>
VkDedicatedAllocationImageCreateInfoNV create_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationImageCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.dedicatedAllocation = create_structure_copy(obj.dedicatedAllocation, pAllocationCallbacks);
    return result;
}

template <>
VkDedicatedAllocationMemoryAllocateInfoNV create_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationMemoryAllocateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.image = obj.image;
    result.buffer = obj.buffer;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeferredOperationInfoKHR create_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeferredOperationInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.operationHandle = obj.operationHandle;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDescriptorBufferInfo create_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorBufferInfo result { };
    result.buffer = obj.buffer;
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.range = create_structure_copy(obj.range, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorImageInfo create_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorImageInfo result { };
    result.sampler = obj.sampler;
    result.imageView = obj.imageView;
    result.imageLayout = create_structure_copy(obj.imageLayout, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorPoolCreateInfo create_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.maxSets = create_structure_copy(obj.maxSets, pAllocationCallbacks);
    result.poolSizeCount = create_structure_copy(obj.poolSizeCount, pAllocationCallbacks);
    result.pPoolSizes = create_dynamic_array_copy(obj.poolSizeCount, obj.pPoolSizes, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorPoolInlineUniformBlockCreateInfoEXT create_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolInlineUniformBlockCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxInlineUniformBlockBindings = create_structure_copy(obj.maxInlineUniformBlockBindings, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorPoolSize create_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolSize result { };
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.descriptorCount = create_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetAllocateInfo create_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetAllocateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.descriptorPool = obj.descriptorPool;
    result.descriptorSetCount = create_structure_copy(obj.descriptorSetCount, pAllocationCallbacks);
    result.pSetLayouts = create_dynamic_array_copy(obj.descriptorSetCount, obj.pSetLayouts, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutBinding create_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutBinding result { };
    result.binding = create_structure_copy(obj.binding, pAllocationCallbacks);
    result.descriptorType = create_structure_copy(obj.descriptorType, pAllocationCallbacks);
    result.descriptorCount = create_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    result.stageFlags = create_structure_copy(obj.stageFlags, pAllocationCallbacks);
    result.pImmutableSamplers = create_dynamic_array_copy(obj.descriptorCount, obj.pImmutableSamplers, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutBindingFlagsCreateInfo create_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutBindingFlagsCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.bindingCount = create_structure_copy(obj.bindingCount, pAllocationCallbacks);
    result.pBindingFlags = create_dynamic_array_copy(obj.bindingCount, obj.pBindingFlags, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutCreateInfo create_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.bindingCount = create_structure_copy(obj.bindingCount, pAllocationCallbacks);
    result.pBindings = create_dynamic_array_copy(obj.bindingCount, obj.pBindings, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutSupport create_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutSupport result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.supported = create_structure_copy(obj.supported, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetVariableDescriptorCountAllocateInfo create_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetVariableDescriptorCountAllocateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.descriptorSetCount = create_structure_copy(obj.descriptorSetCount, pAllocationCallbacks);
    result.pDescriptorCounts = create_dynamic_array_copy(obj.descriptorSetCount, obj.pDescriptorCounts, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetVariableDescriptorCountLayoutSupport create_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetVariableDescriptorCountLayoutSupport result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxVariableDescriptorCount = create_structure_copy(obj.maxVariableDescriptorCount, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorUpdateTemplateCreateInfo create_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorUpdateTemplateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.descriptorUpdateEntryCount = create_structure_copy(obj.descriptorUpdateEntryCount, pAllocationCallbacks);
    result.pDescriptorUpdateEntries = create_dynamic_array_copy(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries, pAllocationCallbacks);
    result.templateType = create_structure_copy(obj.templateType, pAllocationCallbacks);
    result.descriptorSetLayout = obj.descriptorSetLayout;
    result.pipelineBindPoint = create_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    result.pipelineLayout = obj.pipelineLayout;
    result.set = create_structure_copy(obj.set, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorUpdateTemplateEntry create_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorUpdateTemplateEntry result { };
    result.dstBinding = create_structure_copy(obj.dstBinding, pAllocationCallbacks);
    result.dstArrayElement = create_structure_copy(obj.dstArrayElement, pAllocationCallbacks);
    result.descriptorCount = create_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    result.descriptorType = create_structure_copy(obj.descriptorType, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.stride = create_structure_copy(obj.stride, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceCreateInfo create_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.queueCreateInfoCount = create_structure_copy(obj.queueCreateInfoCount, pAllocationCallbacks);
    result.pQueueCreateInfos = create_dynamic_array_copy(obj.queueCreateInfoCount, obj.pQueueCreateInfos, pAllocationCallbacks);
    result.enabledLayerCount = create_structure_copy(obj.enabledLayerCount, pAllocationCallbacks);
    result.ppEnabledLayerNames = create_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    result.enabledExtensionCount = create_structure_copy(obj.enabledExtensionCount, pAllocationCallbacks);
    result.ppEnabledExtensionNames = create_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
    result.pEnabledFeatures = obj.pEnabledFeatures;
    return result;
}

template <>
VkDeviceDiagnosticsConfigCreateInfoNV create_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceDiagnosticsConfigCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceEventInfoEXT create_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceEventInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceEvent = create_structure_copy(obj.deviceEvent, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupBindSparseInfo create_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupBindSparseInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.resourceDeviceIndex = create_structure_copy(obj.resourceDeviceIndex, pAllocationCallbacks);
    result.memoryDeviceIndex = create_structure_copy(obj.memoryDeviceIndex, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupCommandBufferBeginInfo create_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupCommandBufferBeginInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceMask = create_structure_copy(obj.deviceMask, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupDeviceCreateInfo create_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupDeviceCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.physicalDeviceCount = create_structure_copy(obj.physicalDeviceCount, pAllocationCallbacks);
    result.pPhysicalDevices = create_dynamic_array_copy(obj.physicalDeviceCount, obj.pPhysicalDevices, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupPresentCapabilitiesKHR create_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupPresentCapabilitiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    create_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(result.presentMask, obj.presentMask);
    result.modes = create_structure_copy(obj.modes, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupPresentInfoKHR create_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupPresentInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.swapchainCount = create_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    result.pDeviceMasks = create_dynamic_array_copy(obj.swapchainCount, obj.pDeviceMasks, pAllocationCallbacks);
    result.mode = create_structure_copy(obj.mode, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupRenderPassBeginInfo create_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupRenderPassBeginInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceMask = create_structure_copy(obj.deviceMask, pAllocationCallbacks);
    result.deviceRenderAreaCount = create_structure_copy(obj.deviceRenderAreaCount, pAllocationCallbacks);
    result.pDeviceRenderAreas = create_dynamic_array_copy(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupSubmitInfo create_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupSubmitInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.waitSemaphoreCount = create_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    result.pWaitSemaphoreDeviceIndices = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, pAllocationCallbacks);
    result.commandBufferCount = create_structure_copy(obj.commandBufferCount, pAllocationCallbacks);
    result.pCommandBufferDeviceMasks = create_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, pAllocationCallbacks);
    result.signalSemaphoreCount = create_structure_copy(obj.signalSemaphoreCount, pAllocationCallbacks);
    result.pSignalSemaphoreDeviceIndices = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceGroupSwapchainCreateInfoKHR create_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupSwapchainCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.modes = create_structure_copy(obj.modes, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceMemoryOpaqueCaptureAddressInfo create_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceMemoryOpaqueCaptureAddressInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memory = obj.memory;
    return result;
}

template <>
VkDeviceMemoryOverallocationCreateInfoAMD create_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceMemoryOverallocationCreateInfoAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.overallocationBehavior = create_structure_copy(obj.overallocationBehavior, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressConstKHR create_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceOrHostAddressConstKHR result { };
    result.deviceAddress = create_structure_copy(obj.deviceAddress, pAllocationCallbacks);
    result.hostAddress = obj.hostAddress;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressKHR create_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceOrHostAddressKHR result { };
    result.deviceAddress = create_structure_copy(obj.deviceAddress, pAllocationCallbacks);
    result.hostAddress = obj.hostAddress;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDeviceQueueCreateInfo create_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.queueFamilyIndex = create_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
    result.queueCount = create_structure_copy(obj.queueCount, pAllocationCallbacks);
    result.pQueuePriorities = create_dynamic_array_copy(obj.queueCount, obj.pQueuePriorities, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceQueueGlobalPriorityCreateInfoEXT create_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueGlobalPriorityCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.globalPriority = create_structure_copy(obj.globalPriority, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceQueueInfo2 create_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueInfo2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.queueFamilyIndex = create_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
    result.queueIndex = create_structure_copy(obj.queueIndex, pAllocationCallbacks);
    return result;
}

template <>
VkDispatchIndirectCommand create_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDispatchIndirectCommand result { };
    result.x = create_structure_copy(obj.x, pAllocationCallbacks);
    result.y = create_structure_copy(obj.y, pAllocationCallbacks);
    result.z = create_structure_copy(obj.z, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayEventInfoEXT create_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayEventInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.displayEvent = create_structure_copy(obj.displayEvent, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModeCreateInfoKHR create_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.parameters = create_structure_copy(obj.parameters, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModeParametersKHR create_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeParametersKHR result { };
    result.visibleRegion = create_structure_copy(obj.visibleRegion, pAllocationCallbacks);
    result.refreshRate = create_structure_copy(obj.refreshRate, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModeProperties2KHR create_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeProperties2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.displayModeProperties = create_structure_copy(obj.displayModeProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModePropertiesKHR create_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModePropertiesKHR result { };
    result.displayMode = obj.displayMode;
    result.parameters = create_structure_copy(obj.parameters, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayNativeHdrSurfaceCapabilitiesAMD create_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayNativeHdrSurfaceCapabilitiesAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.localDimmingSupport = create_structure_copy(obj.localDimmingSupport, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneCapabilities2KHR create_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneCapabilities2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.capabilities = create_structure_copy(obj.capabilities, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneCapabilitiesKHR create_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneCapabilitiesKHR result { };
    result.supportedAlpha = create_structure_copy(obj.supportedAlpha, pAllocationCallbacks);
    result.minSrcPosition = create_structure_copy(obj.minSrcPosition, pAllocationCallbacks);
    result.maxSrcPosition = create_structure_copy(obj.maxSrcPosition, pAllocationCallbacks);
    result.minSrcExtent = create_structure_copy(obj.minSrcExtent, pAllocationCallbacks);
    result.maxSrcExtent = create_structure_copy(obj.maxSrcExtent, pAllocationCallbacks);
    result.minDstPosition = create_structure_copy(obj.minDstPosition, pAllocationCallbacks);
    result.maxDstPosition = create_structure_copy(obj.maxDstPosition, pAllocationCallbacks);
    result.minDstExtent = create_structure_copy(obj.minDstExtent, pAllocationCallbacks);
    result.maxDstExtent = create_structure_copy(obj.maxDstExtent, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneInfo2KHR create_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneInfo2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.mode = obj.mode;
    result.planeIndex = create_structure_copy(obj.planeIndex, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneProperties2KHR create_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneProperties2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.displayPlaneProperties = create_structure_copy(obj.displayPlaneProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlanePropertiesKHR create_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlanePropertiesKHR result { };
    result.currentDisplay = obj.currentDisplay;
    result.currentStackIndex = create_structure_copy(obj.currentStackIndex, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPowerInfoEXT create_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPowerInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.powerState = create_structure_copy(obj.powerState, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPresentInfoKHR create_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPresentInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.srcRect = create_structure_copy(obj.srcRect, pAllocationCallbacks);
    result.dstRect = create_structure_copy(obj.dstRect, pAllocationCallbacks);
    result.persistent = create_structure_copy(obj.persistent, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayProperties2KHR create_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayProperties2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.displayProperties = create_structure_copy(obj.displayProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPropertiesKHR create_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPropertiesKHR result { };
    result.display = obj.display;
    result.displayName = create_dynamic_string_copy(obj.displayName, pAllocationCallbacks);
    result.physicalDimensions = create_structure_copy(obj.physicalDimensions, pAllocationCallbacks);
    result.physicalResolution = create_structure_copy(obj.physicalResolution, pAllocationCallbacks);
    result.supportedTransforms = create_structure_copy(obj.supportedTransforms, pAllocationCallbacks);
    result.planeReorderPossible = create_structure_copy(obj.planeReorderPossible, pAllocationCallbacks);
    result.persistentContent = create_structure_copy(obj.persistentContent, pAllocationCallbacks);
    return result;
}

template <>
VkDisplaySurfaceCreateInfoKHR create_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplaySurfaceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.displayMode = obj.displayMode;
    result.planeIndex = create_structure_copy(obj.planeIndex, pAllocationCallbacks);
    result.planeStackIndex = create_structure_copy(obj.planeStackIndex, pAllocationCallbacks);
    result.transform = create_structure_copy(obj.transform, pAllocationCallbacks);
    result.globalAlpha = create_structure_copy(obj.globalAlpha, pAllocationCallbacks);
    result.alphaMode = create_structure_copy(obj.alphaMode, pAllocationCallbacks);
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkDrawIndexedIndirectCommand create_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawIndexedIndirectCommand result { };
    result.indexCount = create_structure_copy(obj.indexCount, pAllocationCallbacks);
    result.instanceCount = create_structure_copy(obj.instanceCount, pAllocationCallbacks);
    result.firstIndex = create_structure_copy(obj.firstIndex, pAllocationCallbacks);
    result.vertexOffset = create_structure_copy(obj.vertexOffset, pAllocationCallbacks);
    result.firstInstance = create_structure_copy(obj.firstInstance, pAllocationCallbacks);
    return result;
}

template <>
VkDrawIndirectCommand create_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawIndirectCommand result { };
    result.vertexCount = create_structure_copy(obj.vertexCount, pAllocationCallbacks);
    result.instanceCount = create_structure_copy(obj.instanceCount, pAllocationCallbacks);
    result.firstVertex = create_structure_copy(obj.firstVertex, pAllocationCallbacks);
    result.firstInstance = create_structure_copy(obj.firstInstance, pAllocationCallbacks);
    return result;
}

template <>
VkDrawMeshTasksIndirectCommandNV create_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawMeshTasksIndirectCommandNV result { };
    result.taskCount = create_structure_copy(obj.taskCount, pAllocationCallbacks);
    result.firstTask = create_structure_copy(obj.firstTask, pAllocationCallbacks);
    return result;
}

template <>
VkDrmFormatModifierPropertiesEXT create_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrmFormatModifierPropertiesEXT result { };
    result.drmFormatModifier = create_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
    result.drmFormatModifierPlaneCount = create_structure_copy(obj.drmFormatModifierPlaneCount, pAllocationCallbacks);
    result.drmFormatModifierTilingFeatures = create_structure_copy(obj.drmFormatModifierTilingFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkDrmFormatModifierPropertiesListEXT create_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrmFormatModifierPropertiesListEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.drmFormatModifierCount = create_structure_copy(obj.drmFormatModifierCount, pAllocationCallbacks);
    result.pDrmFormatModifierProperties = create_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, pAllocationCallbacks);
    return result;
}

template <>
VkEventCreateInfo create_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkEventCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkExportFenceCreateInfo create_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportFenceCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleTypes = create_structure_copy(obj.handleTypes, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportFenceWin32HandleInfoKHR create_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportFenceWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = create_structure_copy(obj.dwAccess, pAllocationCallbacks);
    result.name = create_structure_copy(obj.name, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportMemoryAllocateInfo create_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryAllocateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleTypes = create_structure_copy(obj.handleTypes, pAllocationCallbacks);
    return result;
}

template <>
VkExportMemoryAllocateInfoNV create_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryAllocateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleTypes = create_structure_copy(obj.handleTypes, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoKHR create_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = create_structure_copy(obj.dwAccess, pAllocationCallbacks);
    result.name = create_structure_copy(obj.name, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoNV create_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryWin32HandleInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = create_structure_copy(obj.dwAccess, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportSemaphoreCreateInfo create_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportSemaphoreCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleTypes = create_structure_copy(obj.handleTypes, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportSemaphoreWin32HandleInfoKHR create_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportSemaphoreWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = create_structure_copy(obj.dwAccess, pAllocationCallbacks);
    result.name = create_structure_copy(obj.name, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExtensionProperties create_structure_copy<VkExtensionProperties>(const VkExtensionProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtensionProperties result { };
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.extensionName, obj.extensionName);
    result.specVersion = create_structure_copy(obj.specVersion, pAllocationCallbacks);
    return result;
}

template <>
VkExtent2D create_structure_copy<VkExtent2D>(const VkExtent2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtent2D result { };
    result.width = create_structure_copy(obj.width, pAllocationCallbacks);
    result.height = create_structure_copy(obj.height, pAllocationCallbacks);
    return result;
}

template <>
VkExtent3D create_structure_copy<VkExtent3D>(const VkExtent3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtent3D result { };
    result.width = create_structure_copy(obj.width, pAllocationCallbacks);
    result.height = create_structure_copy(obj.height, pAllocationCallbacks);
    result.depth = create_structure_copy(obj.depth, pAllocationCallbacks);
    return result;
}

template <>
VkExternalBufferProperties create_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalBufferProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.externalMemoryProperties = create_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
    return result;
}

template <>
VkExternalFenceProperties create_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalFenceProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.exportFromImportedHandleTypes = create_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    result.compatibleHandleTypes = create_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
    result.externalFenceFeatures = create_structure_copy(obj.externalFenceFeatures, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkExternalFormatANDROID create_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalFormatANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.externalFormat = create_structure_copy(obj.externalFormat, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkExternalImageFormatProperties create_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalImageFormatProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.externalMemoryProperties = create_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
    return result;
}

template <>
VkExternalImageFormatPropertiesNV create_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalImageFormatPropertiesNV result { };
    result.imageFormatProperties = create_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
    result.externalMemoryFeatures = create_structure_copy(obj.externalMemoryFeatures, pAllocationCallbacks);
    result.exportFromImportedHandleTypes = create_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    result.compatibleHandleTypes = create_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
    return result;
}

template <>
VkExternalMemoryBufferCreateInfo create_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryBufferCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleTypes = create_structure_copy(obj.handleTypes, pAllocationCallbacks);
    return result;
}

template <>
VkExternalMemoryImageCreateInfo create_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryImageCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleTypes = create_structure_copy(obj.handleTypes, pAllocationCallbacks);
    return result;
}

template <>
VkExternalMemoryImageCreateInfoNV create_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryImageCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleTypes = create_structure_copy(obj.handleTypes, pAllocationCallbacks);
    return result;
}

template <>
VkExternalMemoryProperties create_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryProperties result { };
    result.externalMemoryFeatures = create_structure_copy(obj.externalMemoryFeatures, pAllocationCallbacks);
    result.exportFromImportedHandleTypes = create_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    result.compatibleHandleTypes = create_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
    return result;
}

template <>
VkExternalSemaphoreProperties create_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalSemaphoreProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.exportFromImportedHandleTypes = create_structure_copy(obj.exportFromImportedHandleTypes, pAllocationCallbacks);
    result.compatibleHandleTypes = create_structure_copy(obj.compatibleHandleTypes, pAllocationCallbacks);
    result.externalSemaphoreFeatures = create_structure_copy(obj.externalSemaphoreFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkFenceCreateInfo create_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkFenceGetFdInfoKHR create_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceGetFdInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fence = obj.fence;
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkFenceGetWin32HandleInfoKHR create_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceGetWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fence = obj.fence;
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkFilterCubicImageViewImageFormatPropertiesEXT create_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFilterCubicImageViewImageFormatPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.filterCubic = create_structure_copy(obj.filterCubic, pAllocationCallbacks);
    result.filterCubicMinmax = create_structure_copy(obj.filterCubicMinmax, pAllocationCallbacks);
    return result;
}

template <>
VkFormatProperties create_structure_copy<VkFormatProperties>(const VkFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFormatProperties result { };
    result.linearTilingFeatures = create_structure_copy(obj.linearTilingFeatures, pAllocationCallbacks);
    result.optimalTilingFeatures = create_structure_copy(obj.optimalTilingFeatures, pAllocationCallbacks);
    result.bufferFeatures = create_structure_copy(obj.bufferFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkFormatProperties2 create_structure_copy<VkFormatProperties2>(const VkFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFormatProperties2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.formatProperties = create_structure_copy(obj.formatProperties, pAllocationCallbacks);
    return result;
}

template <>
VkFramebufferAttachmentImageInfo create_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferAttachmentImageInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    result.width = create_structure_copy(obj.width, pAllocationCallbacks);
    result.height = create_structure_copy(obj.height, pAllocationCallbacks);
    result.layerCount = create_structure_copy(obj.layerCount, pAllocationCallbacks);
    result.viewFormatCount = create_structure_copy(obj.viewFormatCount, pAllocationCallbacks);
    result.pViewFormats = create_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
    return result;
}

template <>
VkFramebufferAttachmentsCreateInfo create_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferAttachmentsCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.attachmentImageInfoCount = create_structure_copy(obj.attachmentImageInfoCount, pAllocationCallbacks);
    result.pAttachmentImageInfos = create_dynamic_array_copy(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos, pAllocationCallbacks);
    return result;
}

template <>
VkFramebufferCreateInfo create_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.renderPass = obj.renderPass;
    result.attachmentCount = create_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    result.width = create_structure_copy(obj.width, pAllocationCallbacks);
    result.height = create_structure_copy(obj.height, pAllocationCallbacks);
    result.layers = create_structure_copy(obj.layers, pAllocationCallbacks);
    return result;
}

template <>
VkFramebufferMixedSamplesCombinationNV create_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferMixedSamplesCombinationNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.coverageReductionMode = create_structure_copy(obj.coverageReductionMode, pAllocationCallbacks);
    result.rasterizationSamples = create_structure_copy(obj.rasterizationSamples, pAllocationCallbacks);
    result.depthStencilSamples = create_structure_copy(obj.depthStencilSamples, pAllocationCallbacks);
    result.colorSamples = create_structure_copy(obj.colorSamples, pAllocationCallbacks);
    return result;
}

template <>
VkGeneratedCommandsInfoNV create_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeneratedCommandsInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pipelineBindPoint = create_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    result.pipeline = obj.pipeline;
    result.indirectCommandsLayout = obj.indirectCommandsLayout;
    result.streamCount = create_structure_copy(obj.streamCount, pAllocationCallbacks);
    result.pStreams = create_dynamic_array_copy(obj.streamCount, obj.pStreams, pAllocationCallbacks);
    result.sequencesCount = create_structure_copy(obj.sequencesCount, pAllocationCallbacks);
    result.preprocessBuffer = obj.preprocessBuffer;
    result.preprocessOffset = create_structure_copy(obj.preprocessOffset, pAllocationCallbacks);
    result.preprocessSize = create_structure_copy(obj.preprocessSize, pAllocationCallbacks);
    result.sequencesCountBuffer = obj.sequencesCountBuffer;
    result.sequencesCountOffset = create_structure_copy(obj.sequencesCountOffset, pAllocationCallbacks);
    result.sequencesIndexBuffer = obj.sequencesIndexBuffer;
    result.sequencesIndexOffset = create_structure_copy(obj.sequencesIndexOffset, pAllocationCallbacks);
    return result;
}

template <>
VkGeneratedCommandsMemoryRequirementsInfoNV create_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeneratedCommandsMemoryRequirementsInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pipelineBindPoint = create_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    result.pipeline = obj.pipeline;
    result.indirectCommandsLayout = obj.indirectCommandsLayout;
    result.maxSequencesCount = create_structure_copy(obj.maxSequencesCount, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryAABBNV create_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryAABBNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.aabbData = obj.aabbData;
    result.numAABBs = create_structure_copy(obj.numAABBs, pAllocationCallbacks);
    result.stride = create_structure_copy(obj.stride, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryDataNV create_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryDataNV result { };
    result.triangles = create_structure_copy(obj.triangles, pAllocationCallbacks);
    result.aabbs = create_structure_copy(obj.aabbs, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryNV create_structure_copy<VkGeometryNV>(const VkGeometryNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.geometryType = create_structure_copy(obj.geometryType, pAllocationCallbacks);
    result.geometry = create_structure_copy(obj.geometry, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryTrianglesNV create_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryTrianglesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.vertexData = obj.vertexData;
    result.vertexOffset = create_structure_copy(obj.vertexOffset, pAllocationCallbacks);
    result.vertexCount = create_structure_copy(obj.vertexCount, pAllocationCallbacks);
    result.vertexStride = create_structure_copy(obj.vertexStride, pAllocationCallbacks);
    result.vertexFormat = create_structure_copy(obj.vertexFormat, pAllocationCallbacks);
    result.indexData = obj.indexData;
    result.indexOffset = create_structure_copy(obj.indexOffset, pAllocationCallbacks);
    result.indexCount = create_structure_copy(obj.indexCount, pAllocationCallbacks);
    result.indexType = create_structure_copy(obj.indexType, pAllocationCallbacks);
    result.transformData = obj.transformData;
    result.transformOffset = create_structure_copy(obj.transformOffset, pAllocationCallbacks);
    return result;
}

template <>
VkGraphicsPipelineCreateInfo create_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsPipelineCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.stageCount = create_structure_copy(obj.stageCount, pAllocationCallbacks);
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    result.pVertexInputState = obj.pVertexInputState;
    result.pInputAssemblyState = obj.pInputAssemblyState;
    result.pTessellationState = obj.pTessellationState;
    result.pViewportState = obj.pViewportState;
    result.pRasterizationState = obj.pRasterizationState;
    result.pMultisampleState = obj.pMultisampleState;
    result.pDepthStencilState = obj.pDepthStencilState;
    result.pColorBlendState = obj.pColorBlendState;
    result.pDynamicState = obj.pDynamicState;
    result.layout = obj.layout;
    result.renderPass = obj.renderPass;
    result.subpass = create_structure_copy(obj.subpass, pAllocationCallbacks);
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = create_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
    return result;
}

template <>
VkGraphicsPipelineShaderGroupsCreateInfoNV create_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsPipelineShaderGroupsCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.groupCount = create_structure_copy(obj.groupCount, pAllocationCallbacks);
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    result.pipelineCount = create_structure_copy(obj.pipelineCount, pAllocationCallbacks);
    result.pPipelines = create_dynamic_array_copy(obj.pipelineCount, obj.pPipelines, pAllocationCallbacks);
    return result;
}

template <>
VkGraphicsShaderGroupCreateInfoNV create_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsShaderGroupCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.stageCount = create_structure_copy(obj.stageCount, pAllocationCallbacks);
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    result.pVertexInputState = obj.pVertexInputState;
    result.pTessellationState = obj.pTessellationState;
    return result;
}

template <>
VkHdrMetadataEXT create_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkHdrMetadataEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.displayPrimaryRed = create_structure_copy(obj.displayPrimaryRed, pAllocationCallbacks);
    result.displayPrimaryGreen = create_structure_copy(obj.displayPrimaryGreen, pAllocationCallbacks);
    result.displayPrimaryBlue = create_structure_copy(obj.displayPrimaryBlue, pAllocationCallbacks);
    result.whitePoint = create_structure_copy(obj.whitePoint, pAllocationCallbacks);
    result.maxLuminance = create_structure_copy(obj.maxLuminance, pAllocationCallbacks);
    result.minLuminance = create_structure_copy(obj.minLuminance, pAllocationCallbacks);
    result.maxContentLightLevel = create_structure_copy(obj.maxContentLightLevel, pAllocationCallbacks);
    result.maxFrameAverageLightLevel = create_structure_copy(obj.maxFrameAverageLightLevel, pAllocationCallbacks);
    return result;
}

template <>
VkHeadlessSurfaceCreateInfoEXT create_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkHeadlessSurfaceCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
VkIOSSurfaceCreateInfoMVK create_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIOSSurfaceCreateInfoMVK result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pView = obj.pView;
    return result;
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
VkImageBlit create_structure_copy<VkImageBlit>(const VkImageBlit& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageBlit result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    create_static_array_copy<2>(result.srcOffsets, obj.srcOffsets);
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    create_static_array_copy<2>(result.dstOffsets, obj.dstOffsets);
    return result;
}

template <>
VkImageCopy create_structure_copy<VkImageCopy>(const VkImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageCopy result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    result.srcOffset = create_structure_copy(obj.srcOffset, pAllocationCallbacks);
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    result.dstOffset = create_structure_copy(obj.dstOffset, pAllocationCallbacks);
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkImageCreateInfo create_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.imageType = create_structure_copy(obj.imageType, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    result.mipLevels = create_structure_copy(obj.mipLevels, pAllocationCallbacks);
    result.arrayLayers = create_structure_copy(obj.arrayLayers, pAllocationCallbacks);
    result.samples = create_structure_copy(obj.samples, pAllocationCallbacks);
    result.tiling = create_structure_copy(obj.tiling, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    result.sharingMode = create_structure_copy(obj.sharingMode, pAllocationCallbacks);
    result.queueFamilyIndexCount = create_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    result.initialLayout = create_structure_copy(obj.initialLayout, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierExplicitCreateInfoEXT create_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierExplicitCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.drmFormatModifier = create_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
    result.drmFormatModifierPlaneCount = create_structure_copy(obj.drmFormatModifierPlaneCount, pAllocationCallbacks);
    result.pPlaneLayouts = create_dynamic_array_copy(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierListCreateInfoEXT create_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierListCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.drmFormatModifierCount = create_structure_copy(obj.drmFormatModifierCount, pAllocationCallbacks);
    result.pDrmFormatModifiers = create_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierPropertiesEXT create_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.drmFormatModifier = create_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
    return result;
}

template <>
VkImageFormatListCreateInfo create_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatListCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.viewFormatCount = create_structure_copy(obj.viewFormatCount, pAllocationCallbacks);
    result.pViewFormats = create_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
    return result;
}

template <>
VkImageFormatProperties create_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatProperties result { };
    result.maxExtent = create_structure_copy(obj.maxExtent, pAllocationCallbacks);
    result.maxMipLevels = create_structure_copy(obj.maxMipLevels, pAllocationCallbacks);
    result.maxArrayLayers = create_structure_copy(obj.maxArrayLayers, pAllocationCallbacks);
    result.sampleCounts = create_structure_copy(obj.sampleCounts, pAllocationCallbacks);
    result.maxResourceSize = create_structure_copy(obj.maxResourceSize, pAllocationCallbacks);
    return result;
}

template <>
VkImageFormatProperties2 create_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatProperties2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.imageFormatProperties = create_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
    return result;
}

template <>
VkImageMemoryBarrier create_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageMemoryBarrier result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.srcAccessMask = create_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    result.dstAccessMask = create_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    result.oldLayout = create_structure_copy(obj.oldLayout, pAllocationCallbacks);
    result.newLayout = create_structure_copy(obj.newLayout, pAllocationCallbacks);
    result.srcQueueFamilyIndex = create_structure_copy(obj.srcQueueFamilyIndex, pAllocationCallbacks);
    result.dstQueueFamilyIndex = create_structure_copy(obj.dstQueueFamilyIndex, pAllocationCallbacks);
    result.image = obj.image;
    result.subresourceRange = create_structure_copy(obj.subresourceRange, pAllocationCallbacks);
    return result;
}

template <>
VkImageMemoryRequirementsInfo2 create_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageMemoryRequirementsInfo2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.image = obj.image;
    return result;
}

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
VkImagePipeSurfaceCreateInfoFUCHSIA create_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImagePipeSurfaceCreateInfoFUCHSIA result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.imagePipeHandle = create_structure_copy(obj.imagePipeHandle, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
VkImagePlaneMemoryRequirementsInfo create_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImagePlaneMemoryRequirementsInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.planeAspect = create_structure_copy(obj.planeAspect, pAllocationCallbacks);
    return result;
}

template <>
VkImageResolve create_structure_copy<VkImageResolve>(const VkImageResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageResolve result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    result.srcOffset = create_structure_copy(obj.srcOffset, pAllocationCallbacks);
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    result.dstOffset = create_structure_copy(obj.dstOffset, pAllocationCallbacks);
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkImageSparseMemoryRequirementsInfo2 create_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSparseMemoryRequirementsInfo2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.image = obj.image;
    return result;
}

template <>
VkImageStencilUsageCreateInfo create_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageStencilUsageCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.stencilUsage = create_structure_copy(obj.stencilUsage, pAllocationCallbacks);
    return result;
}

template <>
VkImageSubresource create_structure_copy<VkImageSubresource>(const VkImageSubresource& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresource result { };
    result.aspectMask = create_structure_copy(obj.aspectMask, pAllocationCallbacks);
    result.mipLevel = create_structure_copy(obj.mipLevel, pAllocationCallbacks);
    result.arrayLayer = create_structure_copy(obj.arrayLayer, pAllocationCallbacks);
    return result;
}

template <>
VkImageSubresourceLayers create_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresourceLayers result { };
    result.aspectMask = create_structure_copy(obj.aspectMask, pAllocationCallbacks);
    result.mipLevel = create_structure_copy(obj.mipLevel, pAllocationCallbacks);
    result.baseArrayLayer = create_structure_copy(obj.baseArrayLayer, pAllocationCallbacks);
    result.layerCount = create_structure_copy(obj.layerCount, pAllocationCallbacks);
    return result;
}

template <>
VkImageSubresourceRange create_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresourceRange result { };
    result.aspectMask = create_structure_copy(obj.aspectMask, pAllocationCallbacks);
    result.baseMipLevel = create_structure_copy(obj.baseMipLevel, pAllocationCallbacks);
    result.levelCount = create_structure_copy(obj.levelCount, pAllocationCallbacks);
    result.baseArrayLayer = create_structure_copy(obj.baseArrayLayer, pAllocationCallbacks);
    result.layerCount = create_structure_copy(obj.layerCount, pAllocationCallbacks);
    return result;
}

template <>
VkImageSwapchainCreateInfoKHR create_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSwapchainCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.swapchain = obj.swapchain;
    return result;
}

template <>
VkImageViewASTCDecodeModeEXT create_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewASTCDecodeModeEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.decodeMode = create_structure_copy(obj.decodeMode, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewCreateInfo create_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.image = obj.image;
    result.viewType = create_structure_copy(obj.viewType, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.components = create_structure_copy(obj.components, pAllocationCallbacks);
    result.subresourceRange = create_structure_copy(obj.subresourceRange, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewHandleInfoNVX create_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewHandleInfoNVX result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.imageView = obj.imageView;
    result.descriptorType = create_structure_copy(obj.descriptorType, pAllocationCallbacks);
    result.sampler = obj.sampler;
    return result;
}

template <>
VkImageViewUsageCreateInfo create_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewUsageCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkImportAndroidHardwareBufferInfoANDROID create_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportAndroidHardwareBufferInfoANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.buffer = obj.buffer;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkImportFenceFdInfoKHR create_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportFenceFdInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fence = obj.fence;
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.fd = create_structure_copy(obj.fd, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportFenceWin32HandleInfoKHR create_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportFenceWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fence = obj.fence;
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.handle = create_structure_copy(obj.handle, pAllocationCallbacks);
    result.name = create_structure_copy(obj.name, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportMemoryFdInfoKHR create_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryFdInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.fd = create_structure_copy(obj.fd, pAllocationCallbacks);
    return result;
}

template <>
VkImportMemoryHostPointerInfoEXT create_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryHostPointerInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.pHostPointer = obj.pHostPointer;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoKHR create_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.handle = create_structure_copy(obj.handle, pAllocationCallbacks);
    result.name = create_structure_copy(obj.name, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoNV create_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryWin32HandleInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.handle = create_structure_copy(obj.handle, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportSemaphoreFdInfoKHR create_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportSemaphoreFdInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.semaphore = obj.semaphore;
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.fd = create_structure_copy(obj.fd, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportSemaphoreWin32HandleInfoKHR create_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportSemaphoreWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.semaphore = obj.semaphore;
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    result.handle = create_structure_copy(obj.handle, pAllocationCallbacks);
    result.name = create_structure_copy(obj.name, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkIndirectCommandsLayoutCreateInfoNV create_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsLayoutCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pipelineBindPoint = create_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    result.tokenCount = create_structure_copy(obj.tokenCount, pAllocationCallbacks);
    result.pTokens = create_dynamic_array_copy(obj.tokenCount, obj.pTokens, pAllocationCallbacks);
    result.streamCount = create_structure_copy(obj.streamCount, pAllocationCallbacks);
    result.pStreamStrides = create_dynamic_array_copy(obj.streamCount, obj.pStreamStrides, pAllocationCallbacks);
    return result;
}

template <>
VkIndirectCommandsLayoutTokenNV create_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsLayoutTokenNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.tokenType = create_structure_copy(obj.tokenType, pAllocationCallbacks);
    result.stream = create_structure_copy(obj.stream, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.vertexBindingUnit = create_structure_copy(obj.vertexBindingUnit, pAllocationCallbacks);
    result.vertexDynamicStride = create_structure_copy(obj.vertexDynamicStride, pAllocationCallbacks);
    result.pushconstantPipelineLayout = obj.pushconstantPipelineLayout;
    result.pushconstantShaderStageFlags = create_structure_copy(obj.pushconstantShaderStageFlags, pAllocationCallbacks);
    result.pushconstantOffset = create_structure_copy(obj.pushconstantOffset, pAllocationCallbacks);
    result.pushconstantSize = create_structure_copy(obj.pushconstantSize, pAllocationCallbacks);
    result.indirectStateFlags = create_structure_copy(obj.indirectStateFlags, pAllocationCallbacks);
    result.indexTypeCount = create_structure_copy(obj.indexTypeCount, pAllocationCallbacks);
    result.pIndexTypes = create_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypes, pAllocationCallbacks);
    result.pIndexTypeValues = create_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypeValues, pAllocationCallbacks);
    return result;
}

template <>
VkIndirectCommandsStreamNV create_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsStreamNV result { };
    result.buffer = obj.buffer;
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    return result;
}

template <>
VkInitializePerformanceApiInfoINTEL create_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInitializePerformanceApiInfoINTEL result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkInputAttachmentAspectReference create_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInputAttachmentAspectReference result { };
    result.subpass = create_structure_copy(obj.subpass, pAllocationCallbacks);
    result.inputAttachmentIndex = create_structure_copy(obj.inputAttachmentIndex, pAllocationCallbacks);
    result.aspectMask = create_structure_copy(obj.aspectMask, pAllocationCallbacks);
    return result;
}

template <>
VkInstanceCreateInfo create_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInstanceCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pApplicationInfo = obj.pApplicationInfo;
    result.enabledLayerCount = create_structure_copy(obj.enabledLayerCount, pAllocationCallbacks);
    result.ppEnabledLayerNames = create_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    result.enabledExtensionCount = create_structure_copy(obj.enabledExtensionCount, pAllocationCallbacks);
    result.ppEnabledExtensionNames = create_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
    return result;
}

template <>
VkLayerProperties create_structure_copy<VkLayerProperties>(const VkLayerProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkLayerProperties result { };
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.layerName, obj.layerName);
    result.specVersion = create_structure_copy(obj.specVersion, pAllocationCallbacks);
    result.implementationVersion = create_structure_copy(obj.implementationVersion, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    return result;
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
VkMacOSSurfaceCreateInfoMVK create_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMacOSSurfaceCreateInfoMVK result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pView = obj.pView;
    return result;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
VkMappedMemoryRange create_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMappedMemoryRange result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memory = obj.memory;
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryAllocateFlagsInfo create_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryAllocateFlagsInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.deviceMask = create_structure_copy(obj.deviceMask, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryAllocateInfo create_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryAllocateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.allocationSize = create_structure_copy(obj.allocationSize, pAllocationCallbacks);
    result.memoryTypeIndex = create_structure_copy(obj.memoryTypeIndex, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryBarrier create_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryBarrier result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.srcAccessMask = create_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    result.dstAccessMask = create_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryDedicatedAllocateInfo create_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryDedicatedAllocateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.image = obj.image;
    result.buffer = obj.buffer;
    return result;
}

template <>
VkMemoryDedicatedRequirements create_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryDedicatedRequirements result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.prefersDedicatedAllocation = create_structure_copy(obj.prefersDedicatedAllocation, pAllocationCallbacks);
    result.requiresDedicatedAllocation = create_structure_copy(obj.requiresDedicatedAllocation, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryFdPropertiesKHR create_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryFdPropertiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memoryTypeBits = create_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkMemoryGetAndroidHardwareBufferInfoANDROID create_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetAndroidHardwareBufferInfoANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memory = obj.memory;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkMemoryGetFdInfoKHR create_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetFdInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memory = obj.memory;
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryGetWin32HandleInfoKHR create_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memory = obj.memory;
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkMemoryHeap create_structure_copy<VkMemoryHeap>(const VkMemoryHeap& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryHeap result { };
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryHostPointerPropertiesEXT create_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryHostPointerPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memoryTypeBits = create_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryOpaqueCaptureAddressAllocateInfo create_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryOpaqueCaptureAddressAllocateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.opaqueCaptureAddress = create_structure_copy(obj.opaqueCaptureAddress, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryPriorityAllocateInfoEXT create_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryPriorityAllocateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.priority = create_structure_copy(obj.priority, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryRequirements create_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryRequirements result { };
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    result.alignment = create_structure_copy(obj.alignment, pAllocationCallbacks);
    result.memoryTypeBits = create_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryRequirements2 create_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryRequirements2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memoryRequirements = create_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
    return result;
}

template <>
VkMemoryType create_structure_copy<VkMemoryType>(const VkMemoryType& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryType result { };
    result.propertyFlags = create_structure_copy(obj.propertyFlags, pAllocationCallbacks);
    result.heapIndex = create_structure_copy(obj.heapIndex, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryWin32HandlePropertiesKHR create_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryWin32HandlePropertiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memoryTypeBits = create_structure_copy(obj.memoryTypeBits, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
VkMetalSurfaceCreateInfoEXT create_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMetalSurfaceCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pLayer = obj.pLayer;
    return result;
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
VkMultisamplePropertiesEXT create_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMultisamplePropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxSampleLocationGridSize = create_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferANDROID create_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkNativeBufferANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handle = obj.handle;
    result.stride = create_structure_copy(obj.stride, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    result.usage2 = create_structure_copy(obj.usage2, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferUsage2ANDROID create_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkNativeBufferUsage2ANDROID result { };
    result.consumer = create_structure_copy(obj.consumer, pAllocationCallbacks);
    result.producer = create_structure_copy(obj.producer, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkOffset2D create_structure_copy<VkOffset2D>(const VkOffset2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkOffset2D result { };
    result.x = create_structure_copy(obj.x, pAllocationCallbacks);
    result.y = create_structure_copy(obj.y, pAllocationCallbacks);
    return result;
}

template <>
VkOffset3D create_structure_copy<VkOffset3D>(const VkOffset3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkOffset3D result { };
    result.x = create_structure_copy(obj.x, pAllocationCallbacks);
    result.y = create_structure_copy(obj.y, pAllocationCallbacks);
    result.z = create_structure_copy(obj.z, pAllocationCallbacks);
    return result;
}

template <>
VkPastPresentationTimingGOOGLE create_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPastPresentationTimingGOOGLE result { };
    result.presentID = create_structure_copy(obj.presentID, pAllocationCallbacks);
    result.desiredPresentTime = create_structure_copy(obj.desiredPresentTime, pAllocationCallbacks);
    result.actualPresentTime = create_structure_copy(obj.actualPresentTime, pAllocationCallbacks);
    result.earliestPresentTime = create_structure_copy(obj.earliestPresentTime, pAllocationCallbacks);
    result.presentMargin = create_structure_copy(obj.presentMargin, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceConfigurationAcquireInfoINTEL create_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceConfigurationAcquireInfoINTEL result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceCounterDescriptionKHR create_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceCounterDescriptionKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.category, obj.category);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    return result;
}

template <>
VkPerformanceCounterKHR create_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceCounterKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.unit = create_structure_copy(obj.unit, pAllocationCallbacks);
    result.scope = create_structure_copy(obj.scope, pAllocationCallbacks);
    result.storage = create_structure_copy(obj.storage, pAllocationCallbacks);
    create_static_array_copy<VK_UUID_SIZE>(result.uuid, obj.uuid);
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
VkPerformanceCounterResultKHR create_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceCounterResultKHR result { };
    result.int32 = create_structure_copy(obj.int32, pAllocationCallbacks);
    result.int64 = create_structure_copy(obj.int64, pAllocationCallbacks);
    result.uint32 = create_structure_copy(obj.uint32, pAllocationCallbacks);
    result.uint64 = create_structure_copy(obj.uint64, pAllocationCallbacks);
    result.float32 = create_structure_copy(obj.float32, pAllocationCallbacks);
    result.float64 = create_structure_copy(obj.float64, pAllocationCallbacks);
    return result;
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkPerformanceMarkerInfoINTEL create_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceMarkerInfoINTEL result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.marker = create_structure_copy(obj.marker, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceOverrideInfoINTEL create_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceOverrideInfoINTEL result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.enable = create_structure_copy(obj.enable, pAllocationCallbacks);
    result.parameter = create_structure_copy(obj.parameter, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceQuerySubmitInfoKHR create_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceQuerySubmitInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.counterPassIndex = create_structure_copy(obj.counterPassIndex, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceStreamMarkerInfoINTEL create_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceStreamMarkerInfoINTEL result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.marker = create_structure_copy(obj.marker, pAllocationCallbacks);
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
VkPerformanceValueDataINTEL create_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceValueDataINTEL result { };
    result.value32 = create_structure_copy(obj.value32, pAllocationCallbacks);
    result.value64 = create_structure_copy(obj.value64, pAllocationCallbacks);
    result.valueFloat = create_structure_copy(obj.valueFloat, pAllocationCallbacks);
    result.valueBool = create_structure_copy(obj.valueBool, pAllocationCallbacks);
    result.valueString = obj.valueString;
    return result;
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkPerformanceValueINTEL create_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceValueINTEL result { };
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.data = create_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevice16BitStorageFeatures create_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevice16BitStorageFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.storageBuffer16BitAccess = create_structure_copy(obj.storageBuffer16BitAccess, pAllocationCallbacks);
    result.uniformAndStorageBuffer16BitAccess = create_structure_copy(obj.uniformAndStorageBuffer16BitAccess, pAllocationCallbacks);
    result.storagePushConstant16 = create_structure_copy(obj.storagePushConstant16, pAllocationCallbacks);
    result.storageInputOutput16 = create_structure_copy(obj.storageInputOutput16, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevice8BitStorageFeatures create_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevice8BitStorageFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.storageBuffer8BitAccess = create_structure_copy(obj.storageBuffer8BitAccess, pAllocationCallbacks);
    result.uniformAndStorageBuffer8BitAccess = create_structure_copy(obj.uniformAndStorageBuffer8BitAccess, pAllocationCallbacks);
    result.storagePushConstant8 = create_structure_copy(obj.storagePushConstant8, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceASTCDecodeFeaturesEXT create_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceASTCDecodeFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.decodeModeSharedExponent = create_structure_copy(obj.decodeModeSharedExponent, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT create_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.advancedBlendCoherentOperations = create_structure_copy(obj.advancedBlendCoherentOperations, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT create_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.advancedBlendMaxColorAttachments = create_structure_copy(obj.advancedBlendMaxColorAttachments, pAllocationCallbacks);
    result.advancedBlendIndependentBlend = create_structure_copy(obj.advancedBlendIndependentBlend, pAllocationCallbacks);
    result.advancedBlendNonPremultipliedSrcColor = create_structure_copy(obj.advancedBlendNonPremultipliedSrcColor, pAllocationCallbacks);
    result.advancedBlendNonPremultipliedDstColor = create_structure_copy(obj.advancedBlendNonPremultipliedDstColor, pAllocationCallbacks);
    result.advancedBlendCorrelatedOverlap = create_structure_copy(obj.advancedBlendCorrelatedOverlap, pAllocationCallbacks);
    result.advancedBlendAllOperations = create_structure_copy(obj.advancedBlendAllOperations, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceBufferDeviceAddressFeatures create_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBufferDeviceAddressFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.bufferDeviceAddress = create_structure_copy(obj.bufferDeviceAddress, pAllocationCallbacks);
    result.bufferDeviceAddressCaptureReplay = create_structure_copy(obj.bufferDeviceAddressCaptureReplay, pAllocationCallbacks);
    result.bufferDeviceAddressMultiDevice = create_structure_copy(obj.bufferDeviceAddressMultiDevice, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceBufferDeviceAddressFeaturesEXT create_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBufferDeviceAddressFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.bufferDeviceAddress = create_structure_copy(obj.bufferDeviceAddress, pAllocationCallbacks);
    result.bufferDeviceAddressCaptureReplay = create_structure_copy(obj.bufferDeviceAddressCaptureReplay, pAllocationCallbacks);
    result.bufferDeviceAddressMultiDevice = create_structure_copy(obj.bufferDeviceAddressMultiDevice, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCoherentMemoryFeaturesAMD create_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCoherentMemoryFeaturesAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceCoherentMemory = create_structure_copy(obj.deviceCoherentMemory, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceComputeShaderDerivativesFeaturesNV create_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceComputeShaderDerivativesFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.computeDerivativeGroupQuads = create_structure_copy(obj.computeDerivativeGroupQuads, pAllocationCallbacks);
    result.computeDerivativeGroupLinear = create_structure_copy(obj.computeDerivativeGroupLinear, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceConditionalRenderingFeaturesEXT create_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceConditionalRenderingFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.conditionalRendering = create_structure_copy(obj.conditionalRendering, pAllocationCallbacks);
    result.inheritedConditionalRendering = create_structure_copy(obj.inheritedConditionalRendering, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceConservativeRasterizationPropertiesEXT create_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.primitiveOverestimationSize = create_structure_copy(obj.primitiveOverestimationSize, pAllocationCallbacks);
    result.maxExtraPrimitiveOverestimationSize = create_structure_copy(obj.maxExtraPrimitiveOverestimationSize, pAllocationCallbacks);
    result.extraPrimitiveOverestimationSizeGranularity = create_structure_copy(obj.extraPrimitiveOverestimationSizeGranularity, pAllocationCallbacks);
    result.primitiveUnderestimation = create_structure_copy(obj.primitiveUnderestimation, pAllocationCallbacks);
    result.conservativePointAndLineRasterization = create_structure_copy(obj.conservativePointAndLineRasterization, pAllocationCallbacks);
    result.degenerateTrianglesRasterized = create_structure_copy(obj.degenerateTrianglesRasterized, pAllocationCallbacks);
    result.degenerateLinesRasterized = create_structure_copy(obj.degenerateLinesRasterized, pAllocationCallbacks);
    result.fullyCoveredFragmentShaderInputVariable = create_structure_copy(obj.fullyCoveredFragmentShaderInputVariable, pAllocationCallbacks);
    result.conservativeRasterizationPostDepthCoverage = create_structure_copy(obj.conservativeRasterizationPostDepthCoverage, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixFeaturesNV create_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCooperativeMatrixFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.cooperativeMatrix = create_structure_copy(obj.cooperativeMatrix, pAllocationCallbacks);
    result.cooperativeMatrixRobustBufferAccess = create_structure_copy(obj.cooperativeMatrixRobustBufferAccess, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixPropertiesNV create_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCooperativeMatrixPropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.cooperativeMatrixSupportedStages = create_structure_copy(obj.cooperativeMatrixSupportedStages, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCornerSampledImageFeaturesNV create_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCornerSampledImageFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.cornerSampledImage = create_structure_copy(obj.cornerSampledImage, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceCoverageReductionModeFeaturesNV create_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCoverageReductionModeFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.coverageReductionMode = create_structure_copy(obj.coverageReductionMode, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV create_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.dedicatedAllocationImageAliasing = create_structure_copy(obj.dedicatedAllocationImageAliasing, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDepthClipEnableFeaturesEXT create_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDepthClipEnableFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.depthClipEnable = create_structure_copy(obj.depthClipEnable, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDepthStencilResolveProperties create_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDepthStencilResolveProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.supportedDepthResolveModes = create_structure_copy(obj.supportedDepthResolveModes, pAllocationCallbacks);
    result.supportedStencilResolveModes = create_structure_copy(obj.supportedStencilResolveModes, pAllocationCallbacks);
    result.independentResolveNone = create_structure_copy(obj.independentResolveNone, pAllocationCallbacks);
    result.independentResolve = create_structure_copy(obj.independentResolve, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDescriptorIndexingFeatures create_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDescriptorIndexingFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderInputAttachmentArrayDynamicIndexing = create_structure_copy(obj.shaderInputAttachmentArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderUniformTexelBufferArrayDynamicIndexing = create_structure_copy(obj.shaderUniformTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderStorageTexelBufferArrayDynamicIndexing = create_structure_copy(obj.shaderStorageTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderUniformBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderSampledImageArrayNonUniformIndexing = create_structure_copy(obj.shaderSampledImageArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderStorageBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderStorageImageArrayNonUniformIndexing = create_structure_copy(obj.shaderStorageImageArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderInputAttachmentArrayNonUniformIndexing = create_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderUniformTexelBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderUniformTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderStorageTexelBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderStorageTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.descriptorBindingUniformBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingUniformBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingSampledImageUpdateAfterBind = create_structure_copy(obj.descriptorBindingSampledImageUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingStorageImageUpdateAfterBind = create_structure_copy(obj.descriptorBindingStorageImageUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingStorageBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingStorageBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingUniformTexelBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingStorageTexelBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingUpdateUnusedWhilePending = create_structure_copy(obj.descriptorBindingUpdateUnusedWhilePending, pAllocationCallbacks);
    result.descriptorBindingPartiallyBound = create_structure_copy(obj.descriptorBindingPartiallyBound, pAllocationCallbacks);
    result.descriptorBindingVariableDescriptorCount = create_structure_copy(obj.descriptorBindingVariableDescriptorCount, pAllocationCallbacks);
    result.runtimeDescriptorArray = create_structure_copy(obj.runtimeDescriptorArray, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDescriptorIndexingProperties create_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDescriptorIndexingProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxUpdateAfterBindDescriptorsInAllPools = create_structure_copy(obj.maxUpdateAfterBindDescriptorsInAllPools, pAllocationCallbacks);
    result.shaderUniformBufferArrayNonUniformIndexingNative = create_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderSampledImageArrayNonUniformIndexingNative = create_structure_copy(obj.shaderSampledImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderStorageBufferArrayNonUniformIndexingNative = create_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderStorageImageArrayNonUniformIndexingNative = create_structure_copy(obj.shaderStorageImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderInputAttachmentArrayNonUniformIndexingNative = create_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.robustBufferAccessUpdateAfterBind = create_structure_copy(obj.robustBufferAccessUpdateAfterBind, pAllocationCallbacks);
    result.quadDivergentImplicitLod = create_structure_copy(obj.quadDivergentImplicitLod, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindSamplers = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSamplers, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindUniformBuffers = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindStorageBuffers = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindSampledImages = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindStorageImages = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindInputAttachments = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, pAllocationCallbacks);
    result.maxPerStageUpdateAfterBindResources = create_structure_copy(obj.maxPerStageUpdateAfterBindResources, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindSamplers = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindSamplers, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindUniformBuffers = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindStorageBuffers = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindSampledImages = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindSampledImages, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindStorageImages = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageImages, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindInputAttachments = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindInputAttachments, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV create_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.deviceGeneratedCommands = create_structure_copy(obj.deviceGeneratedCommands, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV create_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxGraphicsShaderGroupCount = create_structure_copy(obj.maxGraphicsShaderGroupCount, pAllocationCallbacks);
    result.maxIndirectSequenceCount = create_structure_copy(obj.maxIndirectSequenceCount, pAllocationCallbacks);
    result.maxIndirectCommandsTokenCount = create_structure_copy(obj.maxIndirectCommandsTokenCount, pAllocationCallbacks);
    result.maxIndirectCommandsStreamCount = create_structure_copy(obj.maxIndirectCommandsStreamCount, pAllocationCallbacks);
    result.maxIndirectCommandsTokenOffset = create_structure_copy(obj.maxIndirectCommandsTokenOffset, pAllocationCallbacks);
    result.maxIndirectCommandsStreamStride = create_structure_copy(obj.maxIndirectCommandsStreamStride, pAllocationCallbacks);
    result.minSequencesCountBufferOffsetAlignment = create_structure_copy(obj.minSequencesCountBufferOffsetAlignment, pAllocationCallbacks);
    result.minSequencesIndexBufferOffsetAlignment = create_structure_copy(obj.minSequencesIndexBufferOffsetAlignment, pAllocationCallbacks);
    result.minIndirectCommandsBufferOffsetAlignment = create_structure_copy(obj.minIndirectCommandsBufferOffsetAlignment, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDiagnosticsConfigFeaturesNV create_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDiagnosticsConfigFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.diagnosticsConfig = create_structure_copy(obj.diagnosticsConfig, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDiscardRectanglePropertiesEXT create_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDiscardRectanglePropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxDiscardRectangles = create_structure_copy(obj.maxDiscardRectangles, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceDriverProperties create_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDriverProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.driverID = create_structure_copy(obj.driverID, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DRIVER_NAME_SIZE>(result.driverName, obj.driverName);
    create_static_string_copy<VK_MAX_DRIVER_INFO_SIZE>(result.driverInfo, obj.driverInfo);
    result.conformanceVersion = create_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExclusiveScissorFeaturesNV create_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExclusiveScissorFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.exclusiveScissor = create_structure_copy(obj.exclusiveScissor, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExternalBufferInfo create_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalBufferInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExternalFenceInfo create_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalFenceInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExternalImageFormatInfo create_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalImageFormatInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExternalMemoryHostPropertiesEXT create_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.minImportedHostPointerAlignment = create_structure_copy(obj.minImportedHostPointerAlignment, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceExternalSemaphoreInfo create_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalSemaphoreInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFeatures create_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFeatures result { };
    result.robustBufferAccess = create_structure_copy(obj.robustBufferAccess, pAllocationCallbacks);
    result.fullDrawIndexUint32 = create_structure_copy(obj.fullDrawIndexUint32, pAllocationCallbacks);
    result.imageCubeArray = create_structure_copy(obj.imageCubeArray, pAllocationCallbacks);
    result.independentBlend = create_structure_copy(obj.independentBlend, pAllocationCallbacks);
    result.geometryShader = create_structure_copy(obj.geometryShader, pAllocationCallbacks);
    result.tessellationShader = create_structure_copy(obj.tessellationShader, pAllocationCallbacks);
    result.sampleRateShading = create_structure_copy(obj.sampleRateShading, pAllocationCallbacks);
    result.dualSrcBlend = create_structure_copy(obj.dualSrcBlend, pAllocationCallbacks);
    result.logicOp = create_structure_copy(obj.logicOp, pAllocationCallbacks);
    result.multiDrawIndirect = create_structure_copy(obj.multiDrawIndirect, pAllocationCallbacks);
    result.drawIndirectFirstInstance = create_structure_copy(obj.drawIndirectFirstInstance, pAllocationCallbacks);
    result.depthClamp = create_structure_copy(obj.depthClamp, pAllocationCallbacks);
    result.depthBiasClamp = create_structure_copy(obj.depthBiasClamp, pAllocationCallbacks);
    result.fillModeNonSolid = create_structure_copy(obj.fillModeNonSolid, pAllocationCallbacks);
    result.depthBounds = create_structure_copy(obj.depthBounds, pAllocationCallbacks);
    result.wideLines = create_structure_copy(obj.wideLines, pAllocationCallbacks);
    result.largePoints = create_structure_copy(obj.largePoints, pAllocationCallbacks);
    result.alphaToOne = create_structure_copy(obj.alphaToOne, pAllocationCallbacks);
    result.multiViewport = create_structure_copy(obj.multiViewport, pAllocationCallbacks);
    result.samplerAnisotropy = create_structure_copy(obj.samplerAnisotropy, pAllocationCallbacks);
    result.textureCompressionETC2 = create_structure_copy(obj.textureCompressionETC2, pAllocationCallbacks);
    result.textureCompressionASTC_LDR = create_structure_copy(obj.textureCompressionASTC_LDR, pAllocationCallbacks);
    result.textureCompressionBC = create_structure_copy(obj.textureCompressionBC, pAllocationCallbacks);
    result.occlusionQueryPrecise = create_structure_copy(obj.occlusionQueryPrecise, pAllocationCallbacks);
    result.pipelineStatisticsQuery = create_structure_copy(obj.pipelineStatisticsQuery, pAllocationCallbacks);
    result.vertexPipelineStoresAndAtomics = create_structure_copy(obj.vertexPipelineStoresAndAtomics, pAllocationCallbacks);
    result.fragmentStoresAndAtomics = create_structure_copy(obj.fragmentStoresAndAtomics, pAllocationCallbacks);
    result.shaderTessellationAndGeometryPointSize = create_structure_copy(obj.shaderTessellationAndGeometryPointSize, pAllocationCallbacks);
    result.shaderImageGatherExtended = create_structure_copy(obj.shaderImageGatherExtended, pAllocationCallbacks);
    result.shaderStorageImageExtendedFormats = create_structure_copy(obj.shaderStorageImageExtendedFormats, pAllocationCallbacks);
    result.shaderStorageImageMultisample = create_structure_copy(obj.shaderStorageImageMultisample, pAllocationCallbacks);
    result.shaderStorageImageReadWithoutFormat = create_structure_copy(obj.shaderStorageImageReadWithoutFormat, pAllocationCallbacks);
    result.shaderStorageImageWriteWithoutFormat = create_structure_copy(obj.shaderStorageImageWriteWithoutFormat, pAllocationCallbacks);
    result.shaderUniformBufferArrayDynamicIndexing = create_structure_copy(obj.shaderUniformBufferArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderSampledImageArrayDynamicIndexing = create_structure_copy(obj.shaderSampledImageArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderStorageBufferArrayDynamicIndexing = create_structure_copy(obj.shaderStorageBufferArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderStorageImageArrayDynamicIndexing = create_structure_copy(obj.shaderStorageImageArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderClipDistance = create_structure_copy(obj.shaderClipDistance, pAllocationCallbacks);
    result.shaderCullDistance = create_structure_copy(obj.shaderCullDistance, pAllocationCallbacks);
    result.shaderFloat64 = create_structure_copy(obj.shaderFloat64, pAllocationCallbacks);
    result.shaderInt64 = create_structure_copy(obj.shaderInt64, pAllocationCallbacks);
    result.shaderInt16 = create_structure_copy(obj.shaderInt16, pAllocationCallbacks);
    result.shaderResourceResidency = create_structure_copy(obj.shaderResourceResidency, pAllocationCallbacks);
    result.shaderResourceMinLod = create_structure_copy(obj.shaderResourceMinLod, pAllocationCallbacks);
    result.sparseBinding = create_structure_copy(obj.sparseBinding, pAllocationCallbacks);
    result.sparseResidencyBuffer = create_structure_copy(obj.sparseResidencyBuffer, pAllocationCallbacks);
    result.sparseResidencyImage2D = create_structure_copy(obj.sparseResidencyImage2D, pAllocationCallbacks);
    result.sparseResidencyImage3D = create_structure_copy(obj.sparseResidencyImage3D, pAllocationCallbacks);
    result.sparseResidency2Samples = create_structure_copy(obj.sparseResidency2Samples, pAllocationCallbacks);
    result.sparseResidency4Samples = create_structure_copy(obj.sparseResidency4Samples, pAllocationCallbacks);
    result.sparseResidency8Samples = create_structure_copy(obj.sparseResidency8Samples, pAllocationCallbacks);
    result.sparseResidency16Samples = create_structure_copy(obj.sparseResidency16Samples, pAllocationCallbacks);
    result.sparseResidencyAliased = create_structure_copy(obj.sparseResidencyAliased, pAllocationCallbacks);
    result.variableMultisampleRate = create_structure_copy(obj.variableMultisampleRate, pAllocationCallbacks);
    result.inheritedQueries = create_structure_copy(obj.inheritedQueries, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFeatures2 create_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFeatures2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.features = create_structure_copy(obj.features, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFloatControlsProperties create_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFloatControlsProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.denormBehaviorIndependence = create_structure_copy(obj.denormBehaviorIndependence, pAllocationCallbacks);
    result.roundingModeIndependence = create_structure_copy(obj.roundingModeIndependence, pAllocationCallbacks);
    result.shaderSignedZeroInfNanPreserveFloat16 = create_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat16, pAllocationCallbacks);
    result.shaderSignedZeroInfNanPreserveFloat32 = create_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat32, pAllocationCallbacks);
    result.shaderSignedZeroInfNanPreserveFloat64 = create_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat64, pAllocationCallbacks);
    result.shaderDenormPreserveFloat16 = create_structure_copy(obj.shaderDenormPreserveFloat16, pAllocationCallbacks);
    result.shaderDenormPreserveFloat32 = create_structure_copy(obj.shaderDenormPreserveFloat32, pAllocationCallbacks);
    result.shaderDenormPreserveFloat64 = create_structure_copy(obj.shaderDenormPreserveFloat64, pAllocationCallbacks);
    result.shaderDenormFlushToZeroFloat16 = create_structure_copy(obj.shaderDenormFlushToZeroFloat16, pAllocationCallbacks);
    result.shaderDenormFlushToZeroFloat32 = create_structure_copy(obj.shaderDenormFlushToZeroFloat32, pAllocationCallbacks);
    result.shaderDenormFlushToZeroFloat64 = create_structure_copy(obj.shaderDenormFlushToZeroFloat64, pAllocationCallbacks);
    result.shaderRoundingModeRTEFloat16 = create_structure_copy(obj.shaderRoundingModeRTEFloat16, pAllocationCallbacks);
    result.shaderRoundingModeRTEFloat32 = create_structure_copy(obj.shaderRoundingModeRTEFloat32, pAllocationCallbacks);
    result.shaderRoundingModeRTEFloat64 = create_structure_copy(obj.shaderRoundingModeRTEFloat64, pAllocationCallbacks);
    result.shaderRoundingModeRTZFloat16 = create_structure_copy(obj.shaderRoundingModeRTZFloat16, pAllocationCallbacks);
    result.shaderRoundingModeRTZFloat32 = create_structure_copy(obj.shaderRoundingModeRTZFloat32, pAllocationCallbacks);
    result.shaderRoundingModeRTZFloat64 = create_structure_copy(obj.shaderRoundingModeRTZFloat64, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapFeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMapFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fragmentDensityMap = create_structure_copy(obj.fragmentDensityMap, pAllocationCallbacks);
    result.fragmentDensityMapDynamic = create_structure_copy(obj.fragmentDensityMapDynamic, pAllocationCallbacks);
    result.fragmentDensityMapNonSubsampledImages = create_structure_copy(obj.fragmentDensityMapNonSubsampledImages, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapPropertiesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.minFragmentDensityTexelSize = create_structure_copy(obj.minFragmentDensityTexelSize, pAllocationCallbacks);
    result.maxFragmentDensityTexelSize = create_structure_copy(obj.maxFragmentDensityTexelSize, pAllocationCallbacks);
    result.fragmentDensityInvocations = create_structure_copy(obj.fragmentDensityInvocations, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV create_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fragmentShaderBarycentric = create_structure_copy(obj.fragmentShaderBarycentric, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fragmentShaderSampleInterlock = create_structure_copy(obj.fragmentShaderSampleInterlock, pAllocationCallbacks);
    result.fragmentShaderPixelInterlock = create_structure_copy(obj.fragmentShaderPixelInterlock, pAllocationCallbacks);
    result.fragmentShaderShadingRateInterlock = create_structure_copy(obj.fragmentShaderShadingRateInterlock, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceGroupProperties create_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceGroupProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.physicalDeviceCount = create_structure_copy(obj.physicalDeviceCount, pAllocationCallbacks);
    create_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(result.physicalDevices, obj.physicalDevices);
    result.subsetAllocation = create_structure_copy(obj.subsetAllocation, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceHostQueryResetFeatures create_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceHostQueryResetFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.hostQueryReset = create_structure_copy(obj.hostQueryReset, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceIDProperties create_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceIDProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    create_static_array_copy<VK_UUID_SIZE>(result.deviceUUID, obj.deviceUUID);
    create_static_array_copy<VK_UUID_SIZE>(result.driverUUID, obj.driverUUID);
    create_static_array_copy<VK_LUID_SIZE>(result.deviceLUID, obj.deviceLUID);
    result.deviceNodeMask = create_structure_copy(obj.deviceNodeMask, pAllocationCallbacks);
    result.deviceLUIDValid = create_structure_copy(obj.deviceLUIDValid, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImageDrmFormatModifierInfoEXT create_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.drmFormatModifier = create_structure_copy(obj.drmFormatModifier, pAllocationCallbacks);
    result.sharingMode = create_structure_copy(obj.sharingMode, pAllocationCallbacks);
    result.queueFamilyIndexCount = create_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImageFormatInfo2 create_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageFormatInfo2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.tiling = create_structure_copy(obj.tiling, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImageViewImageFormatInfoEXT create_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageViewImageFormatInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.imageViewType = create_structure_copy(obj.imageViewType, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImagelessFramebufferFeatures create_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImagelessFramebufferFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.imagelessFramebuffer = create_structure_copy(obj.imagelessFramebuffer, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceIndexTypeUint8FeaturesEXT create_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceIndexTypeUint8FeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.indexTypeUint8 = create_structure_copy(obj.indexTypeUint8, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockFeaturesEXT create_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceInlineUniformBlockFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.inlineUniformBlock = create_structure_copy(obj.inlineUniformBlock, pAllocationCallbacks);
    result.descriptorBindingInlineUniformBlockUpdateAfterBind = create_structure_copy(obj.descriptorBindingInlineUniformBlockUpdateAfterBind, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockPropertiesEXT create_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceInlineUniformBlockPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxInlineUniformBlockSize = create_structure_copy(obj.maxInlineUniformBlockSize, pAllocationCallbacks);
    result.maxPerStageDescriptorInlineUniformBlocks = create_structure_copy(obj.maxPerStageDescriptorInlineUniformBlocks, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks, pAllocationCallbacks);
    result.maxDescriptorSetInlineUniformBlocks = create_structure_copy(obj.maxDescriptorSetInlineUniformBlocks, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindInlineUniformBlocks = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceLimits create_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLimits result { };
    result.maxImageDimension1D = create_structure_copy(obj.maxImageDimension1D, pAllocationCallbacks);
    result.maxImageDimension2D = create_structure_copy(obj.maxImageDimension2D, pAllocationCallbacks);
    result.maxImageDimension3D = create_structure_copy(obj.maxImageDimension3D, pAllocationCallbacks);
    result.maxImageDimensionCube = create_structure_copy(obj.maxImageDimensionCube, pAllocationCallbacks);
    result.maxImageArrayLayers = create_structure_copy(obj.maxImageArrayLayers, pAllocationCallbacks);
    result.maxTexelBufferElements = create_structure_copy(obj.maxTexelBufferElements, pAllocationCallbacks);
    result.maxUniformBufferRange = create_structure_copy(obj.maxUniformBufferRange, pAllocationCallbacks);
    result.maxStorageBufferRange = create_structure_copy(obj.maxStorageBufferRange, pAllocationCallbacks);
    result.maxPushConstantsSize = create_structure_copy(obj.maxPushConstantsSize, pAllocationCallbacks);
    result.maxMemoryAllocationCount = create_structure_copy(obj.maxMemoryAllocationCount, pAllocationCallbacks);
    result.maxSamplerAllocationCount = create_structure_copy(obj.maxSamplerAllocationCount, pAllocationCallbacks);
    result.bufferImageGranularity = create_structure_copy(obj.bufferImageGranularity, pAllocationCallbacks);
    result.sparseAddressSpaceSize = create_structure_copy(obj.sparseAddressSpaceSize, pAllocationCallbacks);
    result.maxBoundDescriptorSets = create_structure_copy(obj.maxBoundDescriptorSets, pAllocationCallbacks);
    result.maxPerStageDescriptorSamplers = create_structure_copy(obj.maxPerStageDescriptorSamplers, pAllocationCallbacks);
    result.maxPerStageDescriptorUniformBuffers = create_structure_copy(obj.maxPerStageDescriptorUniformBuffers, pAllocationCallbacks);
    result.maxPerStageDescriptorStorageBuffers = create_structure_copy(obj.maxPerStageDescriptorStorageBuffers, pAllocationCallbacks);
    result.maxPerStageDescriptorSampledImages = create_structure_copy(obj.maxPerStageDescriptorSampledImages, pAllocationCallbacks);
    result.maxPerStageDescriptorStorageImages = create_structure_copy(obj.maxPerStageDescriptorStorageImages, pAllocationCallbacks);
    result.maxPerStageDescriptorInputAttachments = create_structure_copy(obj.maxPerStageDescriptorInputAttachments, pAllocationCallbacks);
    result.maxPerStageResources = create_structure_copy(obj.maxPerStageResources, pAllocationCallbacks);
    result.maxDescriptorSetSamplers = create_structure_copy(obj.maxDescriptorSetSamplers, pAllocationCallbacks);
    result.maxDescriptorSetUniformBuffers = create_structure_copy(obj.maxDescriptorSetUniformBuffers, pAllocationCallbacks);
    result.maxDescriptorSetUniformBuffersDynamic = create_structure_copy(obj.maxDescriptorSetUniformBuffersDynamic, pAllocationCallbacks);
    result.maxDescriptorSetStorageBuffers = create_structure_copy(obj.maxDescriptorSetStorageBuffers, pAllocationCallbacks);
    result.maxDescriptorSetStorageBuffersDynamic = create_structure_copy(obj.maxDescriptorSetStorageBuffersDynamic, pAllocationCallbacks);
    result.maxDescriptorSetSampledImages = create_structure_copy(obj.maxDescriptorSetSampledImages, pAllocationCallbacks);
    result.maxDescriptorSetStorageImages = create_structure_copy(obj.maxDescriptorSetStorageImages, pAllocationCallbacks);
    result.maxDescriptorSetInputAttachments = create_structure_copy(obj.maxDescriptorSetInputAttachments, pAllocationCallbacks);
    result.maxVertexInputAttributes = create_structure_copy(obj.maxVertexInputAttributes, pAllocationCallbacks);
    result.maxVertexInputBindings = create_structure_copy(obj.maxVertexInputBindings, pAllocationCallbacks);
    result.maxVertexInputAttributeOffset = create_structure_copy(obj.maxVertexInputAttributeOffset, pAllocationCallbacks);
    result.maxVertexInputBindingStride = create_structure_copy(obj.maxVertexInputBindingStride, pAllocationCallbacks);
    result.maxVertexOutputComponents = create_structure_copy(obj.maxVertexOutputComponents, pAllocationCallbacks);
    result.maxTessellationGenerationLevel = create_structure_copy(obj.maxTessellationGenerationLevel, pAllocationCallbacks);
    result.maxTessellationPatchSize = create_structure_copy(obj.maxTessellationPatchSize, pAllocationCallbacks);
    result.maxTessellationControlPerVertexInputComponents = create_structure_copy(obj.maxTessellationControlPerVertexInputComponents, pAllocationCallbacks);
    result.maxTessellationControlPerVertexOutputComponents = create_structure_copy(obj.maxTessellationControlPerVertexOutputComponents, pAllocationCallbacks);
    result.maxTessellationControlPerPatchOutputComponents = create_structure_copy(obj.maxTessellationControlPerPatchOutputComponents, pAllocationCallbacks);
    result.maxTessellationControlTotalOutputComponents = create_structure_copy(obj.maxTessellationControlTotalOutputComponents, pAllocationCallbacks);
    result.maxTessellationEvaluationInputComponents = create_structure_copy(obj.maxTessellationEvaluationInputComponents, pAllocationCallbacks);
    result.maxTessellationEvaluationOutputComponents = create_structure_copy(obj.maxTessellationEvaluationOutputComponents, pAllocationCallbacks);
    result.maxGeometryShaderInvocations = create_structure_copy(obj.maxGeometryShaderInvocations, pAllocationCallbacks);
    result.maxGeometryInputComponents = create_structure_copy(obj.maxGeometryInputComponents, pAllocationCallbacks);
    result.maxGeometryOutputComponents = create_structure_copy(obj.maxGeometryOutputComponents, pAllocationCallbacks);
    result.maxGeometryOutputVertices = create_structure_copy(obj.maxGeometryOutputVertices, pAllocationCallbacks);
    result.maxGeometryTotalOutputComponents = create_structure_copy(obj.maxGeometryTotalOutputComponents, pAllocationCallbacks);
    result.maxFragmentInputComponents = create_structure_copy(obj.maxFragmentInputComponents, pAllocationCallbacks);
    result.maxFragmentOutputAttachments = create_structure_copy(obj.maxFragmentOutputAttachments, pAllocationCallbacks);
    result.maxFragmentDualSrcAttachments = create_structure_copy(obj.maxFragmentDualSrcAttachments, pAllocationCallbacks);
    result.maxFragmentCombinedOutputResources = create_structure_copy(obj.maxFragmentCombinedOutputResources, pAllocationCallbacks);
    result.maxComputeSharedMemorySize = create_structure_copy(obj.maxComputeSharedMemorySize, pAllocationCallbacks);
    create_static_array_copy<3>(result.maxComputeWorkGroupCount, obj.maxComputeWorkGroupCount);
    result.maxComputeWorkGroupInvocations = create_structure_copy(obj.maxComputeWorkGroupInvocations, pAllocationCallbacks);
    create_static_array_copy<3>(result.maxComputeWorkGroupSize, obj.maxComputeWorkGroupSize);
    result.subPixelPrecisionBits = create_structure_copy(obj.subPixelPrecisionBits, pAllocationCallbacks);
    result.subTexelPrecisionBits = create_structure_copy(obj.subTexelPrecisionBits, pAllocationCallbacks);
    result.mipmapPrecisionBits = create_structure_copy(obj.mipmapPrecisionBits, pAllocationCallbacks);
    result.maxDrawIndexedIndexValue = create_structure_copy(obj.maxDrawIndexedIndexValue, pAllocationCallbacks);
    result.maxDrawIndirectCount = create_structure_copy(obj.maxDrawIndirectCount, pAllocationCallbacks);
    result.maxSamplerLodBias = create_structure_copy(obj.maxSamplerLodBias, pAllocationCallbacks);
    result.maxSamplerAnisotropy = create_structure_copy(obj.maxSamplerAnisotropy, pAllocationCallbacks);
    result.maxViewports = create_structure_copy(obj.maxViewports, pAllocationCallbacks);
    create_static_array_copy<2>(result.maxViewportDimensions, obj.maxViewportDimensions);
    create_static_array_copy<2>(result.viewportBoundsRange, obj.viewportBoundsRange);
    result.viewportSubPixelBits = create_structure_copy(obj.viewportSubPixelBits, pAllocationCallbacks);
    result.minMemoryMapAlignment = create_structure_copy(obj.minMemoryMapAlignment, pAllocationCallbacks);
    result.minTexelBufferOffsetAlignment = create_structure_copy(obj.minTexelBufferOffsetAlignment, pAllocationCallbacks);
    result.minUniformBufferOffsetAlignment = create_structure_copy(obj.minUniformBufferOffsetAlignment, pAllocationCallbacks);
    result.minStorageBufferOffsetAlignment = create_structure_copy(obj.minStorageBufferOffsetAlignment, pAllocationCallbacks);
    result.minTexelOffset = create_structure_copy(obj.minTexelOffset, pAllocationCallbacks);
    result.maxTexelOffset = create_structure_copy(obj.maxTexelOffset, pAllocationCallbacks);
    result.minTexelGatherOffset = create_structure_copy(obj.minTexelGatherOffset, pAllocationCallbacks);
    result.maxTexelGatherOffset = create_structure_copy(obj.maxTexelGatherOffset, pAllocationCallbacks);
    result.minInterpolationOffset = create_structure_copy(obj.minInterpolationOffset, pAllocationCallbacks);
    result.maxInterpolationOffset = create_structure_copy(obj.maxInterpolationOffset, pAllocationCallbacks);
    result.subPixelInterpolationOffsetBits = create_structure_copy(obj.subPixelInterpolationOffsetBits, pAllocationCallbacks);
    result.maxFramebufferWidth = create_structure_copy(obj.maxFramebufferWidth, pAllocationCallbacks);
    result.maxFramebufferHeight = create_structure_copy(obj.maxFramebufferHeight, pAllocationCallbacks);
    result.maxFramebufferLayers = create_structure_copy(obj.maxFramebufferLayers, pAllocationCallbacks);
    result.framebufferColorSampleCounts = create_structure_copy(obj.framebufferColorSampleCounts, pAllocationCallbacks);
    result.framebufferDepthSampleCounts = create_structure_copy(obj.framebufferDepthSampleCounts, pAllocationCallbacks);
    result.framebufferStencilSampleCounts = create_structure_copy(obj.framebufferStencilSampleCounts, pAllocationCallbacks);
    result.framebufferNoAttachmentsSampleCounts = create_structure_copy(obj.framebufferNoAttachmentsSampleCounts, pAllocationCallbacks);
    result.maxColorAttachments = create_structure_copy(obj.maxColorAttachments, pAllocationCallbacks);
    result.sampledImageColorSampleCounts = create_structure_copy(obj.sampledImageColorSampleCounts, pAllocationCallbacks);
    result.sampledImageIntegerSampleCounts = create_structure_copy(obj.sampledImageIntegerSampleCounts, pAllocationCallbacks);
    result.sampledImageDepthSampleCounts = create_structure_copy(obj.sampledImageDepthSampleCounts, pAllocationCallbacks);
    result.sampledImageStencilSampleCounts = create_structure_copy(obj.sampledImageStencilSampleCounts, pAllocationCallbacks);
    result.storageImageSampleCounts = create_structure_copy(obj.storageImageSampleCounts, pAllocationCallbacks);
    result.maxSampleMaskWords = create_structure_copy(obj.maxSampleMaskWords, pAllocationCallbacks);
    result.timestampComputeAndGraphics = create_structure_copy(obj.timestampComputeAndGraphics, pAllocationCallbacks);
    result.timestampPeriod = create_structure_copy(obj.timestampPeriod, pAllocationCallbacks);
    result.maxClipDistances = create_structure_copy(obj.maxClipDistances, pAllocationCallbacks);
    result.maxCullDistances = create_structure_copy(obj.maxCullDistances, pAllocationCallbacks);
    result.maxCombinedClipAndCullDistances = create_structure_copy(obj.maxCombinedClipAndCullDistances, pAllocationCallbacks);
    result.discreteQueuePriorities = create_structure_copy(obj.discreteQueuePriorities, pAllocationCallbacks);
    create_static_array_copy<2>(result.pointSizeRange, obj.pointSizeRange);
    create_static_array_copy<2>(result.lineWidthRange, obj.lineWidthRange);
    result.pointSizeGranularity = create_structure_copy(obj.pointSizeGranularity, pAllocationCallbacks);
    result.lineWidthGranularity = create_structure_copy(obj.lineWidthGranularity, pAllocationCallbacks);
    result.strictLines = create_structure_copy(obj.strictLines, pAllocationCallbacks);
    result.standardSampleLocations = create_structure_copy(obj.standardSampleLocations, pAllocationCallbacks);
    result.optimalBufferCopyOffsetAlignment = create_structure_copy(obj.optimalBufferCopyOffsetAlignment, pAllocationCallbacks);
    result.optimalBufferCopyRowPitchAlignment = create_structure_copy(obj.optimalBufferCopyRowPitchAlignment, pAllocationCallbacks);
    result.nonCoherentAtomSize = create_structure_copy(obj.nonCoherentAtomSize, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationFeaturesEXT create_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLineRasterizationFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.rectangularLines = create_structure_copy(obj.rectangularLines, pAllocationCallbacks);
    result.bresenhamLines = create_structure_copy(obj.bresenhamLines, pAllocationCallbacks);
    result.smoothLines = create_structure_copy(obj.smoothLines, pAllocationCallbacks);
    result.stippledRectangularLines = create_structure_copy(obj.stippledRectangularLines, pAllocationCallbacks);
    result.stippledBresenhamLines = create_structure_copy(obj.stippledBresenhamLines, pAllocationCallbacks);
    result.stippledSmoothLines = create_structure_copy(obj.stippledSmoothLines, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationPropertiesEXT create_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLineRasterizationPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.lineSubPixelPrecisionBits = create_structure_copy(obj.lineSubPixelPrecisionBits, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMaintenance3Properties create_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMaintenance3Properties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxPerSetDescriptors = create_structure_copy(obj.maxPerSetDescriptors, pAllocationCallbacks);
    result.maxMemoryAllocationSize = create_structure_copy(obj.maxMemoryAllocationSize, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMemoryBudgetPropertiesEXT create_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryBudgetPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.heapBudget, obj.heapBudget);
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.heapUsage, obj.heapUsage);
    return result;
}

template <>
VkPhysicalDeviceMemoryPriorityFeaturesEXT create_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryPriorityFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memoryPriority = create_structure_copy(obj.memoryPriority, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties create_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryProperties result { };
    result.memoryTypeCount = create_structure_copy(obj.memoryTypeCount, pAllocationCallbacks);
    create_static_array_copy<VK_MAX_MEMORY_TYPES>(result.memoryTypes, obj.memoryTypes);
    result.memoryHeapCount = create_structure_copy(obj.memoryHeapCount, pAllocationCallbacks);
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.memoryHeaps, obj.memoryHeaps);
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties2 create_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryProperties2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memoryProperties = create_structure_copy(obj.memoryProperties, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMeshShaderFeaturesNV create_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMeshShaderFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.taskShader = create_structure_copy(obj.taskShader, pAllocationCallbacks);
    result.meshShader = create_structure_copy(obj.meshShader, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMeshShaderPropertiesNV create_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMeshShaderPropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxDrawMeshTasksCount = create_structure_copy(obj.maxDrawMeshTasksCount, pAllocationCallbacks);
    result.maxTaskWorkGroupInvocations = create_structure_copy(obj.maxTaskWorkGroupInvocations, pAllocationCallbacks);
    create_static_array_copy<3>(result.maxTaskWorkGroupSize, obj.maxTaskWorkGroupSize);
    result.maxTaskTotalMemorySize = create_structure_copy(obj.maxTaskTotalMemorySize, pAllocationCallbacks);
    result.maxTaskOutputCount = create_structure_copy(obj.maxTaskOutputCount, pAllocationCallbacks);
    result.maxMeshWorkGroupInvocations = create_structure_copy(obj.maxMeshWorkGroupInvocations, pAllocationCallbacks);
    create_static_array_copy<3>(result.maxMeshWorkGroupSize, obj.maxMeshWorkGroupSize);
    result.maxMeshTotalMemorySize = create_structure_copy(obj.maxMeshTotalMemorySize, pAllocationCallbacks);
    result.maxMeshOutputVertices = create_structure_copy(obj.maxMeshOutputVertices, pAllocationCallbacks);
    result.maxMeshOutputPrimitives = create_structure_copy(obj.maxMeshOutputPrimitives, pAllocationCallbacks);
    result.maxMeshMultiviewViewCount = create_structure_copy(obj.maxMeshMultiviewViewCount, pAllocationCallbacks);
    result.meshOutputPerVertexGranularity = create_structure_copy(obj.meshOutputPerVertexGranularity, pAllocationCallbacks);
    result.meshOutputPerPrimitiveGranularity = create_structure_copy(obj.meshOutputPerPrimitiveGranularity, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMultiviewFeatures create_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.multiview = create_structure_copy(obj.multiview, pAllocationCallbacks);
    result.multiviewGeometryShader = create_structure_copy(obj.multiviewGeometryShader, pAllocationCallbacks);
    result.multiviewTessellationShader = create_structure_copy(obj.multiviewTessellationShader, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX create_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.perViewPositionAllComponents = create_structure_copy(obj.perViewPositionAllComponents, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMultiviewProperties create_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxMultiviewViewCount = create_structure_copy(obj.maxMultiviewViewCount, pAllocationCallbacks);
    result.maxMultiviewInstanceIndex = create_structure_copy(obj.maxMultiviewInstanceIndex, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePCIBusInfoPropertiesEXT create_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePCIBusInfoPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pciDomain = create_structure_copy(obj.pciDomain, pAllocationCallbacks);
    result.pciBus = create_structure_copy(obj.pciBus, pAllocationCallbacks);
    result.pciDevice = create_structure_copy(obj.pciDevice, pAllocationCallbacks);
    result.pciFunction = create_structure_copy(obj.pciFunction, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryFeaturesKHR create_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePerformanceQueryFeaturesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.performanceCounterQueryPools = create_structure_copy(obj.performanceCounterQueryPools, pAllocationCallbacks);
    result.performanceCounterMultipleQueryPools = create_structure_copy(obj.performanceCounterMultipleQueryPools, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryPropertiesKHR create_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePerformanceQueryPropertiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.allowCommandBufferQueryCopies = create_structure_copy(obj.allowCommandBufferQueryCopies, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT create_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pipelineCreationCacheControl = create_structure_copy(obj.pipelineCreationCacheControl, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR create_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pipelineExecutableInfo = create_structure_copy(obj.pipelineExecutableInfo, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePointClippingProperties create_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePointClippingProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pointClippingBehavior = create_structure_copy(obj.pointClippingBehavior, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkPhysicalDevicePresentationPropertiesANDROID create_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePresentationPropertiesANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.sharedImage = create_structure_copy(obj.sharedImage, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkPhysicalDeviceProperties create_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProperties result { };
    result.apiVersion = create_structure_copy(obj.apiVersion, pAllocationCallbacks);
    result.driverVersion = create_structure_copy(obj.driverVersion, pAllocationCallbacks);
    result.vendorID = create_structure_copy(obj.vendorID, pAllocationCallbacks);
    result.deviceID = create_structure_copy(obj.deviceID, pAllocationCallbacks);
    result.deviceType = create_structure_copy(obj.deviceType, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_PHYSICAL_DEVICE_NAME_SIZE>(result.deviceName, obj.deviceName);
    create_static_array_copy<VK_UUID_SIZE>(result.pipelineCacheUUID, obj.pipelineCacheUUID);
    result.limits = create_structure_copy(obj.limits, pAllocationCallbacks);
    result.sparseProperties = create_structure_copy(obj.sparseProperties, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceProperties2 create_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProperties2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.properties = create_structure_copy(obj.properties, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceProtectedMemoryFeatures create_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProtectedMemoryFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.protectedMemory = create_structure_copy(obj.protectedMemory, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceProtectedMemoryProperties create_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProtectedMemoryProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.protectedNoFault = create_structure_copy(obj.protectedNoFault, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevicePushDescriptorPropertiesKHR create_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePushDescriptorPropertiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxPushDescriptors = create_structure_copy(obj.maxPushDescriptors, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingFeaturesKHR create_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingFeaturesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.rayTracing = create_structure_copy(obj.rayTracing, pAllocationCallbacks);
    result.rayTracingShaderGroupHandleCaptureReplay = create_structure_copy(obj.rayTracingShaderGroupHandleCaptureReplay, pAllocationCallbacks);
    result.rayTracingShaderGroupHandleCaptureReplayMixed = create_structure_copy(obj.rayTracingShaderGroupHandleCaptureReplayMixed, pAllocationCallbacks);
    result.rayTracingAccelerationStructureCaptureReplay = create_structure_copy(obj.rayTracingAccelerationStructureCaptureReplay, pAllocationCallbacks);
    result.rayTracingIndirectTraceRays = create_structure_copy(obj.rayTracingIndirectTraceRays, pAllocationCallbacks);
    result.rayTracingIndirectAccelerationStructureBuild = create_structure_copy(obj.rayTracingIndirectAccelerationStructureBuild, pAllocationCallbacks);
    result.rayTracingHostAccelerationStructureCommands = create_structure_copy(obj.rayTracingHostAccelerationStructureCommands, pAllocationCallbacks);
    result.rayQuery = create_structure_copy(obj.rayQuery, pAllocationCallbacks);
    result.rayTracingPrimitiveCulling = create_structure_copy(obj.rayTracingPrimitiveCulling, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingPropertiesKHR create_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingPropertiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderGroupHandleSize = create_structure_copy(obj.shaderGroupHandleSize, pAllocationCallbacks);
    result.maxRecursionDepth = create_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    result.maxShaderGroupStride = create_structure_copy(obj.maxShaderGroupStride, pAllocationCallbacks);
    result.shaderGroupBaseAlignment = create_structure_copy(obj.shaderGroupBaseAlignment, pAllocationCallbacks);
    result.maxGeometryCount = create_structure_copy(obj.maxGeometryCount, pAllocationCallbacks);
    result.maxInstanceCount = create_structure_copy(obj.maxInstanceCount, pAllocationCallbacks);
    result.maxPrimitiveCount = create_structure_copy(obj.maxPrimitiveCount, pAllocationCallbacks);
    result.maxDescriptorSetAccelerationStructures = create_structure_copy(obj.maxDescriptorSetAccelerationStructures, pAllocationCallbacks);
    result.shaderGroupHandleCaptureReplaySize = create_structure_copy(obj.shaderGroupHandleCaptureReplaySize, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkPhysicalDeviceRayTracingPropertiesNV create_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingPropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderGroupHandleSize = create_structure_copy(obj.shaderGroupHandleSize, pAllocationCallbacks);
    result.maxRecursionDepth = create_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    result.maxShaderGroupStride = create_structure_copy(obj.maxShaderGroupStride, pAllocationCallbacks);
    result.shaderGroupBaseAlignment = create_structure_copy(obj.shaderGroupBaseAlignment, pAllocationCallbacks);
    result.maxGeometryCount = create_structure_copy(obj.maxGeometryCount, pAllocationCallbacks);
    result.maxInstanceCount = create_structure_copy(obj.maxInstanceCount, pAllocationCallbacks);
    result.maxTriangleCount = create_structure_copy(obj.maxTriangleCount, pAllocationCallbacks);
    result.maxDescriptorSetAccelerationStructures = create_structure_copy(obj.maxDescriptorSetAccelerationStructures, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV create_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.representativeFragmentTest = create_structure_copy(obj.representativeFragmentTest, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSampleLocationsPropertiesEXT create_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSampleLocationsPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.sampleLocationSampleCounts = create_structure_copy(obj.sampleLocationSampleCounts, pAllocationCallbacks);
    result.maxSampleLocationGridSize = create_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
    create_static_array_copy<2>(result.sampleLocationCoordinateRange, obj.sampleLocationCoordinateRange);
    result.sampleLocationSubPixelBits = create_structure_copy(obj.sampleLocationSubPixelBits, pAllocationCallbacks);
    result.variableSampleLocations = create_structure_copy(obj.variableSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSamplerFilterMinmaxProperties create_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSamplerFilterMinmaxProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.filterMinmaxSingleComponentFormats = create_structure_copy(obj.filterMinmaxSingleComponentFormats, pAllocationCallbacks);
    result.filterMinmaxImageComponentMapping = create_structure_copy(obj.filterMinmaxImageComponentMapping, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSamplerYcbcrConversionFeatures create_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSamplerYcbcrConversionFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.samplerYcbcrConversion = create_structure_copy(obj.samplerYcbcrConversion, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceScalarBlockLayoutFeatures create_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceScalarBlockLayoutFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.scalarBlockLayout = create_structure_copy(obj.scalarBlockLayout, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures create_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.separateDepthStencilLayouts = create_structure_copy(obj.separateDepthStencilLayouts, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderAtomicInt64Features create_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderAtomicInt64Features result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderBufferInt64Atomics = create_structure_copy(obj.shaderBufferInt64Atomics, pAllocationCallbacks);
    result.shaderSharedInt64Atomics = create_structure_copy(obj.shaderSharedInt64Atomics, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderClockFeaturesKHR create_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderClockFeaturesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderSubgroupClock = create_structure_copy(obj.shaderSubgroupClock, pAllocationCallbacks);
    result.shaderDeviceClock = create_structure_copy(obj.shaderDeviceClock, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderCoreProperties2AMD create_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderCoreProperties2AMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderCoreFeatures = create_structure_copy(obj.shaderCoreFeatures, pAllocationCallbacks);
    result.activeComputeUnitCount = create_structure_copy(obj.activeComputeUnitCount, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderCorePropertiesAMD create_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderCorePropertiesAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderEngineCount = create_structure_copy(obj.shaderEngineCount, pAllocationCallbacks);
    result.shaderArraysPerEngineCount = create_structure_copy(obj.shaderArraysPerEngineCount, pAllocationCallbacks);
    result.computeUnitsPerShaderArray = create_structure_copy(obj.computeUnitsPerShaderArray, pAllocationCallbacks);
    result.simdPerComputeUnit = create_structure_copy(obj.simdPerComputeUnit, pAllocationCallbacks);
    result.wavefrontsPerSimd = create_structure_copy(obj.wavefrontsPerSimd, pAllocationCallbacks);
    result.wavefrontSize = create_structure_copy(obj.wavefrontSize, pAllocationCallbacks);
    result.sgprsPerSimd = create_structure_copy(obj.sgprsPerSimd, pAllocationCallbacks);
    result.minSgprAllocation = create_structure_copy(obj.minSgprAllocation, pAllocationCallbacks);
    result.maxSgprAllocation = create_structure_copy(obj.maxSgprAllocation, pAllocationCallbacks);
    result.sgprAllocationGranularity = create_structure_copy(obj.sgprAllocationGranularity, pAllocationCallbacks);
    result.vgprsPerSimd = create_structure_copy(obj.vgprsPerSimd, pAllocationCallbacks);
    result.minVgprAllocation = create_structure_copy(obj.minVgprAllocation, pAllocationCallbacks);
    result.maxVgprAllocation = create_structure_copy(obj.maxVgprAllocation, pAllocationCallbacks);
    result.vgprAllocationGranularity = create_structure_copy(obj.vgprAllocationGranularity, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT create_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderDemoteToHelperInvocation = create_structure_copy(obj.shaderDemoteToHelperInvocation, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderDrawParametersFeatures create_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderDrawParametersFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderDrawParameters = create_structure_copy(obj.shaderDrawParameters, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderFloat16Int8Features create_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderFloat16Int8Features result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderFloat16 = create_structure_copy(obj.shaderFloat16, pAllocationCallbacks);
    result.shaderInt8 = create_structure_copy(obj.shaderInt8, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderImageFootprintFeaturesNV create_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderImageFootprintFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.imageFootprint = create_structure_copy(obj.imageFootprint, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL create_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderIntegerFunctions2 = create_structure_copy(obj.shaderIntegerFunctions2, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsFeaturesNV create_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSMBuiltinsFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderSMBuiltins = create_structure_copy(obj.shaderSMBuiltins, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsPropertiesNV create_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderSMCount = create_structure_copy(obj.shaderSMCount, pAllocationCallbacks);
    result.shaderWarpsPerSM = create_structure_copy(obj.shaderWarpsPerSM, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures create_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shaderSubgroupExtendedTypes = create_structure_copy(obj.shaderSubgroupExtendedTypes, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShadingRateImageFeaturesNV create_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShadingRateImageFeaturesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shadingRateImage = create_structure_copy(obj.shadingRateImage, pAllocationCallbacks);
    result.shadingRateCoarseSampleOrder = create_structure_copy(obj.shadingRateCoarseSampleOrder, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceShadingRateImagePropertiesNV create_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShadingRateImagePropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shadingRateTexelSize = create_structure_copy(obj.shadingRateTexelSize, pAllocationCallbacks);
    result.shadingRatePaletteSize = create_structure_copy(obj.shadingRatePaletteSize, pAllocationCallbacks);
    result.shadingRateMaxCoarseSamples = create_structure_copy(obj.shadingRateMaxCoarseSamples, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSparseImageFormatInfo2 create_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSparseImageFormatInfo2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.samples = create_structure_copy(obj.samples, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    result.tiling = create_structure_copy(obj.tiling, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSparseProperties create_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSparseProperties result { };
    result.residencyStandard2DBlockShape = create_structure_copy(obj.residencyStandard2DBlockShape, pAllocationCallbacks);
    result.residencyStandard2DMultisampleBlockShape = create_structure_copy(obj.residencyStandard2DMultisampleBlockShape, pAllocationCallbacks);
    result.residencyStandard3DBlockShape = create_structure_copy(obj.residencyStandard3DBlockShape, pAllocationCallbacks);
    result.residencyAlignedMipSize = create_structure_copy(obj.residencyAlignedMipSize, pAllocationCallbacks);
    result.residencyNonResidentStrict = create_structure_copy(obj.residencyNonResidentStrict, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSubgroupProperties create_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.subgroupSize = create_structure_copy(obj.subgroupSize, pAllocationCallbacks);
    result.supportedStages = create_structure_copy(obj.supportedStages, pAllocationCallbacks);
    result.supportedOperations = create_structure_copy(obj.supportedOperations, pAllocationCallbacks);
    result.quadOperationsInAllStages = create_structure_copy(obj.quadOperationsInAllStages, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlFeaturesEXT create_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupSizeControlFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.subgroupSizeControl = create_structure_copy(obj.subgroupSizeControl, pAllocationCallbacks);
    result.computeFullSubgroups = create_structure_copy(obj.computeFullSubgroups, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlPropertiesEXT create_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupSizeControlPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.minSubgroupSize = create_structure_copy(obj.minSubgroupSize, pAllocationCallbacks);
    result.maxSubgroupSize = create_structure_copy(obj.maxSubgroupSize, pAllocationCallbacks);
    result.maxComputeWorkgroupSubgroups = create_structure_copy(obj.maxComputeWorkgroupSubgroups, pAllocationCallbacks);
    result.requiredSubgroupSizeStages = create_structure_copy(obj.requiredSubgroupSizeStages, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceSurfaceInfo2KHR create_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSurfaceInfo2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.surface = obj.surface;
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT create_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.texelBufferAlignment = create_structure_copy(obj.texelBufferAlignment, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT create_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.storageTexelBufferOffsetAlignmentBytes = create_structure_copy(obj.storageTexelBufferOffsetAlignmentBytes, pAllocationCallbacks);
    result.storageTexelBufferOffsetSingleTexelAlignment = create_structure_copy(obj.storageTexelBufferOffsetSingleTexelAlignment, pAllocationCallbacks);
    result.uniformTexelBufferOffsetAlignmentBytes = create_structure_copy(obj.uniformTexelBufferOffsetAlignmentBytes, pAllocationCallbacks);
    result.uniformTexelBufferOffsetSingleTexelAlignment = create_structure_copy(obj.uniformTexelBufferOffsetSingleTexelAlignment, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT create_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.textureCompressionASTC_HDR = create_structure_copy(obj.textureCompressionASTC_HDR, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTimelineSemaphoreFeatures create_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTimelineSemaphoreFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.timelineSemaphore = create_structure_copy(obj.timelineSemaphore, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTimelineSemaphoreProperties create_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTimelineSemaphoreProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxTimelineSemaphoreValueDifference = create_structure_copy(obj.maxTimelineSemaphoreValueDifference, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceToolPropertiesEXT create_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceToolPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.version, obj.version);
    result.purposes = create_structure_copy(obj.purposes, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.layer, obj.layer);
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackFeaturesEXT create_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTransformFeedbackFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.transformFeedback = create_structure_copy(obj.transformFeedback, pAllocationCallbacks);
    result.geometryStreams = create_structure_copy(obj.geometryStreams, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackPropertiesEXT create_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTransformFeedbackPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxTransformFeedbackStreams = create_structure_copy(obj.maxTransformFeedbackStreams, pAllocationCallbacks);
    result.maxTransformFeedbackBuffers = create_structure_copy(obj.maxTransformFeedbackBuffers, pAllocationCallbacks);
    result.maxTransformFeedbackBufferSize = create_structure_copy(obj.maxTransformFeedbackBufferSize, pAllocationCallbacks);
    result.maxTransformFeedbackStreamDataSize = create_structure_copy(obj.maxTransformFeedbackStreamDataSize, pAllocationCallbacks);
    result.maxTransformFeedbackBufferDataSize = create_structure_copy(obj.maxTransformFeedbackBufferDataSize, pAllocationCallbacks);
    result.maxTransformFeedbackBufferDataStride = create_structure_copy(obj.maxTransformFeedbackBufferDataStride, pAllocationCallbacks);
    result.transformFeedbackQueries = create_structure_copy(obj.transformFeedbackQueries, pAllocationCallbacks);
    result.transformFeedbackStreamsLinesTriangles = create_structure_copy(obj.transformFeedbackStreamsLinesTriangles, pAllocationCallbacks);
    result.transformFeedbackRasterizationStreamSelect = create_structure_copy(obj.transformFeedbackRasterizationStreamSelect, pAllocationCallbacks);
    result.transformFeedbackDraw = create_structure_copy(obj.transformFeedbackDraw, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceUniformBufferStandardLayoutFeatures create_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.uniformBufferStandardLayout = create_structure_copy(obj.uniformBufferStandardLayout, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVariablePointersFeatures create_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVariablePointersFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.variablePointersStorageBuffer = create_structure_copy(obj.variablePointersStorageBuffer, pAllocationCallbacks);
    result.variablePointers = create_structure_copy(obj.variablePointers, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT create_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.vertexAttributeInstanceRateDivisor = create_structure_copy(obj.vertexAttributeInstanceRateDivisor, pAllocationCallbacks);
    result.vertexAttributeInstanceRateZeroDivisor = create_structure_copy(obj.vertexAttributeInstanceRateZeroDivisor, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT create_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxVertexAttribDivisor = create_structure_copy(obj.maxVertexAttribDivisor, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan11Features create_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan11Features result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.storageBuffer16BitAccess = create_structure_copy(obj.storageBuffer16BitAccess, pAllocationCallbacks);
    result.uniformAndStorageBuffer16BitAccess = create_structure_copy(obj.uniformAndStorageBuffer16BitAccess, pAllocationCallbacks);
    result.storagePushConstant16 = create_structure_copy(obj.storagePushConstant16, pAllocationCallbacks);
    result.storageInputOutput16 = create_structure_copy(obj.storageInputOutput16, pAllocationCallbacks);
    result.multiview = create_structure_copy(obj.multiview, pAllocationCallbacks);
    result.multiviewGeometryShader = create_structure_copy(obj.multiviewGeometryShader, pAllocationCallbacks);
    result.multiviewTessellationShader = create_structure_copy(obj.multiviewTessellationShader, pAllocationCallbacks);
    result.variablePointersStorageBuffer = create_structure_copy(obj.variablePointersStorageBuffer, pAllocationCallbacks);
    result.variablePointers = create_structure_copy(obj.variablePointers, pAllocationCallbacks);
    result.protectedMemory = create_structure_copy(obj.protectedMemory, pAllocationCallbacks);
    result.samplerYcbcrConversion = create_structure_copy(obj.samplerYcbcrConversion, pAllocationCallbacks);
    result.shaderDrawParameters = create_structure_copy(obj.shaderDrawParameters, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan11Properties create_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan11Properties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    create_static_array_copy<VK_UUID_SIZE>(result.deviceUUID, obj.deviceUUID);
    create_static_array_copy<VK_UUID_SIZE>(result.driverUUID, obj.driverUUID);
    create_static_array_copy<VK_LUID_SIZE>(result.deviceLUID, obj.deviceLUID);
    result.deviceNodeMask = create_structure_copy(obj.deviceNodeMask, pAllocationCallbacks);
    result.deviceLUIDValid = create_structure_copy(obj.deviceLUIDValid, pAllocationCallbacks);
    result.subgroupSize = create_structure_copy(obj.subgroupSize, pAllocationCallbacks);
    result.subgroupSupportedStages = create_structure_copy(obj.subgroupSupportedStages, pAllocationCallbacks);
    result.subgroupSupportedOperations = create_structure_copy(obj.subgroupSupportedOperations, pAllocationCallbacks);
    result.subgroupQuadOperationsInAllStages = create_structure_copy(obj.subgroupQuadOperationsInAllStages, pAllocationCallbacks);
    result.pointClippingBehavior = create_structure_copy(obj.pointClippingBehavior, pAllocationCallbacks);
    result.maxMultiviewViewCount = create_structure_copy(obj.maxMultiviewViewCount, pAllocationCallbacks);
    result.maxMultiviewInstanceIndex = create_structure_copy(obj.maxMultiviewInstanceIndex, pAllocationCallbacks);
    result.protectedNoFault = create_structure_copy(obj.protectedNoFault, pAllocationCallbacks);
    result.maxPerSetDescriptors = create_structure_copy(obj.maxPerSetDescriptors, pAllocationCallbacks);
    result.maxMemoryAllocationSize = create_structure_copy(obj.maxMemoryAllocationSize, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan12Features create_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan12Features result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.samplerMirrorClampToEdge = create_structure_copy(obj.samplerMirrorClampToEdge, pAllocationCallbacks);
    result.drawIndirectCount = create_structure_copy(obj.drawIndirectCount, pAllocationCallbacks);
    result.storageBuffer8BitAccess = create_structure_copy(obj.storageBuffer8BitAccess, pAllocationCallbacks);
    result.uniformAndStorageBuffer8BitAccess = create_structure_copy(obj.uniformAndStorageBuffer8BitAccess, pAllocationCallbacks);
    result.storagePushConstant8 = create_structure_copy(obj.storagePushConstant8, pAllocationCallbacks);
    result.shaderBufferInt64Atomics = create_structure_copy(obj.shaderBufferInt64Atomics, pAllocationCallbacks);
    result.shaderSharedInt64Atomics = create_structure_copy(obj.shaderSharedInt64Atomics, pAllocationCallbacks);
    result.shaderFloat16 = create_structure_copy(obj.shaderFloat16, pAllocationCallbacks);
    result.shaderInt8 = create_structure_copy(obj.shaderInt8, pAllocationCallbacks);
    result.descriptorIndexing = create_structure_copy(obj.descriptorIndexing, pAllocationCallbacks);
    result.shaderInputAttachmentArrayDynamicIndexing = create_structure_copy(obj.shaderInputAttachmentArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderUniformTexelBufferArrayDynamicIndexing = create_structure_copy(obj.shaderUniformTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderStorageTexelBufferArrayDynamicIndexing = create_structure_copy(obj.shaderStorageTexelBufferArrayDynamicIndexing, pAllocationCallbacks);
    result.shaderUniformBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderSampledImageArrayNonUniformIndexing = create_structure_copy(obj.shaderSampledImageArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderStorageBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderStorageImageArrayNonUniformIndexing = create_structure_copy(obj.shaderStorageImageArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderInputAttachmentArrayNonUniformIndexing = create_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderUniformTexelBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderUniformTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.shaderStorageTexelBufferArrayNonUniformIndexing = create_structure_copy(obj.shaderStorageTexelBufferArrayNonUniformIndexing, pAllocationCallbacks);
    result.descriptorBindingUniformBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingUniformBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingSampledImageUpdateAfterBind = create_structure_copy(obj.descriptorBindingSampledImageUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingStorageImageUpdateAfterBind = create_structure_copy(obj.descriptorBindingStorageImageUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingStorageBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingStorageBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingUniformTexelBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingUniformTexelBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingStorageTexelBufferUpdateAfterBind = create_structure_copy(obj.descriptorBindingStorageTexelBufferUpdateAfterBind, pAllocationCallbacks);
    result.descriptorBindingUpdateUnusedWhilePending = create_structure_copy(obj.descriptorBindingUpdateUnusedWhilePending, pAllocationCallbacks);
    result.descriptorBindingPartiallyBound = create_structure_copy(obj.descriptorBindingPartiallyBound, pAllocationCallbacks);
    result.descriptorBindingVariableDescriptorCount = create_structure_copy(obj.descriptorBindingVariableDescriptorCount, pAllocationCallbacks);
    result.runtimeDescriptorArray = create_structure_copy(obj.runtimeDescriptorArray, pAllocationCallbacks);
    result.samplerFilterMinmax = create_structure_copy(obj.samplerFilterMinmax, pAllocationCallbacks);
    result.scalarBlockLayout = create_structure_copy(obj.scalarBlockLayout, pAllocationCallbacks);
    result.imagelessFramebuffer = create_structure_copy(obj.imagelessFramebuffer, pAllocationCallbacks);
    result.uniformBufferStandardLayout = create_structure_copy(obj.uniformBufferStandardLayout, pAllocationCallbacks);
    result.shaderSubgroupExtendedTypes = create_structure_copy(obj.shaderSubgroupExtendedTypes, pAllocationCallbacks);
    result.separateDepthStencilLayouts = create_structure_copy(obj.separateDepthStencilLayouts, pAllocationCallbacks);
    result.hostQueryReset = create_structure_copy(obj.hostQueryReset, pAllocationCallbacks);
    result.timelineSemaphore = create_structure_copy(obj.timelineSemaphore, pAllocationCallbacks);
    result.bufferDeviceAddress = create_structure_copy(obj.bufferDeviceAddress, pAllocationCallbacks);
    result.bufferDeviceAddressCaptureReplay = create_structure_copy(obj.bufferDeviceAddressCaptureReplay, pAllocationCallbacks);
    result.bufferDeviceAddressMultiDevice = create_structure_copy(obj.bufferDeviceAddressMultiDevice, pAllocationCallbacks);
    result.vulkanMemoryModel = create_structure_copy(obj.vulkanMemoryModel, pAllocationCallbacks);
    result.vulkanMemoryModelDeviceScope = create_structure_copy(obj.vulkanMemoryModelDeviceScope, pAllocationCallbacks);
    result.vulkanMemoryModelAvailabilityVisibilityChains = create_structure_copy(obj.vulkanMemoryModelAvailabilityVisibilityChains, pAllocationCallbacks);
    result.shaderOutputViewportIndex = create_structure_copy(obj.shaderOutputViewportIndex, pAllocationCallbacks);
    result.shaderOutputLayer = create_structure_copy(obj.shaderOutputLayer, pAllocationCallbacks);
    result.subgroupBroadcastDynamicId = create_structure_copy(obj.subgroupBroadcastDynamicId, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkan12Properties create_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan12Properties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.driverID = create_structure_copy(obj.driverID, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DRIVER_NAME_SIZE>(result.driverName, obj.driverName);
    create_static_string_copy<VK_MAX_DRIVER_INFO_SIZE>(result.driverInfo, obj.driverInfo);
    result.conformanceVersion = create_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
    result.denormBehaviorIndependence = create_structure_copy(obj.denormBehaviorIndependence, pAllocationCallbacks);
    result.roundingModeIndependence = create_structure_copy(obj.roundingModeIndependence, pAllocationCallbacks);
    result.shaderSignedZeroInfNanPreserveFloat16 = create_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat16, pAllocationCallbacks);
    result.shaderSignedZeroInfNanPreserveFloat32 = create_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat32, pAllocationCallbacks);
    result.shaderSignedZeroInfNanPreserveFloat64 = create_structure_copy(obj.shaderSignedZeroInfNanPreserveFloat64, pAllocationCallbacks);
    result.shaderDenormPreserveFloat16 = create_structure_copy(obj.shaderDenormPreserveFloat16, pAllocationCallbacks);
    result.shaderDenormPreserveFloat32 = create_structure_copy(obj.shaderDenormPreserveFloat32, pAllocationCallbacks);
    result.shaderDenormPreserveFloat64 = create_structure_copy(obj.shaderDenormPreserveFloat64, pAllocationCallbacks);
    result.shaderDenormFlushToZeroFloat16 = create_structure_copy(obj.shaderDenormFlushToZeroFloat16, pAllocationCallbacks);
    result.shaderDenormFlushToZeroFloat32 = create_structure_copy(obj.shaderDenormFlushToZeroFloat32, pAllocationCallbacks);
    result.shaderDenormFlushToZeroFloat64 = create_structure_copy(obj.shaderDenormFlushToZeroFloat64, pAllocationCallbacks);
    result.shaderRoundingModeRTEFloat16 = create_structure_copy(obj.shaderRoundingModeRTEFloat16, pAllocationCallbacks);
    result.shaderRoundingModeRTEFloat32 = create_structure_copy(obj.shaderRoundingModeRTEFloat32, pAllocationCallbacks);
    result.shaderRoundingModeRTEFloat64 = create_structure_copy(obj.shaderRoundingModeRTEFloat64, pAllocationCallbacks);
    result.shaderRoundingModeRTZFloat16 = create_structure_copy(obj.shaderRoundingModeRTZFloat16, pAllocationCallbacks);
    result.shaderRoundingModeRTZFloat32 = create_structure_copy(obj.shaderRoundingModeRTZFloat32, pAllocationCallbacks);
    result.shaderRoundingModeRTZFloat64 = create_structure_copy(obj.shaderRoundingModeRTZFloat64, pAllocationCallbacks);
    result.maxUpdateAfterBindDescriptorsInAllPools = create_structure_copy(obj.maxUpdateAfterBindDescriptorsInAllPools, pAllocationCallbacks);
    result.shaderUniformBufferArrayNonUniformIndexingNative = create_structure_copy(obj.shaderUniformBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderSampledImageArrayNonUniformIndexingNative = create_structure_copy(obj.shaderSampledImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderStorageBufferArrayNonUniformIndexingNative = create_structure_copy(obj.shaderStorageBufferArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderStorageImageArrayNonUniformIndexingNative = create_structure_copy(obj.shaderStorageImageArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.shaderInputAttachmentArrayNonUniformIndexingNative = create_structure_copy(obj.shaderInputAttachmentArrayNonUniformIndexingNative, pAllocationCallbacks);
    result.robustBufferAccessUpdateAfterBind = create_structure_copy(obj.robustBufferAccessUpdateAfterBind, pAllocationCallbacks);
    result.quadDivergentImplicitLod = create_structure_copy(obj.quadDivergentImplicitLod, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindSamplers = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSamplers, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindUniformBuffers = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindStorageBuffers = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindSampledImages = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindSampledImages, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindStorageImages = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindStorageImages, pAllocationCallbacks);
    result.maxPerStageDescriptorUpdateAfterBindInputAttachments = create_structure_copy(obj.maxPerStageDescriptorUpdateAfterBindInputAttachments, pAllocationCallbacks);
    result.maxPerStageUpdateAfterBindResources = create_structure_copy(obj.maxPerStageUpdateAfterBindResources, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindSamplers = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindSamplers, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindUniformBuffers = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffers, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindStorageBuffers = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffers, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindSampledImages = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindSampledImages, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindStorageImages = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindStorageImages, pAllocationCallbacks);
    result.maxDescriptorSetUpdateAfterBindInputAttachments = create_structure_copy(obj.maxDescriptorSetUpdateAfterBindInputAttachments, pAllocationCallbacks);
    result.supportedDepthResolveModes = create_structure_copy(obj.supportedDepthResolveModes, pAllocationCallbacks);
    result.supportedStencilResolveModes = create_structure_copy(obj.supportedStencilResolveModes, pAllocationCallbacks);
    result.independentResolveNone = create_structure_copy(obj.independentResolveNone, pAllocationCallbacks);
    result.independentResolve = create_structure_copy(obj.independentResolve, pAllocationCallbacks);
    result.filterMinmaxSingleComponentFormats = create_structure_copy(obj.filterMinmaxSingleComponentFormats, pAllocationCallbacks);
    result.filterMinmaxImageComponentMapping = create_structure_copy(obj.filterMinmaxImageComponentMapping, pAllocationCallbacks);
    result.maxTimelineSemaphoreValueDifference = create_structure_copy(obj.maxTimelineSemaphoreValueDifference, pAllocationCallbacks);
    result.framebufferIntegerColorSampleCounts = create_structure_copy(obj.framebufferIntegerColorSampleCounts, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceVulkanMemoryModelFeatures create_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkanMemoryModelFeatures result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.vulkanMemoryModel = create_structure_copy(obj.vulkanMemoryModel, pAllocationCallbacks);
    result.vulkanMemoryModelDeviceScope = create_structure_copy(obj.vulkanMemoryModelDeviceScope, pAllocationCallbacks);
    result.vulkanMemoryModelAvailabilityVisibilityChains = create_structure_copy(obj.vulkanMemoryModelAvailabilityVisibilityChains, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceYcbcrImageArraysFeaturesEXT create_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceYcbcrImageArraysFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.ycbcrImageArrays = create_structure_copy(obj.ycbcrImageArrays, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCacheCreateInfo create_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCacheCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.initialDataSize = create_structure_copy(obj.initialDataSize, pAllocationCallbacks);
    result.pInitialData = create_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineColorBlendAdvancedStateCreateInfoEXT create_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendAdvancedStateCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.srcPremultiplied = create_structure_copy(obj.srcPremultiplied, pAllocationCallbacks);
    result.dstPremultiplied = create_structure_copy(obj.dstPremultiplied, pAllocationCallbacks);
    result.blendOverlap = create_structure_copy(obj.blendOverlap, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineColorBlendAttachmentState create_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendAttachmentState result { };
    result.blendEnable = create_structure_copy(obj.blendEnable, pAllocationCallbacks);
    result.srcColorBlendFactor = create_structure_copy(obj.srcColorBlendFactor, pAllocationCallbacks);
    result.dstColorBlendFactor = create_structure_copy(obj.dstColorBlendFactor, pAllocationCallbacks);
    result.colorBlendOp = create_structure_copy(obj.colorBlendOp, pAllocationCallbacks);
    result.srcAlphaBlendFactor = create_structure_copy(obj.srcAlphaBlendFactor, pAllocationCallbacks);
    result.dstAlphaBlendFactor = create_structure_copy(obj.dstAlphaBlendFactor, pAllocationCallbacks);
    result.alphaBlendOp = create_structure_copy(obj.alphaBlendOp, pAllocationCallbacks);
    result.colorWriteMask = create_structure_copy(obj.colorWriteMask, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineColorBlendStateCreateInfo create_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.logicOpEnable = create_structure_copy(obj.logicOpEnable, pAllocationCallbacks);
    result.logicOp = create_structure_copy(obj.logicOp, pAllocationCallbacks);
    result.attachmentCount = create_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    create_static_array_copy<4>(result.blendConstants, obj.blendConstants);
    return result;
}

template <>
VkPipelineCompilerControlCreateInfoAMD create_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCompilerControlCreateInfoAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.compilerControlFlags = create_structure_copy(obj.compilerControlFlags, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCoverageModulationStateCreateInfoNV create_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageModulationStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.coverageModulationMode = create_structure_copy(obj.coverageModulationMode, pAllocationCallbacks);
    result.coverageModulationTableEnable = create_structure_copy(obj.coverageModulationTableEnable, pAllocationCallbacks);
    result.coverageModulationTableCount = create_structure_copy(obj.coverageModulationTableCount, pAllocationCallbacks);
    result.pCoverageModulationTable = create_dynamic_array_copy(obj.coverageModulationTableCount, obj.pCoverageModulationTable, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCoverageReductionStateCreateInfoNV create_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageReductionStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.coverageReductionMode = create_structure_copy(obj.coverageReductionMode, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCoverageToColorStateCreateInfoNV create_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageToColorStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.coverageToColorEnable = create_structure_copy(obj.coverageToColorEnable, pAllocationCallbacks);
    result.coverageToColorLocation = create_structure_copy(obj.coverageToColorLocation, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCreationFeedbackCreateInfoEXT create_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCreationFeedbackCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pPipelineCreationFeedback = obj.pPipelineCreationFeedback;
    result.pipelineStageCreationFeedbackCount = create_structure_copy(obj.pipelineStageCreationFeedbackCount, pAllocationCallbacks);
    result.pPipelineStageCreationFeedbacks = create_dynamic_array_copy(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCreationFeedbackEXT create_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCreationFeedbackEXT result { };
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.duration = create_structure_copy(obj.duration, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineDepthStencilStateCreateInfo create_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDepthStencilStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.depthTestEnable = create_structure_copy(obj.depthTestEnable, pAllocationCallbacks);
    result.depthWriteEnable = create_structure_copy(obj.depthWriteEnable, pAllocationCallbacks);
    result.depthCompareOp = create_structure_copy(obj.depthCompareOp, pAllocationCallbacks);
    result.depthBoundsTestEnable = create_structure_copy(obj.depthBoundsTestEnable, pAllocationCallbacks);
    result.stencilTestEnable = create_structure_copy(obj.stencilTestEnable, pAllocationCallbacks);
    result.front = create_structure_copy(obj.front, pAllocationCallbacks);
    result.back = create_structure_copy(obj.back, pAllocationCallbacks);
    result.minDepthBounds = create_structure_copy(obj.minDepthBounds, pAllocationCallbacks);
    result.maxDepthBounds = create_structure_copy(obj.maxDepthBounds, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineDiscardRectangleStateCreateInfoEXT create_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDiscardRectangleStateCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.discardRectangleMode = create_structure_copy(obj.discardRectangleMode, pAllocationCallbacks);
    result.discardRectangleCount = create_structure_copy(obj.discardRectangleCount, pAllocationCallbacks);
    result.pDiscardRectangles = create_dynamic_array_copy(obj.discardRectangleCount, obj.pDiscardRectangles, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineDynamicStateCreateInfo create_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDynamicStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.dynamicStateCount = create_structure_copy(obj.dynamicStateCount, pAllocationCallbacks);
    result.pDynamicStates = create_dynamic_array_copy(obj.dynamicStateCount, obj.pDynamicStates, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutableInfoKHR create_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pipeline = obj.pipeline;
    result.executableIndex = create_structure_copy(obj.executableIndex, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutableInternalRepresentationKHR create_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableInternalRepresentationKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    result.isText = create_structure_copy(obj.isText, pAllocationCallbacks);
    result.dataSize = create_structure_copy(obj.dataSize, pAllocationCallbacks);
    result.pData = create_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutablePropertiesKHR create_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutablePropertiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.stages = create_structure_copy(obj.stages, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    result.subgroupSize = create_structure_copy(obj.subgroupSize, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutableStatisticKHR create_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableStatisticKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.value = create_structure_copy(obj.value, pAllocationCallbacks);
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
VkPipelineExecutableStatisticValueKHR create_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableStatisticValueKHR result { };
    result.b32 = create_structure_copy(obj.b32, pAllocationCallbacks);
    result.i64 = create_structure_copy(obj.i64, pAllocationCallbacks);
    result.u64 = create_structure_copy(obj.u64, pAllocationCallbacks);
    result.f64 = create_structure_copy(obj.f64, pAllocationCallbacks);
    return result;
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkPipelineInfoKHR create_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.pipeline = obj.pipeline;
    return result;
}

template <>
VkPipelineInputAssemblyStateCreateInfo create_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineInputAssemblyStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.topology = create_structure_copy(obj.topology, pAllocationCallbacks);
    result.primitiveRestartEnable = create_structure_copy(obj.primitiveRestartEnable, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineLayoutCreateInfo create_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineLayoutCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.setLayoutCount = create_structure_copy(obj.setLayoutCount, pAllocationCallbacks);
    result.pSetLayouts = create_dynamic_array_copy(obj.setLayoutCount, obj.pSetLayouts, pAllocationCallbacks);
    result.pushConstantRangeCount = create_structure_copy(obj.pushConstantRangeCount, pAllocationCallbacks);
    result.pPushConstantRanges = create_dynamic_array_copy(obj.pushConstantRangeCount, obj.pPushConstantRanges, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPipelineLibraryCreateInfoKHR create_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineLibraryCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.libraryCount = create_structure_copy(obj.libraryCount, pAllocationCallbacks);
    result.pLibraries = create_dynamic_array_copy(obj.libraryCount, obj.pLibraries, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
VkPipelineMultisampleStateCreateInfo create_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineMultisampleStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.rasterizationSamples = create_structure_copy(obj.rasterizationSamples, pAllocationCallbacks);
    result.sampleShadingEnable = create_structure_copy(obj.sampleShadingEnable, pAllocationCallbacks);
    result.minSampleShading = create_structure_copy(obj.minSampleShading, pAllocationCallbacks);
    result.pSampleMask = create_dynamic_array_copy(obj.latexmath:[\lceil{\mathit{rasterizationSamples} \over 32}\rceil], obj.pSampleMask, pAllocationCallbacks);
    result.alphaToCoverageEnable = create_structure_copy(obj.alphaToCoverageEnable, pAllocationCallbacks);
    result.alphaToOneEnable = create_structure_copy(obj.alphaToOneEnable, pAllocationCallbacks);
    return result;
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkPipelineRasterizationConservativeStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationConservativeStateCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.conservativeRasterizationMode = create_structure_copy(obj.conservativeRasterizationMode, pAllocationCallbacks);
    result.extraPrimitiveOverestimationSize = create_structure_copy(obj.extraPrimitiveOverestimationSize, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationDepthClipStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationDepthClipStateCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.depthClipEnable = create_structure_copy(obj.depthClipEnable, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationLineStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationLineStateCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.lineRasterizationMode = create_structure_copy(obj.lineRasterizationMode, pAllocationCallbacks);
    result.stippledLineEnable = create_structure_copy(obj.stippledLineEnable, pAllocationCallbacks);
    result.lineStippleFactor = create_structure_copy(obj.lineStippleFactor, pAllocationCallbacks);
    result.lineStipplePattern = create_structure_copy(obj.lineStipplePattern, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationStateCreateInfo create_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.depthClampEnable = create_structure_copy(obj.depthClampEnable, pAllocationCallbacks);
    result.rasterizerDiscardEnable = create_structure_copy(obj.rasterizerDiscardEnable, pAllocationCallbacks);
    result.polygonMode = create_structure_copy(obj.polygonMode, pAllocationCallbacks);
    result.cullMode = create_structure_copy(obj.cullMode, pAllocationCallbacks);
    result.frontFace = create_structure_copy(obj.frontFace, pAllocationCallbacks);
    result.depthBiasEnable = create_structure_copy(obj.depthBiasEnable, pAllocationCallbacks);
    result.depthBiasConstantFactor = create_structure_copy(obj.depthBiasConstantFactor, pAllocationCallbacks);
    result.depthBiasClamp = create_structure_copy(obj.depthBiasClamp, pAllocationCallbacks);
    result.depthBiasSlopeFactor = create_structure_copy(obj.depthBiasSlopeFactor, pAllocationCallbacks);
    result.lineWidth = create_structure_copy(obj.lineWidth, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationStateRasterizationOrderAMD create_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateRasterizationOrderAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.rasterizationOrder = create_structure_copy(obj.rasterizationOrder, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRasterizationStateStreamCreateInfoEXT create_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateStreamCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.rasterizationStream = create_structure_copy(obj.rasterizationStream, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineRepresentativeFragmentTestStateCreateInfoNV create_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.representativeFragmentTestEnable = create_structure_copy(obj.representativeFragmentTestEnable, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineSampleLocationsStateCreateInfoEXT create_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineSampleLocationsStateCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.sampleLocationsEnable = create_structure_copy(obj.sampleLocationsEnable, pAllocationCallbacks);
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineShaderStageCreateInfo create_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineShaderStageCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.stage = create_structure_copy(obj.stage, pAllocationCallbacks);
    result.module = obj.module;
    result.pName = create_dynamic_string_copy(obj.pName, pAllocationCallbacks);
    result.pSpecializationInfo = obj.pSpecializationInfo;
    return result;
}

template <>
VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT create_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.requiredSubgroupSize = create_structure_copy(obj.requiredSubgroupSize, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineTessellationDomainOriginStateCreateInfo create_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineTessellationDomainOriginStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.domainOrigin = create_structure_copy(obj.domainOrigin, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineTessellationStateCreateInfo create_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineTessellationStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.patchControlPoints = create_structure_copy(obj.patchControlPoints, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineVertexInputDivisorStateCreateInfoEXT create_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineVertexInputDivisorStateCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.vertexBindingDivisorCount = create_structure_copy(obj.vertexBindingDivisorCount, pAllocationCallbacks);
    result.pVertexBindingDivisors = create_dynamic_array_copy(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineVertexInputStateCreateInfo create_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineVertexInputStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.vertexBindingDescriptionCount = create_structure_copy(obj.vertexBindingDescriptionCount, pAllocationCallbacks);
    result.pVertexBindingDescriptions = create_dynamic_array_copy(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions, pAllocationCallbacks);
    result.vertexAttributeDescriptionCount = create_structure_copy(obj.vertexAttributeDescriptionCount, pAllocationCallbacks);
    result.pVertexAttributeDescriptions = create_dynamic_array_copy(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportCoarseSampleOrderStateCreateInfoNV create_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.sampleOrderType = create_structure_copy(obj.sampleOrderType, pAllocationCallbacks);
    result.customSampleOrderCount = create_structure_copy(obj.customSampleOrderCount, pAllocationCallbacks);
    result.pCustomSampleOrders = create_dynamic_array_copy(obj.customSampleOrderCount, obj.pCustomSampleOrders, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportExclusiveScissorStateCreateInfoNV create_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportExclusiveScissorStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.exclusiveScissorCount = create_structure_copy(obj.exclusiveScissorCount, pAllocationCallbacks);
    result.pExclusiveScissors = create_dynamic_array_copy(obj.exclusiveScissorCount, obj.pExclusiveScissors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportShadingRateImageStateCreateInfoNV create_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportShadingRateImageStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.shadingRateImageEnable = create_structure_copy(obj.shadingRateImageEnable, pAllocationCallbacks);
    result.viewportCount = create_structure_copy(obj.viewportCount, pAllocationCallbacks);
    result.pShadingRatePalettes = create_dynamic_array_copy(obj.viewportCount, obj.pShadingRatePalettes, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportStateCreateInfo create_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportStateCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.viewportCount = create_structure_copy(obj.viewportCount, pAllocationCallbacks);
    result.pViewports = create_dynamic_array_copy(obj.viewportCount, obj.pViewports, pAllocationCallbacks);
    result.scissorCount = create_structure_copy(obj.scissorCount, pAllocationCallbacks);
    result.pScissors = create_dynamic_array_copy(obj.scissorCount, obj.pScissors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportSwizzleStateCreateInfoNV create_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportSwizzleStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.viewportCount = create_structure_copy(obj.viewportCount, pAllocationCallbacks);
    result.pViewportSwizzles = create_dynamic_array_copy(obj.viewportCount, obj.pViewportSwizzles, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportWScalingStateCreateInfoNV create_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportWScalingStateCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.viewportWScalingEnable = create_structure_copy(obj.viewportWScalingEnable, pAllocationCallbacks);
    result.viewportCount = create_structure_copy(obj.viewportCount, pAllocationCallbacks);
    result.pViewportWScalings = create_dynamic_array_copy(obj.viewportCount, obj.pViewportWScalings, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkPresentFrameTokenGGP create_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentFrameTokenGGP result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.frameToken = create_structure_copy(obj.frameToken, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_GGP

template <>
VkPresentInfoKHR create_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.waitSemaphoreCount = create_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    result.swapchainCount = create_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    result.pSwapchains = create_dynamic_array_copy(obj.swapchainCount, obj.pSwapchains, pAllocationCallbacks);
    result.pImageIndices = create_dynamic_array_copy(obj.swapchainCount, obj.pImageIndices, pAllocationCallbacks);
    result.pResults = create_dynamic_array_copy(obj.swapchainCount, obj.pResults, pAllocationCallbacks);
    return result;
}

template <>
VkPresentRegionKHR create_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentRegionKHR result { };
    result.rectangleCount = create_structure_copy(obj.rectangleCount, pAllocationCallbacks);
    result.pRectangles = create_dynamic_array_copy(obj.rectangleCount, obj.pRectangles, pAllocationCallbacks);
    return result;
}

template <>
VkPresentRegionsKHR create_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentRegionsKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.swapchainCount = create_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    result.pRegions = create_dynamic_array_copy(obj.swapchainCount, obj.pRegions, pAllocationCallbacks);
    return result;
}

template <>
VkPresentTimeGOOGLE create_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentTimeGOOGLE result { };
    result.presentID = create_structure_copy(obj.presentID, pAllocationCallbacks);
    result.desiredPresentTime = create_structure_copy(obj.desiredPresentTime, pAllocationCallbacks);
    return result;
}

template <>
VkPresentTimesInfoGOOGLE create_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentTimesInfoGOOGLE result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.swapchainCount = create_structure_copy(obj.swapchainCount, pAllocationCallbacks);
    result.pTimes = create_dynamic_array_copy(obj.swapchainCount, obj.pTimes, pAllocationCallbacks);
    return result;
}

template <>
VkProtectedSubmitInfo create_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkProtectedSubmitInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.protectedSubmit = create_structure_copy(obj.protectedSubmit, pAllocationCallbacks);
    return result;
}

template <>
VkPushConstantRange create_structure_copy<VkPushConstantRange>(const VkPushConstantRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPushConstantRange result { };
    result.stageFlags = create_structure_copy(obj.stageFlags, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    return result;
}

template <>
VkQueryPoolCreateInfo create_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.queryType = create_structure_copy(obj.queryType, pAllocationCallbacks);
    result.queryCount = create_structure_copy(obj.queryCount, pAllocationCallbacks);
    result.pipelineStatistics = create_structure_copy(obj.pipelineStatistics, pAllocationCallbacks);
    return result;
}

template <>
VkQueryPoolPerformanceCreateInfoKHR create_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolPerformanceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.queueFamilyIndex = create_structure_copy(obj.queueFamilyIndex, pAllocationCallbacks);
    result.counterIndexCount = create_structure_copy(obj.counterIndexCount, pAllocationCallbacks);
    result.pCounterIndices = create_dynamic_array_copy(obj.counterIndexCount, obj.pCounterIndices, pAllocationCallbacks);
    return result;
}

template <>
VkQueryPoolPerformanceQueryCreateInfoINTEL create_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolPerformanceQueryCreateInfoINTEL result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.performanceCountersSampling = create_structure_copy(obj.performanceCountersSampling, pAllocationCallbacks);
    return result;
}

template <>
VkQueueFamilyCheckpointPropertiesNV create_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyCheckpointPropertiesNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.checkpointExecutionStageMask = create_structure_copy(obj.checkpointExecutionStageMask, pAllocationCallbacks);
    return result;
}

template <>
VkQueueFamilyProperties create_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyProperties result { };
    result.queueFlags = create_structure_copy(obj.queueFlags, pAllocationCallbacks);
    result.queueCount = create_structure_copy(obj.queueCount, pAllocationCallbacks);
    result.timestampValidBits = create_structure_copy(obj.timestampValidBits, pAllocationCallbacks);
    result.minImageTransferGranularity = create_structure_copy(obj.minImageTransferGranularity, pAllocationCallbacks);
    return result;
}

template <>
VkQueueFamilyProperties2 create_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyProperties2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.queueFamilyProperties = create_structure_copy(obj.queueFamilyProperties, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineCreateInfoKHR create_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.stageCount = create_structure_copy(obj.stageCount, pAllocationCallbacks);
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    result.groupCount = create_structure_copy(obj.groupCount, pAllocationCallbacks);
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    result.maxRecursionDepth = create_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    result.libraries = create_structure_copy(obj.libraries, pAllocationCallbacks);
    result.pLibraryInterface = obj.pLibraryInterface;
    result.layout = obj.layout;
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = create_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingPipelineCreateInfoNV create_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.stageCount = create_structure_copy(obj.stageCount, pAllocationCallbacks);
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    result.groupCount = create_structure_copy(obj.groupCount, pAllocationCallbacks);
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    result.maxRecursionDepth = create_structure_copy(obj.maxRecursionDepth, pAllocationCallbacks);
    result.layout = obj.layout;
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = create_structure_copy(obj.basePipelineIndex, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineInterfaceCreateInfoKHR create_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineInterfaceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.maxPayloadSize = create_structure_copy(obj.maxPayloadSize, pAllocationCallbacks);
    result.maxAttributeSize = create_structure_copy(obj.maxAttributeSize, pAllocationCallbacks);
    result.maxCallableSize = create_structure_copy(obj.maxCallableSize, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingShaderGroupCreateInfoKHR create_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingShaderGroupCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.generalShader = create_structure_copy(obj.generalShader, pAllocationCallbacks);
    result.closestHitShader = create_structure_copy(obj.closestHitShader, pAllocationCallbacks);
    result.anyHitShader = create_structure_copy(obj.anyHitShader, pAllocationCallbacks);
    result.intersectionShader = create_structure_copy(obj.intersectionShader, pAllocationCallbacks);
    result.pShaderGroupCaptureReplayHandle = obj.pShaderGroupCaptureReplayHandle;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingShaderGroupCreateInfoNV create_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingShaderGroupCreateInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.type = create_structure_copy(obj.type, pAllocationCallbacks);
    result.generalShader = create_structure_copy(obj.generalShader, pAllocationCallbacks);
    result.closestHitShader = create_structure_copy(obj.closestHitShader, pAllocationCallbacks);
    result.anyHitShader = create_structure_copy(obj.anyHitShader, pAllocationCallbacks);
    result.intersectionShader = create_structure_copy(obj.intersectionShader, pAllocationCallbacks);
    return result;
}

template <>
VkRect2D create_structure_copy<VkRect2D>(const VkRect2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRect2D result { };
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkRectLayerKHR create_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRectLayerKHR result { };
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    result.layer = create_structure_copy(obj.layer, pAllocationCallbacks);
    return result;
}

template <>
VkRefreshCycleDurationGOOGLE create_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRefreshCycleDurationGOOGLE result { };
    result.refreshDuration = create_structure_copy(obj.refreshDuration, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassAttachmentBeginInfo create_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassAttachmentBeginInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.attachmentCount = create_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassBeginInfo create_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassBeginInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.renderPass = obj.renderPass;
    result.framebuffer = obj.framebuffer;
    result.renderArea = create_structure_copy(obj.renderArea, pAllocationCallbacks);
    result.clearValueCount = create_structure_copy(obj.clearValueCount, pAllocationCallbacks);
    result.pClearValues = create_dynamic_array_copy(obj.clearValueCount, obj.pClearValues, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassCreateInfo create_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.attachmentCount = create_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    result.subpassCount = create_structure_copy(obj.subpassCount, pAllocationCallbacks);
    result.pSubpasses = create_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    result.dependencyCount = create_structure_copy(obj.dependencyCount, pAllocationCallbacks);
    result.pDependencies = create_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassCreateInfo2 create_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassCreateInfo2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.attachmentCount = create_structure_copy(obj.attachmentCount, pAllocationCallbacks);
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    result.subpassCount = create_structure_copy(obj.subpassCount, pAllocationCallbacks);
    result.pSubpasses = create_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    result.dependencyCount = create_structure_copy(obj.dependencyCount, pAllocationCallbacks);
    result.pDependencies = create_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
    result.correlatedViewMaskCount = create_structure_copy(obj.correlatedViewMaskCount, pAllocationCallbacks);
    result.pCorrelatedViewMasks = create_dynamic_array_copy(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassFragmentDensityMapCreateInfoEXT create_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassFragmentDensityMapCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fragmentDensityMapAttachment = create_structure_copy(obj.fragmentDensityMapAttachment, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassInputAttachmentAspectCreateInfo create_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassInputAttachmentAspectCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.aspectReferenceCount = create_structure_copy(obj.aspectReferenceCount, pAllocationCallbacks);
    result.pAspectReferences = create_dynamic_array_copy(obj.aspectReferenceCount, obj.pAspectReferences, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassMultiviewCreateInfo create_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassMultiviewCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.subpassCount = create_structure_copy(obj.subpassCount, pAllocationCallbacks);
    result.pViewMasks = create_dynamic_array_copy(obj.subpassCount, obj.pViewMasks, pAllocationCallbacks);
    result.dependencyCount = create_structure_copy(obj.dependencyCount, pAllocationCallbacks);
    result.pViewOffsets = create_dynamic_array_copy(obj.dependencyCount, obj.pViewOffsets, pAllocationCallbacks);
    result.correlationMaskCount = create_structure_copy(obj.correlationMaskCount, pAllocationCallbacks);
    result.pCorrelationMasks = create_dynamic_array_copy(obj.correlationMaskCount, obj.pCorrelationMasks, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassSampleLocationsBeginInfoEXT create_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassSampleLocationsBeginInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.attachmentInitialSampleLocationsCount = create_structure_copy(obj.attachmentInitialSampleLocationsCount, pAllocationCallbacks);
    result.pAttachmentInitialSampleLocations = create_dynamic_array_copy(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations, pAllocationCallbacks);
    result.postSubpassSampleLocationsCount = create_structure_copy(obj.postSubpassSampleLocationsCount, pAllocationCallbacks);
    result.pPostSubpassSampleLocations = create_dynamic_array_copy(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassTransformBeginInfoQCOM create_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassTransformBeginInfoQCOM result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.transform = create_structure_copy(obj.transform, pAllocationCallbacks);
    return result;
}

template <>
VkSampleLocationEXT create_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSampleLocationEXT result { };
    result.x = create_structure_copy(obj.x, pAllocationCallbacks);
    result.y = create_structure_copy(obj.y, pAllocationCallbacks);
    return result;
}

template <>
VkSampleLocationsInfoEXT create_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSampleLocationsInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.sampleLocationsPerPixel = create_structure_copy(obj.sampleLocationsPerPixel, pAllocationCallbacks);
    result.sampleLocationGridSize = create_structure_copy(obj.sampleLocationGridSize, pAllocationCallbacks);
    result.sampleLocationsCount = create_structure_copy(obj.sampleLocationsCount, pAllocationCallbacks);
    result.pSampleLocations = create_dynamic_array_copy(obj.sampleLocationsCount, obj.pSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerCreateInfo create_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.magFilter = create_structure_copy(obj.magFilter, pAllocationCallbacks);
    result.minFilter = create_structure_copy(obj.minFilter, pAllocationCallbacks);
    result.mipmapMode = create_structure_copy(obj.mipmapMode, pAllocationCallbacks);
    result.addressModeU = create_structure_copy(obj.addressModeU, pAllocationCallbacks);
    result.addressModeV = create_structure_copy(obj.addressModeV, pAllocationCallbacks);
    result.addressModeW = create_structure_copy(obj.addressModeW, pAllocationCallbacks);
    result.mipLodBias = create_structure_copy(obj.mipLodBias, pAllocationCallbacks);
    result.anisotropyEnable = create_structure_copy(obj.anisotropyEnable, pAllocationCallbacks);
    result.maxAnisotropy = create_structure_copy(obj.maxAnisotropy, pAllocationCallbacks);
    result.compareEnable = create_structure_copy(obj.compareEnable, pAllocationCallbacks);
    result.compareOp = create_structure_copy(obj.compareOp, pAllocationCallbacks);
    result.minLod = create_structure_copy(obj.minLod, pAllocationCallbacks);
    result.maxLod = create_structure_copy(obj.maxLod, pAllocationCallbacks);
    result.borderColor = create_structure_copy(obj.borderColor, pAllocationCallbacks);
    result.unnormalizedCoordinates = create_structure_copy(obj.unnormalizedCoordinates, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerReductionModeCreateInfo create_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerReductionModeCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.reductionMode = create_structure_copy(obj.reductionMode, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerYcbcrConversionCreateInfo create_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.ycbcrModel = create_structure_copy(obj.ycbcrModel, pAllocationCallbacks);
    result.ycbcrRange = create_structure_copy(obj.ycbcrRange, pAllocationCallbacks);
    result.components = create_structure_copy(obj.components, pAllocationCallbacks);
    result.xChromaOffset = create_structure_copy(obj.xChromaOffset, pAllocationCallbacks);
    result.yChromaOffset = create_structure_copy(obj.yChromaOffset, pAllocationCallbacks);
    result.chromaFilter = create_structure_copy(obj.chromaFilter, pAllocationCallbacks);
    result.forceExplicitReconstruction = create_structure_copy(obj.forceExplicitReconstruction, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerYcbcrConversionImageFormatProperties create_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionImageFormatProperties result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.combinedImageSamplerDescriptorCount = create_structure_copy(obj.combinedImageSamplerDescriptorCount, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerYcbcrConversionInfo create_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.conversion = obj.conversion;
    return result;
}

template <>
VkSemaphoreCreateInfo create_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkSemaphoreGetFdInfoKHR create_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreGetFdInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.semaphore = obj.semaphore;
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSemaphoreGetWin32HandleInfoKHR create_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreGetWin32HandleInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.semaphore = obj.semaphore;
    result.handleType = create_structure_copy(obj.handleType, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSemaphoreSignalInfo create_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreSignalInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.semaphore = obj.semaphore;
    result.value = create_structure_copy(obj.value, pAllocationCallbacks);
    return result;
}

template <>
VkSemaphoreTypeCreateInfo create_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreTypeCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.semaphoreType = create_structure_copy(obj.semaphoreType, pAllocationCallbacks);
    result.initialValue = create_structure_copy(obj.initialValue, pAllocationCallbacks);
    return result;
}

template <>
VkSemaphoreWaitInfo create_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreWaitInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.semaphoreCount = create_structure_copy(obj.semaphoreCount, pAllocationCallbacks);
    result.pSemaphores = create_dynamic_array_copy(obj.semaphoreCount, obj.pSemaphores, pAllocationCallbacks);
    result.pValues = create_dynamic_array_copy(obj.semaphoreCount, obj.pValues, pAllocationCallbacks);
    return result;
}

template <>
VkSetStateFlagsIndirectCommandNV create_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSetStateFlagsIndirectCommandNV result { };
    result.data = create_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
template <>
VkShaderModuleCreateInfo create_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderModuleCreateInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.codeSize = create_structure_copy(obj.codeSize, pAllocationCallbacks);
    result.pCode = create_dynamic_array_copy(obj.latexmath:[\textrm{codeSize} \over 4], obj.pCode, pAllocationCallbacks);
    return result;
}
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkShaderModuleValidationCacheCreateInfoEXT create_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderModuleValidationCacheCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.validationCache = obj.validationCache;
    return result;
}

template <>
VkShaderResourceUsageAMD create_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderResourceUsageAMD result { };
    result.numUsedVgprs = create_structure_copy(obj.numUsedVgprs, pAllocationCallbacks);
    result.numUsedSgprs = create_structure_copy(obj.numUsedSgprs, pAllocationCallbacks);
    result.ldsSizePerLocalWorkGroup = create_structure_copy(obj.ldsSizePerLocalWorkGroup, pAllocationCallbacks);
    result.ldsUsageSizeInBytes = create_structure_copy(obj.ldsUsageSizeInBytes, pAllocationCallbacks);
    result.scratchMemUsageInBytes = create_structure_copy(obj.scratchMemUsageInBytes, pAllocationCallbacks);
    return result;
}

template <>
VkShaderStatisticsInfoAMD create_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderStatisticsInfoAMD result { };
    result.shaderStageMask = create_structure_copy(obj.shaderStageMask, pAllocationCallbacks);
    result.resourceUsage = create_structure_copy(obj.resourceUsage, pAllocationCallbacks);
    result.numPhysicalVgprs = create_structure_copy(obj.numPhysicalVgprs, pAllocationCallbacks);
    result.numPhysicalSgprs = create_structure_copy(obj.numPhysicalSgprs, pAllocationCallbacks);
    result.numAvailableVgprs = create_structure_copy(obj.numAvailableVgprs, pAllocationCallbacks);
    result.numAvailableSgprs = create_structure_copy(obj.numAvailableSgprs, pAllocationCallbacks);
    create_static_array_copy<3>(result.computeWorkGroupSize, obj.computeWorkGroupSize);
    return result;
}

template <>
VkShadingRatePaletteNV create_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShadingRatePaletteNV result { };
    result.shadingRatePaletteEntryCount = create_structure_copy(obj.shadingRatePaletteEntryCount, pAllocationCallbacks);
    result.pShadingRatePaletteEntries = create_dynamic_array_copy(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, pAllocationCallbacks);
    return result;
}

template <>
VkSharedPresentSurfaceCapabilitiesKHR create_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSharedPresentSurfaceCapabilitiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.sharedPresentSupportedUsageFlags = create_structure_copy(obj.sharedPresentSupportedUsageFlags, pAllocationCallbacks);
    return result;
}

template <>
VkSparseBufferMemoryBindInfo create_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseBufferMemoryBindInfo result { };
    result.buffer = obj.buffer;
    result.bindCount = create_structure_copy(obj.bindCount, pAllocationCallbacks);
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageFormatProperties create_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageFormatProperties result { };
    result.aspectMask = create_structure_copy(obj.aspectMask, pAllocationCallbacks);
    result.imageGranularity = create_structure_copy(obj.imageGranularity, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageFormatProperties2 create_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageFormatProperties2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.properties = create_structure_copy(obj.properties, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryBind create_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryBind result { };
    result.subresource = create_structure_copy(obj.subresource, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    result.memory = obj.memory;
    result.memoryOffset = create_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryBindInfo create_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryBindInfo result { };
    result.image = obj.image;
    result.bindCount = create_structure_copy(obj.bindCount, pAllocationCallbacks);
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryRequirements create_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryRequirements result { };
    result.formatProperties = create_structure_copy(obj.formatProperties, pAllocationCallbacks);
    result.imageMipTailFirstLod = create_structure_copy(obj.imageMipTailFirstLod, pAllocationCallbacks);
    result.imageMipTailSize = create_structure_copy(obj.imageMipTailSize, pAllocationCallbacks);
    result.imageMipTailOffset = create_structure_copy(obj.imageMipTailOffset, pAllocationCallbacks);
    result.imageMipTailStride = create_structure_copy(obj.imageMipTailStride, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryRequirements2 create_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryRequirements2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.memoryRequirements = create_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageOpaqueMemoryBindInfo create_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageOpaqueMemoryBindInfo result { };
    result.image = obj.image;
    result.bindCount = create_structure_copy(obj.bindCount, pAllocationCallbacks);
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseMemoryBind create_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseMemoryBind result { };
    result.resourceOffset = create_structure_copy(obj.resourceOffset, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    result.memory = obj.memory;
    result.memoryOffset = create_structure_copy(obj.memoryOffset, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    return result;
}

template <>
VkSpecializationInfo create_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSpecializationInfo result { };
    result.mapEntryCount = create_structure_copy(obj.mapEntryCount, pAllocationCallbacks);
    result.pMapEntries = create_dynamic_array_copy(obj.mapEntryCount, obj.pMapEntries, pAllocationCallbacks);
    result.dataSize = create_structure_copy(obj.dataSize, pAllocationCallbacks);
    result.pData = create_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkSpecializationMapEntry create_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSpecializationMapEntry result { };
    result.constantID = create_structure_copy(obj.constantID, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    return result;
}

template <>
VkStencilOpState create_structure_copy<VkStencilOpState>(const VkStencilOpState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStencilOpState result { };
    result.failOp = create_structure_copy(obj.failOp, pAllocationCallbacks);
    result.passOp = create_structure_copy(obj.passOp, pAllocationCallbacks);
    result.depthFailOp = create_structure_copy(obj.depthFailOp, pAllocationCallbacks);
    result.compareOp = create_structure_copy(obj.compareOp, pAllocationCallbacks);
    result.compareMask = create_structure_copy(obj.compareMask, pAllocationCallbacks);
    result.writeMask = create_structure_copy(obj.writeMask, pAllocationCallbacks);
    result.reference = create_structure_copy(obj.reference, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkStreamDescriptorSurfaceCreateInfoGGP create_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStreamDescriptorSurfaceCreateInfoGGP result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.streamDescriptor = create_structure_copy(obj.streamDescriptor, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkStridedBufferRegionKHR create_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStridedBufferRegionKHR result { };
    result.buffer = obj.buffer;
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.stride = create_structure_copy(obj.stride, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkSubmitInfo create_structure_copy<VkSubmitInfo>(const VkSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubmitInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.waitSemaphoreCount = create_structure_copy(obj.waitSemaphoreCount, pAllocationCallbacks);
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    result.pWaitDstStageMask = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitDstStageMask, pAllocationCallbacks);
    result.commandBufferCount = create_structure_copy(obj.commandBufferCount, pAllocationCallbacks);
    result.pCommandBuffers = create_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBuffers, pAllocationCallbacks);
    result.signalSemaphoreCount = create_structure_copy(obj.signalSemaphoreCount, pAllocationCallbacks);
    result.pSignalSemaphores = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassBeginInfo create_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassBeginInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.contents = create_structure_copy(obj.contents, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassDependency create_structure_copy<VkSubpassDependency>(const VkSubpassDependency& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDependency result { };
    result.srcSubpass = create_structure_copy(obj.srcSubpass, pAllocationCallbacks);
    result.dstSubpass = create_structure_copy(obj.dstSubpass, pAllocationCallbacks);
    result.srcStageMask = create_structure_copy(obj.srcStageMask, pAllocationCallbacks);
    result.dstStageMask = create_structure_copy(obj.dstStageMask, pAllocationCallbacks);
    result.srcAccessMask = create_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    result.dstAccessMask = create_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    result.dependencyFlags = create_structure_copy(obj.dependencyFlags, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassDependency2 create_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDependency2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.srcSubpass = create_structure_copy(obj.srcSubpass, pAllocationCallbacks);
    result.dstSubpass = create_structure_copy(obj.dstSubpass, pAllocationCallbacks);
    result.srcStageMask = create_structure_copy(obj.srcStageMask, pAllocationCallbacks);
    result.dstStageMask = create_structure_copy(obj.dstStageMask, pAllocationCallbacks);
    result.srcAccessMask = create_structure_copy(obj.srcAccessMask, pAllocationCallbacks);
    result.dstAccessMask = create_structure_copy(obj.dstAccessMask, pAllocationCallbacks);
    result.dependencyFlags = create_structure_copy(obj.dependencyFlags, pAllocationCallbacks);
    result.viewOffset = create_structure_copy(obj.viewOffset, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassDescription create_structure_copy<VkSubpassDescription>(const VkSubpassDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescription result { };
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pipelineBindPoint = create_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    result.inputAttachmentCount = create_structure_copy(obj.inputAttachmentCount, pAllocationCallbacks);
    result.pInputAttachments = create_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    result.colorAttachmentCount = create_structure_copy(obj.colorAttachmentCount, pAllocationCallbacks);
    result.pColorAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    result.pResolveAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    result.pDepthStencilAttachment = obj.pDepthStencilAttachment;
    result.preserveAttachmentCount = create_structure_copy(obj.preserveAttachmentCount, pAllocationCallbacks);
    result.pPreserveAttachments = create_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassDescription2 create_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescription2 result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.pipelineBindPoint = create_structure_copy(obj.pipelineBindPoint, pAllocationCallbacks);
    result.viewMask = create_structure_copy(obj.viewMask, pAllocationCallbacks);
    result.inputAttachmentCount = create_structure_copy(obj.inputAttachmentCount, pAllocationCallbacks);
    result.pInputAttachments = create_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    result.colorAttachmentCount = create_structure_copy(obj.colorAttachmentCount, pAllocationCallbacks);
    result.pColorAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    result.pResolveAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    result.pDepthStencilAttachment = obj.pDepthStencilAttachment;
    result.preserveAttachmentCount = create_structure_copy(obj.preserveAttachmentCount, pAllocationCallbacks);
    result.pPreserveAttachments = create_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassDescriptionDepthStencilResolve create_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescriptionDepthStencilResolve result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.depthResolveMode = create_structure_copy(obj.depthResolveMode, pAllocationCallbacks);
    result.stencilResolveMode = create_structure_copy(obj.stencilResolveMode, pAllocationCallbacks);
    result.pDepthStencilResolveAttachment = obj.pDepthStencilResolveAttachment;
    return result;
}

template <>
VkSubpassEndInfo create_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassEndInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassSampleLocationsEXT create_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassSampleLocationsEXT result { };
    result.subpassIndex = create_structure_copy(obj.subpassIndex, pAllocationCallbacks);
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkSubresourceLayout create_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubresourceLayout result { };
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    result.size = create_structure_copy(obj.size, pAllocationCallbacks);
    result.rowPitch = create_structure_copy(obj.rowPitch, pAllocationCallbacks);
    result.arrayPitch = create_structure_copy(obj.arrayPitch, pAllocationCallbacks);
    result.depthPitch = create_structure_copy(obj.depthPitch, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceCapabilities2EXT create_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilities2EXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.minImageCount = create_structure_copy(obj.minImageCount, pAllocationCallbacks);
    result.maxImageCount = create_structure_copy(obj.maxImageCount, pAllocationCallbacks);
    result.currentExtent = create_structure_copy(obj.currentExtent, pAllocationCallbacks);
    result.minImageExtent = create_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    result.maxImageExtent = create_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    result.maxImageArrayLayers = create_structure_copy(obj.maxImageArrayLayers, pAllocationCallbacks);
    result.supportedTransforms = create_structure_copy(obj.supportedTransforms, pAllocationCallbacks);
    result.currentTransform = create_structure_copy(obj.currentTransform, pAllocationCallbacks);
    result.supportedCompositeAlpha = create_structure_copy(obj.supportedCompositeAlpha, pAllocationCallbacks);
    result.supportedUsageFlags = create_structure_copy(obj.supportedUsageFlags, pAllocationCallbacks);
    result.supportedSurfaceCounters = create_structure_copy(obj.supportedSurfaceCounters, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceCapabilities2KHR create_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilities2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.surfaceCapabilities = create_structure_copy(obj.surfaceCapabilities, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceCapabilitiesFullScreenExclusiveEXT create_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilitiesFullScreenExclusiveEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fullScreenExclusiveSupported = create_structure_copy(obj.fullScreenExclusiveSupported, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceCapabilitiesKHR create_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilitiesKHR result { };
    result.minImageCount = create_structure_copy(obj.minImageCount, pAllocationCallbacks);
    result.maxImageCount = create_structure_copy(obj.maxImageCount, pAllocationCallbacks);
    result.currentExtent = create_structure_copy(obj.currentExtent, pAllocationCallbacks);
    result.minImageExtent = create_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    result.maxImageExtent = create_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    result.maxImageArrayLayers = create_structure_copy(obj.maxImageArrayLayers, pAllocationCallbacks);
    result.supportedTransforms = create_structure_copy(obj.supportedTransforms, pAllocationCallbacks);
    result.currentTransform = create_structure_copy(obj.currentTransform, pAllocationCallbacks);
    result.supportedCompositeAlpha = create_structure_copy(obj.supportedCompositeAlpha, pAllocationCallbacks);
    result.supportedUsageFlags = create_structure_copy(obj.supportedUsageFlags, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceFormat2KHR create_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFormat2KHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.surfaceFormat = create_structure_copy(obj.surfaceFormat, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceFormatKHR create_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFormatKHR result { };
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.colorSpace = create_structure_copy(obj.colorSpace, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveInfoEXT create_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFullScreenExclusiveInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.fullScreenExclusive = create_structure_copy(obj.fullScreenExclusive, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveWin32InfoEXT create_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFullScreenExclusiveWin32InfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.hmonitor = create_structure_copy(obj.hmonitor, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceProtectedCapabilitiesKHR create_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceProtectedCapabilitiesKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.supportsProtected = create_structure_copy(obj.supportsProtected, pAllocationCallbacks);
    return result;
}

template <>
VkSwapchainCounterCreateInfoEXT create_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainCounterCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.surfaceCounters = create_structure_copy(obj.surfaceCounters, pAllocationCallbacks);
    return result;
}

template <>
VkSwapchainCreateInfoKHR create_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.surface = obj.surface;
    result.minImageCount = create_structure_copy(obj.minImageCount, pAllocationCallbacks);
    result.imageFormat = create_structure_copy(obj.imageFormat, pAllocationCallbacks);
    result.imageColorSpace = create_structure_copy(obj.imageColorSpace, pAllocationCallbacks);
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocationCallbacks);
    result.imageArrayLayers = create_structure_copy(obj.imageArrayLayers, pAllocationCallbacks);
    result.imageUsage = create_structure_copy(obj.imageUsage, pAllocationCallbacks);
    result.imageSharingMode = create_structure_copy(obj.imageSharingMode, pAllocationCallbacks);
    result.queueFamilyIndexCount = create_structure_copy(obj.queueFamilyIndexCount, pAllocationCallbacks);
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    result.preTransform = create_structure_copy(obj.preTransform, pAllocationCallbacks);
    result.compositeAlpha = create_structure_copy(obj.compositeAlpha, pAllocationCallbacks);
    result.presentMode = create_structure_copy(obj.presentMode, pAllocationCallbacks);
    result.clipped = create_structure_copy(obj.clipped, pAllocationCallbacks);
    result.oldSwapchain = obj.oldSwapchain;
    return result;
}

template <>
VkSwapchainDisplayNativeHdrCreateInfoAMD create_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainDisplayNativeHdrCreateInfoAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.localDimmingEnable = create_structure_copy(obj.localDimmingEnable, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkSwapchainImageCreateInfoANDROID create_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainImageCreateInfoANDROID result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.usage = create_structure_copy(obj.usage, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkTextureLODGatherFormatPropertiesAMD create_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTextureLODGatherFormatPropertiesAMD result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.supportsTextureGatherLODBiasAMD = create_structure_copy(obj.supportsTextureGatherLODBiasAMD, pAllocationCallbacks);
    return result;
}

template <>
VkTimelineSemaphoreSubmitInfo create_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTimelineSemaphoreSubmitInfo result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.waitSemaphoreValueCount = create_structure_copy(obj.waitSemaphoreValueCount, pAllocationCallbacks);
    result.pWaitSemaphoreValues = create_dynamic_array_copy(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    result.signalSemaphoreValueCount = create_structure_copy(obj.signalSemaphoreValueCount, pAllocationCallbacks);
    result.pSignalSemaphoreValues = create_dynamic_array_copy(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTraceRaysIndirectCommandKHR create_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTraceRaysIndirectCommandKHR result { };
    result.width = create_structure_copy(obj.width, pAllocationCallbacks);
    result.height = create_structure_copy(obj.height, pAllocationCallbacks);
    result.depth = create_structure_copy(obj.depth, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTransformMatrixKHR create_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTransformMatrixKHR result { };
    create_static_array_copy<34>(result.matrix, obj.matrix);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif // DYNAMIC_STATIC_VK_STRUCTURE_MANUAL_IMPLEMENTATION

template <>
VkValidationCacheCreateInfoEXT create_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationCacheCreateInfoEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.initialDataSize = create_structure_copy(obj.initialDataSize, pAllocationCallbacks);
    result.pInitialData = create_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
    return result;
}

template <>
VkValidationFeaturesEXT create_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationFeaturesEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.enabledValidationFeatureCount = create_structure_copy(obj.enabledValidationFeatureCount, pAllocationCallbacks);
    result.pEnabledValidationFeatures = create_dynamic_array_copy(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, pAllocationCallbacks);
    result.disabledValidationFeatureCount = create_structure_copy(obj.disabledValidationFeatureCount, pAllocationCallbacks);
    result.pDisabledValidationFeatures = create_dynamic_array_copy(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkValidationFlagsEXT create_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationFlagsEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.disabledValidationCheckCount = create_structure_copy(obj.disabledValidationCheckCount, pAllocationCallbacks);
    result.pDisabledValidationChecks = create_dynamic_array_copy(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, pAllocationCallbacks);
    return result;
}

template <>
VkVertexInputAttributeDescription create_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputAttributeDescription result { };
    result.location = create_structure_copy(obj.location, pAllocationCallbacks);
    result.binding = create_structure_copy(obj.binding, pAllocationCallbacks);
    result.format = create_structure_copy(obj.format, pAllocationCallbacks);
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    return result;
}

template <>
VkVertexInputBindingDescription create_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputBindingDescription result { };
    result.binding = create_structure_copy(obj.binding, pAllocationCallbacks);
    result.stride = create_structure_copy(obj.stride, pAllocationCallbacks);
    result.inputRate = create_structure_copy(obj.inputRate, pAllocationCallbacks);
    return result;
}

template <>
VkVertexInputBindingDivisorDescriptionEXT create_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputBindingDivisorDescriptionEXT result { };
    result.binding = create_structure_copy(obj.binding, pAllocationCallbacks);
    result.divisor = create_structure_copy(obj.divisor, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
VkViSurfaceCreateInfoNN create_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViSurfaceCreateInfoNN result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
VkViewport create_structure_copy<VkViewport>(const VkViewport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewport result { };
    result.x = create_structure_copy(obj.x, pAllocationCallbacks);
    result.y = create_structure_copy(obj.y, pAllocationCallbacks);
    result.width = create_structure_copy(obj.width, pAllocationCallbacks);
    result.height = create_structure_copy(obj.height, pAllocationCallbacks);
    result.minDepth = create_structure_copy(obj.minDepth, pAllocationCallbacks);
    result.maxDepth = create_structure_copy(obj.maxDepth, pAllocationCallbacks);
    return result;
}

template <>
VkViewportSwizzleNV create_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewportSwizzleNV result { };
    result.x = create_structure_copy(obj.x, pAllocationCallbacks);
    result.y = create_structure_copy(obj.y, pAllocationCallbacks);
    result.z = create_structure_copy(obj.z, pAllocationCallbacks);
    result.w = create_structure_copy(obj.w, pAllocationCallbacks);
    return result;
}

template <>
VkViewportWScalingNV create_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewportWScalingNV result { };
    result.xcoeff = create_structure_copy(obj.xcoeff, pAllocationCallbacks);
    result.ycoeff = create_structure_copy(obj.ycoeff, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
VkWaylandSurfaceCreateInfoKHR create_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWaylandSurfaceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.display = obj.display;
    result.surface = obj.surface;
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoKHR create_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32KeyedMutexAcquireReleaseInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.acquireCount = create_structure_copy(obj.acquireCount, pAllocationCallbacks);
    result.pAcquireSyncs = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    result.pAcquireKeys = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    result.pAcquireTimeouts = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeouts, pAllocationCallbacks);
    result.releaseCount = create_structure_copy(obj.releaseCount, pAllocationCallbacks);
    result.pReleaseSyncs = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    result.pReleaseKeys = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoNV create_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32KeyedMutexAcquireReleaseInfoNV result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.acquireCount = create_structure_copy(obj.acquireCount, pAllocationCallbacks);
    result.pAcquireSyncs = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    result.pAcquireKeys = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    result.pAcquireTimeoutMilliseconds = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, pAllocationCallbacks);
    result.releaseCount = create_structure_copy(obj.releaseCount, pAllocationCallbacks);
    result.pReleaseSyncs = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    result.pReleaseKeys = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32SurfaceCreateInfoKHR create_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32SurfaceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.hinstance = create_structure_copy(obj.hinstance, pAllocationCallbacks);
    result.hwnd = create_structure_copy(obj.hwnd, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkWriteDescriptorSet create_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSet result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.dstSet = obj.dstSet;
    result.dstBinding = create_structure_copy(obj.dstBinding, pAllocationCallbacks);
    result.dstArrayElement = create_structure_copy(obj.dstArrayElement, pAllocationCallbacks);
    result.descriptorCount = create_structure_copy(obj.descriptorCount, pAllocationCallbacks);
    result.descriptorType = create_structure_copy(obj.descriptorType, pAllocationCallbacks);
    result.pImageInfo = create_dynamic_array_copy(obj.descriptorCount, obj.pImageInfo, pAllocationCallbacks);
    result.pBufferInfo = create_dynamic_array_copy(obj.descriptorCount, obj.pBufferInfo, pAllocationCallbacks);
    result.pTexelBufferView = create_dynamic_array_copy(obj.descriptorCount, obj.pTexelBufferView, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkWriteDescriptorSetAccelerationStructureKHR create_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSetAccelerationStructureKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.accelerationStructureCount = create_structure_copy(obj.accelerationStructureCount, pAllocationCallbacks);
    result.pAccelerationStructures = create_dynamic_array_copy(obj.accelerationStructureCount, obj.pAccelerationStructures, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkWriteDescriptorSetInlineUniformBlockEXT create_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSetInlineUniformBlockEXT result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.dataSize = create_structure_copy(obj.dataSize, pAllocationCallbacks);
    result.pData = create_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkXYColorEXT create_structure_copy<VkXYColorEXT>(const VkXYColorEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXYColorEXT result { };
    result.x = create_structure_copy(obj.x, pAllocationCallbacks);
    result.y = create_structure_copy(obj.y, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
VkXcbSurfaceCreateInfoKHR create_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXcbSurfaceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.connection = obj.connection;
    result.window = create_structure_copy(obj.window, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
VkXlibSurfaceCreateInfoKHR create_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXlibSurfaceCreateInfoKHR result { };
    result.sType = create_structure_copy(obj.sType, pAllocationCallbacks);
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocationCallbacks);
    result.flags = create_structure_copy(obj.flags, pAllocationCallbacks);
    result.dpy = obj.dpy;
    result.window = create_structure_copy(obj.window, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void* create_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks)
{
    if (pNext) {
        switch (*(VkStructureType*)pNext) {
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureBuildGeometryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureCreateGeometryTypeInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureDeviceAddressInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureGeometryAabbsDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureGeometryInstancesDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureGeometryKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureGeometryTrianglesDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureMemoryRequirementsInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureMemoryRequirementsInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR: {
            return create_dynamic_array_copy(1, (const VkAccelerationStructureVersionKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkAcquireNextImageInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkAcquireProfilingLockInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkBindAccelerationStructureMemoryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkBindImageMemorySwapchainInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkBufferDeviceAddressCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkCalibratedTimestampInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: {
            return create_dynamic_array_copy(1, (const VkCheckpointDataNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkCommandBufferInheritanceConditionalRenderingInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
            return create_dynamic_array_copy(1, (const VkCommandBufferInheritanceRenderPassTransformInfoQCOM*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkConditionalRenderingBeginInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (const VkCooperativeMatrixPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkCopyAccelerationStructureInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkCopyAccelerationStructureToMemoryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkCopyMemoryToAccelerationStructureInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugMarkerMarkerInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugMarkerObjectNameInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugMarkerObjectTagInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugReportCallbackCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugUtilsLabelEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugUtilsMessengerCallbackDataEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugUtilsMessengerCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugUtilsObjectNameInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDebugUtilsObjectTagInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkDedicatedAllocationBufferCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkDedicatedAllocationImageCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkDedicatedAllocationMemoryAllocateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkDeferredOperationInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDescriptorPoolInlineUniformBlockCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkDeviceDiagnosticsConfigCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDeviceEventInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: {
            return create_dynamic_array_copy(1, (const VkDeviceGroupPresentCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkDeviceGroupPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkDeviceGroupSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
            return create_dynamic_array_copy(1, (const VkDeviceMemoryOverallocationCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDeviceQueueGlobalPriorityCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDisplayEventInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplayModeCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplayModeProperties2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
            return create_dynamic_array_copy(1, (const VkDisplayNativeHdrSurfaceCapabilitiesAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplayPlaneCapabilities2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplayPlaneInfo2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplayPlaneProperties2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkDisplayPowerInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplayPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplayProperties2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkDisplaySurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkDrmFormatModifierPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
            return create_dynamic_array_copy(1, (const VkDrmFormatModifierPropertiesListEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkExportFenceWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkExportMemoryAllocateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkExportMemoryWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkExportMemoryWin32HandleInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkExportSemaphoreWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
            return create_dynamic_array_copy(1, (const VkExternalFormatANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkExternalMemoryImageCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkFenceGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkFenceGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkFilterCubicImageViewImageFormatPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: {
            return create_dynamic_array_copy(1, (const VkFramebufferMixedSamplesCombinationNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkGeneratedCommandsInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkGeneratedCommandsMemoryRequirementsInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV: {
            return create_dynamic_array_copy(1, (const VkGeometryNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: {
            return create_dynamic_array_copy(1, (const VkGeometryTrianglesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkGraphicsPipelineShaderGroupsCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkGraphicsShaderGroupCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: {
            return create_dynamic_array_copy(1, (const VkHdrMetadataEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkHeadlessSurfaceCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkImageDrmFormatModifierExplicitCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkImageDrmFormatModifierListCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkImageDrmFormatModifierPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkImageSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX: {
            return create_dynamic_array_copy(1, (const VkImageViewHandleInfoNVX*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkImportFenceFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkImportFenceWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkImportMemoryFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkImportMemoryHostPointerInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkImportMemoryWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkImportMemoryWin32HandleInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkImportSemaphoreFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkImportSemaphoreWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkIndirectCommandsLayoutCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: {
            return create_dynamic_array_copy(1, (const VkIndirectCommandsLayoutTokenNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: {
            return create_dynamic_array_copy(1, (const VkInitializePerformanceApiInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (const VkMemoryFdPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkMemoryGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkMemoryGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkMemoryHostPointerPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkMemoryPriorityAllocateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (const VkMemoryWin32HandlePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkMetalSurfaceCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkMultisamplePropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID: {
            return create_dynamic_array_copy(1, (const VkNativeBufferANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: {
            return create_dynamic_array_copy(1, (const VkPerformanceConfigurationAcquireInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: {
            return create_dynamic_array_copy(1, (const VkPerformanceCounterDescriptionKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: {
            return create_dynamic_array_copy(1, (const VkPerformanceCounterKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: {
            return create_dynamic_array_copy(1, (const VkPerformanceMarkerInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: {
            return create_dynamic_array_copy(1, (const VkPerformanceOverrideInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkPerformanceQuerySubmitInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: {
            return create_dynamic_array_copy(1, (const VkPerformanceStreamMarkerInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceCoherentMemoryFeaturesAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceConditionalRenderingFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceCooperativeMatrixFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceCooperativeMatrixPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceCornerSampledImageFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceCoverageReductionModeFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceDepthClipEnableFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceDiagnosticsConfigFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceDiscardRectanglePropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceExclusiveScissorFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceImageDrmFormatModifierInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceImageViewImageFormatInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceInlineUniformBlockFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceInlineUniformBlockPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceLineRasterizationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceLineRasterizationPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceMemoryBudgetPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceMemoryPriorityFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceMeshShaderFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceMeshShaderPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDevicePerformanceQueryFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDevicePerformanceQueryPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID: {
            return create_dynamic_array_copy(1, (const VkPhysicalDevicePresentationPropertiesANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDevicePushDescriptorPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceRayTracingPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceSampleLocationsPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShaderClockFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShaderCoreProperties2AMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShaderCorePropertiesAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShaderImageFootprintFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShadingRateImageFeaturesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceShadingRateImagePropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceSurfaceInfo2KHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceToolPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceTransformFeedbackFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceTransformFeedbackPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineColorBlendAdvancedStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
            return create_dynamic_array_copy(1, (const VkPipelineCompilerControlCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineCoverageModulationStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineCoverageReductionStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineCoverageToColorStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineCreationFeedbackCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineDiscardRectangleStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkPipelineExecutableInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: {
            return create_dynamic_array_copy(1, (const VkPipelineExecutableInternalRepresentationKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (const VkPipelineExecutablePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: {
            return create_dynamic_array_copy(1, (const VkPipelineExecutableStatisticKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkPipelineInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkPipelineLibraryCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineRasterizationConservativeStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineRasterizationDepthClipStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineRasterizationLineStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
            return create_dynamic_array_copy(1, (const VkPipelineRasterizationStateRasterizationOrderAMD*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineRasterizationStateStreamCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineRepresentativeFragmentTestStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineSampleLocationsStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkPipelineVertexInputDivisorStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineViewportExclusiveScissorStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineViewportShadingRateImageStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineViewportSwizzleStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkPipelineViewportWScalingStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
            return create_dynamic_array_copy(1, (const VkPresentFrameTokenGGP*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
            return create_dynamic_array_copy(1, (const VkPresentRegionsKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
            return create_dynamic_array_copy(1, (const VkPresentTimesInfoGOOGLE*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL: {
            return create_dynamic_array_copy(1, (const VkQueryPoolCreateInfoINTEL*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkQueryPoolPerformanceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (const VkQueueFamilyCheckpointPropertiesNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkRayTracingPipelineCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkRayTracingPipelineCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkRayTracingPipelineInterfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkRayTracingShaderGroupCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkRayTracingShaderGroupCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkRenderPassFragmentDensityMapCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkRenderPassSampleLocationsBeginInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
            return create_dynamic_array_copy(1, (const VkRenderPassTransformBeginInfoQCOM*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkSampleLocationsInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkSemaphoreGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkSemaphoreGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkShaderModuleValidationCacheCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
            return create_dynamic_array_copy(1, (const VkSharedPresentSurfaceCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: {
            return create_dynamic_array_copy(1, (const VkStreamDescriptorSurfaceCreateInfoGGP*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: {
            return create_dynamic_array_copy(1, (const VkSurfaceCapabilities2EXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: {
            return create_dynamic_array_copy(1, (const VkSurfaceCapabilities2KHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
            return create_dynamic_array_copy(1, (const VkSurfaceCapabilitiesFullScreenExclusiveEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: {
            return create_dynamic_array_copy(1, (const VkSurfaceFormat2KHR*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkSurfaceFullScreenExclusiveInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkSurfaceFullScreenExclusiveWin32InfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
            return create_dynamic_array_copy(1, (const VkSurfaceProtectedCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkSwapchainCounterCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
            return create_dynamic_array_copy(1, (const VkSwapchainDisplayNativeHdrCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID: {
            return create_dynamic_array_copy(1, (const VkSwapchainImageCreateInfoANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (const VkValidationCacheCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (const VkValidationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
            return create_dynamic_array_copy(1, (const VkValidationFlagsEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_VI_NN
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: {
            return create_dynamic_array_copy(1, (const VkViSurfaceCreateInfoNN*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_VI_NN
        #ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkWaylandSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WAYLAND_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkWin32KeyedMutexAcquireReleaseInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
            return create_dynamic_array_copy(1, (const VkWin32KeyedMutexAcquireReleaseInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkWin32SurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
            return create_dynamic_array_copy(1, (const VkWriteDescriptorSetAccelerationStructureKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: {
            return create_dynamic_array_copy(1, (const VkWriteDescriptorSetInlineUniformBlockEXT*)pNext, pAllocationCallbacks);
        } break;
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkXcbSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XCB_KHR
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (const VkXlibSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_APPLICATION_INFO: {
            return create_dynamic_array_copy(1, (const VkApplicationInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkInstanceCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkEventCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkQueryPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkBufferCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkBufferViewCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkImageCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkImageViewCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkShaderModuleCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineCacheCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineShaderStageCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineVertexInputStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkDeviceQueueCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineInputAssemblyStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineTessellationStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineViewportStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineRasterizationStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineMultisampleStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineDepthStencilStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineColorBlendStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineDynamicStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkGraphicsPipelineCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkComputePipelineCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkDeviceCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkPipelineLayoutCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkSamplerCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkDescriptorSetLayoutCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkDescriptorPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (const VkDescriptorSetAllocateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: {
            return create_dynamic_array_copy(1, (const VkWriteDescriptorSet*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: {
            return create_dynamic_array_copy(1, (const VkCopyDescriptorSet*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkFramebufferCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkRenderPassCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkCommandPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SUBMIT_INFO: {
            return create_dynamic_array_copy(1, (const VkSubmitInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (const VkCommandBufferAllocateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: {
            return create_dynamic_array_copy(1, (const VkCommandBufferInheritanceInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (const VkCommandBufferBeginInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (const VkRenderPassBeginInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: {
            return create_dynamic_array_copy(1, (const VkBufferMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: {
            return create_dynamic_array_copy(1, (const VkImageMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER: {
            return create_dynamic_array_copy(1, (const VkMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (const VkMemoryAllocateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: {
            return create_dynamic_array_copy(1, (const VkMappedMemoryRange*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: {
            return create_dynamic_array_copy(1, (const VkBindSparseInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkFenceCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (const VkSemaphoreCreateInfo*)pNext, pAllocationCallbacks);
        } break;
        default: {
        } break;
        }
    }
    return nullptr;
}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
