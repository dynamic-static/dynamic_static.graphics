
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/create-structure-copy.hpp

namespace dst {
namespace vk {

////////////////////////////////////////////////////////////////////////////////
// NOTE : The following functions are manually implemented
#if 0
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureInstanceKHR create_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureVersionKHR create_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkClearColorValue create_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkClearValue create_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPerformanceCounterResultKHR create_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPerformanceValueDataINTEL create_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPipelineExecutableStatisticValueKHR create_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkPipelineMultisampleStateCreateInfo create_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);

template <>
VkShaderModuleCreateInfo create_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks);

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTransformMatrixKHR create_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks);
#endif // VK_ENABLE_BETA_EXTENSIONS
#endif
////////////////////////////////////////////////////////////////////////////////

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAabbPositionsKHR create_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAabbPositionsKHR result { };
    result.minX = obj.minX;
    ,
    result.minY = obj.minY;
    ,
    result.minZ = obj.minZ;
    ,
    result.maxX = obj.maxX;
    ,
    result.maxY = obj.maxY;
    ,
    result.maxZ = obj.maxZ;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildGeometryInfoKHR create_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureBuildGeometryInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    ,
    result.flags = obj.flags;
    ,
    result.update = obj.update;
    ,
    result.srcAccelerationStructure = obj.srcAccelerationStructure;
    ,
    result.dstAccelerationStructure = obj.dstAccelerationStructure;
    ,
    result.geometryArrayOfPointers = obj.geometryArrayOfPointers;
    ,
    result.geometryCount = obj.geometryCount;
    ,
    result.ppGeometries = create_dynamic_array_copy(1, obj.ppGeometries, pAllocationCallbacks);
    ,
    result.scratchData = create_structure_copy(obj.scratchData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureBuildOffsetInfoKHR create_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureBuildOffsetInfoKHR result { };
    result.primitiveCount = obj.primitiveCount;
    ,
    result.primitiveOffset = obj.primitiveOffset;
    ,
    result.firstVertex = obj.firstVertex;
    ,
    result.transformOffset = obj.transformOffset;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateGeometryTypeInfoKHR create_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateGeometryTypeInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.geometryType = obj.geometryType;
    ,
    result.maxPrimitiveCount = obj.maxPrimitiveCount;
    ,
    result.indexType = obj.indexType;
    ,
    result.maxVertexCount = obj.maxVertexCount;
    ,
    result.vertexFormat = obj.vertexFormat;
    ,
    result.allowsTransforms = obj.allowsTransforms;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureCreateInfoKHR create_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.compactedSize = obj.compactedSize;
    ,
    result.type = obj.type;
    ,
    result.flags = obj.flags;
    ,
    result.maxGeometryCount = obj.maxGeometryCount;
    ,
    result.pGeometryInfos = create_dynamic_array_copy(obj.maxGeometryCount, obj.pGeometryInfos, pAllocationCallbacks);
    ,
    result.deviceAddress = obj.deviceAddress;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureCreateInfoNV create_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.compactedSize = obj.compactedSize;
    ,
    result.info = create_structure_copy(obj.info, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureDeviceAddressInfoKHR create_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureDeviceAddressInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.accelerationStructure = obj.accelerationStructure;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryAabbsDataKHR create_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryAabbsDataKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.data = create_structure_copy(obj.data, pAllocationCallbacks);
    ,
    result.stride = obj.stride;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryDataKHR create_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryDataKHR result { };
    result.triangles = create_structure_copy(obj.triangles, pAllocationCallbacks);
    ,
    result.aabbs = create_structure_copy(obj.aabbs, pAllocationCallbacks);
    ,
    result.instances = create_structure_copy(obj.instances, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryInstancesDataKHR create_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryInstancesDataKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.arrayOfPointers = obj.arrayOfPointers;
    ,
    result.data = create_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryKHR create_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.geometryType = obj.geometryType;
    ,
    result.geometry = create_structure_copy(obj.geometry, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureGeometryTrianglesDataKHR create_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureGeometryTrianglesDataKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.vertexFormat = obj.vertexFormat;
    ,
    result.vertexData = create_structure_copy(obj.vertexData, pAllocationCallbacks);
    ,
    result.vertexStride = obj.vertexStride;
    ,
    result.indexType = obj.indexType;
    ,
    result.indexData = create_structure_copy(obj.indexData, pAllocationCallbacks);
    ,
    result.transformData = create_structure_copy(obj.transformData, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureInfoNV create_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    ,
    result.flags = obj.flags;
    ,
    result.instanceCount = obj.instanceCount;
    ,
    result.geometryCount = obj.geometryCount;
    ,
    result.pGeometries = create_dynamic_array_copy(obj.geometryCount, obj.pGeometries, pAllocationCallbacks);
    return result;
}



#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAccelerationStructureMemoryRequirementsInfoKHR create_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureMemoryRequirementsInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    ,
    result.buildType = obj.buildType;
    ,
    result.accelerationStructure = obj.accelerationStructure;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkAccelerationStructureMemoryRequirementsInfoNV create_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAccelerationStructureMemoryRequirementsInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    ,
    result.accelerationStructure = obj.accelerationStructure;
    return result;
}


template <>
VkAcquireNextImageInfoKHR create_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAcquireNextImageInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.swapchain = obj.swapchain;
    ,
    result.timeout = obj.timeout;
    ,
    result.semaphore = obj.semaphore;
    ,
    result.fence = obj.fence;
    ,
    result.deviceMask = obj.deviceMask;
    return result;
}

template <>
VkAcquireProfilingLockInfoKHR create_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAcquireProfilingLockInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.timeout = obj.timeout;
    return result;
}

template <>
VkAllocationCallbacks create_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAllocationCallbacks result { };
    result.pUserData = obj.pUserData;
    ,
    result.pfnAllocation = obj.pfnAllocation;
    ,
    result.pfnReallocation = obj.pfnReallocation;
    ,
    result.pfnFree = obj.pfnFree;
    ,
    result.pfnInternalAllocation = obj.pfnInternalAllocation;
    ,
    result.pfnInternalFree = obj.pfnInternalFree;
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferFormatPropertiesANDROID create_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferFormatPropertiesANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.format = obj.format;
    ,
    result.externalFormat = obj.externalFormat;
    ,
    result.formatFeatures = obj.formatFeatures;
    ,
    result.samplerYcbcrConversionComponents = create_structure_copy(obj.samplerYcbcrConversionComponents, pAllocationCallbacks);
    ,
    result.suggestedYcbcrModel = obj.suggestedYcbcrModel;
    ,
    result.suggestedYcbcrRange = obj.suggestedYcbcrRange;
    ,
    result.suggestedXChromaOffset = obj.suggestedXChromaOffset;
    ,
    result.suggestedYChromaOffset = obj.suggestedYChromaOffset;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferPropertiesANDROID create_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferPropertiesANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.allocationSize = obj.allocationSize;
    ,
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferUsageANDROID create_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidHardwareBufferUsageANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.androidHardwareBufferUsage = obj.androidHardwareBufferUsage;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidSurfaceCreateInfoKHR create_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAndroidSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkApplicationInfo create_structure_copy<VkApplicationInfo>(const VkApplicationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkApplicationInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pApplicationName = create_dynamic_string_copy(obj.pApplicationName, pAllocationCallbacks);
    ,
    result.applicationVersion = obj.applicationVersion;
    ,
    result.pEngineName = create_dynamic_string_copy(obj.pEngineName, pAllocationCallbacks);
    ,
    result.engineVersion = obj.engineVersion;
    ,
    result.apiVersion = obj.apiVersion;
    return result;
}

template <>
VkAttachmentDescription create_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescription result { };
    result.flags = obj.flags;
    ,
    result.format = obj.format;
    ,
    result.samples = obj.samples;
    ,
    result.loadOp = obj.loadOp;
    ,
    result.storeOp = obj.storeOp;
    ,
    result.stencilLoadOp = obj.stencilLoadOp;
    ,
    result.stencilStoreOp = obj.stencilStoreOp;
    ,
    result.initialLayout = obj.initialLayout;
    ,
    result.finalLayout = obj.finalLayout;
    return result;
}

template <>
VkAttachmentDescription2 create_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescription2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.format = obj.format;
    ,
    result.samples = obj.samples;
    ,
    result.loadOp = obj.loadOp;
    ,
    result.storeOp = obj.storeOp;
    ,
    result.stencilLoadOp = obj.stencilLoadOp;
    ,
    result.stencilStoreOp = obj.stencilStoreOp;
    ,
    result.initialLayout = obj.initialLayout;
    ,
    result.finalLayout = obj.finalLayout;
    return result;
}


template <>
VkAttachmentDescriptionStencilLayout create_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentDescriptionStencilLayout result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.stencilInitialLayout = obj.stencilInitialLayout;
    ,
    result.stencilFinalLayout = obj.stencilFinalLayout;
    return result;
}


template <>
VkAttachmentReference create_structure_copy<VkAttachmentReference>(const VkAttachmentReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReference result { };
    result.attachment = obj.attachment;
    ,
    result.layout = obj.layout;
    return result;
}

template <>
VkAttachmentReference2 create_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReference2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.attachment = obj.attachment;
    ,
    result.layout = obj.layout;
    ,
    result.aspectMask = obj.aspectMask;
    return result;
}


template <>
VkAttachmentReferenceStencilLayout create_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentReferenceStencilLayout result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.stencilLayout = obj.stencilLayout;
    return result;
}


template <>
VkAttachmentSampleLocationsEXT create_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkAttachmentSampleLocationsEXT result { };
    result.attachmentIndex = obj.attachmentIndex;
    ,
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkBaseInStructure create_structure_copy<VkBaseInStructure>(const VkBaseInStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBaseInStructure result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

template <>
VkBaseOutStructure create_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBaseOutStructure result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkBindAccelerationStructureMemoryInfoKHR create_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindAccelerationStructureMemoryInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.accelerationStructure = obj.accelerationStructure;
    ,
    result.memory = obj.memory;
    ,
    result.memoryOffset = obj.memoryOffset;
    ,
    result.deviceIndexCount = obj.deviceIndexCount;
    ,
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkBindBufferMemoryDeviceGroupInfo create_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindBufferMemoryDeviceGroupInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceIndexCount = obj.deviceIndexCount;
    ,
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    return result;
}


template <>
VkBindBufferMemoryInfo create_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindBufferMemoryInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.buffer = obj.buffer;
    ,
    result.memory = obj.memory;
    ,
    result.memoryOffset = obj.memoryOffset;
    return result;
}


template <>
VkBindImageMemoryDeviceGroupInfo create_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemoryDeviceGroupInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceIndexCount = obj.deviceIndexCount;
    ,
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocationCallbacks);
    ,
    result.splitInstanceBindRegionCount = obj.splitInstanceBindRegionCount;
    ,
    result.pSplitInstanceBindRegions = create_dynamic_array_copy(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions, pAllocationCallbacks);
    return result;
}


template <>
VkBindImageMemoryInfo create_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemoryInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.image = obj.image;
    ,
    result.memory = obj.memory;
    ,
    result.memoryOffset = obj.memoryOffset;
    return result;
}


template <>
VkBindImageMemorySwapchainInfoKHR create_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImageMemorySwapchainInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.swapchain = obj.swapchain;
    ,
    result.imageIndex = obj.imageIndex;
    return result;
}

template <>
VkBindImagePlaneMemoryInfo create_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindImagePlaneMemoryInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.planeAspect = obj.planeAspect;
    return result;
}


template <>
VkBindIndexBufferIndirectCommandNV create_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindIndexBufferIndirectCommandNV result { };
    result.bufferAddress = obj.bufferAddress;
    ,
    result.size = obj.size;
    ,
    result.indexType = obj.indexType;
    return result;
}

template <>
VkBindShaderGroupIndirectCommandNV create_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindShaderGroupIndirectCommandNV result { };
    result.groupIndex = obj.groupIndex;
    return result;
}

template <>
VkBindSparseInfo create_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindSparseInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    ,
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    ,
    result.bufferBindCount = obj.bufferBindCount;
    ,
    result.pBufferBinds = create_dynamic_array_copy(obj.bufferBindCount, obj.pBufferBinds, pAllocationCallbacks);
    ,
    result.imageOpaqueBindCount = obj.imageOpaqueBindCount;
    ,
    result.pImageOpaqueBinds = create_dynamic_array_copy(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds, pAllocationCallbacks);
    ,
    result.imageBindCount = obj.imageBindCount;
    ,
    result.pImageBinds = create_dynamic_array_copy(obj.imageBindCount, obj.pImageBinds, pAllocationCallbacks);
    ,
    result.signalSemaphoreCount = obj.signalSemaphoreCount;
    ,
    result.pSignalSemaphores = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
    return result;
}

template <>
VkBindVertexBufferIndirectCommandNV create_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBindVertexBufferIndirectCommandNV result { };
    result.bufferAddress = obj.bufferAddress;
    ,
    result.size = obj.size;
    ,
    result.stride = obj.stride;
    return result;
}

template <>
VkBufferCopy create_structure_copy<VkBufferCopy>(const VkBufferCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferCopy result { };
    result.srcOffset = obj.srcOffset;
    ,
    result.dstOffset = obj.dstOffset;
    ,
    result.size = obj.size;
    return result;
}

template <>
VkBufferCreateInfo create_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.size = obj.size;
    ,
    result.usage = obj.usage;
    ,
    result.sharingMode = obj.sharingMode;
    ,
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    ,
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkBufferDeviceAddressCreateInfoEXT create_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferDeviceAddressCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceAddress = obj.deviceAddress;
    return result;
}

template <>
VkBufferDeviceAddressInfo create_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferDeviceAddressInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.buffer = obj.buffer;
    return result;
}



template <>
VkBufferImageCopy create_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferImageCopy result { };
    result.bufferOffset = obj.bufferOffset;
    ,
    result.bufferRowLength = obj.bufferRowLength;
    ,
    result.bufferImageHeight = obj.bufferImageHeight;
    ,
    result.imageSubresource = create_structure_copy(obj.imageSubresource, pAllocationCallbacks);
    ,
    result.imageOffset = create_structure_copy(obj.imageOffset, pAllocationCallbacks);
    ,
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkBufferMemoryBarrier create_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferMemoryBarrier result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.srcAccessMask = obj.srcAccessMask;
    ,
    result.dstAccessMask = obj.dstAccessMask;
    ,
    result.srcQueueFamilyIndex = obj.srcQueueFamilyIndex;
    ,
    result.dstQueueFamilyIndex = obj.dstQueueFamilyIndex;
    ,
    result.buffer = obj.buffer;
    ,
    result.offset = obj.offset;
    ,
    result.size = obj.size;
    return result;
}

template <>
VkBufferMemoryRequirementsInfo2 create_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferMemoryRequirementsInfo2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.buffer = obj.buffer;
    return result;
}


template <>
VkBufferOpaqueCaptureAddressCreateInfo create_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferOpaqueCaptureAddressCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.opaqueCaptureAddress = obj.opaqueCaptureAddress;
    return result;
}


template <>
VkBufferViewCreateInfo create_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkBufferViewCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.buffer = obj.buffer;
    ,
    result.format = obj.format;
    ,
    result.offset = obj.offset;
    ,
    result.range = obj.range;
    return result;
}

template <>
VkCalibratedTimestampInfoEXT create_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCalibratedTimestampInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.timeDomain = obj.timeDomain;
    return result;
}

template <>
VkCheckpointDataNV create_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCheckpointDataNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.stage = obj.stage;
    ,
    result.pCheckpointMarker = obj.pCheckpointMarker;
    return result;
}

template <>
VkClearAttachment create_structure_copy<VkClearAttachment>(const VkClearAttachment& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearAttachment result { };
    result.aspectMask = obj.aspectMask;
    ,
    result.colorAttachment = obj.colorAttachment;
    ,
    result.clearValue = create_structure_copy(obj.clearValue, pAllocationCallbacks);
    return result;
}


template <>
VkClearDepthStencilValue create_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearDepthStencilValue result { };
    result.depth = obj.depth;
    ,
    result.stencil = obj.stencil;
    return result;
}

template <>
VkClearRect create_structure_copy<VkClearRect>(const VkClearRect& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkClearRect result { };
    result.rect = create_structure_copy(obj.rect, pAllocationCallbacks);
    ,
    result.baseArrayLayer = obj.baseArrayLayer;
    ,
    result.layerCount = obj.layerCount;
    return result;
}


template <>
VkCoarseSampleLocationNV create_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCoarseSampleLocationNV result { };
    result.pixelX = obj.pixelX;
    ,
    result.pixelY = obj.pixelY;
    ,
    result.sample = obj.sample;
    return result;
}

template <>
VkCoarseSampleOrderCustomNV create_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCoarseSampleOrderCustomNV result { };
    result.shadingRate = obj.shadingRate;
    ,
    result.sampleCount = obj.sampleCount;
    ,
    result.sampleLocationCount = obj.sampleLocationCount;
    ,
    result.pSampleLocations = create_dynamic_array_copy(obj.sampleLocationCount, obj.pSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferAllocateInfo create_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferAllocateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.commandPool = obj.commandPool;
    ,
    result.level = obj.level;
    ,
    result.commandBufferCount = obj.commandBufferCount;
    return result;
}

template <>
VkCommandBufferBeginInfo create_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferBeginInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pInheritanceInfo = create_dynamic_array_copy(1, obj.pInheritanceInfo, pAllocationCallbacks);
    return result;
}

template <>
VkCommandBufferInheritanceConditionalRenderingInfoEXT create_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceConditionalRenderingInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.conditionalRenderingEnable = obj.conditionalRenderingEnable;
    return result;
}

template <>
VkCommandBufferInheritanceInfo create_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.renderPass = obj.renderPass;
    ,
    result.subpass = obj.subpass;
    ,
    result.framebuffer = obj.framebuffer;
    ,
    result.occlusionQueryEnable = obj.occlusionQueryEnable;
    ,
    result.queryFlags = obj.queryFlags;
    ,
    result.pipelineStatistics = obj.pipelineStatistics;
    return result;
}

template <>
VkCommandBufferInheritanceRenderPassTransformInfoQCOM create_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.transform = obj.transform;
    ,
    result.renderArea = create_structure_copy(obj.renderArea, pAllocationCallbacks);
    return result;
}

template <>
VkCommandPoolCreateInfo create_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCommandPoolCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.queueFamilyIndex = obj.queueFamilyIndex;
    return result;
}

template <>
VkComponentMapping create_structure_copy<VkComponentMapping>(const VkComponentMapping& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkComponentMapping result { };
    result.r = obj.r;
    ,
    result.g = obj.g;
    ,
    result.b = obj.b;
    ,
    result.a = obj.a;
    return result;
}

template <>
VkComputePipelineCreateInfo create_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkComputePipelineCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.stage = create_structure_copy(obj.stage, pAllocationCallbacks);
    ,
    result.layout = obj.layout;
    ,
    result.basePipelineHandle = obj.basePipelineHandle;
    ,
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}

template <>
VkConditionalRenderingBeginInfoEXT create_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkConditionalRenderingBeginInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.buffer = obj.buffer;
    ,
    result.offset = obj.offset;
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkConformanceVersion create_structure_copy<VkConformanceVersion>(const VkConformanceVersion& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkConformanceVersion result { };
    result.major = obj.major;
    ,
    result.minor = obj.minor;
    ,
    result.subminor = obj.subminor;
    ,
    result.patch = obj.patch;
    return result;
}


template <>
VkCooperativeMatrixPropertiesNV create_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCooperativeMatrixPropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.MSize = obj.MSize;
    ,
    result.NSize = obj.NSize;
    ,
    result.KSize = obj.KSize;
    ,
    result.AType = obj.AType;
    ,
    result.BType = obj.BType;
    ,
    result.CType = obj.CType;
    ,
    result.DType = obj.DType;
    ,
    result.scope = obj.scope;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureInfoKHR create_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyAccelerationStructureInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.src = obj.src;
    ,
    result.dst = obj.dst;
    ,
    result.mode = obj.mode;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureToMemoryInfoKHR create_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyAccelerationStructureToMemoryInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.src = obj.src;
    ,
    result.dst = create_structure_copy(obj.dst, pAllocationCallbacks);
    ,
    result.mode = obj.mode;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkCopyDescriptorSet create_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyDescriptorSet result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.srcSet = obj.srcSet;
    ,
    result.srcBinding = obj.srcBinding;
    ,
    result.srcArrayElement = obj.srcArrayElement;
    ,
    result.dstSet = obj.dstSet;
    ,
    result.dstBinding = obj.dstBinding;
    ,
    result.dstArrayElement = obj.dstArrayElement;
    ,
    result.descriptorCount = obj.descriptorCount;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyMemoryToAccelerationStructureInfoKHR create_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkCopyMemoryToAccelerationStructureInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.src = create_structure_copy(obj.src, pAllocationCallbacks);
    ,
    result.dst = obj.dst;
    ,
    result.mode = obj.mode;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkD3D12FenceSubmitInfoKHR create_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkD3D12FenceSubmitInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.waitSemaphoreValuesCount = obj.waitSemaphoreValuesCount;
    ,
    result.pWaitSemaphoreValues = create_dynamic_array_copy(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    ,
    result.signalSemaphoreValuesCount = obj.signalSemaphoreValuesCount;
    ,
    result.pSignalSemaphoreValues = create_dynamic_array_copy(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkDebugMarkerMarkerInfoEXT create_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerMarkerInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pMarkerName = create_dynamic_string_copy(obj.pMarkerName, pAllocationCallbacks);
    ,
    create_static_array_copy<4>(result.color, obj.color, pAllocationCallbacks);
    return result;
}

template <>
VkDebugMarkerObjectNameInfoEXT create_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerObjectNameInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.objectType = obj.objectType;
    ,
    result.object = obj.object;
    ,
    result.pObjectName = create_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
    return result;
}

template <>
VkDebugMarkerObjectTagInfoEXT create_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugMarkerObjectTagInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.objectType = obj.objectType;
    ,
    result.object = obj.object;
    ,
    result.tagName = obj.tagName;
    ,
    result.tagSize = obj.tagSize;
    ,
    result.pTag = create_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
    return result;
}

template <>
VkDebugReportCallbackCreateInfoEXT create_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugReportCallbackCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pfnCallback = obj.pfnCallback;
    ,
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkDebugUtilsLabelEXT create_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsLabelEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pLabelName = create_dynamic_string_copy(obj.pLabelName, pAllocationCallbacks);
    ,
    create_static_array_copy<4>(result.color, obj.color, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsMessengerCallbackDataEXT create_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsMessengerCallbackDataEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pMessageIdName = create_dynamic_string_copy(obj.pMessageIdName, pAllocationCallbacks);
    ,
    result.messageIdNumber = obj.messageIdNumber;
    ,
    result.pMessage = create_dynamic_string_copy(obj.pMessage, pAllocationCallbacks);
    ,
    result.queueLabelCount = obj.queueLabelCount;
    ,
    result.pQueueLabels = create_dynamic_array_copy(obj.queueLabelCount, obj.pQueueLabels, pAllocationCallbacks);
    ,
    result.cmdBufLabelCount = obj.cmdBufLabelCount;
    ,
    result.pCmdBufLabels = create_dynamic_array_copy(obj.cmdBufLabelCount, obj.pCmdBufLabels, pAllocationCallbacks);
    ,
    result.objectCount = obj.objectCount;
    ,
    result.pObjects = create_dynamic_array_copy(obj.objectCount, obj.pObjects, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsMessengerCreateInfoEXT create_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsMessengerCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.messageSeverity = obj.messageSeverity;
    ,
    result.messageType = obj.messageType;
    ,
    result.pfnUserCallback = obj.pfnUserCallback;
    ,
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkDebugUtilsObjectNameInfoEXT create_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsObjectNameInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.objectType = obj.objectType;
    ,
    result.objectHandle = obj.objectHandle;
    ,
    result.pObjectName = create_dynamic_string_copy(obj.pObjectName, pAllocationCallbacks);
    return result;
}

template <>
VkDebugUtilsObjectTagInfoEXT create_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDebugUtilsObjectTagInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.objectType = obj.objectType;
    ,
    result.objectHandle = obj.objectHandle;
    ,
    result.tagName = obj.tagName;
    ,
    result.tagSize = obj.tagSize;
    ,
    result.pTag = create_dynamic_array_copy(obj.tagSize, obj.pTag, pAllocationCallbacks);
    return result;
}

template <>
VkDedicatedAllocationBufferCreateInfoNV create_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationBufferCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.dedicatedAllocation = obj.dedicatedAllocation;
    return result;
}

template <>
VkDedicatedAllocationImageCreateInfoNV create_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationImageCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.dedicatedAllocation = obj.dedicatedAllocation;
    return result;
}

template <>
VkDedicatedAllocationMemoryAllocateInfoNV create_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDedicatedAllocationMemoryAllocateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.image = obj.image;
    ,
    result.buffer = obj.buffer;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeferredOperationInfoKHR create_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeferredOperationInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.operationHandle = obj.operationHandle;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDescriptorBufferInfo create_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorBufferInfo result { };
    result.buffer = obj.buffer;
    ,
    result.offset = obj.offset;
    ,
    result.range = obj.range;
    return result;
}

template <>
VkDescriptorImageInfo create_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorImageInfo result { };
    result.sampler = obj.sampler;
    ,
    result.imageView = obj.imageView;
    ,
    result.imageLayout = obj.imageLayout;
    return result;
}

template <>
VkDescriptorPoolCreateInfo create_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.maxSets = obj.maxSets;
    ,
    result.poolSizeCount = obj.poolSizeCount;
    ,
    result.pPoolSizes = create_dynamic_array_copy(obj.poolSizeCount, obj.pPoolSizes, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorPoolInlineUniformBlockCreateInfoEXT create_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolInlineUniformBlockCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxInlineUniformBlockBindings = obj.maxInlineUniformBlockBindings;
    return result;
}

template <>
VkDescriptorPoolSize create_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorPoolSize result { };
    result.type = obj.type;
    ,
    result.descriptorCount = obj.descriptorCount;
    return result;
}

template <>
VkDescriptorSetAllocateInfo create_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetAllocateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.descriptorPool = obj.descriptorPool;
    ,
    result.descriptorSetCount = obj.descriptorSetCount;
    ,
    result.pSetLayouts = create_dynamic_array_copy(obj.descriptorSetCount, obj.pSetLayouts, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutBinding create_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutBinding result { };
    result.binding = obj.binding;
    ,
    result.descriptorType = obj.descriptorType;
    ,
    result.descriptorCount = obj.descriptorCount;
    ,
    result.stageFlags = obj.stageFlags;
    ,
    result.pImmutableSamplers = create_dynamic_array_copy(obj.descriptorCount, obj.pImmutableSamplers, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutBindingFlagsCreateInfo create_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutBindingFlagsCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.bindingCount = obj.bindingCount;
    ,
    result.pBindingFlags = create_dynamic_array_copy(obj.bindingCount, obj.pBindingFlags, pAllocationCallbacks);
    return result;
}


template <>
VkDescriptorSetLayoutCreateInfo create_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.bindingCount = obj.bindingCount;
    ,
    result.pBindings = create_dynamic_array_copy(obj.bindingCount, obj.pBindings, pAllocationCallbacks);
    return result;
}

template <>
VkDescriptorSetLayoutSupport create_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetLayoutSupport result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.supported = obj.supported;
    return result;
}


template <>
VkDescriptorSetVariableDescriptorCountAllocateInfo create_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetVariableDescriptorCountAllocateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.descriptorSetCount = obj.descriptorSetCount;
    ,
    result.pDescriptorCounts = create_dynamic_array_copy(obj.descriptorSetCount, obj.pDescriptorCounts, pAllocationCallbacks);
    return result;
}


template <>
VkDescriptorSetVariableDescriptorCountLayoutSupport create_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorSetVariableDescriptorCountLayoutSupport result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxVariableDescriptorCount = obj.maxVariableDescriptorCount;
    return result;
}


template <>
VkDescriptorUpdateTemplateCreateInfo create_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorUpdateTemplateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.descriptorUpdateEntryCount = obj.descriptorUpdateEntryCount;
    ,
    result.pDescriptorUpdateEntries = create_dynamic_array_copy(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries, pAllocationCallbacks);
    ,
    result.templateType = obj.templateType;
    ,
    result.descriptorSetLayout = obj.descriptorSetLayout;
    ,
    result.pipelineBindPoint = obj.pipelineBindPoint;
    ,
    result.pipelineLayout = obj.pipelineLayout;
    ,
    result.set = obj.set;
    return result;
}


template <>
VkDescriptorUpdateTemplateEntry create_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDescriptorUpdateTemplateEntry result { };
    result.dstBinding = obj.dstBinding;
    ,
    result.dstArrayElement = obj.dstArrayElement;
    ,
    result.descriptorCount = obj.descriptorCount;
    ,
    result.descriptorType = obj.descriptorType;
    ,
    result.offset = obj.offset;
    ,
    result.stride = obj.stride;
    return result;
}


template <>
VkDeviceCreateInfo create_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.queueCreateInfoCount = obj.queueCreateInfoCount;
    ,
    result.pQueueCreateInfos = create_dynamic_array_copy(obj.queueCreateInfoCount, obj.pQueueCreateInfos, pAllocationCallbacks);
    ,
    result.enabledLayerCount = obj.enabledLayerCount;
    ,
    result.ppEnabledLayerNames = create_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    ,
    result.enabledExtensionCount = obj.enabledExtensionCount;
    ,
    result.ppEnabledExtensionNames = create_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
    ,
    result.pEnabledFeatures = create_dynamic_array_copy(1, obj.pEnabledFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceDiagnosticsConfigCreateInfoNV create_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceDiagnosticsConfigCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkDeviceEventInfoEXT create_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceEventInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceEvent = obj.deviceEvent;
    return result;
}

template <>
VkDeviceGroupBindSparseInfo create_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupBindSparseInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.resourceDeviceIndex = obj.resourceDeviceIndex;
    ,
    result.memoryDeviceIndex = obj.memoryDeviceIndex;
    return result;
}


template <>
VkDeviceGroupCommandBufferBeginInfo create_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupCommandBufferBeginInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceMask = obj.deviceMask;
    return result;
}


template <>
VkDeviceGroupDeviceCreateInfo create_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupDeviceCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.physicalDeviceCount = obj.physicalDeviceCount;
    ,
    result.pPhysicalDevices = create_dynamic_array_copy(obj.physicalDeviceCount, obj.pPhysicalDevices, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupPresentCapabilitiesKHR create_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupPresentCapabilitiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(result.presentMask, obj.presentMask, pAllocationCallbacks);
    ,
    result.modes = obj.modes;
    return result;
}

template <>
VkDeviceGroupPresentInfoKHR create_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupPresentInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.swapchainCount = obj.swapchainCount;
    ,
    result.pDeviceMasks = create_dynamic_array_copy(obj.swapchainCount, obj.pDeviceMasks, pAllocationCallbacks);
    ,
    result.mode = obj.mode;
    return result;
}

template <>
VkDeviceGroupRenderPassBeginInfo create_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupRenderPassBeginInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceMask = obj.deviceMask;
    ,
    result.deviceRenderAreaCount = obj.deviceRenderAreaCount;
    ,
    result.pDeviceRenderAreas = create_dynamic_array_copy(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupSubmitInfo create_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupSubmitInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    ,
    result.pWaitSemaphoreDeviceIndices = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, pAllocationCallbacks);
    ,
    result.commandBufferCount = obj.commandBufferCount;
    ,
    result.pCommandBufferDeviceMasks = create_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, pAllocationCallbacks);
    ,
    result.signalSemaphoreCount = obj.signalSemaphoreCount;
    ,
    result.pSignalSemaphoreDeviceIndices = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, pAllocationCallbacks);
    return result;
}


template <>
VkDeviceGroupSwapchainCreateInfoKHR create_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceGroupSwapchainCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.modes = obj.modes;
    return result;
}

template <>
VkDeviceMemoryOpaqueCaptureAddressInfo create_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceMemoryOpaqueCaptureAddressInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memory = obj.memory;
    return result;
}


template <>
VkDeviceMemoryOverallocationCreateInfoAMD create_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceMemoryOverallocationCreateInfoAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.overallocationBehavior = obj.overallocationBehavior;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressConstKHR create_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceOrHostAddressConstKHR result { };
    result.deviceAddress = obj.deviceAddress;
    ,
    result.hostAddress = obj.hostAddress;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressKHR create_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceOrHostAddressKHR result { };
    result.deviceAddress = obj.deviceAddress;
    ,
    result.hostAddress = obj.hostAddress;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDevicePrivateDataCreateInfoEXT create_structure_copy<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDevicePrivateDataCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.privateDataSlotRequestCount = obj.privateDataSlotRequestCount;
    return result;
}

template <>
VkDeviceQueueCreateInfo create_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.queueFamilyIndex = obj.queueFamilyIndex;
    ,
    result.queueCount = obj.queueCount;
    ,
    result.pQueuePriorities = create_dynamic_array_copy(obj.queueCount, obj.pQueuePriorities, pAllocationCallbacks);
    return result;
}

template <>
VkDeviceQueueGlobalPriorityCreateInfoEXT create_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueGlobalPriorityCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.globalPriority = obj.globalPriority;
    return result;
}

template <>
VkDeviceQueueInfo2 create_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDeviceQueueInfo2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.queueFamilyIndex = obj.queueFamilyIndex;
    ,
    result.queueIndex = obj.queueIndex;
    return result;
}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <>
VkDirectFBSurfaceCreateInfoEXT create_structure_copy<VkDirectFBSurfaceCreateInfoEXT>(const VkDirectFBSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDirectFBSurfaceCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.dfb = obj.dfb;
    ,
    result.surface = obj.surface;
    return result;
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
VkDispatchIndirectCommand create_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDispatchIndirectCommand result { };
    result.x = obj.x;
    ,
    result.y = obj.y;
    ,
    result.z = obj.z;
    return result;
}

template <>
VkDisplayEventInfoEXT create_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayEventInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.displayEvent = obj.displayEvent;
    return result;
}

template <>
VkDisplayModeCreateInfoKHR create_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.parameters = create_structure_copy(obj.parameters, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModeParametersKHR create_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeParametersKHR result { };
    result.visibleRegion = create_structure_copy(obj.visibleRegion, pAllocationCallbacks);
    ,
    result.refreshRate = obj.refreshRate;
    return result;
}

template <>
VkDisplayModeProperties2KHR create_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModeProperties2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.displayModeProperties = create_structure_copy(obj.displayModeProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayModePropertiesKHR create_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayModePropertiesKHR result { };
    result.displayMode = obj.displayMode;
    ,
    result.parameters = create_structure_copy(obj.parameters, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayNativeHdrSurfaceCapabilitiesAMD create_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayNativeHdrSurfaceCapabilitiesAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.localDimmingSupport = obj.localDimmingSupport;
    return result;
}

template <>
VkDisplayPlaneCapabilities2KHR create_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneCapabilities2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.capabilities = create_structure_copy(obj.capabilities, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneCapabilitiesKHR create_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneCapabilitiesKHR result { };
    result.supportedAlpha = obj.supportedAlpha;
    ,
    result.minSrcPosition = create_structure_copy(obj.minSrcPosition, pAllocationCallbacks);
    ,
    result.maxSrcPosition = create_structure_copy(obj.maxSrcPosition, pAllocationCallbacks);
    ,
    result.minSrcExtent = create_structure_copy(obj.minSrcExtent, pAllocationCallbacks);
    ,
    result.maxSrcExtent = create_structure_copy(obj.maxSrcExtent, pAllocationCallbacks);
    ,
    result.minDstPosition = create_structure_copy(obj.minDstPosition, pAllocationCallbacks);
    ,
    result.maxDstPosition = create_structure_copy(obj.maxDstPosition, pAllocationCallbacks);
    ,
    result.minDstExtent = create_structure_copy(obj.minDstExtent, pAllocationCallbacks);
    ,
    result.maxDstExtent = create_structure_copy(obj.maxDstExtent, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlaneInfo2KHR create_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneInfo2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.mode = obj.mode;
    ,
    result.planeIndex = obj.planeIndex;
    return result;
}

template <>
VkDisplayPlaneProperties2KHR create_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlaneProperties2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.displayPlaneProperties = create_structure_copy(obj.displayPlaneProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPlanePropertiesKHR create_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPlanePropertiesKHR result { };
    result.currentDisplay = obj.currentDisplay;
    ,
    result.currentStackIndex = obj.currentStackIndex;
    return result;
}

template <>
VkDisplayPowerInfoEXT create_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPowerInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.powerState = obj.powerState;
    return result;
}

template <>
VkDisplayPresentInfoKHR create_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPresentInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.srcRect = create_structure_copy(obj.srcRect, pAllocationCallbacks);
    ,
    result.dstRect = create_structure_copy(obj.dstRect, pAllocationCallbacks);
    ,
    result.persistent = obj.persistent;
    return result;
}

template <>
VkDisplayProperties2KHR create_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayProperties2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.displayProperties = create_structure_copy(obj.displayProperties, pAllocationCallbacks);
    return result;
}

template <>
VkDisplayPropertiesKHR create_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplayPropertiesKHR result { };
    result.display = obj.display;
    ,
    result.displayName = create_dynamic_string_copy(obj.displayName, pAllocationCallbacks);
    ,
    result.physicalDimensions = create_structure_copy(obj.physicalDimensions, pAllocationCallbacks);
    ,
    result.physicalResolution = create_structure_copy(obj.physicalResolution, pAllocationCallbacks);
    ,
    result.supportedTransforms = obj.supportedTransforms;
    ,
    result.planeReorderPossible = obj.planeReorderPossible;
    ,
    result.persistentContent = obj.persistentContent;
    return result;
}

template <>
VkDisplaySurfaceCreateInfoKHR create_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDisplaySurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.displayMode = obj.displayMode;
    ,
    result.planeIndex = obj.planeIndex;
    ,
    result.planeStackIndex = obj.planeStackIndex;
    ,
    result.transform = obj.transform;
    ,
    result.globalAlpha = obj.globalAlpha;
    ,
    result.alphaMode = obj.alphaMode;
    ,
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocationCallbacks);
    return result;
}

template <>
VkDrawIndexedIndirectCommand create_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawIndexedIndirectCommand result { };
    result.indexCount = obj.indexCount;
    ,
    result.instanceCount = obj.instanceCount;
    ,
    result.firstIndex = obj.firstIndex;
    ,
    result.vertexOffset = obj.vertexOffset;
    ,
    result.firstInstance = obj.firstInstance;
    return result;
}

template <>
VkDrawIndirectCommand create_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawIndirectCommand result { };
    result.vertexCount = obj.vertexCount;
    ,
    result.instanceCount = obj.instanceCount;
    ,
    result.firstVertex = obj.firstVertex;
    ,
    result.firstInstance = obj.firstInstance;
    return result;
}

template <>
VkDrawMeshTasksIndirectCommandNV create_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrawMeshTasksIndirectCommandNV result { };
    result.taskCount = obj.taskCount;
    ,
    result.firstTask = obj.firstTask;
    return result;
}

template <>
VkDrmFormatModifierPropertiesEXT create_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrmFormatModifierPropertiesEXT result { };
    result.drmFormatModifier = obj.drmFormatModifier;
    ,
    result.drmFormatModifierPlaneCount = obj.drmFormatModifierPlaneCount;
    ,
    result.drmFormatModifierTilingFeatures = obj.drmFormatModifierTilingFeatures;
    return result;
}

template <>
VkDrmFormatModifierPropertiesListEXT create_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkDrmFormatModifierPropertiesListEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.drmFormatModifierCount = obj.drmFormatModifierCount;
    ,
    result.pDrmFormatModifierProperties = create_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, pAllocationCallbacks);
    return result;
}

template <>
VkEventCreateInfo create_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkEventCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkExportFenceCreateInfo create_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportFenceCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleTypes = obj.handleTypes;
    return result;
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportFenceWin32HandleInfoKHR create_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportFenceWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pAttributes = obj.pAttributes;
    ,
    result.dwAccess = obj.dwAccess;
    ,
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportMemoryAllocateInfo create_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryAllocateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleTypes = obj.handleTypes;
    return result;
}


template <>
VkExportMemoryAllocateInfoNV create_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryAllocateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleTypes = obj.handleTypes;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoKHR create_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pAttributes = obj.pAttributes;
    ,
    result.dwAccess = obj.dwAccess;
    ,
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoNV create_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportMemoryWin32HandleInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pAttributes = obj.pAttributes;
    ,
    result.dwAccess = obj.dwAccess;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportSemaphoreCreateInfo create_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportSemaphoreCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleTypes = obj.handleTypes;
    return result;
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportSemaphoreWin32HandleInfoKHR create_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExportSemaphoreWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pAttributes = obj.pAttributes;
    ,
    result.dwAccess = obj.dwAccess;
    ,
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExtensionProperties create_structure_copy<VkExtensionProperties>(const VkExtensionProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtensionProperties result { };
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.extensionName, obj.extensionName, pAllocationCallbacks);
    ,
    result.specVersion = obj.specVersion;
    return result;
}

template <>
VkExtent2D create_structure_copy<VkExtent2D>(const VkExtent2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtent2D result { };
    result.width = obj.width;
    ,
    result.height = obj.height;
    return result;
}

template <>
VkExtent3D create_structure_copy<VkExtent3D>(const VkExtent3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExtent3D result { };
    result.width = obj.width;
    ,
    result.height = obj.height;
    ,
    result.depth = obj.depth;
    return result;
}

template <>
VkExternalBufferProperties create_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalBufferProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.externalMemoryProperties = create_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
    return result;
}


template <>
VkExternalFenceProperties create_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalFenceProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    ,
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    ,
    result.externalFenceFeatures = obj.externalFenceFeatures;
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkExternalFormatANDROID create_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalFormatANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.externalFormat = obj.externalFormat;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkExternalImageFormatProperties create_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalImageFormatProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.externalMemoryProperties = create_structure_copy(obj.externalMemoryProperties, pAllocationCallbacks);
    return result;
}


template <>
VkExternalImageFormatPropertiesNV create_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalImageFormatPropertiesNV result { };
    result.imageFormatProperties = create_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
    ,
    result.externalMemoryFeatures = obj.externalMemoryFeatures;
    ,
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    ,
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    return result;
}

template <>
VkExternalMemoryBufferCreateInfo create_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryBufferCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleTypes = obj.handleTypes;
    return result;
}


template <>
VkExternalMemoryImageCreateInfo create_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryImageCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleTypes = obj.handleTypes;
    return result;
}


template <>
VkExternalMemoryImageCreateInfoNV create_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryImageCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleTypes = obj.handleTypes;
    return result;
}

template <>
VkExternalMemoryProperties create_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalMemoryProperties result { };
    result.externalMemoryFeatures = obj.externalMemoryFeatures;
    ,
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    ,
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    return result;
}


template <>
VkExternalSemaphoreProperties create_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkExternalSemaphoreProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    ,
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    ,
    result.externalSemaphoreFeatures = obj.externalSemaphoreFeatures;
    return result;
}


template <>
VkFenceCreateInfo create_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkFenceGetFdInfoKHR create_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceGetFdInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fence = obj.fence;
    ,
    result.handleType = obj.handleType;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkFenceGetWin32HandleInfoKHR create_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFenceGetWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fence = obj.fence;
    ,
    result.handleType = obj.handleType;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkFilterCubicImageViewImageFormatPropertiesEXT create_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFilterCubicImageViewImageFormatPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.filterCubic = obj.filterCubic;
    ,
    result.filterCubicMinmax = obj.filterCubicMinmax;
    return result;
}

template <>
VkFormatProperties create_structure_copy<VkFormatProperties>(const VkFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFormatProperties result { };
    result.linearTilingFeatures = obj.linearTilingFeatures;
    ,
    result.optimalTilingFeatures = obj.optimalTilingFeatures;
    ,
    result.bufferFeatures = obj.bufferFeatures;
    return result;
}

template <>
VkFormatProperties2 create_structure_copy<VkFormatProperties2>(const VkFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFormatProperties2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.formatProperties = create_structure_copy(obj.formatProperties, pAllocationCallbacks);
    return result;
}


template <>
VkFramebufferAttachmentImageInfo create_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferAttachmentImageInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.usage = obj.usage;
    ,
    result.width = obj.width;
    ,
    result.height = obj.height;
    ,
    result.layerCount = obj.layerCount;
    ,
    result.viewFormatCount = obj.viewFormatCount;
    ,
    result.pViewFormats = create_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
    return result;
}


template <>
VkFramebufferAttachmentsCreateInfo create_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferAttachmentsCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.attachmentImageInfoCount = obj.attachmentImageInfoCount;
    ,
    result.pAttachmentImageInfos = create_dynamic_array_copy(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos, pAllocationCallbacks);
    return result;
}


template <>
VkFramebufferCreateInfo create_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.renderPass = obj.renderPass;
    ,
    result.attachmentCount = obj.attachmentCount;
    ,
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    ,
    result.width = obj.width;
    ,
    result.height = obj.height;
    ,
    result.layers = obj.layers;
    return result;
}

template <>
VkFramebufferMixedSamplesCombinationNV create_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkFramebufferMixedSamplesCombinationNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.coverageReductionMode = obj.coverageReductionMode;
    ,
    result.rasterizationSamples = obj.rasterizationSamples;
    ,
    result.depthStencilSamples = obj.depthStencilSamples;
    ,
    result.colorSamples = obj.colorSamples;
    return result;
}

template <>
VkGeneratedCommandsInfoNV create_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeneratedCommandsInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pipelineBindPoint = obj.pipelineBindPoint;
    ,
    result.pipeline = obj.pipeline;
    ,
    result.indirectCommandsLayout = obj.indirectCommandsLayout;
    ,
    result.streamCount = obj.streamCount;
    ,
    result.pStreams = create_dynamic_array_copy(obj.streamCount, obj.pStreams, pAllocationCallbacks);
    ,
    result.sequencesCount = obj.sequencesCount;
    ,
    result.preprocessBuffer = obj.preprocessBuffer;
    ,
    result.preprocessOffset = obj.preprocessOffset;
    ,
    result.preprocessSize = obj.preprocessSize;
    ,
    result.sequencesCountBuffer = obj.sequencesCountBuffer;
    ,
    result.sequencesCountOffset = obj.sequencesCountOffset;
    ,
    result.sequencesIndexBuffer = obj.sequencesIndexBuffer;
    ,
    result.sequencesIndexOffset = obj.sequencesIndexOffset;
    return result;
}

template <>
VkGeneratedCommandsMemoryRequirementsInfoNV create_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeneratedCommandsMemoryRequirementsInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pipelineBindPoint = obj.pipelineBindPoint;
    ,
    result.pipeline = obj.pipeline;
    ,
    result.indirectCommandsLayout = obj.indirectCommandsLayout;
    ,
    result.maxSequencesCount = obj.maxSequencesCount;
    return result;
}

template <>
VkGeometryAABBNV create_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryAABBNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.aabbData = obj.aabbData;
    ,
    result.numAABBs = obj.numAABBs;
    ,
    result.stride = obj.stride;
    ,
    result.offset = obj.offset;
    return result;
}

template <>
VkGeometryDataNV create_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryDataNV result { };
    result.triangles = create_structure_copy(obj.triangles, pAllocationCallbacks);
    ,
    result.aabbs = create_structure_copy(obj.aabbs, pAllocationCallbacks);
    return result;
}

template <>
VkGeometryNV create_structure_copy<VkGeometryNV>(const VkGeometryNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.geometryType = obj.geometryType;
    ,
    result.geometry = create_structure_copy(obj.geometry, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkGeometryTrianglesNV create_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGeometryTrianglesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.vertexData = obj.vertexData;
    ,
    result.vertexOffset = obj.vertexOffset;
    ,
    result.vertexCount = obj.vertexCount;
    ,
    result.vertexStride = obj.vertexStride;
    ,
    result.vertexFormat = obj.vertexFormat;
    ,
    result.indexData = obj.indexData;
    ,
    result.indexOffset = obj.indexOffset;
    ,
    result.indexCount = obj.indexCount;
    ,
    result.indexType = obj.indexType;
    ,
    result.transformData = obj.transformData;
    ,
    result.transformOffset = obj.transformOffset;
    return result;
}

template <>
VkGraphicsPipelineCreateInfo create_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsPipelineCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.stageCount = obj.stageCount;
    ,
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    ,
    result.pVertexInputState = create_dynamic_array_copy(1, obj.pVertexInputState, pAllocationCallbacks);
    ,
    result.pInputAssemblyState = create_dynamic_array_copy(1, obj.pInputAssemblyState, pAllocationCallbacks);
    ,
    result.pTessellationState = create_dynamic_array_copy(1, obj.pTessellationState, pAllocationCallbacks);
    ,
    result.pViewportState = create_dynamic_array_copy(1, obj.pViewportState, pAllocationCallbacks);
    ,
    result.pRasterizationState = create_dynamic_array_copy(1, obj.pRasterizationState, pAllocationCallbacks);
    ,
    result.pMultisampleState = create_dynamic_array_copy(1, obj.pMultisampleState, pAllocationCallbacks);
    ,
    result.pDepthStencilState = create_dynamic_array_copy(1, obj.pDepthStencilState, pAllocationCallbacks);
    ,
    result.pColorBlendState = create_dynamic_array_copy(1, obj.pColorBlendState, pAllocationCallbacks);
    ,
    result.pDynamicState = create_dynamic_array_copy(1, obj.pDynamicState, pAllocationCallbacks);
    ,
    result.layout = obj.layout;
    ,
    result.renderPass = obj.renderPass;
    ,
    result.subpass = obj.subpass;
    ,
    result.basePipelineHandle = obj.basePipelineHandle;
    ,
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}

template <>
VkGraphicsPipelineShaderGroupsCreateInfoNV create_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsPipelineShaderGroupsCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.groupCount = obj.groupCount;
    ,
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    ,
    result.pipelineCount = obj.pipelineCount;
    ,
    result.pPipelines = create_dynamic_array_copy(obj.pipelineCount, obj.pPipelines, pAllocationCallbacks);
    return result;
}

template <>
VkGraphicsShaderGroupCreateInfoNV create_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkGraphicsShaderGroupCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.stageCount = obj.stageCount;
    ,
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    ,
    result.pVertexInputState = create_dynamic_array_copy(1, obj.pVertexInputState, pAllocationCallbacks);
    ,
    result.pTessellationState = create_dynamic_array_copy(1, obj.pTessellationState, pAllocationCallbacks);
    return result;
}

template <>
VkHdrMetadataEXT create_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkHdrMetadataEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.displayPrimaryRed = create_structure_copy(obj.displayPrimaryRed, pAllocationCallbacks);
    ,
    result.displayPrimaryGreen = create_structure_copy(obj.displayPrimaryGreen, pAllocationCallbacks);
    ,
    result.displayPrimaryBlue = create_structure_copy(obj.displayPrimaryBlue, pAllocationCallbacks);
    ,
    result.whitePoint = create_structure_copy(obj.whitePoint, pAllocationCallbacks);
    ,
    result.maxLuminance = obj.maxLuminance;
    ,
    result.minLuminance = obj.minLuminance;
    ,
    result.maxContentLightLevel = obj.maxContentLightLevel;
    ,
    result.maxFrameAverageLightLevel = obj.maxFrameAverageLightLevel;
    return result;
}

template <>
VkHeadlessSurfaceCreateInfoEXT create_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkHeadlessSurfaceCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
VkIOSSurfaceCreateInfoMVK create_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIOSSurfaceCreateInfoMVK result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pView = obj.pView;
    return result;
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
VkImageBlit create_structure_copy<VkImageBlit>(const VkImageBlit& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageBlit result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    ,
    create_static_array_copy<2>(result.srcOffsets, obj.srcOffsets, pAllocationCallbacks);
    ,
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    ,
    create_static_array_copy<2>(result.dstOffsets, obj.dstOffsets, pAllocationCallbacks);
    return result;
}

template <>
VkImageCopy create_structure_copy<VkImageCopy>(const VkImageCopy& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageCopy result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    ,
    result.srcOffset = create_structure_copy(obj.srcOffset, pAllocationCallbacks);
    ,
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    ,
    result.dstOffset = create_structure_copy(obj.dstOffset, pAllocationCallbacks);
    ,
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkImageCreateInfo create_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.imageType = obj.imageType;
    ,
    result.format = obj.format;
    ,
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    ,
    result.mipLevels = obj.mipLevels;
    ,
    result.arrayLayers = obj.arrayLayers;
    ,
    result.samples = obj.samples;
    ,
    result.tiling = obj.tiling;
    ,
    result.usage = obj.usage;
    ,
    result.sharingMode = obj.sharingMode;
    ,
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    ,
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    ,
    result.initialLayout = obj.initialLayout;
    return result;
}

template <>
VkImageDrmFormatModifierExplicitCreateInfoEXT create_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierExplicitCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.drmFormatModifier = obj.drmFormatModifier;
    ,
    result.drmFormatModifierPlaneCount = obj.drmFormatModifierPlaneCount;
    ,
    result.pPlaneLayouts = create_dynamic_array_copy(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierListCreateInfoEXT create_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierListCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.drmFormatModifierCount = obj.drmFormatModifierCount;
    ,
    result.pDrmFormatModifiers = create_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, pAllocationCallbacks);
    return result;
}

template <>
VkImageDrmFormatModifierPropertiesEXT create_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageDrmFormatModifierPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.drmFormatModifier = obj.drmFormatModifier;
    return result;
}

template <>
VkImageFormatListCreateInfo create_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatListCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.viewFormatCount = obj.viewFormatCount;
    ,
    result.pViewFormats = create_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocationCallbacks);
    return result;
}


template <>
VkImageFormatProperties create_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatProperties result { };
    result.maxExtent = create_structure_copy(obj.maxExtent, pAllocationCallbacks);
    ,
    result.maxMipLevels = obj.maxMipLevels;
    ,
    result.maxArrayLayers = obj.maxArrayLayers;
    ,
    result.sampleCounts = obj.sampleCounts;
    ,
    result.maxResourceSize = obj.maxResourceSize;
    return result;
}

template <>
VkImageFormatProperties2 create_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageFormatProperties2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.imageFormatProperties = create_structure_copy(obj.imageFormatProperties, pAllocationCallbacks);
    return result;
}


template <>
VkImageMemoryBarrier create_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageMemoryBarrier result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.srcAccessMask = obj.srcAccessMask;
    ,
    result.dstAccessMask = obj.dstAccessMask;
    ,
    result.oldLayout = obj.oldLayout;
    ,
    result.newLayout = obj.newLayout;
    ,
    result.srcQueueFamilyIndex = obj.srcQueueFamilyIndex;
    ,
    result.dstQueueFamilyIndex = obj.dstQueueFamilyIndex;
    ,
    result.image = obj.image;
    ,
    result.subresourceRange = create_structure_copy(obj.subresourceRange, pAllocationCallbacks);
    return result;
}

template <>
VkImageMemoryRequirementsInfo2 create_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageMemoryRequirementsInfo2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.image = obj.image;
    return result;
}


#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
VkImagePipeSurfaceCreateInfoFUCHSIA create_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImagePipeSurfaceCreateInfoFUCHSIA result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.imagePipeHandle = obj.imagePipeHandle;
    return result;
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
VkImagePlaneMemoryRequirementsInfo create_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImagePlaneMemoryRequirementsInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.planeAspect = obj.planeAspect;
    return result;
}


template <>
VkImageResolve create_structure_copy<VkImageResolve>(const VkImageResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageResolve result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocationCallbacks);
    ,
    result.srcOffset = create_structure_copy(obj.srcOffset, pAllocationCallbacks);
    ,
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocationCallbacks);
    ,
    result.dstOffset = create_structure_copy(obj.dstOffset, pAllocationCallbacks);
    ,
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkImageSparseMemoryRequirementsInfo2 create_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSparseMemoryRequirementsInfo2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.image = obj.image;
    return result;
}


template <>
VkImageStencilUsageCreateInfo create_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageStencilUsageCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.stencilUsage = obj.stencilUsage;
    return result;
}


template <>
VkImageSubresource create_structure_copy<VkImageSubresource>(const VkImageSubresource& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresource result { };
    result.aspectMask = obj.aspectMask;
    ,
    result.mipLevel = obj.mipLevel;
    ,
    result.arrayLayer = obj.arrayLayer;
    return result;
}

template <>
VkImageSubresourceLayers create_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresourceLayers result { };
    result.aspectMask = obj.aspectMask;
    ,
    result.mipLevel = obj.mipLevel;
    ,
    result.baseArrayLayer = obj.baseArrayLayer;
    ,
    result.layerCount = obj.layerCount;
    return result;
}

template <>
VkImageSubresourceRange create_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSubresourceRange result { };
    result.aspectMask = obj.aspectMask;
    ,
    result.baseMipLevel = obj.baseMipLevel;
    ,
    result.levelCount = obj.levelCount;
    ,
    result.baseArrayLayer = obj.baseArrayLayer;
    ,
    result.layerCount = obj.layerCount;
    return result;
}

template <>
VkImageSwapchainCreateInfoKHR create_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageSwapchainCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.swapchain = obj.swapchain;
    return result;
}

template <>
VkImageViewASTCDecodeModeEXT create_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewASTCDecodeModeEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.decodeMode = obj.decodeMode;
    return result;
}

template <>
VkImageViewAddressPropertiesNVX create_structure_copy<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewAddressPropertiesNVX result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceAddress = obj.deviceAddress;
    ,
    result.size = obj.size;
    return result;
}

template <>
VkImageViewCreateInfo create_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.image = obj.image;
    ,
    result.viewType = obj.viewType;
    ,
    result.format = obj.format;
    ,
    result.components = create_structure_copy(obj.components, pAllocationCallbacks);
    ,
    result.subresourceRange = create_structure_copy(obj.subresourceRange, pAllocationCallbacks);
    return result;
}

template <>
VkImageViewHandleInfoNVX create_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewHandleInfoNVX result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.imageView = obj.imageView;
    ,
    result.descriptorType = obj.descriptorType;
    ,
    result.sampler = obj.sampler;
    return result;
}

template <>
VkImageViewUsageCreateInfo create_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImageViewUsageCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.usage = obj.usage;
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkImportAndroidHardwareBufferInfoANDROID create_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportAndroidHardwareBufferInfoANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.buffer = obj.buffer;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkImportFenceFdInfoKHR create_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportFenceFdInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fence = obj.fence;
    ,
    result.flags = obj.flags;
    ,
    result.handleType = obj.handleType;
    ,
    result.fd = obj.fd;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportFenceWin32HandleInfoKHR create_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportFenceWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fence = obj.fence;
    ,
    result.flags = obj.flags;
    ,
    result.handleType = obj.handleType;
    ,
    result.handle = obj.handle;
    ,
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportMemoryFdInfoKHR create_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryFdInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleType = obj.handleType;
    ,
    result.fd = obj.fd;
    return result;
}

template <>
VkImportMemoryHostPointerInfoEXT create_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryHostPointerInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleType = obj.handleType;
    ,
    result.pHostPointer = obj.pHostPointer;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoKHR create_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleType = obj.handleType;
    ,
    result.handle = obj.handle;
    ,
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoNV create_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportMemoryWin32HandleInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleType = obj.handleType;
    ,
    result.handle = obj.handle;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportSemaphoreFdInfoKHR create_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportSemaphoreFdInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.semaphore = obj.semaphore;
    ,
    result.flags = obj.flags;
    ,
    result.handleType = obj.handleType;
    ,
    result.fd = obj.fd;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportSemaphoreWin32HandleInfoKHR create_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkImportSemaphoreWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.semaphore = obj.semaphore;
    ,
    result.flags = obj.flags;
    ,
    result.handleType = obj.handleType;
    ,
    result.handle = obj.handle;
    ,
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkIndirectCommandsLayoutCreateInfoNV create_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsLayoutCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pipelineBindPoint = obj.pipelineBindPoint;
    ,
    result.tokenCount = obj.tokenCount;
    ,
    result.pTokens = create_dynamic_array_copy(obj.tokenCount, obj.pTokens, pAllocationCallbacks);
    ,
    result.streamCount = obj.streamCount;
    ,
    result.pStreamStrides = create_dynamic_array_copy(obj.streamCount, obj.pStreamStrides, pAllocationCallbacks);
    return result;
}

template <>
VkIndirectCommandsLayoutTokenNV create_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsLayoutTokenNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.tokenType = obj.tokenType;
    ,
    result.stream = obj.stream;
    ,
    result.offset = obj.offset;
    ,
    result.vertexBindingUnit = obj.vertexBindingUnit;
    ,
    result.vertexDynamicStride = obj.vertexDynamicStride;
    ,
    result.pushconstantPipelineLayout = obj.pushconstantPipelineLayout;
    ,
    result.pushconstantShaderStageFlags = obj.pushconstantShaderStageFlags;
    ,
    result.pushconstantOffset = obj.pushconstantOffset;
    ,
    result.pushconstantSize = obj.pushconstantSize;
    ,
    result.indirectStateFlags = obj.indirectStateFlags;
    ,
    result.indexTypeCount = obj.indexTypeCount;
    ,
    result.pIndexTypes = create_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypes, pAllocationCallbacks);
    ,
    result.pIndexTypeValues = create_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypeValues, pAllocationCallbacks);
    return result;
}

template <>
VkIndirectCommandsStreamNV create_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkIndirectCommandsStreamNV result { };
    result.buffer = obj.buffer;
    ,
    result.offset = obj.offset;
    return result;
}

template <>
VkInitializePerformanceApiInfoINTEL create_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInitializePerformanceApiInfoINTEL result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkInputAttachmentAspectReference create_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInputAttachmentAspectReference result { };
    result.subpass = obj.subpass;
    ,
    result.inputAttachmentIndex = obj.inputAttachmentIndex;
    ,
    result.aspectMask = obj.aspectMask;
    return result;
}


template <>
VkInstanceCreateInfo create_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkInstanceCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pApplicationInfo = create_dynamic_array_copy(1, obj.pApplicationInfo, pAllocationCallbacks);
    ,
    result.enabledLayerCount = obj.enabledLayerCount;
    ,
    result.ppEnabledLayerNames = create_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocationCallbacks);
    ,
    result.enabledExtensionCount = obj.enabledExtensionCount;
    ,
    result.ppEnabledExtensionNames = create_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocationCallbacks);
    return result;
}

template <>
VkLayerProperties create_structure_copy<VkLayerProperties>(const VkLayerProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkLayerProperties result { };
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.layerName, obj.layerName, pAllocationCallbacks);
    ,
    result.specVersion = obj.specVersion;
    ,
    result.implementationVersion = obj.implementationVersion;
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
VkMacOSSurfaceCreateInfoMVK create_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMacOSSurfaceCreateInfoMVK result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pView = obj.pView;
    return result;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
VkMappedMemoryRange create_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMappedMemoryRange result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memory = obj.memory;
    ,
    result.offset = obj.offset;
    ,
    result.size = obj.size;
    return result;
}

template <>
VkMemoryAllocateFlagsInfo create_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryAllocateFlagsInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.deviceMask = obj.deviceMask;
    return result;
}


template <>
VkMemoryAllocateInfo create_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryAllocateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.allocationSize = obj.allocationSize;
    ,
    result.memoryTypeIndex = obj.memoryTypeIndex;
    return result;
}

template <>
VkMemoryBarrier create_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryBarrier result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.srcAccessMask = obj.srcAccessMask;
    ,
    result.dstAccessMask = obj.dstAccessMask;
    return result;
}

template <>
VkMemoryDedicatedAllocateInfo create_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryDedicatedAllocateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.image = obj.image;
    ,
    result.buffer = obj.buffer;
    return result;
}


template <>
VkMemoryDedicatedRequirements create_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryDedicatedRequirements result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.prefersDedicatedAllocation = obj.prefersDedicatedAllocation;
    ,
    result.requiresDedicatedAllocation = obj.requiresDedicatedAllocation;
    return result;
}


template <>
VkMemoryFdPropertiesKHR create_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryFdPropertiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkMemoryGetAndroidHardwareBufferInfoANDROID create_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetAndroidHardwareBufferInfoANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memory = obj.memory;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkMemoryGetFdInfoKHR create_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetFdInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memory = obj.memory;
    ,
    result.handleType = obj.handleType;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryGetWin32HandleInfoKHR create_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryGetWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memory = obj.memory;
    ,
    result.handleType = obj.handleType;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkMemoryHeap create_structure_copy<VkMemoryHeap>(const VkMemoryHeap& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryHeap result { };
    result.size = obj.size;
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkMemoryHostPointerPropertiesEXT create_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryHostPointerPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}

template <>
VkMemoryOpaqueCaptureAddressAllocateInfo create_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryOpaqueCaptureAddressAllocateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.opaqueCaptureAddress = obj.opaqueCaptureAddress;
    return result;
}


template <>
VkMemoryPriorityAllocateInfoEXT create_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryPriorityAllocateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.priority = obj.priority;
    return result;
}

template <>
VkMemoryRequirements create_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryRequirements result { };
    result.size = obj.size;
    ,
    result.alignment = obj.alignment;
    ,
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}

template <>
VkMemoryRequirements2 create_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryRequirements2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memoryRequirements = create_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
    return result;
}


template <>
VkMemoryType create_structure_copy<VkMemoryType>(const VkMemoryType& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryType result { };
    result.propertyFlags = obj.propertyFlags;
    ,
    result.heapIndex = obj.heapIndex;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryWin32HandlePropertiesKHR create_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMemoryWin32HandlePropertiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
VkMetalSurfaceCreateInfoEXT create_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMetalSurfaceCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pLayer = obj.pLayer;
    return result;
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
VkMultisamplePropertiesEXT create_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkMultisamplePropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxSampleLocationGridSize = create_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferANDROID create_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkNativeBufferANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handle = obj.handle;
    ,
    result.stride = obj.stride;
    ,
    result.format = obj.format;
    ,
    result.usage = obj.usage;
    ,
    result.usage2 = create_structure_copy(obj.usage2, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferUsage2ANDROID create_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkNativeBufferUsage2ANDROID result { };
    result.consumer = obj.consumer;
    ,
    result.producer = obj.producer;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkOffset2D create_structure_copy<VkOffset2D>(const VkOffset2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkOffset2D result { };
    result.x = obj.x;
    ,
    result.y = obj.y;
    return result;
}

template <>
VkOffset3D create_structure_copy<VkOffset3D>(const VkOffset3D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkOffset3D result { };
    result.x = obj.x;
    ,
    result.y = obj.y;
    ,
    result.z = obj.z;
    return result;
}

template <>
VkPastPresentationTimingGOOGLE create_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPastPresentationTimingGOOGLE result { };
    result.presentID = obj.presentID;
    ,
    result.desiredPresentTime = obj.desiredPresentTime;
    ,
    result.actualPresentTime = obj.actualPresentTime;
    ,
    result.earliestPresentTime = obj.earliestPresentTime;
    ,
    result.presentMargin = obj.presentMargin;
    return result;
}

template <>
VkPerformanceConfigurationAcquireInfoINTEL create_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceConfigurationAcquireInfoINTEL result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    return result;
}

template <>
VkPerformanceCounterDescriptionKHR create_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceCounterDescriptionKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.category, obj.category, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description, pAllocationCallbacks);
    return result;
}

template <>
VkPerformanceCounterKHR create_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceCounterKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.unit = obj.unit;
    ,
    result.scope = obj.scope;
    ,
    result.storage = obj.storage;
    ,
    create_static_array_copy<VK_UUID_SIZE>(result.uuid, obj.uuid, pAllocationCallbacks);
    return result;
}


template <>
VkPerformanceMarkerInfoINTEL create_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceMarkerInfoINTEL result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.marker = obj.marker;
    return result;
}

template <>
VkPerformanceOverrideInfoINTEL create_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceOverrideInfoINTEL result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    ,
    result.enable = obj.enable;
    ,
    result.parameter = obj.parameter;
    return result;
}

template <>
VkPerformanceQuerySubmitInfoKHR create_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceQuerySubmitInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.counterPassIndex = obj.counterPassIndex;
    return result;
}

template <>
VkPerformanceStreamMarkerInfoINTEL create_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceStreamMarkerInfoINTEL result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.marker = obj.marker;
    return result;
}


template <>
VkPerformanceValueINTEL create_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPerformanceValueINTEL result { };
    result.type = obj.type;
    ,
    result.data = create_structure_copy(obj.data, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDevice16BitStorageFeatures create_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevice16BitStorageFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.storageBuffer16BitAccess = obj.storageBuffer16BitAccess;
    ,
    result.uniformAndStorageBuffer16BitAccess = obj.uniformAndStorageBuffer16BitAccess;
    ,
    result.storagePushConstant16 = obj.storagePushConstant16;
    ,
    result.storageInputOutput16 = obj.storageInputOutput16;
    return result;
}


template <>
VkPhysicalDevice8BitStorageFeatures create_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevice8BitStorageFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.storageBuffer8BitAccess = obj.storageBuffer8BitAccess;
    ,
    result.uniformAndStorageBuffer8BitAccess = obj.uniformAndStorageBuffer8BitAccess;
    ,
    result.storagePushConstant8 = obj.storagePushConstant8;
    return result;
}


template <>
VkPhysicalDeviceASTCDecodeFeaturesEXT create_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceASTCDecodeFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.decodeModeSharedExponent = obj.decodeModeSharedExponent;
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT create_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.advancedBlendCoherentOperations = obj.advancedBlendCoherentOperations;
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT create_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.advancedBlendMaxColorAttachments = obj.advancedBlendMaxColorAttachments;
    ,
    result.advancedBlendIndependentBlend = obj.advancedBlendIndependentBlend;
    ,
    result.advancedBlendNonPremultipliedSrcColor = obj.advancedBlendNonPremultipliedSrcColor;
    ,
    result.advancedBlendNonPremultipliedDstColor = obj.advancedBlendNonPremultipliedDstColor;
    ,
    result.advancedBlendCorrelatedOverlap = obj.advancedBlendCorrelatedOverlap;
    ,
    result.advancedBlendAllOperations = obj.advancedBlendAllOperations;
    return result;
}


template <>
VkPhysicalDeviceBufferDeviceAddressFeatures create_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBufferDeviceAddressFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.bufferDeviceAddress = obj.bufferDeviceAddress;
    ,
    result.bufferDeviceAddressCaptureReplay = obj.bufferDeviceAddressCaptureReplay;
    ,
    result.bufferDeviceAddressMultiDevice = obj.bufferDeviceAddressMultiDevice;
    return result;
}

template <>
VkPhysicalDeviceBufferDeviceAddressFeaturesEXT create_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceBufferDeviceAddressFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.bufferDeviceAddress = obj.bufferDeviceAddress;
    ,
    result.bufferDeviceAddressCaptureReplay = obj.bufferDeviceAddressCaptureReplay;
    ,
    result.bufferDeviceAddressMultiDevice = obj.bufferDeviceAddressMultiDevice;
    return result;
}


template <>
VkPhysicalDeviceCoherentMemoryFeaturesAMD create_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCoherentMemoryFeaturesAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceCoherentMemory = obj.deviceCoherentMemory;
    return result;
}

template <>
VkPhysicalDeviceComputeShaderDerivativesFeaturesNV create_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceComputeShaderDerivativesFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.computeDerivativeGroupQuads = obj.computeDerivativeGroupQuads;
    ,
    result.computeDerivativeGroupLinear = obj.computeDerivativeGroupLinear;
    return result;
}

template <>
VkPhysicalDeviceConditionalRenderingFeaturesEXT create_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceConditionalRenderingFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.conditionalRendering = obj.conditionalRendering;
    ,
    result.inheritedConditionalRendering = obj.inheritedConditionalRendering;
    return result;
}

template <>
VkPhysicalDeviceConservativeRasterizationPropertiesEXT create_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.primitiveOverestimationSize = obj.primitiveOverestimationSize;
    ,
    result.maxExtraPrimitiveOverestimationSize = obj.maxExtraPrimitiveOverestimationSize;
    ,
    result.extraPrimitiveOverestimationSizeGranularity = obj.extraPrimitiveOverestimationSizeGranularity;
    ,
    result.primitiveUnderestimation = obj.primitiveUnderestimation;
    ,
    result.conservativePointAndLineRasterization = obj.conservativePointAndLineRasterization;
    ,
    result.degenerateTrianglesRasterized = obj.degenerateTrianglesRasterized;
    ,
    result.degenerateLinesRasterized = obj.degenerateLinesRasterized;
    ,
    result.fullyCoveredFragmentShaderInputVariable = obj.fullyCoveredFragmentShaderInputVariable;
    ,
    result.conservativeRasterizationPostDepthCoverage = obj.conservativeRasterizationPostDepthCoverage;
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixFeaturesNV create_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCooperativeMatrixFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.cooperativeMatrix = obj.cooperativeMatrix;
    ,
    result.cooperativeMatrixRobustBufferAccess = obj.cooperativeMatrixRobustBufferAccess;
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixPropertiesNV create_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCooperativeMatrixPropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.cooperativeMatrixSupportedStages = obj.cooperativeMatrixSupportedStages;
    return result;
}

template <>
VkPhysicalDeviceCornerSampledImageFeaturesNV create_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCornerSampledImageFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.cornerSampledImage = obj.cornerSampledImage;
    return result;
}

template <>
VkPhysicalDeviceCoverageReductionModeFeaturesNV create_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCoverageReductionModeFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.coverageReductionMode = obj.coverageReductionMode;
    return result;
}

template <>
VkPhysicalDeviceCustomBorderColorFeaturesEXT create_structure_copy<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCustomBorderColorFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.customBorderColors = obj.customBorderColors;
    ,
    result.customBorderColorWithoutFormat = obj.customBorderColorWithoutFormat;
    return result;
}

template <>
VkPhysicalDeviceCustomBorderColorPropertiesEXT create_structure_copy<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceCustomBorderColorPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxCustomBorderColorSamplers = obj.maxCustomBorderColorSamplers;
    return result;
}

template <>
VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV create_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.dedicatedAllocationImageAliasing = obj.dedicatedAllocationImageAliasing;
    return result;
}

template <>
VkPhysicalDeviceDepthClipEnableFeaturesEXT create_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDepthClipEnableFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.depthClipEnable = obj.depthClipEnable;
    return result;
}

template <>
VkPhysicalDeviceDepthStencilResolveProperties create_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDepthStencilResolveProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.supportedDepthResolveModes = obj.supportedDepthResolveModes;
    ,
    result.supportedStencilResolveModes = obj.supportedStencilResolveModes;
    ,
    result.independentResolveNone = obj.independentResolveNone;
    ,
    result.independentResolve = obj.independentResolve;
    return result;
}


template <>
VkPhysicalDeviceDescriptorIndexingFeatures create_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDescriptorIndexingFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderInputAttachmentArrayDynamicIndexing = obj.shaderInputAttachmentArrayDynamicIndexing;
    ,
    result.shaderUniformTexelBufferArrayDynamicIndexing = obj.shaderUniformTexelBufferArrayDynamicIndexing;
    ,
    result.shaderStorageTexelBufferArrayDynamicIndexing = obj.shaderStorageTexelBufferArrayDynamicIndexing;
    ,
    result.shaderUniformBufferArrayNonUniformIndexing = obj.shaderUniformBufferArrayNonUniformIndexing;
    ,
    result.shaderSampledImageArrayNonUniformIndexing = obj.shaderSampledImageArrayNonUniformIndexing;
    ,
    result.shaderStorageBufferArrayNonUniformIndexing = obj.shaderStorageBufferArrayNonUniformIndexing;
    ,
    result.shaderStorageImageArrayNonUniformIndexing = obj.shaderStorageImageArrayNonUniformIndexing;
    ,
    result.shaderInputAttachmentArrayNonUniformIndexing = obj.shaderInputAttachmentArrayNonUniformIndexing;
    ,
    result.shaderUniformTexelBufferArrayNonUniformIndexing = obj.shaderUniformTexelBufferArrayNonUniformIndexing;
    ,
    result.shaderStorageTexelBufferArrayNonUniformIndexing = obj.shaderStorageTexelBufferArrayNonUniformIndexing;
    ,
    result.descriptorBindingUniformBufferUpdateAfterBind = obj.descriptorBindingUniformBufferUpdateAfterBind;
    ,
    result.descriptorBindingSampledImageUpdateAfterBind = obj.descriptorBindingSampledImageUpdateAfterBind;
    ,
    result.descriptorBindingStorageImageUpdateAfterBind = obj.descriptorBindingStorageImageUpdateAfterBind;
    ,
    result.descriptorBindingStorageBufferUpdateAfterBind = obj.descriptorBindingStorageBufferUpdateAfterBind;
    ,
    result.descriptorBindingUniformTexelBufferUpdateAfterBind = obj.descriptorBindingUniformTexelBufferUpdateAfterBind;
    ,
    result.descriptorBindingStorageTexelBufferUpdateAfterBind = obj.descriptorBindingStorageTexelBufferUpdateAfterBind;
    ,
    result.descriptorBindingUpdateUnusedWhilePending = obj.descriptorBindingUpdateUnusedWhilePending;
    ,
    result.descriptorBindingPartiallyBound = obj.descriptorBindingPartiallyBound;
    ,
    result.descriptorBindingVariableDescriptorCount = obj.descriptorBindingVariableDescriptorCount;
    ,
    result.runtimeDescriptorArray = obj.runtimeDescriptorArray;
    return result;
}


template <>
VkPhysicalDeviceDescriptorIndexingProperties create_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDescriptorIndexingProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxUpdateAfterBindDescriptorsInAllPools = obj.maxUpdateAfterBindDescriptorsInAllPools;
    ,
    result.shaderUniformBufferArrayNonUniformIndexingNative = obj.shaderUniformBufferArrayNonUniformIndexingNative;
    ,
    result.shaderSampledImageArrayNonUniformIndexingNative = obj.shaderSampledImageArrayNonUniformIndexingNative;
    ,
    result.shaderStorageBufferArrayNonUniformIndexingNative = obj.shaderStorageBufferArrayNonUniformIndexingNative;
    ,
    result.shaderStorageImageArrayNonUniformIndexingNative = obj.shaderStorageImageArrayNonUniformIndexingNative;
    ,
    result.shaderInputAttachmentArrayNonUniformIndexingNative = obj.shaderInputAttachmentArrayNonUniformIndexingNative;
    ,
    result.robustBufferAccessUpdateAfterBind = obj.robustBufferAccessUpdateAfterBind;
    ,
    result.quadDivergentImplicitLod = obj.quadDivergentImplicitLod;
    ,
    result.maxPerStageDescriptorUpdateAfterBindSamplers = obj.maxPerStageDescriptorUpdateAfterBindSamplers;
    ,
    result.maxPerStageDescriptorUpdateAfterBindUniformBuffers = obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    ,
    result.maxPerStageDescriptorUpdateAfterBindStorageBuffers = obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    ,
    result.maxPerStageDescriptorUpdateAfterBindSampledImages = obj.maxPerStageDescriptorUpdateAfterBindSampledImages;
    ,
    result.maxPerStageDescriptorUpdateAfterBindStorageImages = obj.maxPerStageDescriptorUpdateAfterBindStorageImages;
    ,
    result.maxPerStageDescriptorUpdateAfterBindInputAttachments = obj.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    ,
    result.maxPerStageUpdateAfterBindResources = obj.maxPerStageUpdateAfterBindResources;
    ,
    result.maxDescriptorSetUpdateAfterBindSamplers = obj.maxDescriptorSetUpdateAfterBindSamplers;
    ,
    result.maxDescriptorSetUpdateAfterBindUniformBuffers = obj.maxDescriptorSetUpdateAfterBindUniformBuffers;
    ,
    result.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    ,
    result.maxDescriptorSetUpdateAfterBindStorageBuffers = obj.maxDescriptorSetUpdateAfterBindStorageBuffers;
    ,
    result.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    ,
    result.maxDescriptorSetUpdateAfterBindSampledImages = obj.maxDescriptorSetUpdateAfterBindSampledImages;
    ,
    result.maxDescriptorSetUpdateAfterBindStorageImages = obj.maxDescriptorSetUpdateAfterBindStorageImages;
    ,
    result.maxDescriptorSetUpdateAfterBindInputAttachments = obj.maxDescriptorSetUpdateAfterBindInputAttachments;
    return result;
}


template <>
VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV create_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.deviceGeneratedCommands = obj.deviceGeneratedCommands;
    return result;
}

template <>
VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV create_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxGraphicsShaderGroupCount = obj.maxGraphicsShaderGroupCount;
    ,
    result.maxIndirectSequenceCount = obj.maxIndirectSequenceCount;
    ,
    result.maxIndirectCommandsTokenCount = obj.maxIndirectCommandsTokenCount;
    ,
    result.maxIndirectCommandsStreamCount = obj.maxIndirectCommandsStreamCount;
    ,
    result.maxIndirectCommandsTokenOffset = obj.maxIndirectCommandsTokenOffset;
    ,
    result.maxIndirectCommandsStreamStride = obj.maxIndirectCommandsStreamStride;
    ,
    result.minSequencesCountBufferOffsetAlignment = obj.minSequencesCountBufferOffsetAlignment;
    ,
    result.minSequencesIndexBufferOffsetAlignment = obj.minSequencesIndexBufferOffsetAlignment;
    ,
    result.minIndirectCommandsBufferOffsetAlignment = obj.minIndirectCommandsBufferOffsetAlignment;
    return result;
}

template <>
VkPhysicalDeviceDiagnosticsConfigFeaturesNV create_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDiagnosticsConfigFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.diagnosticsConfig = obj.diagnosticsConfig;
    return result;
}

template <>
VkPhysicalDeviceDiscardRectanglePropertiesEXT create_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDiscardRectanglePropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxDiscardRectangles = obj.maxDiscardRectangles;
    return result;
}

template <>
VkPhysicalDeviceDriverProperties create_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceDriverProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.driverID = obj.driverID;
    ,
    create_static_string_copy<VK_MAX_DRIVER_NAME_SIZE>(result.driverName, obj.driverName, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DRIVER_INFO_SIZE>(result.driverInfo, obj.driverInfo, pAllocationCallbacks);
    ,
    result.conformanceVersion = create_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceExclusiveScissorFeaturesNV create_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExclusiveScissorFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.exclusiveScissor = obj.exclusiveScissor;
    return result;
}

template <>
VkPhysicalDeviceExtendedDynamicStateFeaturesEXT create_structure_copy<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.extendedDynamicState = obj.extendedDynamicState;
    return result;
}

template <>
VkPhysicalDeviceExternalBufferInfo create_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalBufferInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.usage = obj.usage;
    ,
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceExternalFenceInfo create_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalFenceInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceExternalImageFormatInfo create_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalImageFormatInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceExternalMemoryHostPropertiesEXT create_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.minImportedHostPointerAlignment = obj.minImportedHostPointerAlignment;
    return result;
}

template <>
VkPhysicalDeviceExternalSemaphoreInfo create_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceExternalSemaphoreInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceFeatures create_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFeatures result { };
    result.robustBufferAccess = obj.robustBufferAccess;
    ,
    result.fullDrawIndexUint32 = obj.fullDrawIndexUint32;
    ,
    result.imageCubeArray = obj.imageCubeArray;
    ,
    result.independentBlend = obj.independentBlend;
    ,
    result.geometryShader = obj.geometryShader;
    ,
    result.tessellationShader = obj.tessellationShader;
    ,
    result.sampleRateShading = obj.sampleRateShading;
    ,
    result.dualSrcBlend = obj.dualSrcBlend;
    ,
    result.logicOp = obj.logicOp;
    ,
    result.multiDrawIndirect = obj.multiDrawIndirect;
    ,
    result.drawIndirectFirstInstance = obj.drawIndirectFirstInstance;
    ,
    result.depthClamp = obj.depthClamp;
    ,
    result.depthBiasClamp = obj.depthBiasClamp;
    ,
    result.fillModeNonSolid = obj.fillModeNonSolid;
    ,
    result.depthBounds = obj.depthBounds;
    ,
    result.wideLines = obj.wideLines;
    ,
    result.largePoints = obj.largePoints;
    ,
    result.alphaToOne = obj.alphaToOne;
    ,
    result.multiViewport = obj.multiViewport;
    ,
    result.samplerAnisotropy = obj.samplerAnisotropy;
    ,
    result.textureCompressionETC2 = obj.textureCompressionETC2;
    ,
    result.textureCompressionASTC_LDR = obj.textureCompressionASTC_LDR;
    ,
    result.textureCompressionBC = obj.textureCompressionBC;
    ,
    result.occlusionQueryPrecise = obj.occlusionQueryPrecise;
    ,
    result.pipelineStatisticsQuery = obj.pipelineStatisticsQuery;
    ,
    result.vertexPipelineStoresAndAtomics = obj.vertexPipelineStoresAndAtomics;
    ,
    result.fragmentStoresAndAtomics = obj.fragmentStoresAndAtomics;
    ,
    result.shaderTessellationAndGeometryPointSize = obj.shaderTessellationAndGeometryPointSize;
    ,
    result.shaderImageGatherExtended = obj.shaderImageGatherExtended;
    ,
    result.shaderStorageImageExtendedFormats = obj.shaderStorageImageExtendedFormats;
    ,
    result.shaderStorageImageMultisample = obj.shaderStorageImageMultisample;
    ,
    result.shaderStorageImageReadWithoutFormat = obj.shaderStorageImageReadWithoutFormat;
    ,
    result.shaderStorageImageWriteWithoutFormat = obj.shaderStorageImageWriteWithoutFormat;
    ,
    result.shaderUniformBufferArrayDynamicIndexing = obj.shaderUniformBufferArrayDynamicIndexing;
    ,
    result.shaderSampledImageArrayDynamicIndexing = obj.shaderSampledImageArrayDynamicIndexing;
    ,
    result.shaderStorageBufferArrayDynamicIndexing = obj.shaderStorageBufferArrayDynamicIndexing;
    ,
    result.shaderStorageImageArrayDynamicIndexing = obj.shaderStorageImageArrayDynamicIndexing;
    ,
    result.shaderClipDistance = obj.shaderClipDistance;
    ,
    result.shaderCullDistance = obj.shaderCullDistance;
    ,
    result.shaderFloat64 = obj.shaderFloat64;
    ,
    result.shaderInt64 = obj.shaderInt64;
    ,
    result.shaderInt16 = obj.shaderInt16;
    ,
    result.shaderResourceResidency = obj.shaderResourceResidency;
    ,
    result.shaderResourceMinLod = obj.shaderResourceMinLod;
    ,
    result.sparseBinding = obj.sparseBinding;
    ,
    result.sparseResidencyBuffer = obj.sparseResidencyBuffer;
    ,
    result.sparseResidencyImage2D = obj.sparseResidencyImage2D;
    ,
    result.sparseResidencyImage3D = obj.sparseResidencyImage3D;
    ,
    result.sparseResidency2Samples = obj.sparseResidency2Samples;
    ,
    result.sparseResidency4Samples = obj.sparseResidency4Samples;
    ,
    result.sparseResidency8Samples = obj.sparseResidency8Samples;
    ,
    result.sparseResidency16Samples = obj.sparseResidency16Samples;
    ,
    result.sparseResidencyAliased = obj.sparseResidencyAliased;
    ,
    result.variableMultisampleRate = obj.variableMultisampleRate;
    ,
    result.inheritedQueries = obj.inheritedQueries;
    return result;
}

template <>
VkPhysicalDeviceFeatures2 create_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFeatures2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.features = create_structure_copy(obj.features, pAllocationCallbacks);
    return result;
}



template <>
VkPhysicalDeviceFloatControlsProperties create_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFloatControlsProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.denormBehaviorIndependence = obj.denormBehaviorIndependence;
    ,
    result.roundingModeIndependence = obj.roundingModeIndependence;
    ,
    result.shaderSignedZeroInfNanPreserveFloat16 = obj.shaderSignedZeroInfNanPreserveFloat16;
    ,
    result.shaderSignedZeroInfNanPreserveFloat32 = obj.shaderSignedZeroInfNanPreserveFloat32;
    ,
    result.shaderSignedZeroInfNanPreserveFloat64 = obj.shaderSignedZeroInfNanPreserveFloat64;
    ,
    result.shaderDenormPreserveFloat16 = obj.shaderDenormPreserveFloat16;
    ,
    result.shaderDenormPreserveFloat32 = obj.shaderDenormPreserveFloat32;
    ,
    result.shaderDenormPreserveFloat64 = obj.shaderDenormPreserveFloat64;
    ,
    result.shaderDenormFlushToZeroFloat16 = obj.shaderDenormFlushToZeroFloat16;
    ,
    result.shaderDenormFlushToZeroFloat32 = obj.shaderDenormFlushToZeroFloat32;
    ,
    result.shaderDenormFlushToZeroFloat64 = obj.shaderDenormFlushToZeroFloat64;
    ,
    result.shaderRoundingModeRTEFloat16 = obj.shaderRoundingModeRTEFloat16;
    ,
    result.shaderRoundingModeRTEFloat32 = obj.shaderRoundingModeRTEFloat32;
    ,
    result.shaderRoundingModeRTEFloat64 = obj.shaderRoundingModeRTEFloat64;
    ,
    result.shaderRoundingModeRTZFloat16 = obj.shaderRoundingModeRTZFloat16;
    ,
    result.shaderRoundingModeRTZFloat32 = obj.shaderRoundingModeRTZFloat32;
    ,
    result.shaderRoundingModeRTZFloat64 = obj.shaderRoundingModeRTZFloat64;
    return result;
}


template <>
VkPhysicalDeviceFragmentDensityMap2FeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMap2FeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fragmentDensityMapDeferred = obj.fragmentDensityMapDeferred;
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMap2PropertiesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMap2PropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.subsampledLoads = obj.subsampledLoads;
    ,
    result.subsampledCoarseReconstructionEarlyAccess = obj.subsampledCoarseReconstructionEarlyAccess;
    ,
    result.maxSubsampledArrayLayers = obj.maxSubsampledArrayLayers;
    ,
    result.maxDescriptorSetSubsampledSamplers = obj.maxDescriptorSetSubsampledSamplers;
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapFeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMapFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fragmentDensityMap = obj.fragmentDensityMap;
    ,
    result.fragmentDensityMapDynamic = obj.fragmentDensityMapDynamic;
    ,
    result.fragmentDensityMapNonSubsampledImages = obj.fragmentDensityMapNonSubsampledImages;
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapPropertiesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.minFragmentDensityTexelSize = create_structure_copy(obj.minFragmentDensityTexelSize, pAllocationCallbacks);
    ,
    result.maxFragmentDensityTexelSize = create_structure_copy(obj.maxFragmentDensityTexelSize, pAllocationCallbacks);
    ,
    result.fragmentDensityInvocations = obj.fragmentDensityInvocations;
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV create_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fragmentShaderBarycentric = obj.fragmentShaderBarycentric;
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fragmentShaderSampleInterlock = obj.fragmentShaderSampleInterlock;
    ,
    result.fragmentShaderPixelInterlock = obj.fragmentShaderPixelInterlock;
    ,
    result.fragmentShaderShadingRateInterlock = obj.fragmentShaderShadingRateInterlock;
    return result;
}

template <>
VkPhysicalDeviceGroupProperties create_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceGroupProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.physicalDeviceCount = obj.physicalDeviceCount;
    ,
    create_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(result.physicalDevices, obj.physicalDevices, pAllocationCallbacks);
    ,
    result.subsetAllocation = obj.subsetAllocation;
    return result;
}


template <>
VkPhysicalDeviceHostQueryResetFeatures create_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceHostQueryResetFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.hostQueryReset = obj.hostQueryReset;
    return result;
}


template <>
VkPhysicalDeviceIDProperties create_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceIDProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_UUID_SIZE>(result.deviceUUID, obj.deviceUUID, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_UUID_SIZE>(result.driverUUID, obj.driverUUID, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_LUID_SIZE>(result.deviceLUID, obj.deviceLUID, pAllocationCallbacks);
    ,
    result.deviceNodeMask = obj.deviceNodeMask;
    ,
    result.deviceLUIDValid = obj.deviceLUIDValid;
    return result;
}


template <>
VkPhysicalDeviceImageDrmFormatModifierInfoEXT create_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.drmFormatModifier = obj.drmFormatModifier;
    ,
    result.sharingMode = obj.sharingMode;
    ,
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    ,
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceImageFormatInfo2 create_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageFormatInfo2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.format = obj.format;
    ,
    result.type = obj.type;
    ,
    result.tiling = obj.tiling;
    ,
    result.usage = obj.usage;
    ,
    result.flags = obj.flags;
    return result;
}


template <>
VkPhysicalDeviceImageRobustnessFeaturesEXT create_structure_copy<VkPhysicalDeviceImageRobustnessFeaturesEXT>(const VkPhysicalDeviceImageRobustnessFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageRobustnessFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.robustImageAccess = obj.robustImageAccess;
    return result;
}

template <>
VkPhysicalDeviceImageViewImageFormatInfoEXT create_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImageViewImageFormatInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.imageViewType = obj.imageViewType;
    return result;
}

template <>
VkPhysicalDeviceImagelessFramebufferFeatures create_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceImagelessFramebufferFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.imagelessFramebuffer = obj.imagelessFramebuffer;
    return result;
}


template <>
VkPhysicalDeviceIndexTypeUint8FeaturesEXT create_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceIndexTypeUint8FeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.indexTypeUint8 = obj.indexTypeUint8;
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockFeaturesEXT create_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceInlineUniformBlockFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.inlineUniformBlock = obj.inlineUniformBlock;
    ,
    result.descriptorBindingInlineUniformBlockUpdateAfterBind = obj.descriptorBindingInlineUniformBlockUpdateAfterBind;
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockPropertiesEXT create_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceInlineUniformBlockPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxInlineUniformBlockSize = obj.maxInlineUniformBlockSize;
    ,
    result.maxPerStageDescriptorInlineUniformBlocks = obj.maxPerStageDescriptorInlineUniformBlocks;
    ,
    result.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    ,
    result.maxDescriptorSetInlineUniformBlocks = obj.maxDescriptorSetInlineUniformBlocks;
    ,
    result.maxDescriptorSetUpdateAfterBindInlineUniformBlocks = obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    return result;
}

template <>
VkPhysicalDeviceLimits create_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLimits result { };
    result.maxImageDimension1D = obj.maxImageDimension1D;
    ,
    result.maxImageDimension2D = obj.maxImageDimension2D;
    ,
    result.maxImageDimension3D = obj.maxImageDimension3D;
    ,
    result.maxImageDimensionCube = obj.maxImageDimensionCube;
    ,
    result.maxImageArrayLayers = obj.maxImageArrayLayers;
    ,
    result.maxTexelBufferElements = obj.maxTexelBufferElements;
    ,
    result.maxUniformBufferRange = obj.maxUniformBufferRange;
    ,
    result.maxStorageBufferRange = obj.maxStorageBufferRange;
    ,
    result.maxPushConstantsSize = obj.maxPushConstantsSize;
    ,
    result.maxMemoryAllocationCount = obj.maxMemoryAllocationCount;
    ,
    result.maxSamplerAllocationCount = obj.maxSamplerAllocationCount;
    ,
    result.bufferImageGranularity = obj.bufferImageGranularity;
    ,
    result.sparseAddressSpaceSize = obj.sparseAddressSpaceSize;
    ,
    result.maxBoundDescriptorSets = obj.maxBoundDescriptorSets;
    ,
    result.maxPerStageDescriptorSamplers = obj.maxPerStageDescriptorSamplers;
    ,
    result.maxPerStageDescriptorUniformBuffers = obj.maxPerStageDescriptorUniformBuffers;
    ,
    result.maxPerStageDescriptorStorageBuffers = obj.maxPerStageDescriptorStorageBuffers;
    ,
    result.maxPerStageDescriptorSampledImages = obj.maxPerStageDescriptorSampledImages;
    ,
    result.maxPerStageDescriptorStorageImages = obj.maxPerStageDescriptorStorageImages;
    ,
    result.maxPerStageDescriptorInputAttachments = obj.maxPerStageDescriptorInputAttachments;
    ,
    result.maxPerStageResources = obj.maxPerStageResources;
    ,
    result.maxDescriptorSetSamplers = obj.maxDescriptorSetSamplers;
    ,
    result.maxDescriptorSetUniformBuffers = obj.maxDescriptorSetUniformBuffers;
    ,
    result.maxDescriptorSetUniformBuffersDynamic = obj.maxDescriptorSetUniformBuffersDynamic;
    ,
    result.maxDescriptorSetStorageBuffers = obj.maxDescriptorSetStorageBuffers;
    ,
    result.maxDescriptorSetStorageBuffersDynamic = obj.maxDescriptorSetStorageBuffersDynamic;
    ,
    result.maxDescriptorSetSampledImages = obj.maxDescriptorSetSampledImages;
    ,
    result.maxDescriptorSetStorageImages = obj.maxDescriptorSetStorageImages;
    ,
    result.maxDescriptorSetInputAttachments = obj.maxDescriptorSetInputAttachments;
    ,
    result.maxVertexInputAttributes = obj.maxVertexInputAttributes;
    ,
    result.maxVertexInputBindings = obj.maxVertexInputBindings;
    ,
    result.maxVertexInputAttributeOffset = obj.maxVertexInputAttributeOffset;
    ,
    result.maxVertexInputBindingStride = obj.maxVertexInputBindingStride;
    ,
    result.maxVertexOutputComponents = obj.maxVertexOutputComponents;
    ,
    result.maxTessellationGenerationLevel = obj.maxTessellationGenerationLevel;
    ,
    result.maxTessellationPatchSize = obj.maxTessellationPatchSize;
    ,
    result.maxTessellationControlPerVertexInputComponents = obj.maxTessellationControlPerVertexInputComponents;
    ,
    result.maxTessellationControlPerVertexOutputComponents = obj.maxTessellationControlPerVertexOutputComponents;
    ,
    result.maxTessellationControlPerPatchOutputComponents = obj.maxTessellationControlPerPatchOutputComponents;
    ,
    result.maxTessellationControlTotalOutputComponents = obj.maxTessellationControlTotalOutputComponents;
    ,
    result.maxTessellationEvaluationInputComponents = obj.maxTessellationEvaluationInputComponents;
    ,
    result.maxTessellationEvaluationOutputComponents = obj.maxTessellationEvaluationOutputComponents;
    ,
    result.maxGeometryShaderInvocations = obj.maxGeometryShaderInvocations;
    ,
    result.maxGeometryInputComponents = obj.maxGeometryInputComponents;
    ,
    result.maxGeometryOutputComponents = obj.maxGeometryOutputComponents;
    ,
    result.maxGeometryOutputVertices = obj.maxGeometryOutputVertices;
    ,
    result.maxGeometryTotalOutputComponents = obj.maxGeometryTotalOutputComponents;
    ,
    result.maxFragmentInputComponents = obj.maxFragmentInputComponents;
    ,
    result.maxFragmentOutputAttachments = obj.maxFragmentOutputAttachments;
    ,
    result.maxFragmentDualSrcAttachments = obj.maxFragmentDualSrcAttachments;
    ,
    result.maxFragmentCombinedOutputResources = obj.maxFragmentCombinedOutputResources;
    ,
    result.maxComputeSharedMemorySize = obj.maxComputeSharedMemorySize;
    ,
    create_static_array_copy<3>(result.maxComputeWorkGroupCount, obj.maxComputeWorkGroupCount, pAllocationCallbacks);
    ,
    result.maxComputeWorkGroupInvocations = obj.maxComputeWorkGroupInvocations;
    ,
    create_static_array_copy<3>(result.maxComputeWorkGroupSize, obj.maxComputeWorkGroupSize, pAllocationCallbacks);
    ,
    result.subPixelPrecisionBits = obj.subPixelPrecisionBits;
    ,
    result.subTexelPrecisionBits = obj.subTexelPrecisionBits;
    ,
    result.mipmapPrecisionBits = obj.mipmapPrecisionBits;
    ,
    result.maxDrawIndexedIndexValue = obj.maxDrawIndexedIndexValue;
    ,
    result.maxDrawIndirectCount = obj.maxDrawIndirectCount;
    ,
    result.maxSamplerLodBias = obj.maxSamplerLodBias;
    ,
    result.maxSamplerAnisotropy = obj.maxSamplerAnisotropy;
    ,
    result.maxViewports = obj.maxViewports;
    ,
    create_static_array_copy<2>(result.maxViewportDimensions, obj.maxViewportDimensions, pAllocationCallbacks);
    ,
    create_static_array_copy<2>(result.viewportBoundsRange, obj.viewportBoundsRange, pAllocationCallbacks);
    ,
    result.viewportSubPixelBits = obj.viewportSubPixelBits;
    ,
    result.minMemoryMapAlignment = obj.minMemoryMapAlignment;
    ,
    result.minTexelBufferOffsetAlignment = obj.minTexelBufferOffsetAlignment;
    ,
    result.minUniformBufferOffsetAlignment = obj.minUniformBufferOffsetAlignment;
    ,
    result.minStorageBufferOffsetAlignment = obj.minStorageBufferOffsetAlignment;
    ,
    result.minTexelOffset = obj.minTexelOffset;
    ,
    result.maxTexelOffset = obj.maxTexelOffset;
    ,
    result.minTexelGatherOffset = obj.minTexelGatherOffset;
    ,
    result.maxTexelGatherOffset = obj.maxTexelGatherOffset;
    ,
    result.minInterpolationOffset = obj.minInterpolationOffset;
    ,
    result.maxInterpolationOffset = obj.maxInterpolationOffset;
    ,
    result.subPixelInterpolationOffsetBits = obj.subPixelInterpolationOffsetBits;
    ,
    result.maxFramebufferWidth = obj.maxFramebufferWidth;
    ,
    result.maxFramebufferHeight = obj.maxFramebufferHeight;
    ,
    result.maxFramebufferLayers = obj.maxFramebufferLayers;
    ,
    result.framebufferColorSampleCounts = obj.framebufferColorSampleCounts;
    ,
    result.framebufferDepthSampleCounts = obj.framebufferDepthSampleCounts;
    ,
    result.framebufferStencilSampleCounts = obj.framebufferStencilSampleCounts;
    ,
    result.framebufferNoAttachmentsSampleCounts = obj.framebufferNoAttachmentsSampleCounts;
    ,
    result.maxColorAttachments = obj.maxColorAttachments;
    ,
    result.sampledImageColorSampleCounts = obj.sampledImageColorSampleCounts;
    ,
    result.sampledImageIntegerSampleCounts = obj.sampledImageIntegerSampleCounts;
    ,
    result.sampledImageDepthSampleCounts = obj.sampledImageDepthSampleCounts;
    ,
    result.sampledImageStencilSampleCounts = obj.sampledImageStencilSampleCounts;
    ,
    result.storageImageSampleCounts = obj.storageImageSampleCounts;
    ,
    result.maxSampleMaskWords = obj.maxSampleMaskWords;
    ,
    result.timestampComputeAndGraphics = obj.timestampComputeAndGraphics;
    ,
    result.timestampPeriod = obj.timestampPeriod;
    ,
    result.maxClipDistances = obj.maxClipDistances;
    ,
    result.maxCullDistances = obj.maxCullDistances;
    ,
    result.maxCombinedClipAndCullDistances = obj.maxCombinedClipAndCullDistances;
    ,
    result.discreteQueuePriorities = obj.discreteQueuePriorities;
    ,
    create_static_array_copy<2>(result.pointSizeRange, obj.pointSizeRange, pAllocationCallbacks);
    ,
    create_static_array_copy<2>(result.lineWidthRange, obj.lineWidthRange, pAllocationCallbacks);
    ,
    result.pointSizeGranularity = obj.pointSizeGranularity;
    ,
    result.lineWidthGranularity = obj.lineWidthGranularity;
    ,
    result.strictLines = obj.strictLines;
    ,
    result.standardSampleLocations = obj.standardSampleLocations;
    ,
    result.optimalBufferCopyOffsetAlignment = obj.optimalBufferCopyOffsetAlignment;
    ,
    result.optimalBufferCopyRowPitchAlignment = obj.optimalBufferCopyRowPitchAlignment;
    ,
    result.nonCoherentAtomSize = obj.nonCoherentAtomSize;
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationFeaturesEXT create_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLineRasterizationFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.rectangularLines = obj.rectangularLines;
    ,
    result.bresenhamLines = obj.bresenhamLines;
    ,
    result.smoothLines = obj.smoothLines;
    ,
    result.stippledRectangularLines = obj.stippledRectangularLines;
    ,
    result.stippledBresenhamLines = obj.stippledBresenhamLines;
    ,
    result.stippledSmoothLines = obj.stippledSmoothLines;
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationPropertiesEXT create_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceLineRasterizationPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.lineSubPixelPrecisionBits = obj.lineSubPixelPrecisionBits;
    return result;
}

template <>
VkPhysicalDeviceMaintenance3Properties create_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMaintenance3Properties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxPerSetDescriptors = obj.maxPerSetDescriptors;
    ,
    result.maxMemoryAllocationSize = obj.maxMemoryAllocationSize;
    return result;
}


template <>
VkPhysicalDeviceMemoryBudgetPropertiesEXT create_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryBudgetPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.heapBudget, obj.heapBudget, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.heapUsage, obj.heapUsage, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMemoryPriorityFeaturesEXT create_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryPriorityFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memoryPriority = obj.memoryPriority;
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties create_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryProperties result { };
    result.memoryTypeCount = obj.memoryTypeCount;
    ,
    create_static_array_copy<VK_MAX_MEMORY_TYPES>(result.memoryTypes, obj.memoryTypes, pAllocationCallbacks);
    ,
    result.memoryHeapCount = obj.memoryHeapCount;
    ,
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.memoryHeaps, obj.memoryHeaps, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties2 create_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMemoryProperties2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memoryProperties = create_structure_copy(obj.memoryProperties, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceMeshShaderFeaturesNV create_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMeshShaderFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.taskShader = obj.taskShader;
    ,
    result.meshShader = obj.meshShader;
    return result;
}

template <>
VkPhysicalDeviceMeshShaderPropertiesNV create_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMeshShaderPropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxDrawMeshTasksCount = obj.maxDrawMeshTasksCount;
    ,
    result.maxTaskWorkGroupInvocations = obj.maxTaskWorkGroupInvocations;
    ,
    create_static_array_copy<3>(result.maxTaskWorkGroupSize, obj.maxTaskWorkGroupSize, pAllocationCallbacks);
    ,
    result.maxTaskTotalMemorySize = obj.maxTaskTotalMemorySize;
    ,
    result.maxTaskOutputCount = obj.maxTaskOutputCount;
    ,
    result.maxMeshWorkGroupInvocations = obj.maxMeshWorkGroupInvocations;
    ,
    create_static_array_copy<3>(result.maxMeshWorkGroupSize, obj.maxMeshWorkGroupSize, pAllocationCallbacks);
    ,
    result.maxMeshTotalMemorySize = obj.maxMeshTotalMemorySize;
    ,
    result.maxMeshOutputVertices = obj.maxMeshOutputVertices;
    ,
    result.maxMeshOutputPrimitives = obj.maxMeshOutputPrimitives;
    ,
    result.maxMeshMultiviewViewCount = obj.maxMeshMultiviewViewCount;
    ,
    result.meshOutputPerVertexGranularity = obj.meshOutputPerVertexGranularity;
    ,
    result.meshOutputPerPrimitiveGranularity = obj.meshOutputPerPrimitiveGranularity;
    return result;
}

template <>
VkPhysicalDeviceMultiviewFeatures create_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.multiview = obj.multiview;
    ,
    result.multiviewGeometryShader = obj.multiviewGeometryShader;
    ,
    result.multiviewTessellationShader = obj.multiviewTessellationShader;
    return result;
}


template <>
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX create_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.perViewPositionAllComponents = obj.perViewPositionAllComponents;
    return result;
}

template <>
VkPhysicalDeviceMultiviewProperties create_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceMultiviewProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxMultiviewViewCount = obj.maxMultiviewViewCount;
    ,
    result.maxMultiviewInstanceIndex = obj.maxMultiviewInstanceIndex;
    return result;
}


template <>
VkPhysicalDevicePCIBusInfoPropertiesEXT create_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePCIBusInfoPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pciDomain = obj.pciDomain;
    ,
    result.pciBus = obj.pciBus;
    ,
    result.pciDevice = obj.pciDevice;
    ,
    result.pciFunction = obj.pciFunction;
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryFeaturesKHR create_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePerformanceQueryFeaturesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.performanceCounterQueryPools = obj.performanceCounterQueryPools;
    ,
    result.performanceCounterMultipleQueryPools = obj.performanceCounterMultipleQueryPools;
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryPropertiesKHR create_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePerformanceQueryPropertiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.allowCommandBufferQueryCopies = obj.allowCommandBufferQueryCopies;
    return result;
}

template <>
VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT create_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pipelineCreationCacheControl = obj.pipelineCreationCacheControl;
    return result;
}

template <>
VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR create_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pipelineExecutableInfo = obj.pipelineExecutableInfo;
    return result;
}

template <>
VkPhysicalDevicePointClippingProperties create_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePointClippingProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pointClippingBehavior = obj.pointClippingBehavior;
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkPhysicalDevicePresentationPropertiesANDROID create_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePresentationPropertiesANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.sharedImage = obj.sharedImage;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkPhysicalDevicePrivateDataFeaturesEXT create_structure_copy<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePrivateDataFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.privateData = obj.privateData;
    return result;
}

template <>
VkPhysicalDeviceProperties create_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProperties result { };
    result.apiVersion = obj.apiVersion;
    ,
    result.driverVersion = obj.driverVersion;
    ,
    result.vendorID = obj.vendorID;
    ,
    result.deviceID = obj.deviceID;
    ,
    result.deviceType = obj.deviceType;
    ,
    create_static_string_copy<VK_MAX_PHYSICAL_DEVICE_NAME_SIZE>(result.deviceName, obj.deviceName, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_UUID_SIZE>(result.pipelineCacheUUID, obj.pipelineCacheUUID, pAllocationCallbacks);
    ,
    result.limits = create_structure_copy(obj.limits, pAllocationCallbacks);
    ,
    result.sparseProperties = create_structure_copy(obj.sparseProperties, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceProperties2 create_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProperties2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.properties = create_structure_copy(obj.properties, pAllocationCallbacks);
    return result;
}


template <>
VkPhysicalDeviceProtectedMemoryFeatures create_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProtectedMemoryFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.protectedMemory = obj.protectedMemory;
    return result;
}

template <>
VkPhysicalDeviceProtectedMemoryProperties create_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceProtectedMemoryProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.protectedNoFault = obj.protectedNoFault;
    return result;
}

template <>
VkPhysicalDevicePushDescriptorPropertiesKHR create_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDevicePushDescriptorPropertiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxPushDescriptors = obj.maxPushDescriptors;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingFeaturesKHR create_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingFeaturesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.rayTracing = obj.rayTracing;
    ,
    result.rayTracingShaderGroupHandleCaptureReplay = obj.rayTracingShaderGroupHandleCaptureReplay;
    ,
    result.rayTracingShaderGroupHandleCaptureReplayMixed = obj.rayTracingShaderGroupHandleCaptureReplayMixed;
    ,
    result.rayTracingAccelerationStructureCaptureReplay = obj.rayTracingAccelerationStructureCaptureReplay;
    ,
    result.rayTracingIndirectTraceRays = obj.rayTracingIndirectTraceRays;
    ,
    result.rayTracingIndirectAccelerationStructureBuild = obj.rayTracingIndirectAccelerationStructureBuild;
    ,
    result.rayTracingHostAccelerationStructureCommands = obj.rayTracingHostAccelerationStructureCommands;
    ,
    result.rayQuery = obj.rayQuery;
    ,
    result.rayTracingPrimitiveCulling = obj.rayTracingPrimitiveCulling;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingPropertiesKHR create_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingPropertiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderGroupHandleSize = obj.shaderGroupHandleSize;
    ,
    result.maxRecursionDepth = obj.maxRecursionDepth;
    ,
    result.maxShaderGroupStride = obj.maxShaderGroupStride;
    ,
    result.shaderGroupBaseAlignment = obj.shaderGroupBaseAlignment;
    ,
    result.maxGeometryCount = obj.maxGeometryCount;
    ,
    result.maxInstanceCount = obj.maxInstanceCount;
    ,
    result.maxPrimitiveCount = obj.maxPrimitiveCount;
    ,
    result.maxDescriptorSetAccelerationStructures = obj.maxDescriptorSetAccelerationStructures;
    ,
    result.shaderGroupHandleCaptureReplaySize = obj.shaderGroupHandleCaptureReplaySize;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkPhysicalDeviceRayTracingPropertiesNV create_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRayTracingPropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderGroupHandleSize = obj.shaderGroupHandleSize;
    ,
    result.maxRecursionDepth = obj.maxRecursionDepth;
    ,
    result.maxShaderGroupStride = obj.maxShaderGroupStride;
    ,
    result.shaderGroupBaseAlignment = obj.shaderGroupBaseAlignment;
    ,
    result.maxGeometryCount = obj.maxGeometryCount;
    ,
    result.maxInstanceCount = obj.maxInstanceCount;
    ,
    result.maxTriangleCount = obj.maxTriangleCount;
    ,
    result.maxDescriptorSetAccelerationStructures = obj.maxDescriptorSetAccelerationStructures;
    return result;
}

template <>
VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV create_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.representativeFragmentTest = obj.representativeFragmentTest;
    return result;
}

template <>
VkPhysicalDeviceRobustness2FeaturesEXT create_structure_copy<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRobustness2FeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.robustBufferAccess2 = obj.robustBufferAccess2;
    ,
    result.robustImageAccess2 = obj.robustImageAccess2;
    ,
    result.nullDescriptor = obj.nullDescriptor;
    return result;
}

template <>
VkPhysicalDeviceRobustness2PropertiesEXT create_structure_copy<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceRobustness2PropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.robustStorageBufferAccessSizeAlignment = obj.robustStorageBufferAccessSizeAlignment;
    ,
    result.robustUniformBufferAccessSizeAlignment = obj.robustUniformBufferAccessSizeAlignment;
    return result;
}

template <>
VkPhysicalDeviceSampleLocationsPropertiesEXT create_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSampleLocationsPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.sampleLocationSampleCounts = obj.sampleLocationSampleCounts;
    ,
    result.maxSampleLocationGridSize = create_structure_copy(obj.maxSampleLocationGridSize, pAllocationCallbacks);
    ,
    create_static_array_copy<2>(result.sampleLocationCoordinateRange, obj.sampleLocationCoordinateRange, pAllocationCallbacks);
    ,
    result.sampleLocationSubPixelBits = obj.sampleLocationSubPixelBits;
    ,
    result.variableSampleLocations = obj.variableSampleLocations;
    return result;
}

template <>
VkPhysicalDeviceSamplerFilterMinmaxProperties create_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSamplerFilterMinmaxProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.filterMinmaxSingleComponentFormats = obj.filterMinmaxSingleComponentFormats;
    ,
    result.filterMinmaxImageComponentMapping = obj.filterMinmaxImageComponentMapping;
    return result;
}


template <>
VkPhysicalDeviceSamplerYcbcrConversionFeatures create_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSamplerYcbcrConversionFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.samplerYcbcrConversion = obj.samplerYcbcrConversion;
    return result;
}


template <>
VkPhysicalDeviceScalarBlockLayoutFeatures create_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceScalarBlockLayoutFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.scalarBlockLayout = obj.scalarBlockLayout;
    return result;
}


template <>
VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures create_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.separateDepthStencilLayouts = obj.separateDepthStencilLayouts;
    return result;
}


template <>
VkPhysicalDeviceShaderAtomicFloatFeaturesEXT create_structure_copy<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderAtomicFloatFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderBufferFloat32Atomics = obj.shaderBufferFloat32Atomics;
    ,
    result.shaderBufferFloat32AtomicAdd = obj.shaderBufferFloat32AtomicAdd;
    ,
    result.shaderBufferFloat64Atomics = obj.shaderBufferFloat64Atomics;
    ,
    result.shaderBufferFloat64AtomicAdd = obj.shaderBufferFloat64AtomicAdd;
    ,
    result.shaderSharedFloat32Atomics = obj.shaderSharedFloat32Atomics;
    ,
    result.shaderSharedFloat32AtomicAdd = obj.shaderSharedFloat32AtomicAdd;
    ,
    result.shaderSharedFloat64Atomics = obj.shaderSharedFloat64Atomics;
    ,
    result.shaderSharedFloat64AtomicAdd = obj.shaderSharedFloat64AtomicAdd;
    ,
    result.shaderImageFloat32Atomics = obj.shaderImageFloat32Atomics;
    ,
    result.shaderImageFloat32AtomicAdd = obj.shaderImageFloat32AtomicAdd;
    ,
    result.sparseImageFloat32Atomics = obj.sparseImageFloat32Atomics;
    ,
    result.sparseImageFloat32AtomicAdd = obj.sparseImageFloat32AtomicAdd;
    return result;
}

template <>
VkPhysicalDeviceShaderAtomicInt64Features create_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderAtomicInt64Features result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderBufferInt64Atomics = obj.shaderBufferInt64Atomics;
    ,
    result.shaderSharedInt64Atomics = obj.shaderSharedInt64Atomics;
    return result;
}


template <>
VkPhysicalDeviceShaderClockFeaturesKHR create_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderClockFeaturesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderSubgroupClock = obj.shaderSubgroupClock;
    ,
    result.shaderDeviceClock = obj.shaderDeviceClock;
    return result;
}

template <>
VkPhysicalDeviceShaderCoreProperties2AMD create_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderCoreProperties2AMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderCoreFeatures = obj.shaderCoreFeatures;
    ,
    result.activeComputeUnitCount = obj.activeComputeUnitCount;
    return result;
}

template <>
VkPhysicalDeviceShaderCorePropertiesAMD create_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderCorePropertiesAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderEngineCount = obj.shaderEngineCount;
    ,
    result.shaderArraysPerEngineCount = obj.shaderArraysPerEngineCount;
    ,
    result.computeUnitsPerShaderArray = obj.computeUnitsPerShaderArray;
    ,
    result.simdPerComputeUnit = obj.simdPerComputeUnit;
    ,
    result.wavefrontsPerSimd = obj.wavefrontsPerSimd;
    ,
    result.wavefrontSize = obj.wavefrontSize;
    ,
    result.sgprsPerSimd = obj.sgprsPerSimd;
    ,
    result.minSgprAllocation = obj.minSgprAllocation;
    ,
    result.maxSgprAllocation = obj.maxSgprAllocation;
    ,
    result.sgprAllocationGranularity = obj.sgprAllocationGranularity;
    ,
    result.vgprsPerSimd = obj.vgprsPerSimd;
    ,
    result.minVgprAllocation = obj.minVgprAllocation;
    ,
    result.maxVgprAllocation = obj.maxVgprAllocation;
    ,
    result.vgprAllocationGranularity = obj.vgprAllocationGranularity;
    return result;
}

template <>
VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT create_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderDemoteToHelperInvocation = obj.shaderDemoteToHelperInvocation;
    return result;
}


template <>
VkPhysicalDeviceShaderDrawParametersFeatures create_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderDrawParametersFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderDrawParameters = obj.shaderDrawParameters;
    return result;
}

template <>
VkPhysicalDeviceShaderFloat16Int8Features create_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderFloat16Int8Features result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderFloat16 = obj.shaderFloat16;
    ,
    result.shaderInt8 = obj.shaderInt8;
    return result;
}


template <>
VkPhysicalDeviceShaderImageFootprintFeaturesNV create_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderImageFootprintFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.imageFootprint = obj.imageFootprint;
    return result;
}

template <>
VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL create_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderIntegerFunctions2 = obj.shaderIntegerFunctions2;
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsFeaturesNV create_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSMBuiltinsFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderSMBuiltins = obj.shaderSMBuiltins;
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsPropertiesNV create_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderSMCount = obj.shaderSMCount;
    ,
    result.shaderWarpsPerSM = obj.shaderWarpsPerSM;
    return result;
}

template <>
VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures create_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shaderSubgroupExtendedTypes = obj.shaderSubgroupExtendedTypes;
    return result;
}


template <>
VkPhysicalDeviceShadingRateImageFeaturesNV create_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShadingRateImageFeaturesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shadingRateImage = obj.shadingRateImage;
    ,
    result.shadingRateCoarseSampleOrder = obj.shadingRateCoarseSampleOrder;
    return result;
}

template <>
VkPhysicalDeviceShadingRateImagePropertiesNV create_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceShadingRateImagePropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shadingRateTexelSize = create_structure_copy(obj.shadingRateTexelSize, pAllocationCallbacks);
    ,
    result.shadingRatePaletteSize = obj.shadingRatePaletteSize;
    ,
    result.shadingRateMaxCoarseSamples = obj.shadingRateMaxCoarseSamples;
    return result;
}

template <>
VkPhysicalDeviceSparseImageFormatInfo2 create_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSparseImageFormatInfo2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.format = obj.format;
    ,
    result.type = obj.type;
    ,
    result.samples = obj.samples;
    ,
    result.usage = obj.usage;
    ,
    result.tiling = obj.tiling;
    return result;
}


template <>
VkPhysicalDeviceSparseProperties create_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSparseProperties result { };
    result.residencyStandard2DBlockShape = obj.residencyStandard2DBlockShape;
    ,
    result.residencyStandard2DMultisampleBlockShape = obj.residencyStandard2DMultisampleBlockShape;
    ,
    result.residencyStandard3DBlockShape = obj.residencyStandard3DBlockShape;
    ,
    result.residencyAlignedMipSize = obj.residencyAlignedMipSize;
    ,
    result.residencyNonResidentStrict = obj.residencyNonResidentStrict;
    return result;
}

template <>
VkPhysicalDeviceSubgroupProperties create_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.subgroupSize = obj.subgroupSize;
    ,
    result.supportedStages = obj.supportedStages;
    ,
    result.supportedOperations = obj.supportedOperations;
    ,
    result.quadOperationsInAllStages = obj.quadOperationsInAllStages;
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlFeaturesEXT create_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupSizeControlFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.subgroupSizeControl = obj.subgroupSizeControl;
    ,
    result.computeFullSubgroups = obj.computeFullSubgroups;
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlPropertiesEXT create_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSubgroupSizeControlPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.minSubgroupSize = obj.minSubgroupSize;
    ,
    result.maxSubgroupSize = obj.maxSubgroupSize;
    ,
    result.maxComputeWorkgroupSubgroups = obj.maxComputeWorkgroupSubgroups;
    ,
    result.requiredSubgroupSizeStages = obj.requiredSubgroupSizeStages;
    return result;
}

template <>
VkPhysicalDeviceSurfaceInfo2KHR create_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceSurfaceInfo2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.surface = obj.surface;
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT create_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.texelBufferAlignment = obj.texelBufferAlignment;
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT create_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.storageTexelBufferOffsetAlignmentBytes = obj.storageTexelBufferOffsetAlignmentBytes;
    ,
    result.storageTexelBufferOffsetSingleTexelAlignment = obj.storageTexelBufferOffsetSingleTexelAlignment;
    ,
    result.uniformTexelBufferOffsetAlignmentBytes = obj.uniformTexelBufferOffsetAlignmentBytes;
    ,
    result.uniformTexelBufferOffsetSingleTexelAlignment = obj.uniformTexelBufferOffsetSingleTexelAlignment;
    return result;
}

template <>
VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT create_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.textureCompressionASTC_HDR = obj.textureCompressionASTC_HDR;
    return result;
}

template <>
VkPhysicalDeviceTimelineSemaphoreFeatures create_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTimelineSemaphoreFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.timelineSemaphore = obj.timelineSemaphore;
    return result;
}


template <>
VkPhysicalDeviceTimelineSemaphoreProperties create_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTimelineSemaphoreProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxTimelineSemaphoreValueDifference = obj.maxTimelineSemaphoreValueDifference;
    return result;
}


template <>
VkPhysicalDeviceToolPropertiesEXT create_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceToolPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.name, obj.name, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.version, obj.version, pAllocationCallbacks);
    ,
    result.purposes = obj.purposes;
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.layer, obj.layer, pAllocationCallbacks);
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackFeaturesEXT create_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTransformFeedbackFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.transformFeedback = obj.transformFeedback;
    ,
    result.geometryStreams = obj.geometryStreams;
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackPropertiesEXT create_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceTransformFeedbackPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxTransformFeedbackStreams = obj.maxTransformFeedbackStreams;
    ,
    result.maxTransformFeedbackBuffers = obj.maxTransformFeedbackBuffers;
    ,
    result.maxTransformFeedbackBufferSize = obj.maxTransformFeedbackBufferSize;
    ,
    result.maxTransformFeedbackStreamDataSize = obj.maxTransformFeedbackStreamDataSize;
    ,
    result.maxTransformFeedbackBufferDataSize = obj.maxTransformFeedbackBufferDataSize;
    ,
    result.maxTransformFeedbackBufferDataStride = obj.maxTransformFeedbackBufferDataStride;
    ,
    result.transformFeedbackQueries = obj.transformFeedbackQueries;
    ,
    result.transformFeedbackStreamsLinesTriangles = obj.transformFeedbackStreamsLinesTriangles;
    ,
    result.transformFeedbackRasterizationStreamSelect = obj.transformFeedbackRasterizationStreamSelect;
    ,
    result.transformFeedbackDraw = obj.transformFeedbackDraw;
    return result;
}

template <>
VkPhysicalDeviceUniformBufferStandardLayoutFeatures create_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.uniformBufferStandardLayout = obj.uniformBufferStandardLayout;
    return result;
}




template <>
VkPhysicalDeviceVariablePointersFeatures create_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVariablePointersFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.variablePointersStorageBuffer = obj.variablePointersStorageBuffer;
    ,
    result.variablePointers = obj.variablePointers;
    return result;
}


template <>
VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT create_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.vertexAttributeInstanceRateDivisor = obj.vertexAttributeInstanceRateDivisor;
    ,
    result.vertexAttributeInstanceRateZeroDivisor = obj.vertexAttributeInstanceRateZeroDivisor;
    return result;
}

template <>
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT create_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxVertexAttribDivisor = obj.maxVertexAttribDivisor;
    return result;
}

template <>
VkPhysicalDeviceVulkan11Features create_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan11Features result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.storageBuffer16BitAccess = obj.storageBuffer16BitAccess;
    ,
    result.uniformAndStorageBuffer16BitAccess = obj.uniformAndStorageBuffer16BitAccess;
    ,
    result.storagePushConstant16 = obj.storagePushConstant16;
    ,
    result.storageInputOutput16 = obj.storageInputOutput16;
    ,
    result.multiview = obj.multiview;
    ,
    result.multiviewGeometryShader = obj.multiviewGeometryShader;
    ,
    result.multiviewTessellationShader = obj.multiviewTessellationShader;
    ,
    result.variablePointersStorageBuffer = obj.variablePointersStorageBuffer;
    ,
    result.variablePointers = obj.variablePointers;
    ,
    result.protectedMemory = obj.protectedMemory;
    ,
    result.samplerYcbcrConversion = obj.samplerYcbcrConversion;
    ,
    result.shaderDrawParameters = obj.shaderDrawParameters;
    return result;
}

template <>
VkPhysicalDeviceVulkan11Properties create_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan11Properties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_UUID_SIZE>(result.deviceUUID, obj.deviceUUID, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_UUID_SIZE>(result.driverUUID, obj.driverUUID, pAllocationCallbacks);
    ,
    create_static_array_copy<VK_LUID_SIZE>(result.deviceLUID, obj.deviceLUID, pAllocationCallbacks);
    ,
    result.deviceNodeMask = obj.deviceNodeMask;
    ,
    result.deviceLUIDValid = obj.deviceLUIDValid;
    ,
    result.subgroupSize = obj.subgroupSize;
    ,
    result.subgroupSupportedStages = obj.subgroupSupportedStages;
    ,
    result.subgroupSupportedOperations = obj.subgroupSupportedOperations;
    ,
    result.subgroupQuadOperationsInAllStages = obj.subgroupQuadOperationsInAllStages;
    ,
    result.pointClippingBehavior = obj.pointClippingBehavior;
    ,
    result.maxMultiviewViewCount = obj.maxMultiviewViewCount;
    ,
    result.maxMultiviewInstanceIndex = obj.maxMultiviewInstanceIndex;
    ,
    result.protectedNoFault = obj.protectedNoFault;
    ,
    result.maxPerSetDescriptors = obj.maxPerSetDescriptors;
    ,
    result.maxMemoryAllocationSize = obj.maxMemoryAllocationSize;
    return result;
}

template <>
VkPhysicalDeviceVulkan12Features create_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan12Features result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.samplerMirrorClampToEdge = obj.samplerMirrorClampToEdge;
    ,
    result.drawIndirectCount = obj.drawIndirectCount;
    ,
    result.storageBuffer8BitAccess = obj.storageBuffer8BitAccess;
    ,
    result.uniformAndStorageBuffer8BitAccess = obj.uniformAndStorageBuffer8BitAccess;
    ,
    result.storagePushConstant8 = obj.storagePushConstant8;
    ,
    result.shaderBufferInt64Atomics = obj.shaderBufferInt64Atomics;
    ,
    result.shaderSharedInt64Atomics = obj.shaderSharedInt64Atomics;
    ,
    result.shaderFloat16 = obj.shaderFloat16;
    ,
    result.shaderInt8 = obj.shaderInt8;
    ,
    result.descriptorIndexing = obj.descriptorIndexing;
    ,
    result.shaderInputAttachmentArrayDynamicIndexing = obj.shaderInputAttachmentArrayDynamicIndexing;
    ,
    result.shaderUniformTexelBufferArrayDynamicIndexing = obj.shaderUniformTexelBufferArrayDynamicIndexing;
    ,
    result.shaderStorageTexelBufferArrayDynamicIndexing = obj.shaderStorageTexelBufferArrayDynamicIndexing;
    ,
    result.shaderUniformBufferArrayNonUniformIndexing = obj.shaderUniformBufferArrayNonUniformIndexing;
    ,
    result.shaderSampledImageArrayNonUniformIndexing = obj.shaderSampledImageArrayNonUniformIndexing;
    ,
    result.shaderStorageBufferArrayNonUniformIndexing = obj.shaderStorageBufferArrayNonUniformIndexing;
    ,
    result.shaderStorageImageArrayNonUniformIndexing = obj.shaderStorageImageArrayNonUniformIndexing;
    ,
    result.shaderInputAttachmentArrayNonUniformIndexing = obj.shaderInputAttachmentArrayNonUniformIndexing;
    ,
    result.shaderUniformTexelBufferArrayNonUniformIndexing = obj.shaderUniformTexelBufferArrayNonUniformIndexing;
    ,
    result.shaderStorageTexelBufferArrayNonUniformIndexing = obj.shaderStorageTexelBufferArrayNonUniformIndexing;
    ,
    result.descriptorBindingUniformBufferUpdateAfterBind = obj.descriptorBindingUniformBufferUpdateAfterBind;
    ,
    result.descriptorBindingSampledImageUpdateAfterBind = obj.descriptorBindingSampledImageUpdateAfterBind;
    ,
    result.descriptorBindingStorageImageUpdateAfterBind = obj.descriptorBindingStorageImageUpdateAfterBind;
    ,
    result.descriptorBindingStorageBufferUpdateAfterBind = obj.descriptorBindingStorageBufferUpdateAfterBind;
    ,
    result.descriptorBindingUniformTexelBufferUpdateAfterBind = obj.descriptorBindingUniformTexelBufferUpdateAfterBind;
    ,
    result.descriptorBindingStorageTexelBufferUpdateAfterBind = obj.descriptorBindingStorageTexelBufferUpdateAfterBind;
    ,
    result.descriptorBindingUpdateUnusedWhilePending = obj.descriptorBindingUpdateUnusedWhilePending;
    ,
    result.descriptorBindingPartiallyBound = obj.descriptorBindingPartiallyBound;
    ,
    result.descriptorBindingVariableDescriptorCount = obj.descriptorBindingVariableDescriptorCount;
    ,
    result.runtimeDescriptorArray = obj.runtimeDescriptorArray;
    ,
    result.samplerFilterMinmax = obj.samplerFilterMinmax;
    ,
    result.scalarBlockLayout = obj.scalarBlockLayout;
    ,
    result.imagelessFramebuffer = obj.imagelessFramebuffer;
    ,
    result.uniformBufferStandardLayout = obj.uniformBufferStandardLayout;
    ,
    result.shaderSubgroupExtendedTypes = obj.shaderSubgroupExtendedTypes;
    ,
    result.separateDepthStencilLayouts = obj.separateDepthStencilLayouts;
    ,
    result.hostQueryReset = obj.hostQueryReset;
    ,
    result.timelineSemaphore = obj.timelineSemaphore;
    ,
    result.bufferDeviceAddress = obj.bufferDeviceAddress;
    ,
    result.bufferDeviceAddressCaptureReplay = obj.bufferDeviceAddressCaptureReplay;
    ,
    result.bufferDeviceAddressMultiDevice = obj.bufferDeviceAddressMultiDevice;
    ,
    result.vulkanMemoryModel = obj.vulkanMemoryModel;
    ,
    result.vulkanMemoryModelDeviceScope = obj.vulkanMemoryModelDeviceScope;
    ,
    result.vulkanMemoryModelAvailabilityVisibilityChains = obj.vulkanMemoryModelAvailabilityVisibilityChains;
    ,
    result.shaderOutputViewportIndex = obj.shaderOutputViewportIndex;
    ,
    result.shaderOutputLayer = obj.shaderOutputLayer;
    ,
    result.subgroupBroadcastDynamicId = obj.subgroupBroadcastDynamicId;
    return result;
}

template <>
VkPhysicalDeviceVulkan12Properties create_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkan12Properties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.driverID = obj.driverID;
    ,
    create_static_string_copy<VK_MAX_DRIVER_NAME_SIZE>(result.driverName, obj.driverName, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DRIVER_INFO_SIZE>(result.driverInfo, obj.driverInfo, pAllocationCallbacks);
    ,
    result.conformanceVersion = create_structure_copy(obj.conformanceVersion, pAllocationCallbacks);
    ,
    result.denormBehaviorIndependence = obj.denormBehaviorIndependence;
    ,
    result.roundingModeIndependence = obj.roundingModeIndependence;
    ,
    result.shaderSignedZeroInfNanPreserveFloat16 = obj.shaderSignedZeroInfNanPreserveFloat16;
    ,
    result.shaderSignedZeroInfNanPreserveFloat32 = obj.shaderSignedZeroInfNanPreserveFloat32;
    ,
    result.shaderSignedZeroInfNanPreserveFloat64 = obj.shaderSignedZeroInfNanPreserveFloat64;
    ,
    result.shaderDenormPreserveFloat16 = obj.shaderDenormPreserveFloat16;
    ,
    result.shaderDenormPreserveFloat32 = obj.shaderDenormPreserveFloat32;
    ,
    result.shaderDenormPreserveFloat64 = obj.shaderDenormPreserveFloat64;
    ,
    result.shaderDenormFlushToZeroFloat16 = obj.shaderDenormFlushToZeroFloat16;
    ,
    result.shaderDenormFlushToZeroFloat32 = obj.shaderDenormFlushToZeroFloat32;
    ,
    result.shaderDenormFlushToZeroFloat64 = obj.shaderDenormFlushToZeroFloat64;
    ,
    result.shaderRoundingModeRTEFloat16 = obj.shaderRoundingModeRTEFloat16;
    ,
    result.shaderRoundingModeRTEFloat32 = obj.shaderRoundingModeRTEFloat32;
    ,
    result.shaderRoundingModeRTEFloat64 = obj.shaderRoundingModeRTEFloat64;
    ,
    result.shaderRoundingModeRTZFloat16 = obj.shaderRoundingModeRTZFloat16;
    ,
    result.shaderRoundingModeRTZFloat32 = obj.shaderRoundingModeRTZFloat32;
    ,
    result.shaderRoundingModeRTZFloat64 = obj.shaderRoundingModeRTZFloat64;
    ,
    result.maxUpdateAfterBindDescriptorsInAllPools = obj.maxUpdateAfterBindDescriptorsInAllPools;
    ,
    result.shaderUniformBufferArrayNonUniformIndexingNative = obj.shaderUniformBufferArrayNonUniformIndexingNative;
    ,
    result.shaderSampledImageArrayNonUniformIndexingNative = obj.shaderSampledImageArrayNonUniformIndexingNative;
    ,
    result.shaderStorageBufferArrayNonUniformIndexingNative = obj.shaderStorageBufferArrayNonUniformIndexingNative;
    ,
    result.shaderStorageImageArrayNonUniformIndexingNative = obj.shaderStorageImageArrayNonUniformIndexingNative;
    ,
    result.shaderInputAttachmentArrayNonUniformIndexingNative = obj.shaderInputAttachmentArrayNonUniformIndexingNative;
    ,
    result.robustBufferAccessUpdateAfterBind = obj.robustBufferAccessUpdateAfterBind;
    ,
    result.quadDivergentImplicitLod = obj.quadDivergentImplicitLod;
    ,
    result.maxPerStageDescriptorUpdateAfterBindSamplers = obj.maxPerStageDescriptorUpdateAfterBindSamplers;
    ,
    result.maxPerStageDescriptorUpdateAfterBindUniformBuffers = obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    ,
    result.maxPerStageDescriptorUpdateAfterBindStorageBuffers = obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    ,
    result.maxPerStageDescriptorUpdateAfterBindSampledImages = obj.maxPerStageDescriptorUpdateAfterBindSampledImages;
    ,
    result.maxPerStageDescriptorUpdateAfterBindStorageImages = obj.maxPerStageDescriptorUpdateAfterBindStorageImages;
    ,
    result.maxPerStageDescriptorUpdateAfterBindInputAttachments = obj.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    ,
    result.maxPerStageUpdateAfterBindResources = obj.maxPerStageUpdateAfterBindResources;
    ,
    result.maxDescriptorSetUpdateAfterBindSamplers = obj.maxDescriptorSetUpdateAfterBindSamplers;
    ,
    result.maxDescriptorSetUpdateAfterBindUniformBuffers = obj.maxDescriptorSetUpdateAfterBindUniformBuffers;
    ,
    result.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    ,
    result.maxDescriptorSetUpdateAfterBindStorageBuffers = obj.maxDescriptorSetUpdateAfterBindStorageBuffers;
    ,
    result.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    ,
    result.maxDescriptorSetUpdateAfterBindSampledImages = obj.maxDescriptorSetUpdateAfterBindSampledImages;
    ,
    result.maxDescriptorSetUpdateAfterBindStorageImages = obj.maxDescriptorSetUpdateAfterBindStorageImages;
    ,
    result.maxDescriptorSetUpdateAfterBindInputAttachments = obj.maxDescriptorSetUpdateAfterBindInputAttachments;
    ,
    result.supportedDepthResolveModes = obj.supportedDepthResolveModes;
    ,
    result.supportedStencilResolveModes = obj.supportedStencilResolveModes;
    ,
    result.independentResolveNone = obj.independentResolveNone;
    ,
    result.independentResolve = obj.independentResolve;
    ,
    result.filterMinmaxSingleComponentFormats = obj.filterMinmaxSingleComponentFormats;
    ,
    result.filterMinmaxImageComponentMapping = obj.filterMinmaxImageComponentMapping;
    ,
    result.maxTimelineSemaphoreValueDifference = obj.maxTimelineSemaphoreValueDifference;
    ,
    result.framebufferIntegerColorSampleCounts = obj.framebufferIntegerColorSampleCounts;
    return result;
}

template <>
VkPhysicalDeviceVulkanMemoryModelFeatures create_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceVulkanMemoryModelFeatures result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.vulkanMemoryModel = obj.vulkanMemoryModel;
    ,
    result.vulkanMemoryModelDeviceScope = obj.vulkanMemoryModelDeviceScope;
    ,
    result.vulkanMemoryModelAvailabilityVisibilityChains = obj.vulkanMemoryModelAvailabilityVisibilityChains;
    return result;
}


template <>
VkPhysicalDeviceYcbcrImageArraysFeaturesEXT create_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPhysicalDeviceYcbcrImageArraysFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.ycbcrImageArrays = obj.ycbcrImageArrays;
    return result;
}

template <>
VkPipelineCacheCreateInfo create_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCacheCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.initialDataSize = obj.initialDataSize;
    ,
    result.pInitialData = create_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineColorBlendAdvancedStateCreateInfoEXT create_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendAdvancedStateCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.srcPremultiplied = obj.srcPremultiplied;
    ,
    result.dstPremultiplied = obj.dstPremultiplied;
    ,
    result.blendOverlap = obj.blendOverlap;
    return result;
}

template <>
VkPipelineColorBlendAttachmentState create_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendAttachmentState result { };
    result.blendEnable = obj.blendEnable;
    ,
    result.srcColorBlendFactor = obj.srcColorBlendFactor;
    ,
    result.dstColorBlendFactor = obj.dstColorBlendFactor;
    ,
    result.colorBlendOp = obj.colorBlendOp;
    ,
    result.srcAlphaBlendFactor = obj.srcAlphaBlendFactor;
    ,
    result.dstAlphaBlendFactor = obj.dstAlphaBlendFactor;
    ,
    result.alphaBlendOp = obj.alphaBlendOp;
    ,
    result.colorWriteMask = obj.colorWriteMask;
    return result;
}

template <>
VkPipelineColorBlendStateCreateInfo create_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineColorBlendStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.logicOpEnable = obj.logicOpEnable;
    ,
    result.logicOp = obj.logicOp;
    ,
    result.attachmentCount = obj.attachmentCount;
    ,
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    ,
    create_static_array_copy<4>(result.blendConstants, obj.blendConstants, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCompilerControlCreateInfoAMD create_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCompilerControlCreateInfoAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.compilerControlFlags = obj.compilerControlFlags;
    return result;
}

template <>
VkPipelineCoverageModulationStateCreateInfoNV create_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageModulationStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.coverageModulationMode = obj.coverageModulationMode;
    ,
    result.coverageModulationTableEnable = obj.coverageModulationTableEnable;
    ,
    result.coverageModulationTableCount = obj.coverageModulationTableCount;
    ,
    result.pCoverageModulationTable = create_dynamic_array_copy(obj.coverageModulationTableCount, obj.pCoverageModulationTable, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCoverageReductionStateCreateInfoNV create_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageReductionStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.coverageReductionMode = obj.coverageReductionMode;
    return result;
}

template <>
VkPipelineCoverageToColorStateCreateInfoNV create_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCoverageToColorStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.coverageToColorEnable = obj.coverageToColorEnable;
    ,
    result.coverageToColorLocation = obj.coverageToColorLocation;
    return result;
}

template <>
VkPipelineCreationFeedbackCreateInfoEXT create_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCreationFeedbackCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pPipelineCreationFeedback = create_dynamic_array_copy(1, obj.pPipelineCreationFeedback, pAllocationCallbacks);
    ,
    result.pipelineStageCreationFeedbackCount = obj.pipelineStageCreationFeedbackCount;
    ,
    result.pPipelineStageCreationFeedbacks = create_dynamic_array_copy(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineCreationFeedbackEXT create_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineCreationFeedbackEXT result { };
    result.flags = obj.flags;
    ,
    result.duration = obj.duration;
    return result;
}

template <>
VkPipelineDepthStencilStateCreateInfo create_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDepthStencilStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.depthTestEnable = obj.depthTestEnable;
    ,
    result.depthWriteEnable = obj.depthWriteEnable;
    ,
    result.depthCompareOp = obj.depthCompareOp;
    ,
    result.depthBoundsTestEnable = obj.depthBoundsTestEnable;
    ,
    result.stencilTestEnable = obj.stencilTestEnable;
    ,
    result.front = create_structure_copy(obj.front, pAllocationCallbacks);
    ,
    result.back = create_structure_copy(obj.back, pAllocationCallbacks);
    ,
    result.minDepthBounds = obj.minDepthBounds;
    ,
    result.maxDepthBounds = obj.maxDepthBounds;
    return result;
}

template <>
VkPipelineDiscardRectangleStateCreateInfoEXT create_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDiscardRectangleStateCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.discardRectangleMode = obj.discardRectangleMode;
    ,
    result.discardRectangleCount = obj.discardRectangleCount;
    ,
    result.pDiscardRectangles = create_dynamic_array_copy(obj.discardRectangleCount, obj.pDiscardRectangles, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineDynamicStateCreateInfo create_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineDynamicStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.dynamicStateCount = obj.dynamicStateCount;
    ,
    result.pDynamicStates = create_dynamic_array_copy(obj.dynamicStateCount, obj.pDynamicStates, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutableInfoKHR create_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pipeline = obj.pipeline;
    ,
    result.executableIndex = obj.executableIndex;
    return result;
}

template <>
VkPipelineExecutableInternalRepresentationKHR create_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableInternalRepresentationKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description, pAllocationCallbacks);
    ,
    result.isText = obj.isText;
    ,
    result.dataSize = obj.dataSize;
    ,
    result.pData = create_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineExecutablePropertiesKHR create_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutablePropertiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.stages = obj.stages;
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description, pAllocationCallbacks);
    ,
    result.subgroupSize = obj.subgroupSize;
    return result;
}

template <>
VkPipelineExecutableStatisticKHR create_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineExecutableStatisticKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name, pAllocationCallbacks);
    ,
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description, pAllocationCallbacks);
    ,
    result.format = obj.format;
    ,
    result.value = create_structure_copy(obj.value, pAllocationCallbacks);
    return result;
}


template <>
VkPipelineInfoKHR create_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.pipeline = obj.pipeline;
    return result;
}

template <>
VkPipelineInputAssemblyStateCreateInfo create_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineInputAssemblyStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.topology = obj.topology;
    ,
    result.primitiveRestartEnable = obj.primitiveRestartEnable;
    return result;
}

template <>
VkPipelineLayoutCreateInfo create_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineLayoutCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.setLayoutCount = obj.setLayoutCount;
    ,
    result.pSetLayouts = create_dynamic_array_copy(obj.setLayoutCount, obj.pSetLayouts, pAllocationCallbacks);
    ,
    result.pushConstantRangeCount = obj.pushConstantRangeCount;
    ,
    result.pPushConstantRanges = create_dynamic_array_copy(obj.pushConstantRangeCount, obj.pPushConstantRanges, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPipelineLibraryCreateInfoKHR create_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineLibraryCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.libraryCount = obj.libraryCount;
    ,
    result.pLibraries = create_dynamic_array_copy(obj.libraryCount, obj.pLibraries, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkPipelineRasterizationConservativeStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationConservativeStateCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.conservativeRasterizationMode = obj.conservativeRasterizationMode;
    ,
    result.extraPrimitiveOverestimationSize = obj.extraPrimitiveOverestimationSize;
    return result;
}

template <>
VkPipelineRasterizationDepthClipStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationDepthClipStateCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.depthClipEnable = obj.depthClipEnable;
    return result;
}

template <>
VkPipelineRasterizationLineStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationLineStateCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.lineRasterizationMode = obj.lineRasterizationMode;
    ,
    result.stippledLineEnable = obj.stippledLineEnable;
    ,
    result.lineStippleFactor = obj.lineStippleFactor;
    ,
    result.lineStipplePattern = obj.lineStipplePattern;
    return result;
}

template <>
VkPipelineRasterizationStateCreateInfo create_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.depthClampEnable = obj.depthClampEnable;
    ,
    result.rasterizerDiscardEnable = obj.rasterizerDiscardEnable;
    ,
    result.polygonMode = obj.polygonMode;
    ,
    result.cullMode = obj.cullMode;
    ,
    result.frontFace = obj.frontFace;
    ,
    result.depthBiasEnable = obj.depthBiasEnable;
    ,
    result.depthBiasConstantFactor = obj.depthBiasConstantFactor;
    ,
    result.depthBiasClamp = obj.depthBiasClamp;
    ,
    result.depthBiasSlopeFactor = obj.depthBiasSlopeFactor;
    ,
    result.lineWidth = obj.lineWidth;
    return result;
}

template <>
VkPipelineRasterizationStateRasterizationOrderAMD create_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateRasterizationOrderAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.rasterizationOrder = obj.rasterizationOrder;
    return result;
}

template <>
VkPipelineRasterizationStateStreamCreateInfoEXT create_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRasterizationStateStreamCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.rasterizationStream = obj.rasterizationStream;
    return result;
}

template <>
VkPipelineRepresentativeFragmentTestStateCreateInfoNV create_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.representativeFragmentTestEnable = obj.representativeFragmentTestEnable;
    return result;
}

template <>
VkPipelineSampleLocationsStateCreateInfoEXT create_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineSampleLocationsStateCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.sampleLocationsEnable = obj.sampleLocationsEnable;
    ,
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineShaderStageCreateInfo create_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineShaderStageCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.stage = obj.stage;
    ,
    result.module = obj.module;
    ,
    result.pName = create_dynamic_string_copy(obj.pName, pAllocationCallbacks);
    ,
    result.pSpecializationInfo = create_dynamic_array_copy(1, obj.pSpecializationInfo, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT create_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.requiredSubgroupSize = obj.requiredSubgroupSize;
    return result;
}

template <>
VkPipelineTessellationDomainOriginStateCreateInfo create_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineTessellationDomainOriginStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.domainOrigin = obj.domainOrigin;
    return result;
}


template <>
VkPipelineTessellationStateCreateInfo create_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineTessellationStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.patchControlPoints = obj.patchControlPoints;
    return result;
}

template <>
VkPipelineVertexInputDivisorStateCreateInfoEXT create_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineVertexInputDivisorStateCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.vertexBindingDivisorCount = obj.vertexBindingDivisorCount;
    ,
    result.pVertexBindingDivisors = create_dynamic_array_copy(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineVertexInputStateCreateInfo create_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineVertexInputStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.vertexBindingDescriptionCount = obj.vertexBindingDescriptionCount;
    ,
    result.pVertexBindingDescriptions = create_dynamic_array_copy(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions, pAllocationCallbacks);
    ,
    result.vertexAttributeDescriptionCount = obj.vertexAttributeDescriptionCount;
    ,
    result.pVertexAttributeDescriptions = create_dynamic_array_copy(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportCoarseSampleOrderStateCreateInfoNV create_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.sampleOrderType = obj.sampleOrderType;
    ,
    result.customSampleOrderCount = obj.customSampleOrderCount;
    ,
    result.pCustomSampleOrders = create_dynamic_array_copy(obj.customSampleOrderCount, obj.pCustomSampleOrders, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportExclusiveScissorStateCreateInfoNV create_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportExclusiveScissorStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.exclusiveScissorCount = obj.exclusiveScissorCount;
    ,
    result.pExclusiveScissors = create_dynamic_array_copy(obj.exclusiveScissorCount, obj.pExclusiveScissors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportShadingRateImageStateCreateInfoNV create_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportShadingRateImageStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.shadingRateImageEnable = obj.shadingRateImageEnable;
    ,
    result.viewportCount = obj.viewportCount;
    ,
    result.pShadingRatePalettes = create_dynamic_array_copy(obj.viewportCount, obj.pShadingRatePalettes, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportStateCreateInfo create_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportStateCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.viewportCount = obj.viewportCount;
    ,
    result.pViewports = create_dynamic_array_copy(obj.viewportCount, obj.pViewports, pAllocationCallbacks);
    ,
    result.scissorCount = obj.scissorCount;
    ,
    result.pScissors = create_dynamic_array_copy(obj.scissorCount, obj.pScissors, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportSwizzleStateCreateInfoNV create_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportSwizzleStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.viewportCount = obj.viewportCount;
    ,
    result.pViewportSwizzles = create_dynamic_array_copy(obj.viewportCount, obj.pViewportSwizzles, pAllocationCallbacks);
    return result;
}

template <>
VkPipelineViewportWScalingStateCreateInfoNV create_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPipelineViewportWScalingStateCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.viewportWScalingEnable = obj.viewportWScalingEnable;
    ,
    result.viewportCount = obj.viewportCount;
    ,
    result.pViewportWScalings = create_dynamic_array_copy(obj.viewportCount, obj.pViewportWScalings, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkPresentFrameTokenGGP create_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentFrameTokenGGP result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.frameToken = obj.frameToken;
    return result;
}
#endif // VK_USE_PLATFORM_GGP

template <>
VkPresentInfoKHR create_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    ,
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    ,
    result.swapchainCount = obj.swapchainCount;
    ,
    result.pSwapchains = create_dynamic_array_copy(obj.swapchainCount, obj.pSwapchains, pAllocationCallbacks);
    ,
    result.pImageIndices = create_dynamic_array_copy(obj.swapchainCount, obj.pImageIndices, pAllocationCallbacks);
    ,
    result.pResults = create_dynamic_array_copy(obj.swapchainCount, obj.pResults, pAllocationCallbacks);
    return result;
}

template <>
VkPresentRegionKHR create_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentRegionKHR result { };
    result.rectangleCount = obj.rectangleCount;
    ,
    result.pRectangles = create_dynamic_array_copy(obj.rectangleCount, obj.pRectangles, pAllocationCallbacks);
    return result;
}

template <>
VkPresentRegionsKHR create_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentRegionsKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.swapchainCount = obj.swapchainCount;
    ,
    result.pRegions = create_dynamic_array_copy(obj.swapchainCount, obj.pRegions, pAllocationCallbacks);
    return result;
}

template <>
VkPresentTimeGOOGLE create_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentTimeGOOGLE result { };
    result.presentID = obj.presentID;
    ,
    result.desiredPresentTime = obj.desiredPresentTime;
    return result;
}

template <>
VkPresentTimesInfoGOOGLE create_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPresentTimesInfoGOOGLE result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.swapchainCount = obj.swapchainCount;
    ,
    result.pTimes = create_dynamic_array_copy(obj.swapchainCount, obj.pTimes, pAllocationCallbacks);
    return result;
}

template <>
VkPrivateDataSlotCreateInfoEXT create_structure_copy<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPrivateDataSlotCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkProtectedSubmitInfo create_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkProtectedSubmitInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.protectedSubmit = obj.protectedSubmit;
    return result;
}

template <>
VkPushConstantRange create_structure_copy<VkPushConstantRange>(const VkPushConstantRange& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkPushConstantRange result { };
    result.stageFlags = obj.stageFlags;
    ,
    result.offset = obj.offset;
    ,
    result.size = obj.size;
    return result;
}

template <>
VkQueryPoolCreateInfo create_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.queryType = obj.queryType;
    ,
    result.queryCount = obj.queryCount;
    ,
    result.pipelineStatistics = obj.pipelineStatistics;
    return result;
}


template <>
VkQueryPoolPerformanceCreateInfoKHR create_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolPerformanceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.queueFamilyIndex = obj.queueFamilyIndex;
    ,
    result.counterIndexCount = obj.counterIndexCount;
    ,
    result.pCounterIndices = create_dynamic_array_copy(obj.counterIndexCount, obj.pCounterIndices, pAllocationCallbacks);
    return result;
}

template <>
VkQueryPoolPerformanceQueryCreateInfoINTEL create_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueryPoolPerformanceQueryCreateInfoINTEL result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.performanceCountersSampling = obj.performanceCountersSampling;
    return result;
}

template <>
VkQueueFamilyCheckpointPropertiesNV create_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyCheckpointPropertiesNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.checkpointExecutionStageMask = obj.checkpointExecutionStageMask;
    return result;
}

template <>
VkQueueFamilyProperties create_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyProperties result { };
    result.queueFlags = obj.queueFlags;
    ,
    result.queueCount = obj.queueCount;
    ,
    result.timestampValidBits = obj.timestampValidBits;
    ,
    result.minImageTransferGranularity = create_structure_copy(obj.minImageTransferGranularity, pAllocationCallbacks);
    return result;
}

template <>
VkQueueFamilyProperties2 create_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkQueueFamilyProperties2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.queueFamilyProperties = create_structure_copy(obj.queueFamilyProperties, pAllocationCallbacks);
    return result;
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineCreateInfoKHR create_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.stageCount = obj.stageCount;
    ,
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    ,
    result.groupCount = obj.groupCount;
    ,
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    ,
    result.maxRecursionDepth = obj.maxRecursionDepth;
    ,
    result.libraries = create_structure_copy(obj.libraries, pAllocationCallbacks);
    ,
    result.pLibraryInterface = create_dynamic_array_copy(1, obj.pLibraryInterface, pAllocationCallbacks);
    ,
    result.layout = obj.layout;
    ,
    result.basePipelineHandle = obj.basePipelineHandle;
    ,
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingPipelineCreateInfoNV create_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.stageCount = obj.stageCount;
    ,
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocationCallbacks);
    ,
    result.groupCount = obj.groupCount;
    ,
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocationCallbacks);
    ,
    result.maxRecursionDepth = obj.maxRecursionDepth;
    ,
    result.layout = obj.layout;
    ,
    result.basePipelineHandle = obj.basePipelineHandle;
    ,
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineInterfaceCreateInfoKHR create_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingPipelineInterfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.maxPayloadSize = obj.maxPayloadSize;
    ,
    result.maxAttributeSize = obj.maxAttributeSize;
    ,
    result.maxCallableSize = obj.maxCallableSize;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingShaderGroupCreateInfoKHR create_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingShaderGroupCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    ,
    result.generalShader = obj.generalShader;
    ,
    result.closestHitShader = obj.closestHitShader;
    ,
    result.anyHitShader = obj.anyHitShader;
    ,
    result.intersectionShader = obj.intersectionShader;
    ,
    result.pShaderGroupCaptureReplayHandle = obj.pShaderGroupCaptureReplayHandle;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingShaderGroupCreateInfoNV create_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRayTracingShaderGroupCreateInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.type = obj.type;
    ,
    result.generalShader = obj.generalShader;
    ,
    result.closestHitShader = obj.closestHitShader;
    ,
    result.anyHitShader = obj.anyHitShader;
    ,
    result.intersectionShader = obj.intersectionShader;
    return result;
}

template <>
VkRect2D create_structure_copy<VkRect2D>(const VkRect2D& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRect2D result { };
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    ,
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    return result;
}

template <>
VkRectLayerKHR create_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRectLayerKHR result { };
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    ,
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    ,
    result.layer = obj.layer;
    return result;
}

template <>
VkRefreshCycleDurationGOOGLE create_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRefreshCycleDurationGOOGLE result { };
    result.refreshDuration = obj.refreshDuration;
    return result;
}

template <>
VkRenderPassAttachmentBeginInfo create_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassAttachmentBeginInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.attachmentCount = obj.attachmentCount;
    ,
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassBeginInfo create_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassBeginInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.renderPass = obj.renderPass;
    ,
    result.framebuffer = obj.framebuffer;
    ,
    result.renderArea = create_structure_copy(obj.renderArea, pAllocationCallbacks);
    ,
    result.clearValueCount = obj.clearValueCount;
    ,
    result.pClearValues = create_dynamic_array_copy(obj.clearValueCount, obj.pClearValues, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassCreateInfo create_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.attachmentCount = obj.attachmentCount;
    ,
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    ,
    result.subpassCount = obj.subpassCount;
    ,
    result.pSubpasses = create_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    ,
    result.dependencyCount = obj.dependencyCount;
    ,
    result.pDependencies = create_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassCreateInfo2 create_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassCreateInfo2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.attachmentCount = obj.attachmentCount;
    ,
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocationCallbacks);
    ,
    result.subpassCount = obj.subpassCount;
    ,
    result.pSubpasses = create_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocationCallbacks);
    ,
    result.dependencyCount = obj.dependencyCount;
    ,
    result.pDependencies = create_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocationCallbacks);
    ,
    result.correlatedViewMaskCount = obj.correlatedViewMaskCount;
    ,
    result.pCorrelatedViewMasks = create_dynamic_array_copy(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassFragmentDensityMapCreateInfoEXT create_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassFragmentDensityMapCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fragmentDensityMapAttachment = create_structure_copy(obj.fragmentDensityMapAttachment, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassInputAttachmentAspectCreateInfo create_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassInputAttachmentAspectCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.aspectReferenceCount = obj.aspectReferenceCount;
    ,
    result.pAspectReferences = create_dynamic_array_copy(obj.aspectReferenceCount, obj.pAspectReferences, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassMultiviewCreateInfo create_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassMultiviewCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.subpassCount = obj.subpassCount;
    ,
    result.pViewMasks = create_dynamic_array_copy(obj.subpassCount, obj.pViewMasks, pAllocationCallbacks);
    ,
    result.dependencyCount = obj.dependencyCount;
    ,
    result.pViewOffsets = create_dynamic_array_copy(obj.dependencyCount, obj.pViewOffsets, pAllocationCallbacks);
    ,
    result.correlationMaskCount = obj.correlationMaskCount;
    ,
    result.pCorrelationMasks = create_dynamic_array_copy(obj.correlationMaskCount, obj.pCorrelationMasks, pAllocationCallbacks);
    return result;
}


template <>
VkRenderPassSampleLocationsBeginInfoEXT create_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassSampleLocationsBeginInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.attachmentInitialSampleLocationsCount = obj.attachmentInitialSampleLocationsCount;
    ,
    result.pAttachmentInitialSampleLocations = create_dynamic_array_copy(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations, pAllocationCallbacks);
    ,
    result.postSubpassSampleLocationsCount = obj.postSubpassSampleLocationsCount;
    ,
    result.pPostSubpassSampleLocations = create_dynamic_array_copy(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkRenderPassTransformBeginInfoQCOM create_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkRenderPassTransformBeginInfoQCOM result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.transform = obj.transform;
    return result;
}

template <>
VkSampleLocationEXT create_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSampleLocationEXT result { };
    result.x = obj.x;
    ,
    result.y = obj.y;
    return result;
}

template <>
VkSampleLocationsInfoEXT create_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSampleLocationsInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.sampleLocationsPerPixel = obj.sampleLocationsPerPixel;
    ,
    result.sampleLocationGridSize = create_structure_copy(obj.sampleLocationGridSize, pAllocationCallbacks);
    ,
    result.sampleLocationsCount = obj.sampleLocationsCount;
    ,
    result.pSampleLocations = create_dynamic_array_copy(obj.sampleLocationsCount, obj.pSampleLocations, pAllocationCallbacks);
    return result;
}

template <>
VkSamplerCreateInfo create_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.magFilter = obj.magFilter;
    ,
    result.minFilter = obj.minFilter;
    ,
    result.mipmapMode = obj.mipmapMode;
    ,
    result.addressModeU = obj.addressModeU;
    ,
    result.addressModeV = obj.addressModeV;
    ,
    result.addressModeW = obj.addressModeW;
    ,
    result.mipLodBias = obj.mipLodBias;
    ,
    result.anisotropyEnable = obj.anisotropyEnable;
    ,
    result.maxAnisotropy = obj.maxAnisotropy;
    ,
    result.compareEnable = obj.compareEnable;
    ,
    result.compareOp = obj.compareOp;
    ,
    result.minLod = obj.minLod;
    ,
    result.maxLod = obj.maxLod;
    ,
    result.borderColor = obj.borderColor;
    ,
    result.unnormalizedCoordinates = obj.unnormalizedCoordinates;
    return result;
}

template <>
VkSamplerCustomBorderColorCreateInfoEXT create_structure_copy<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerCustomBorderColorCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.customBorderColor = create_structure_copy(obj.customBorderColor, pAllocationCallbacks);
    ,
    result.format = obj.format;
    return result;
}

template <>
VkSamplerReductionModeCreateInfo create_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerReductionModeCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.reductionMode = obj.reductionMode;
    return result;
}


template <>
VkSamplerYcbcrConversionCreateInfo create_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.format = obj.format;
    ,
    result.ycbcrModel = obj.ycbcrModel;
    ,
    result.ycbcrRange = obj.ycbcrRange;
    ,
    result.components = create_structure_copy(obj.components, pAllocationCallbacks);
    ,
    result.xChromaOffset = obj.xChromaOffset;
    ,
    result.yChromaOffset = obj.yChromaOffset;
    ,
    result.chromaFilter = obj.chromaFilter;
    ,
    result.forceExplicitReconstruction = obj.forceExplicitReconstruction;
    return result;
}


template <>
VkSamplerYcbcrConversionImageFormatProperties create_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionImageFormatProperties result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.combinedImageSamplerDescriptorCount = obj.combinedImageSamplerDescriptorCount;
    return result;
}


template <>
VkSamplerYcbcrConversionInfo create_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSamplerYcbcrConversionInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.conversion = obj.conversion;
    return result;
}


template <>
VkSemaphoreCreateInfo create_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkSemaphoreGetFdInfoKHR create_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreGetFdInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.semaphore = obj.semaphore;
    ,
    result.handleType = obj.handleType;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSemaphoreGetWin32HandleInfoKHR create_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreGetWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.semaphore = obj.semaphore;
    ,
    result.handleType = obj.handleType;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSemaphoreSignalInfo create_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreSignalInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.semaphore = obj.semaphore;
    ,
    result.value = obj.value;
    return result;
}


template <>
VkSemaphoreTypeCreateInfo create_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreTypeCreateInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.semaphoreType = obj.semaphoreType;
    ,
    result.initialValue = obj.initialValue;
    return result;
}


template <>
VkSemaphoreWaitInfo create_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSemaphoreWaitInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.semaphoreCount = obj.semaphoreCount;
    ,
    result.pSemaphores = create_dynamic_array_copy(obj.semaphoreCount, obj.pSemaphores, pAllocationCallbacks);
    ,
    result.pValues = create_dynamic_array_copy(obj.semaphoreCount, obj.pValues, pAllocationCallbacks);
    return result;
}


template <>
VkSetStateFlagsIndirectCommandNV create_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSetStateFlagsIndirectCommandNV result { };
    result.data = obj.data;
    return result;
}


template <>
VkShaderModuleValidationCacheCreateInfoEXT create_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderModuleValidationCacheCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.validationCache = obj.validationCache;
    return result;
}

template <>
VkShaderResourceUsageAMD create_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderResourceUsageAMD result { };
    result.numUsedVgprs = obj.numUsedVgprs;
    ,
    result.numUsedSgprs = obj.numUsedSgprs;
    ,
    result.ldsSizePerLocalWorkGroup = obj.ldsSizePerLocalWorkGroup;
    ,
    result.ldsUsageSizeInBytes = obj.ldsUsageSizeInBytes;
    ,
    result.scratchMemUsageInBytes = obj.scratchMemUsageInBytes;
    return result;
}

template <>
VkShaderStatisticsInfoAMD create_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShaderStatisticsInfoAMD result { };
    result.shaderStageMask = obj.shaderStageMask;
    ,
    result.resourceUsage = create_structure_copy(obj.resourceUsage, pAllocationCallbacks);
    ,
    result.numPhysicalVgprs = obj.numPhysicalVgprs;
    ,
    result.numPhysicalSgprs = obj.numPhysicalSgprs;
    ,
    result.numAvailableVgprs = obj.numAvailableVgprs;
    ,
    result.numAvailableSgprs = obj.numAvailableSgprs;
    ,
    create_static_array_copy<3>(result.computeWorkGroupSize, obj.computeWorkGroupSize, pAllocationCallbacks);
    return result;
}

template <>
VkShadingRatePaletteNV create_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkShadingRatePaletteNV result { };
    result.shadingRatePaletteEntryCount = obj.shadingRatePaletteEntryCount;
    ,
    result.pShadingRatePaletteEntries = create_dynamic_array_copy(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, pAllocationCallbacks);
    return result;
}

template <>
VkSharedPresentSurfaceCapabilitiesKHR create_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSharedPresentSurfaceCapabilitiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.sharedPresentSupportedUsageFlags = obj.sharedPresentSupportedUsageFlags;
    return result;
}

template <>
VkSparseBufferMemoryBindInfo create_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseBufferMemoryBindInfo result { };
    result.buffer = obj.buffer;
    ,
    result.bindCount = obj.bindCount;
    ,
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageFormatProperties create_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageFormatProperties result { };
    result.aspectMask = obj.aspectMask;
    ,
    result.imageGranularity = create_structure_copy(obj.imageGranularity, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkSparseImageFormatProperties2 create_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageFormatProperties2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.properties = create_structure_copy(obj.properties, pAllocationCallbacks);
    return result;
}


template <>
VkSparseImageMemoryBind create_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryBind result { };
    result.subresource = create_structure_copy(obj.subresource, pAllocationCallbacks);
    ,
    result.offset = create_structure_copy(obj.offset, pAllocationCallbacks);
    ,
    result.extent = create_structure_copy(obj.extent, pAllocationCallbacks);
    ,
    result.memory = obj.memory;
    ,
    result.memoryOffset = obj.memoryOffset;
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkSparseImageMemoryBindInfo create_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryBindInfo result { };
    result.image = obj.image;
    ,
    result.bindCount = obj.bindCount;
    ,
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseImageMemoryRequirements create_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryRequirements result { };
    result.formatProperties = create_structure_copy(obj.formatProperties, pAllocationCallbacks);
    ,
    result.imageMipTailFirstLod = obj.imageMipTailFirstLod;
    ,
    result.imageMipTailSize = obj.imageMipTailSize;
    ,
    result.imageMipTailOffset = obj.imageMipTailOffset;
    ,
    result.imageMipTailStride = obj.imageMipTailStride;
    return result;
}

template <>
VkSparseImageMemoryRequirements2 create_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageMemoryRequirements2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.memoryRequirements = create_structure_copy(obj.memoryRequirements, pAllocationCallbacks);
    return result;
}


template <>
VkSparseImageOpaqueMemoryBindInfo create_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseImageOpaqueMemoryBindInfo result { };
    result.image = obj.image;
    ,
    result.bindCount = obj.bindCount;
    ,
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocationCallbacks);
    return result;
}

template <>
VkSparseMemoryBind create_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSparseMemoryBind result { };
    result.resourceOffset = obj.resourceOffset;
    ,
    result.size = obj.size;
    ,
    result.memory = obj.memory;
    ,
    result.memoryOffset = obj.memoryOffset;
    ,
    result.flags = obj.flags;
    return result;
}

template <>
VkSpecializationInfo create_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSpecializationInfo result { };
    result.mapEntryCount = obj.mapEntryCount;
    ,
    result.pMapEntries = create_dynamic_array_copy(obj.mapEntryCount, obj.pMapEntries, pAllocationCallbacks);
    ,
    result.dataSize = obj.dataSize;
    ,
    result.pData = create_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkSpecializationMapEntry create_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSpecializationMapEntry result { };
    result.constantID = obj.constantID;
    ,
    result.offset = obj.offset;
    ,
    result.size = obj.size;
    return result;
}

template <>
VkStencilOpState create_structure_copy<VkStencilOpState>(const VkStencilOpState& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStencilOpState result { };
    result.failOp = obj.failOp;
    ,
    result.passOp = obj.passOp;
    ,
    result.depthFailOp = obj.depthFailOp;
    ,
    result.compareOp = obj.compareOp;
    ,
    result.compareMask = obj.compareMask;
    ,
    result.writeMask = obj.writeMask;
    ,
    result.reference = obj.reference;
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkStreamDescriptorSurfaceCreateInfoGGP create_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStreamDescriptorSurfaceCreateInfoGGP result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.streamDescriptor = obj.streamDescriptor;
    return result;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkStridedBufferRegionKHR create_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkStridedBufferRegionKHR result { };
    result.buffer = obj.buffer;
    ,
    result.offset = obj.offset;
    ,
    result.stride = obj.stride;
    ,
    result.size = obj.size;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkSubmitInfo create_structure_copy<VkSubmitInfo>(const VkSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubmitInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    ,
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocationCallbacks);
    ,
    result.pWaitDstStageMask = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitDstStageMask, pAllocationCallbacks);
    ,
    result.commandBufferCount = obj.commandBufferCount;
    ,
    result.pCommandBuffers = create_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBuffers, pAllocationCallbacks);
    ,
    result.signalSemaphoreCount = obj.signalSemaphoreCount;
    ,
    result.pSignalSemaphores = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassBeginInfo create_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassBeginInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.contents = obj.contents;
    return result;
}


template <>
VkSubpassDependency create_structure_copy<VkSubpassDependency>(const VkSubpassDependency& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDependency result { };
    result.srcSubpass = obj.srcSubpass;
    ,
    result.dstSubpass = obj.dstSubpass;
    ,
    result.srcStageMask = obj.srcStageMask;
    ,
    result.dstStageMask = obj.dstStageMask;
    ,
    result.srcAccessMask = obj.srcAccessMask;
    ,
    result.dstAccessMask = obj.dstAccessMask;
    ,
    result.dependencyFlags = obj.dependencyFlags;
    return result;
}

template <>
VkSubpassDependency2 create_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDependency2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.srcSubpass = obj.srcSubpass;
    ,
    result.dstSubpass = obj.dstSubpass;
    ,
    result.srcStageMask = obj.srcStageMask;
    ,
    result.dstStageMask = obj.dstStageMask;
    ,
    result.srcAccessMask = obj.srcAccessMask;
    ,
    result.dstAccessMask = obj.dstAccessMask;
    ,
    result.dependencyFlags = obj.dependencyFlags;
    ,
    result.viewOffset = obj.viewOffset;
    return result;
}


template <>
VkSubpassDescription create_structure_copy<VkSubpassDescription>(const VkSubpassDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescription result { };
    result.flags = obj.flags;
    ,
    result.pipelineBindPoint = obj.pipelineBindPoint;
    ,
    result.inputAttachmentCount = obj.inputAttachmentCount;
    ,
    result.pInputAttachments = create_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    ,
    result.colorAttachmentCount = obj.colorAttachmentCount;
    ,
    result.pColorAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    ,
    result.pResolveAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    ,
    result.pDepthStencilAttachment = create_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocationCallbacks);
    ,
    result.preserveAttachmentCount = obj.preserveAttachmentCount;
    ,
    result.pPreserveAttachments = create_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
    return result;
}

template <>
VkSubpassDescription2 create_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescription2 result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.pipelineBindPoint = obj.pipelineBindPoint;
    ,
    result.viewMask = obj.viewMask;
    ,
    result.inputAttachmentCount = obj.inputAttachmentCount;
    ,
    result.pInputAttachments = create_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocationCallbacks);
    ,
    result.colorAttachmentCount = obj.colorAttachmentCount;
    ,
    result.pColorAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocationCallbacks);
    ,
    result.pResolveAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocationCallbacks);
    ,
    result.pDepthStencilAttachment = create_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocationCallbacks);
    ,
    result.preserveAttachmentCount = obj.preserveAttachmentCount;
    ,
    result.pPreserveAttachments = create_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassDescriptionDepthStencilResolve create_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassDescriptionDepthStencilResolve result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.depthResolveMode = obj.depthResolveMode;
    ,
    result.stencilResolveMode = obj.stencilResolveMode;
    ,
    result.pDepthStencilResolveAttachment = create_dynamic_array_copy(1, obj.pDepthStencilResolveAttachment, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassEndInfo create_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassEndInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    return result;
}


template <>
VkSubpassSampleLocationsEXT create_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubpassSampleLocationsEXT result { };
    result.subpassIndex = obj.subpassIndex;
    ,
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocationCallbacks);
    return result;
}

template <>
VkSubresourceLayout create_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSubresourceLayout result { };
    result.offset = obj.offset;
    ,
    result.size = obj.size;
    ,
    result.rowPitch = obj.rowPitch;
    ,
    result.arrayPitch = obj.arrayPitch;
    ,
    result.depthPitch = obj.depthPitch;
    return result;
}

template <>
VkSurfaceCapabilities2EXT create_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilities2EXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.minImageCount = obj.minImageCount;
    ,
    result.maxImageCount = obj.maxImageCount;
    ,
    result.currentExtent = create_structure_copy(obj.currentExtent, pAllocationCallbacks);
    ,
    result.minImageExtent = create_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    ,
    result.maxImageExtent = create_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    ,
    result.maxImageArrayLayers = obj.maxImageArrayLayers;
    ,
    result.supportedTransforms = obj.supportedTransforms;
    ,
    result.currentTransform = obj.currentTransform;
    ,
    result.supportedCompositeAlpha = obj.supportedCompositeAlpha;
    ,
    result.supportedUsageFlags = obj.supportedUsageFlags;
    ,
    result.supportedSurfaceCounters = obj.supportedSurfaceCounters;
    return result;
}

template <>
VkSurfaceCapabilities2KHR create_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilities2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.surfaceCapabilities = create_structure_copy(obj.surfaceCapabilities, pAllocationCallbacks);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceCapabilitiesFullScreenExclusiveEXT create_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilitiesFullScreenExclusiveEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fullScreenExclusiveSupported = obj.fullScreenExclusiveSupported;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceCapabilitiesKHR create_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceCapabilitiesKHR result { };
    result.minImageCount = obj.minImageCount;
    ,
    result.maxImageCount = obj.maxImageCount;
    ,
    result.currentExtent = create_structure_copy(obj.currentExtent, pAllocationCallbacks);
    ,
    result.minImageExtent = create_structure_copy(obj.minImageExtent, pAllocationCallbacks);
    ,
    result.maxImageExtent = create_structure_copy(obj.maxImageExtent, pAllocationCallbacks);
    ,
    result.maxImageArrayLayers = obj.maxImageArrayLayers;
    ,
    result.supportedTransforms = obj.supportedTransforms;
    ,
    result.currentTransform = obj.currentTransform;
    ,
    result.supportedCompositeAlpha = obj.supportedCompositeAlpha;
    ,
    result.supportedUsageFlags = obj.supportedUsageFlags;
    return result;
}

template <>
VkSurfaceFormat2KHR create_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFormat2KHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.surfaceFormat = create_structure_copy(obj.surfaceFormat, pAllocationCallbacks);
    return result;
}

template <>
VkSurfaceFormatKHR create_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFormatKHR result { };
    result.format = obj.format;
    ,
    result.colorSpace = obj.colorSpace;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveInfoEXT create_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFullScreenExclusiveInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.fullScreenExclusive = obj.fullScreenExclusive;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveWin32InfoEXT create_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceFullScreenExclusiveWin32InfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.hmonitor = obj.hmonitor;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceProtectedCapabilitiesKHR create_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSurfaceProtectedCapabilitiesKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.supportsProtected = obj.supportsProtected;
    return result;
}

template <>
VkSwapchainCounterCreateInfoEXT create_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainCounterCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.surfaceCounters = obj.surfaceCounters;
    return result;
}

template <>
VkSwapchainCreateInfoKHR create_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.surface = obj.surface;
    ,
    result.minImageCount = obj.minImageCount;
    ,
    result.imageFormat = obj.imageFormat;
    ,
    result.imageColorSpace = obj.imageColorSpace;
    ,
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocationCallbacks);
    ,
    result.imageArrayLayers = obj.imageArrayLayers;
    ,
    result.imageUsage = obj.imageUsage;
    ,
    result.imageSharingMode = obj.imageSharingMode;
    ,
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    ,
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocationCallbacks);
    ,
    result.preTransform = obj.preTransform;
    ,
    result.compositeAlpha = obj.compositeAlpha;
    ,
    result.presentMode = obj.presentMode;
    ,
    result.clipped = obj.clipped;
    ,
    result.oldSwapchain = obj.oldSwapchain;
    return result;
}

template <>
VkSwapchainDisplayNativeHdrCreateInfoAMD create_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainDisplayNativeHdrCreateInfoAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.localDimmingEnable = obj.localDimmingEnable;
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkSwapchainImageCreateInfoANDROID create_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkSwapchainImageCreateInfoANDROID result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.usage = obj.usage;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkTextureLODGatherFormatPropertiesAMD create_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTextureLODGatherFormatPropertiesAMD result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.supportsTextureGatherLODBiasAMD = obj.supportsTextureGatherLODBiasAMD;
    return result;
}

template <>
VkTimelineSemaphoreSubmitInfo create_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTimelineSemaphoreSubmitInfo result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.waitSemaphoreValueCount = obj.waitSemaphoreValueCount;
    ,
    result.pWaitSemaphoreValues = create_dynamic_array_copy(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, pAllocationCallbacks);
    ,
    result.signalSemaphoreValueCount = obj.signalSemaphoreValueCount;
    ,
    result.pSignalSemaphoreValues = create_dynamic_array_copy(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, pAllocationCallbacks);
    return result;
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTraceRaysIndirectCommandKHR create_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkTraceRaysIndirectCommandKHR result { };
    result.width = obj.width;
    ,
    result.height = obj.height;
    ,
    result.depth = obj.depth;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS



template <>
VkValidationCacheCreateInfoEXT create_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationCacheCreateInfoEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.initialDataSize = obj.initialDataSize;
    ,
    result.pInitialData = create_dynamic_array_copy(obj.initialDataSize, obj.pInitialData, pAllocationCallbacks);
    return result;
}

template <>
VkValidationFeaturesEXT create_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationFeaturesEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.enabledValidationFeatureCount = obj.enabledValidationFeatureCount;
    ,
    result.pEnabledValidationFeatures = create_dynamic_array_copy(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, pAllocationCallbacks);
    ,
    result.disabledValidationFeatureCount = obj.disabledValidationFeatureCount;
    ,
    result.pDisabledValidationFeatures = create_dynamic_array_copy(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, pAllocationCallbacks);
    return result;
}

template <>
VkValidationFlagsEXT create_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkValidationFlagsEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.disabledValidationCheckCount = obj.disabledValidationCheckCount;
    ,
    result.pDisabledValidationChecks = create_dynamic_array_copy(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, pAllocationCallbacks);
    return result;
}

template <>
VkVertexInputAttributeDescription create_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputAttributeDescription result { };
    result.location = obj.location;
    ,
    result.binding = obj.binding;
    ,
    result.format = obj.format;
    ,
    result.offset = obj.offset;
    return result;
}

template <>
VkVertexInputBindingDescription create_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputBindingDescription result { };
    result.binding = obj.binding;
    ,
    result.stride = obj.stride;
    ,
    result.inputRate = obj.inputRate;
    return result;
}

template <>
VkVertexInputBindingDivisorDescriptionEXT create_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkVertexInputBindingDivisorDescriptionEXT result { };
    result.binding = obj.binding;
    ,
    result.divisor = obj.divisor;
    return result;
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
VkViSurfaceCreateInfoNN create_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViSurfaceCreateInfoNN result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
VkViewport create_structure_copy<VkViewport>(const VkViewport& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewport result { };
    result.x = obj.x;
    ,
    result.y = obj.y;
    ,
    result.width = obj.width;
    ,
    result.height = obj.height;
    ,
    result.minDepth = obj.minDepth;
    ,
    result.maxDepth = obj.maxDepth;
    return result;
}

template <>
VkViewportSwizzleNV create_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewportSwizzleNV result { };
    result.x = obj.x;
    ,
    result.y = obj.y;
    ,
    result.z = obj.z;
    ,
    result.w = obj.w;
    return result;
}

template <>
VkViewportWScalingNV create_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkViewportWScalingNV result { };
    result.xcoeff = obj.xcoeff;
    ,
    result.ycoeff = obj.ycoeff;
    return result;
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
VkWaylandSurfaceCreateInfoKHR create_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWaylandSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.display = obj.display;
    ,
    result.surface = obj.surface;
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoKHR create_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32KeyedMutexAcquireReleaseInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.acquireCount = obj.acquireCount;
    ,
    result.pAcquireSyncs = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    ,
    result.pAcquireKeys = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    ,
    result.pAcquireTimeouts = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeouts, pAllocationCallbacks);
    ,
    result.releaseCount = obj.releaseCount;
    ,
    result.pReleaseSyncs = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    ,
    result.pReleaseKeys = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoNV create_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32KeyedMutexAcquireReleaseInfoNV result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.acquireCount = obj.acquireCount;
    ,
    result.pAcquireSyncs = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocationCallbacks);
    ,
    result.pAcquireKeys = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocationCallbacks);
    ,
    result.pAcquireTimeoutMilliseconds = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, pAllocationCallbacks);
    ,
    result.releaseCount = obj.releaseCount;
    ,
    result.pReleaseSyncs = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocationCallbacks);
    ,
    result.pReleaseKeys = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocationCallbacks);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32SurfaceCreateInfoKHR create_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWin32SurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.hinstance = obj.hinstance;
    ,
    result.hwnd = obj.hwnd;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkWriteDescriptorSet create_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSet result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.dstSet = obj.dstSet;
    ,
    result.dstBinding = obj.dstBinding;
    ,
    result.dstArrayElement = obj.dstArrayElement;
    ,
    result.descriptorCount = obj.descriptorCount;
    ,
    result.descriptorType = obj.descriptorType;
    ,
    result.pImageInfo = create_dynamic_array_copy(obj.descriptorCount, obj.pImageInfo, pAllocationCallbacks);
    ,
    result.pBufferInfo = create_dynamic_array_copy(obj.descriptorCount, obj.pBufferInfo, pAllocationCallbacks);
    ,
    result.pTexelBufferView = create_dynamic_array_copy(obj.descriptorCount, obj.pTexelBufferView, pAllocationCallbacks);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkWriteDescriptorSetAccelerationStructureKHR create_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSetAccelerationStructureKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.accelerationStructureCount = obj.accelerationStructureCount;
    ,
    result.pAccelerationStructures = create_dynamic_array_copy(obj.accelerationStructureCount, obj.pAccelerationStructures, pAllocationCallbacks);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkWriteDescriptorSetInlineUniformBlockEXT create_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkWriteDescriptorSetInlineUniformBlockEXT result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.dataSize = obj.dataSize;
    ,
    result.pData = create_dynamic_array_copy(obj.dataSize, obj.pData, pAllocationCallbacks);
    return result;
}

template <>
VkXYColorEXT create_structure_copy<VkXYColorEXT>(const VkXYColorEXT& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXYColorEXT result { };
    result.x = obj.x;
    ,
    result.y = obj.y;
    return result;
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
VkXcbSurfaceCreateInfoKHR create_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXcbSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.connection = obj.connection;
    ,
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
VkXlibSurfaceCreateInfoKHR create_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocationCallbacks)
{
    VkXlibSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    ,
    result.pNext = ()create_pnext_copy(obj.pNext, pAllocationCallbacks);
    ,
    result.flags = obj.flags;
    ,
    result.dpy = obj.dpy;
    ,
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void* create_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocationCallbacks)
{
    if (pNext) {
        swtich (*(VkStructureType*)pNext) {
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAabbPositionsKHR: {
            return create_dynamic_array_copy(1, (VkAabbPositionsKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS


        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureBuildGeometryInfoKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureBuildGeometryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureBuildOffsetInfoKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureBuildOffsetInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureCreateGeometryTypeInfoKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureCreateGeometryTypeInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkAccelerationStructureCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureDeviceAddressInfoKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureDeviceAddressInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureGeometryAabbsDataKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryAabbsDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureGeometryDataKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureGeometryInstancesDataKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryInstancesDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureGeometryKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureGeometryTrianglesDataKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryTrianglesDataKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkAccelerationStructureInfoNV: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureInfoNV*)pNext, pAllocationCallbacks);
        } break;



        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkAccelerationStructureMemoryRequirementsInfoKHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureMemoryRequirementsInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkAccelerationStructureMemoryRequirementsInfoNV: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureMemoryRequirementsInfoNV*)pNext, pAllocationCallbacks);
        } break;


        case VkAcquireNextImageInfoKHR: {
            return create_dynamic_array_copy(1, (VkAcquireNextImageInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkAcquireProfilingLockInfoKHR: {
            return create_dynamic_array_copy(1, (VkAcquireProfilingLockInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkAllocationCallbacks: {
            return create_dynamic_array_copy(1, (VkAllocationCallbacks*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkAndroidHardwareBufferFormatPropertiesANDROID: {
            return create_dynamic_array_copy(1, (VkAndroidHardwareBufferFormatPropertiesANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkAndroidHardwareBufferPropertiesANDROID: {
            return create_dynamic_array_copy(1, (VkAndroidHardwareBufferPropertiesANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkAndroidHardwareBufferUsageANDROID: {
            return create_dynamic_array_copy(1, (VkAndroidHardwareBufferUsageANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkAndroidSurfaceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkAndroidSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        case VkApplicationInfo: {
            return create_dynamic_array_copy(1, (VkApplicationInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkAttachmentDescription: {
            return create_dynamic_array_copy(1, (VkAttachmentDescription*)pNext, pAllocationCallbacks);
        } break;

        case VkAttachmentDescription2: {
            return create_dynamic_array_copy(1, (VkAttachmentDescription2*)pNext, pAllocationCallbacks);
        } break;


        case VkAttachmentDescriptionStencilLayout: {
            return create_dynamic_array_copy(1, (VkAttachmentDescriptionStencilLayout*)pNext, pAllocationCallbacks);
        } break;


        case VkAttachmentReference: {
            return create_dynamic_array_copy(1, (VkAttachmentReference*)pNext, pAllocationCallbacks);
        } break;

        case VkAttachmentReference2: {
            return create_dynamic_array_copy(1, (VkAttachmentReference2*)pNext, pAllocationCallbacks);
        } break;


        case VkAttachmentReferenceStencilLayout: {
            return create_dynamic_array_copy(1, (VkAttachmentReferenceStencilLayout*)pNext, pAllocationCallbacks);
        } break;


        case VkAttachmentSampleLocationsEXT: {
            return create_dynamic_array_copy(1, (VkAttachmentSampleLocationsEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkBaseInStructure: {
            return create_dynamic_array_copy(1, (VkBaseInStructure*)pNext, pAllocationCallbacks);
        } break;

        case VkBaseOutStructure: {
            return create_dynamic_array_copy(1, (VkBaseOutStructure*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkBindAccelerationStructureMemoryInfoKHR: {
            return create_dynamic_array_copy(1, (VkBindAccelerationStructureMemoryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS


        case VkBindBufferMemoryDeviceGroupInfo: {
            return create_dynamic_array_copy(1, (VkBindBufferMemoryDeviceGroupInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkBindBufferMemoryInfo: {
            return create_dynamic_array_copy(1, (VkBindBufferMemoryInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkBindImageMemoryDeviceGroupInfo: {
            return create_dynamic_array_copy(1, (VkBindImageMemoryDeviceGroupInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkBindImageMemoryInfo: {
            return create_dynamic_array_copy(1, (VkBindImageMemoryInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkBindImageMemorySwapchainInfoKHR: {
            return create_dynamic_array_copy(1, (VkBindImageMemorySwapchainInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkBindImagePlaneMemoryInfo: {
            return create_dynamic_array_copy(1, (VkBindImagePlaneMemoryInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkBindIndexBufferIndirectCommandNV: {
            return create_dynamic_array_copy(1, (VkBindIndexBufferIndirectCommandNV*)pNext, pAllocationCallbacks);
        } break;

        case VkBindShaderGroupIndirectCommandNV: {
            return create_dynamic_array_copy(1, (VkBindShaderGroupIndirectCommandNV*)pNext, pAllocationCallbacks);
        } break;

        case VkBindSparseInfo: {
            return create_dynamic_array_copy(1, (VkBindSparseInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkBindVertexBufferIndirectCommandNV: {
            return create_dynamic_array_copy(1, (VkBindVertexBufferIndirectCommandNV*)pNext, pAllocationCallbacks);
        } break;

        case VkBufferCopy: {
            return create_dynamic_array_copy(1, (VkBufferCopy*)pNext, pAllocationCallbacks);
        } break;

        case VkBufferCreateInfo: {
            return create_dynamic_array_copy(1, (VkBufferCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkBufferDeviceAddressCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkBufferDeviceAddressCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkBufferDeviceAddressInfo: {
            return create_dynamic_array_copy(1, (VkBufferDeviceAddressInfo*)pNext, pAllocationCallbacks);
        } break;



        case VkBufferImageCopy: {
            return create_dynamic_array_copy(1, (VkBufferImageCopy*)pNext, pAllocationCallbacks);
        } break;

        case VkBufferMemoryBarrier: {
            return create_dynamic_array_copy(1, (VkBufferMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;

        case VkBufferMemoryRequirementsInfo2: {
            return create_dynamic_array_copy(1, (VkBufferMemoryRequirementsInfo2*)pNext, pAllocationCallbacks);
        } break;


        case VkBufferOpaqueCaptureAddressCreateInfo: {
            return create_dynamic_array_copy(1, (VkBufferOpaqueCaptureAddressCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkBufferViewCreateInfo: {
            return create_dynamic_array_copy(1, (VkBufferViewCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkCalibratedTimestampInfoEXT: {
            return create_dynamic_array_copy(1, (VkCalibratedTimestampInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkCheckpointDataNV: {
            return create_dynamic_array_copy(1, (VkCheckpointDataNV*)pNext, pAllocationCallbacks);
        } break;

        case VkClearAttachment: {
            return create_dynamic_array_copy(1, (VkClearAttachment*)pNext, pAllocationCallbacks);
        } break;


        case VkClearDepthStencilValue: {
            return create_dynamic_array_copy(1, (VkClearDepthStencilValue*)pNext, pAllocationCallbacks);
        } break;

        case VkClearRect: {
            return create_dynamic_array_copy(1, (VkClearRect*)pNext, pAllocationCallbacks);
        } break;


        case VkCoarseSampleLocationNV: {
            return create_dynamic_array_copy(1, (VkCoarseSampleLocationNV*)pNext, pAllocationCallbacks);
        } break;

        case VkCoarseSampleOrderCustomNV: {
            return create_dynamic_array_copy(1, (VkCoarseSampleOrderCustomNV*)pNext, pAllocationCallbacks);
        } break;

        case VkCommandBufferAllocateInfo: {
            return create_dynamic_array_copy(1, (VkCommandBufferAllocateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkCommandBufferBeginInfo: {
            return create_dynamic_array_copy(1, (VkCommandBufferBeginInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkCommandBufferInheritanceConditionalRenderingInfoEXT: {
            return create_dynamic_array_copy(1, (VkCommandBufferInheritanceConditionalRenderingInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkCommandBufferInheritanceInfo: {
            return create_dynamic_array_copy(1, (VkCommandBufferInheritanceInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkCommandBufferInheritanceRenderPassTransformInfoQCOM: {
            return create_dynamic_array_copy(1, (VkCommandBufferInheritanceRenderPassTransformInfoQCOM*)pNext, pAllocationCallbacks);
        } break;

        case VkCommandPoolCreateInfo: {
            return create_dynamic_array_copy(1, (VkCommandPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkComponentMapping: {
            return create_dynamic_array_copy(1, (VkComponentMapping*)pNext, pAllocationCallbacks);
        } break;

        case VkComputePipelineCreateInfo: {
            return create_dynamic_array_copy(1, (VkComputePipelineCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkConditionalRenderingBeginInfoEXT: {
            return create_dynamic_array_copy(1, (VkConditionalRenderingBeginInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkConformanceVersion: {
            return create_dynamic_array_copy(1, (VkConformanceVersion*)pNext, pAllocationCallbacks);
        } break;


        case VkCooperativeMatrixPropertiesNV: {
            return create_dynamic_array_copy(1, (VkCooperativeMatrixPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkCopyAccelerationStructureInfoKHR: {
            return create_dynamic_array_copy(1, (VkCopyAccelerationStructureInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkCopyAccelerationStructureToMemoryInfoKHR: {
            return create_dynamic_array_copy(1, (VkCopyAccelerationStructureToMemoryInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkCopyDescriptorSet: {
            return create_dynamic_array_copy(1, (VkCopyDescriptorSet*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkCopyMemoryToAccelerationStructureInfoKHR: {
            return create_dynamic_array_copy(1, (VkCopyMemoryToAccelerationStructureInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkD3D12FenceSubmitInfoKHR: {
            return create_dynamic_array_copy(1, (VkD3D12FenceSubmitInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkDebugMarkerMarkerInfoEXT: {
            return create_dynamic_array_copy(1, (VkDebugMarkerMarkerInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugMarkerObjectNameInfoEXT: {
            return create_dynamic_array_copy(1, (VkDebugMarkerObjectNameInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugMarkerObjectTagInfoEXT: {
            return create_dynamic_array_copy(1, (VkDebugMarkerObjectTagInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugReportCallbackCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkDebugReportCallbackCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugUtilsLabelEXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsLabelEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugUtilsMessengerCallbackDataEXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsMessengerCallbackDataEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugUtilsMessengerCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsMessengerCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugUtilsObjectNameInfoEXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsObjectNameInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDebugUtilsObjectTagInfoEXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsObjectTagInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDedicatedAllocationBufferCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkDedicatedAllocationBufferCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkDedicatedAllocationImageCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkDedicatedAllocationImageCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkDedicatedAllocationMemoryAllocateInfoNV: {
            return create_dynamic_array_copy(1, (VkDedicatedAllocationMemoryAllocateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkDeferredOperationInfoKHR: {
            return create_dynamic_array_copy(1, (VkDeferredOperationInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkDescriptorBufferInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorBufferInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorImageInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorImageInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorPoolCreateInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorPoolInlineUniformBlockCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkDescriptorPoolInlineUniformBlockCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorPoolSize: {
            return create_dynamic_array_copy(1, (VkDescriptorPoolSize*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorSetAllocateInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorSetAllocateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorSetLayoutBinding: {
            return create_dynamic_array_copy(1, (VkDescriptorSetLayoutBinding*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorSetLayoutBindingFlagsCreateInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorSetLayoutBindingFlagsCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDescriptorSetLayoutCreateInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorSetLayoutCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkDescriptorSetLayoutSupport: {
            return create_dynamic_array_copy(1, (VkDescriptorSetLayoutSupport*)pNext, pAllocationCallbacks);
        } break;


        case VkDescriptorSetVariableDescriptorCountAllocateInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorSetVariableDescriptorCountAllocateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDescriptorSetVariableDescriptorCountLayoutSupport: {
            return create_dynamic_array_copy(1, (VkDescriptorSetVariableDescriptorCountLayoutSupport*)pNext, pAllocationCallbacks);
        } break;


        case VkDescriptorUpdateTemplateCreateInfo: {
            return create_dynamic_array_copy(1, (VkDescriptorUpdateTemplateCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDescriptorUpdateTemplateEntry: {
            return create_dynamic_array_copy(1, (VkDescriptorUpdateTemplateEntry*)pNext, pAllocationCallbacks);
        } break;


        case VkDeviceCreateInfo: {
            return create_dynamic_array_copy(1, (VkDeviceCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceDiagnosticsConfigCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkDeviceDiagnosticsConfigCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceEventInfoEXT: {
            return create_dynamic_array_copy(1, (VkDeviceEventInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceGroupBindSparseInfo: {
            return create_dynamic_array_copy(1, (VkDeviceGroupBindSparseInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDeviceGroupCommandBufferBeginInfo: {
            return create_dynamic_array_copy(1, (VkDeviceGroupCommandBufferBeginInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDeviceGroupDeviceCreateInfo: {
            return create_dynamic_array_copy(1, (VkDeviceGroupDeviceCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDeviceGroupPresentCapabilitiesKHR: {
            return create_dynamic_array_copy(1, (VkDeviceGroupPresentCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceGroupPresentInfoKHR: {
            return create_dynamic_array_copy(1, (VkDeviceGroupPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceGroupRenderPassBeginInfo: {
            return create_dynamic_array_copy(1, (VkDeviceGroupRenderPassBeginInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDeviceGroupSubmitInfo: {
            return create_dynamic_array_copy(1, (VkDeviceGroupSubmitInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDeviceGroupSwapchainCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkDeviceGroupSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceMemoryOpaqueCaptureAddressInfo: {
            return create_dynamic_array_copy(1, (VkDeviceMemoryOpaqueCaptureAddressInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkDeviceMemoryOverallocationCreateInfoAMD: {
            return create_dynamic_array_copy(1, (VkDeviceMemoryOverallocationCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkDeviceOrHostAddressConstKHR: {
            return create_dynamic_array_copy(1, (VkDeviceOrHostAddressConstKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkDeviceOrHostAddressKHR: {
            return create_dynamic_array_copy(1, (VkDeviceOrHostAddressKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkDevicePrivateDataCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkDevicePrivateDataCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceQueueCreateInfo: {
            return create_dynamic_array_copy(1, (VkDeviceQueueCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceQueueGlobalPriorityCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkDeviceQueueGlobalPriorityCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDeviceQueueInfo2: {
            return create_dynamic_array_copy(1, (VkDeviceQueueInfo2*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        case VkDirectFBSurfaceCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkDirectFBSurfaceCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_DIRECTFB_EXT

        case VkDispatchIndirectCommand: {
            return create_dynamic_array_copy(1, (VkDispatchIndirectCommand*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayEventInfoEXT: {
            return create_dynamic_array_copy(1, (VkDisplayEventInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayModeCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkDisplayModeCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayModeParametersKHR: {
            return create_dynamic_array_copy(1, (VkDisplayModeParametersKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayModeProperties2KHR: {
            return create_dynamic_array_copy(1, (VkDisplayModeProperties2KHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayModePropertiesKHR: {
            return create_dynamic_array_copy(1, (VkDisplayModePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayNativeHdrSurfaceCapabilitiesAMD: {
            return create_dynamic_array_copy(1, (VkDisplayNativeHdrSurfaceCapabilitiesAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPlaneCapabilities2KHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlaneCapabilities2KHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPlaneCapabilitiesKHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlaneCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPlaneInfo2KHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlaneInfo2KHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPlaneProperties2KHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlaneProperties2KHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPlanePropertiesKHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlanePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPowerInfoEXT: {
            return create_dynamic_array_copy(1, (VkDisplayPowerInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPresentInfoKHR: {
            return create_dynamic_array_copy(1, (VkDisplayPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayProperties2KHR: {
            return create_dynamic_array_copy(1, (VkDisplayProperties2KHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplayPropertiesKHR: {
            return create_dynamic_array_copy(1, (VkDisplayPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDisplaySurfaceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkDisplaySurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkDrawIndexedIndirectCommand: {
            return create_dynamic_array_copy(1, (VkDrawIndexedIndirectCommand*)pNext, pAllocationCallbacks);
        } break;

        case VkDrawIndirectCommand: {
            return create_dynamic_array_copy(1, (VkDrawIndirectCommand*)pNext, pAllocationCallbacks);
        } break;

        case VkDrawMeshTasksIndirectCommandNV: {
            return create_dynamic_array_copy(1, (VkDrawMeshTasksIndirectCommandNV*)pNext, pAllocationCallbacks);
        } break;

        case VkDrmFormatModifierPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkDrmFormatModifierPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkDrmFormatModifierPropertiesListEXT: {
            return create_dynamic_array_copy(1, (VkDrmFormatModifierPropertiesListEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkEventCreateInfo: {
            return create_dynamic_array_copy(1, (VkEventCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkExportFenceCreateInfo: {
            return create_dynamic_array_copy(1, (VkExportFenceCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkExportFenceWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkExportFenceWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkExportMemoryAllocateInfo: {
            return create_dynamic_array_copy(1, (VkExportMemoryAllocateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkExportMemoryAllocateInfoNV: {
            return create_dynamic_array_copy(1, (VkExportMemoryAllocateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkExportMemoryWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkExportMemoryWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkExportMemoryWin32HandleInfoNV: {
            return create_dynamic_array_copy(1, (VkExportMemoryWin32HandleInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkExportSemaphoreCreateInfo: {
            return create_dynamic_array_copy(1, (VkExportSemaphoreCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkExportSemaphoreWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkExportSemaphoreWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkExtensionProperties: {
            return create_dynamic_array_copy(1, (VkExtensionProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkExtent2D: {
            return create_dynamic_array_copy(1, (VkExtent2D*)pNext, pAllocationCallbacks);
        } break;

        case VkExtent3D: {
            return create_dynamic_array_copy(1, (VkExtent3D*)pNext, pAllocationCallbacks);
        } break;

        case VkExternalBufferProperties: {
            return create_dynamic_array_copy(1, (VkExternalBufferProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkExternalFenceProperties: {
            return create_dynamic_array_copy(1, (VkExternalFenceProperties*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkExternalFormatANDROID: {
            return create_dynamic_array_copy(1, (VkExternalFormatANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        case VkExternalImageFormatProperties: {
            return create_dynamic_array_copy(1, (VkExternalImageFormatProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkExternalImageFormatPropertiesNV: {
            return create_dynamic_array_copy(1, (VkExternalImageFormatPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkExternalMemoryBufferCreateInfo: {
            return create_dynamic_array_copy(1, (VkExternalMemoryBufferCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkExternalMemoryImageCreateInfo: {
            return create_dynamic_array_copy(1, (VkExternalMemoryImageCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkExternalMemoryImageCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkExternalMemoryImageCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkExternalMemoryProperties: {
            return create_dynamic_array_copy(1, (VkExternalMemoryProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkExternalSemaphoreProperties: {
            return create_dynamic_array_copy(1, (VkExternalSemaphoreProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkFenceCreateInfo: {
            return create_dynamic_array_copy(1, (VkFenceCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkFenceGetFdInfoKHR: {
            return create_dynamic_array_copy(1, (VkFenceGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkFenceGetWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkFenceGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkFilterCubicImageViewImageFormatPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkFilterCubicImageViewImageFormatPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkFormatProperties: {
            return create_dynamic_array_copy(1, (VkFormatProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkFormatProperties2: {
            return create_dynamic_array_copy(1, (VkFormatProperties2*)pNext, pAllocationCallbacks);
        } break;


        case VkFramebufferAttachmentImageInfo: {
            return create_dynamic_array_copy(1, (VkFramebufferAttachmentImageInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkFramebufferAttachmentsCreateInfo: {
            return create_dynamic_array_copy(1, (VkFramebufferAttachmentsCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkFramebufferCreateInfo: {
            return create_dynamic_array_copy(1, (VkFramebufferCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkFramebufferMixedSamplesCombinationNV: {
            return create_dynamic_array_copy(1, (VkFramebufferMixedSamplesCombinationNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGeneratedCommandsInfoNV: {
            return create_dynamic_array_copy(1, (VkGeneratedCommandsInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGeneratedCommandsMemoryRequirementsInfoNV: {
            return create_dynamic_array_copy(1, (VkGeneratedCommandsMemoryRequirementsInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGeometryAABBNV: {
            return create_dynamic_array_copy(1, (VkGeometryAABBNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGeometryDataNV: {
            return create_dynamic_array_copy(1, (VkGeometryDataNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGeometryNV: {
            return create_dynamic_array_copy(1, (VkGeometryNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGeometryTrianglesNV: {
            return create_dynamic_array_copy(1, (VkGeometryTrianglesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGraphicsPipelineCreateInfo: {
            return create_dynamic_array_copy(1, (VkGraphicsPipelineCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkGraphicsPipelineShaderGroupsCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkGraphicsPipelineShaderGroupsCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkGraphicsShaderGroupCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkGraphicsShaderGroupCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkHdrMetadataEXT: {
            return create_dynamic_array_copy(1, (VkHdrMetadataEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkHeadlessSurfaceCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkHeadlessSurfaceCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_IOS_MVK
        case VkIOSSurfaceCreateInfoMVK: {
            return create_dynamic_array_copy(1, (VkIOSSurfaceCreateInfoMVK*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_IOS_MVK

        case VkImageBlit: {
            return create_dynamic_array_copy(1, (VkImageBlit*)pNext, pAllocationCallbacks);
        } break;

        case VkImageCopy: {
            return create_dynamic_array_copy(1, (VkImageCopy*)pNext, pAllocationCallbacks);
        } break;

        case VkImageCreateInfo: {
            return create_dynamic_array_copy(1, (VkImageCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkImageDrmFormatModifierExplicitCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkImageDrmFormatModifierExplicitCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkImageDrmFormatModifierListCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkImageDrmFormatModifierListCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkImageDrmFormatModifierPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkImageDrmFormatModifierPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkImageFormatListCreateInfo: {
            return create_dynamic_array_copy(1, (VkImageFormatListCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkImageFormatProperties: {
            return create_dynamic_array_copy(1, (VkImageFormatProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkImageFormatProperties2: {
            return create_dynamic_array_copy(1, (VkImageFormatProperties2*)pNext, pAllocationCallbacks);
        } break;


        case VkImageMemoryBarrier: {
            return create_dynamic_array_copy(1, (VkImageMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;

        case VkImageMemoryRequirementsInfo2: {
            return create_dynamic_array_copy(1, (VkImageMemoryRequirementsInfo2*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_USE_PLATFORM_FUCHSIA
        case VkImagePipeSurfaceCreateInfoFUCHSIA: {
            return create_dynamic_array_copy(1, (VkImagePipeSurfaceCreateInfoFUCHSIA*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_FUCHSIA

        case VkImagePlaneMemoryRequirementsInfo: {
            return create_dynamic_array_copy(1, (VkImagePlaneMemoryRequirementsInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkImageResolve: {
            return create_dynamic_array_copy(1, (VkImageResolve*)pNext, pAllocationCallbacks);
        } break;

        case VkImageSparseMemoryRequirementsInfo2: {
            return create_dynamic_array_copy(1, (VkImageSparseMemoryRequirementsInfo2*)pNext, pAllocationCallbacks);
        } break;


        case VkImageStencilUsageCreateInfo: {
            return create_dynamic_array_copy(1, (VkImageStencilUsageCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkImageSubresource: {
            return create_dynamic_array_copy(1, (VkImageSubresource*)pNext, pAllocationCallbacks);
        } break;

        case VkImageSubresourceLayers: {
            return create_dynamic_array_copy(1, (VkImageSubresourceLayers*)pNext, pAllocationCallbacks);
        } break;

        case VkImageSubresourceRange: {
            return create_dynamic_array_copy(1, (VkImageSubresourceRange*)pNext, pAllocationCallbacks);
        } break;

        case VkImageSwapchainCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkImageSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkImageViewASTCDecodeModeEXT: {
            return create_dynamic_array_copy(1, (VkImageViewASTCDecodeModeEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkImageViewAddressPropertiesNVX: {
            return create_dynamic_array_copy(1, (VkImageViewAddressPropertiesNVX*)pNext, pAllocationCallbacks);
        } break;

        case VkImageViewCreateInfo: {
            return create_dynamic_array_copy(1, (VkImageViewCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkImageViewHandleInfoNVX: {
            return create_dynamic_array_copy(1, (VkImageViewHandleInfoNVX*)pNext, pAllocationCallbacks);
        } break;

        case VkImageViewUsageCreateInfo: {
            return create_dynamic_array_copy(1, (VkImageViewUsageCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkImportAndroidHardwareBufferInfoANDROID: {
            return create_dynamic_array_copy(1, (VkImportAndroidHardwareBufferInfoANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        case VkImportFenceFdInfoKHR: {
            return create_dynamic_array_copy(1, (VkImportFenceFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkImportFenceWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkImportFenceWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkImportMemoryFdInfoKHR: {
            return create_dynamic_array_copy(1, (VkImportMemoryFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkImportMemoryHostPointerInfoEXT: {
            return create_dynamic_array_copy(1, (VkImportMemoryHostPointerInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkImportMemoryWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkImportMemoryWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkImportMemoryWin32HandleInfoNV: {
            return create_dynamic_array_copy(1, (VkImportMemoryWin32HandleInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkImportSemaphoreFdInfoKHR: {
            return create_dynamic_array_copy(1, (VkImportSemaphoreFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkImportSemaphoreWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkImportSemaphoreWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkIndirectCommandsLayoutCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkIndirectCommandsLayoutCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkIndirectCommandsLayoutTokenNV: {
            return create_dynamic_array_copy(1, (VkIndirectCommandsLayoutTokenNV*)pNext, pAllocationCallbacks);
        } break;

        case VkIndirectCommandsStreamNV: {
            return create_dynamic_array_copy(1, (VkIndirectCommandsStreamNV*)pNext, pAllocationCallbacks);
        } break;

        case VkInitializePerformanceApiInfoINTEL: {
            return create_dynamic_array_copy(1, (VkInitializePerformanceApiInfoINTEL*)pNext, pAllocationCallbacks);
        } break;

        case VkInputAttachmentAspectReference: {
            return create_dynamic_array_copy(1, (VkInputAttachmentAspectReference*)pNext, pAllocationCallbacks);
        } break;


        case VkInstanceCreateInfo: {
            return create_dynamic_array_copy(1, (VkInstanceCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkLayerProperties: {
            return create_dynamic_array_copy(1, (VkLayerProperties*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_MACOS_MVK
        case VkMacOSSurfaceCreateInfoMVK: {
            return create_dynamic_array_copy(1, (VkMacOSSurfaceCreateInfoMVK*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_MACOS_MVK

        case VkMappedMemoryRange: {
            return create_dynamic_array_copy(1, (VkMappedMemoryRange*)pNext, pAllocationCallbacks);
        } break;

        case VkMemoryAllocateFlagsInfo: {
            return create_dynamic_array_copy(1, (VkMemoryAllocateFlagsInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkMemoryAllocateInfo: {
            return create_dynamic_array_copy(1, (VkMemoryAllocateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkMemoryBarrier: {
            return create_dynamic_array_copy(1, (VkMemoryBarrier*)pNext, pAllocationCallbacks);
        } break;

        case VkMemoryDedicatedAllocateInfo: {
            return create_dynamic_array_copy(1, (VkMemoryDedicatedAllocateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkMemoryDedicatedRequirements: {
            return create_dynamic_array_copy(1, (VkMemoryDedicatedRequirements*)pNext, pAllocationCallbacks);
        } break;


        case VkMemoryFdPropertiesKHR: {
            return create_dynamic_array_copy(1, (VkMemoryFdPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkMemoryGetAndroidHardwareBufferInfoANDROID: {
            return create_dynamic_array_copy(1, (VkMemoryGetAndroidHardwareBufferInfoANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        case VkMemoryGetFdInfoKHR: {
            return create_dynamic_array_copy(1, (VkMemoryGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkMemoryGetWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkMemoryGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkMemoryHeap: {
            return create_dynamic_array_copy(1, (VkMemoryHeap*)pNext, pAllocationCallbacks);
        } break;

        case VkMemoryHostPointerPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkMemoryHostPointerPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkMemoryOpaqueCaptureAddressAllocateInfo: {
            return create_dynamic_array_copy(1, (VkMemoryOpaqueCaptureAddressAllocateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkMemoryPriorityAllocateInfoEXT: {
            return create_dynamic_array_copy(1, (VkMemoryPriorityAllocateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkMemoryRequirements: {
            return create_dynamic_array_copy(1, (VkMemoryRequirements*)pNext, pAllocationCallbacks);
        } break;

        case VkMemoryRequirements2: {
            return create_dynamic_array_copy(1, (VkMemoryRequirements2*)pNext, pAllocationCallbacks);
        } break;


        case VkMemoryType: {
            return create_dynamic_array_copy(1, (VkMemoryType*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkMemoryWin32HandlePropertiesKHR: {
            return create_dynamic_array_copy(1, (VkMemoryWin32HandlePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        #ifdef VK_USE_PLATFORM_METAL_EXT
        case VkMetalSurfaceCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkMetalSurfaceCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_METAL_EXT

        case VkMultisamplePropertiesEXT: {
            return create_dynamic_array_copy(1, (VkMultisamplePropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkNativeBufferANDROID: {
            return create_dynamic_array_copy(1, (VkNativeBufferANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkNativeBufferUsage2ANDROID: {
            return create_dynamic_array_copy(1, (VkNativeBufferUsage2ANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        case VkOffset2D: {
            return create_dynamic_array_copy(1, (VkOffset2D*)pNext, pAllocationCallbacks);
        } break;

        case VkOffset3D: {
            return create_dynamic_array_copy(1, (VkOffset3D*)pNext, pAllocationCallbacks);
        } break;

        case VkPastPresentationTimingGOOGLE: {
            return create_dynamic_array_copy(1, (VkPastPresentationTimingGOOGLE*)pNext, pAllocationCallbacks);
        } break;

        case VkPerformanceConfigurationAcquireInfoINTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceConfigurationAcquireInfoINTEL*)pNext, pAllocationCallbacks);
        } break;

        case VkPerformanceCounterDescriptionKHR: {
            return create_dynamic_array_copy(1, (VkPerformanceCounterDescriptionKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPerformanceCounterKHR: {
            return create_dynamic_array_copy(1, (VkPerformanceCounterKHR*)pNext, pAllocationCallbacks);
        } break;


        case VkPerformanceMarkerInfoINTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceMarkerInfoINTEL*)pNext, pAllocationCallbacks);
        } break;

        case VkPerformanceOverrideInfoINTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceOverrideInfoINTEL*)pNext, pAllocationCallbacks);
        } break;

        case VkPerformanceQuerySubmitInfoKHR: {
            return create_dynamic_array_copy(1, (VkPerformanceQuerySubmitInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPerformanceStreamMarkerInfoINTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceStreamMarkerInfoINTEL*)pNext, pAllocationCallbacks);
        } break;


        case VkPerformanceValueINTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceValueINTEL*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDevice16BitStorageFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDevice16BitStorageFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDevice8BitStorageFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDevice8BitStorageFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceASTCDecodeFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceASTCDecodeFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceBufferDeviceAddressFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBufferDeviceAddressFeatures*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceBufferDeviceAddressFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceCoherentMemoryFeaturesAMD: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCoherentMemoryFeaturesAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceComputeShaderDerivativesFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceConditionalRenderingFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceConditionalRenderingFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceConservativeRasterizationPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceCooperativeMatrixFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCooperativeMatrixFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceCooperativeMatrixPropertiesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCooperativeMatrixPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceCornerSampledImageFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCornerSampledImageFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceCoverageReductionModeFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCoverageReductionModeFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceCustomBorderColorFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCustomBorderColorFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceCustomBorderColorPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCustomBorderColorPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceDepthClipEnableFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDepthClipEnableFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceDepthStencilResolveProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDepthStencilResolveProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceDescriptorIndexingFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDescriptorIndexingFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceDescriptorIndexingProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDescriptorIndexingProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceDiagnosticsConfigFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDiagnosticsConfigFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceDiscardRectanglePropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDiscardRectanglePropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceDriverProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDriverProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceExclusiveScissorFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExclusiveScissorFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceExtendedDynamicStateFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceExternalBufferInfo: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalBufferInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceExternalFenceInfo: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalFenceInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceExternalImageFormatInfo: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalImageFormatInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceExternalMemoryHostPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceExternalSemaphoreInfo: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalSemaphoreInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFeatures*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceFeatures2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFeatures2*)pNext, pAllocationCallbacks);
        } break;



        case VkPhysicalDeviceFloatControlsProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFloatControlsProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceFragmentDensityMap2FeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceFragmentDensityMap2PropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMap2PropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceFragmentDensityMapFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceFragmentDensityMapPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceGroupProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceGroupProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceHostQueryResetFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceHostQueryResetFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceIDProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceIDProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceImageDrmFormatModifierInfoEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageDrmFormatModifierInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceImageFormatInfo2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageFormatInfo2*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceImageRobustnessFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageRobustnessFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceImageViewImageFormatInfoEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageViewImageFormatInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceImagelessFramebufferFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImagelessFramebufferFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceIndexTypeUint8FeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceInlineUniformBlockFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceInlineUniformBlockFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceInlineUniformBlockPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceInlineUniformBlockPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceLimits: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceLimits*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceLineRasterizationFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceLineRasterizationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceLineRasterizationPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceLineRasterizationPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceMaintenance3Properties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMaintenance3Properties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceMemoryBudgetPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMemoryBudgetPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceMemoryPriorityFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMemoryPriorityFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceMemoryProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMemoryProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceMemoryProperties2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMemoryProperties2*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceMeshShaderFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMeshShaderFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceMeshShaderPropertiesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMeshShaderPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceMultiviewFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMultiviewFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceMultiviewProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMultiviewProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDevicePCIBusInfoPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePCIBusInfoPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDevicePerformanceQueryFeaturesKHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePerformanceQueryFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDevicePerformanceQueryPropertiesKHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePerformanceQueryPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDevicePointClippingProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePointClippingProperties*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkPhysicalDevicePresentationPropertiesANDROID: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePresentationPropertiesANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        case VkPhysicalDevicePrivateDataFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePrivateDataFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceProperties2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceProperties2*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceProtectedMemoryFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceProtectedMemoryFeatures*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceProtectedMemoryProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceProtectedMemoryProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDevicePushDescriptorPropertiesKHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePushDescriptorPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceRayTracingFeaturesKHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRayTracingFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPhysicalDeviceRayTracingPropertiesKHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRayTracingPropertiesKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkPhysicalDeviceRayTracingPropertiesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRayTracingPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceRobustness2FeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRobustness2FeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceRobustness2PropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRobustness2PropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceSampleLocationsPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSampleLocationsPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceSamplerFilterMinmaxProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSamplerFilterMinmaxProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceSamplerYcbcrConversionFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSamplerYcbcrConversionFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceScalarBlockLayoutFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceScalarBlockLayoutFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceShaderAtomicFloatFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderAtomicInt64Features: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderAtomicInt64Features*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceShaderClockFeaturesKHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderClockFeaturesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderCoreProperties2AMD: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderCoreProperties2AMD*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderCorePropertiesAMD: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderCorePropertiesAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceShaderDrawParametersFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderDrawParametersFeatures*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderFloat16Int8Features: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderFloat16Int8Features*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceShaderImageFootprintFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderImageFootprintFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderSMBuiltinsFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderSMBuiltinsPropertiesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderSMBuiltinsPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceShadingRateImageFeaturesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShadingRateImageFeaturesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceShadingRateImagePropertiesNV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShadingRateImagePropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceSparseImageFormatInfo2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSparseImageFormatInfo2*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceSparseProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSparseProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceSubgroupProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSubgroupProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceSubgroupSizeControlFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSubgroupSizeControlFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceSubgroupSizeControlPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSubgroupSizeControlPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceSurfaceInfo2KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSurfaceInfo2KHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceTimelineSemaphoreFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTimelineSemaphoreFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceTimelineSemaphoreProperties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTimelineSemaphoreProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceToolPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceToolPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceTransformFeedbackFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTransformFeedbackFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceTransformFeedbackPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTransformFeedbackPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceUniformBufferStandardLayoutFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceUniformBufferStandardLayoutFeatures*)pNext, pAllocationCallbacks);
        } break;




        case VkPhysicalDeviceVariablePointersFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVariablePointersFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceVulkan11Features: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan11Features*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceVulkan11Properties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan11Properties*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceVulkan12Features: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan12Features*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceVulkan12Properties: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan12Properties*)pNext, pAllocationCallbacks);
        } break;

        case VkPhysicalDeviceVulkanMemoryModelFeatures: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkanMemoryModelFeatures*)pNext, pAllocationCallbacks);
        } break;


        case VkPhysicalDeviceYcbcrImageArraysFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineCacheCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineCacheCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineColorBlendAdvancedStateCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineColorBlendAdvancedStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineColorBlendAttachmentState: {
            return create_dynamic_array_copy(1, (VkPipelineColorBlendAttachmentState*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineColorBlendStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineColorBlendStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineCompilerControlCreateInfoAMD: {
            return create_dynamic_array_copy(1, (VkPipelineCompilerControlCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineCoverageModulationStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineCoverageModulationStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineCoverageReductionStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineCoverageReductionStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineCoverageToColorStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineCoverageToColorStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineCreationFeedbackCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineCreationFeedbackCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineCreationFeedbackEXT: {
            return create_dynamic_array_copy(1, (VkPipelineCreationFeedbackEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineDepthStencilStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineDepthStencilStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineDiscardRectangleStateCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineDiscardRectangleStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineDynamicStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineDynamicStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineExecutableInfoKHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutableInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineExecutableInternalRepresentationKHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutableInternalRepresentationKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineExecutablePropertiesKHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutablePropertiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineExecutableStatisticKHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutableStatisticKHR*)pNext, pAllocationCallbacks);
        } break;


        case VkPipelineInfoKHR: {
            return create_dynamic_array_copy(1, (VkPipelineInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineInputAssemblyStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineInputAssemblyStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineLayoutCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineLayoutCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkPipelineLibraryCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkPipelineLibraryCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS


        case VkPipelineRasterizationConservativeStateCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationConservativeStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineRasterizationDepthClipStateCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationDepthClipStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineRasterizationLineStateCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationLineStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineRasterizationStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineRasterizationStateRasterizationOrderAMD: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationStateRasterizationOrderAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineRasterizationStateStreamCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationStateStreamCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineRepresentativeFragmentTestStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineRepresentativeFragmentTestStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineSampleLocationsStateCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineSampleLocationsStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineShaderStageCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineShaderStageCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineTessellationDomainOriginStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineTessellationDomainOriginStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkPipelineTessellationStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineTessellationStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineVertexInputDivisorStateCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPipelineVertexInputDivisorStateCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineVertexInputStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineVertexInputStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineViewportCoarseSampleOrderStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineViewportExclusiveScissorStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportExclusiveScissorStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineViewportShadingRateImageStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportShadingRateImageStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineViewportStateCreateInfo: {
            return create_dynamic_array_copy(1, (VkPipelineViewportStateCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineViewportSwizzleStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportSwizzleStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkPipelineViewportWScalingStateCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportWScalingStateCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_GGP
        case VkPresentFrameTokenGGP: {
            return create_dynamic_array_copy(1, (VkPresentFrameTokenGGP*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP

        case VkPresentInfoKHR: {
            return create_dynamic_array_copy(1, (VkPresentInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPresentRegionKHR: {
            return create_dynamic_array_copy(1, (VkPresentRegionKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPresentRegionsKHR: {
            return create_dynamic_array_copy(1, (VkPresentRegionsKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkPresentTimeGOOGLE: {
            return create_dynamic_array_copy(1, (VkPresentTimeGOOGLE*)pNext, pAllocationCallbacks);
        } break;

        case VkPresentTimesInfoGOOGLE: {
            return create_dynamic_array_copy(1, (VkPresentTimesInfoGOOGLE*)pNext, pAllocationCallbacks);
        } break;

        case VkPrivateDataSlotCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkPrivateDataSlotCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkProtectedSubmitInfo: {
            return create_dynamic_array_copy(1, (VkProtectedSubmitInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkPushConstantRange: {
            return create_dynamic_array_copy(1, (VkPushConstantRange*)pNext, pAllocationCallbacks);
        } break;

        case VkQueryPoolCreateInfo: {
            return create_dynamic_array_copy(1, (VkQueryPoolCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkQueryPoolPerformanceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkQueryPoolPerformanceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkQueryPoolPerformanceQueryCreateInfoINTEL: {
            return create_dynamic_array_copy(1, (VkQueryPoolPerformanceQueryCreateInfoINTEL*)pNext, pAllocationCallbacks);
        } break;

        case VkQueueFamilyCheckpointPropertiesNV: {
            return create_dynamic_array_copy(1, (VkQueueFamilyCheckpointPropertiesNV*)pNext, pAllocationCallbacks);
        } break;

        case VkQueueFamilyProperties: {
            return create_dynamic_array_copy(1, (VkQueueFamilyProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkQueueFamilyProperties2: {
            return create_dynamic_array_copy(1, (VkQueueFamilyProperties2*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkRayTracingPipelineCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkRayTracingPipelineCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkRayTracingPipelineCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkRayTracingPipelineCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkRayTracingPipelineInterfaceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkRayTracingPipelineInterfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkRayTracingShaderGroupCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkRayTracingShaderGroupCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkRayTracingShaderGroupCreateInfoNV: {
            return create_dynamic_array_copy(1, (VkRayTracingShaderGroupCreateInfoNV*)pNext, pAllocationCallbacks);
        } break;

        case VkRect2D: {
            return create_dynamic_array_copy(1, (VkRect2D*)pNext, pAllocationCallbacks);
        } break;

        case VkRectLayerKHR: {
            return create_dynamic_array_copy(1, (VkRectLayerKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkRefreshCycleDurationGOOGLE: {
            return create_dynamic_array_copy(1, (VkRefreshCycleDurationGOOGLE*)pNext, pAllocationCallbacks);
        } break;

        case VkRenderPassAttachmentBeginInfo: {
            return create_dynamic_array_copy(1, (VkRenderPassAttachmentBeginInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkRenderPassBeginInfo: {
            return create_dynamic_array_copy(1, (VkRenderPassBeginInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkRenderPassCreateInfo: {
            return create_dynamic_array_copy(1, (VkRenderPassCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkRenderPassCreateInfo2: {
            return create_dynamic_array_copy(1, (VkRenderPassCreateInfo2*)pNext, pAllocationCallbacks);
        } break;


        case VkRenderPassFragmentDensityMapCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkRenderPassFragmentDensityMapCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkRenderPassInputAttachmentAspectCreateInfo: {
            return create_dynamic_array_copy(1, (VkRenderPassInputAttachmentAspectCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkRenderPassMultiviewCreateInfo: {
            return create_dynamic_array_copy(1, (VkRenderPassMultiviewCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkRenderPassSampleLocationsBeginInfoEXT: {
            return create_dynamic_array_copy(1, (VkRenderPassSampleLocationsBeginInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkRenderPassTransformBeginInfoQCOM: {
            return create_dynamic_array_copy(1, (VkRenderPassTransformBeginInfoQCOM*)pNext, pAllocationCallbacks);
        } break;

        case VkSampleLocationEXT: {
            return create_dynamic_array_copy(1, (VkSampleLocationEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkSampleLocationsInfoEXT: {
            return create_dynamic_array_copy(1, (VkSampleLocationsInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkSamplerCreateInfo: {
            return create_dynamic_array_copy(1, (VkSamplerCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkSamplerCustomBorderColorCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkSamplerCustomBorderColorCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkSamplerReductionModeCreateInfo: {
            return create_dynamic_array_copy(1, (VkSamplerReductionModeCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSamplerYcbcrConversionCreateInfo: {
            return create_dynamic_array_copy(1, (VkSamplerYcbcrConversionCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSamplerYcbcrConversionImageFormatProperties: {
            return create_dynamic_array_copy(1, (VkSamplerYcbcrConversionImageFormatProperties*)pNext, pAllocationCallbacks);
        } break;


        case VkSamplerYcbcrConversionInfo: {
            return create_dynamic_array_copy(1, (VkSamplerYcbcrConversionInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSemaphoreCreateInfo: {
            return create_dynamic_array_copy(1, (VkSemaphoreCreateInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkSemaphoreGetFdInfoKHR: {
            return create_dynamic_array_copy(1, (VkSemaphoreGetFdInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkSemaphoreGetWin32HandleInfoKHR: {
            return create_dynamic_array_copy(1, (VkSemaphoreGetWin32HandleInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkSemaphoreSignalInfo: {
            return create_dynamic_array_copy(1, (VkSemaphoreSignalInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSemaphoreTypeCreateInfo: {
            return create_dynamic_array_copy(1, (VkSemaphoreTypeCreateInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSemaphoreWaitInfo: {
            return create_dynamic_array_copy(1, (VkSemaphoreWaitInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSetStateFlagsIndirectCommandNV: {
            return create_dynamic_array_copy(1, (VkSetStateFlagsIndirectCommandNV*)pNext, pAllocationCallbacks);
        } break;


        case VkShaderModuleValidationCacheCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkShaderModuleValidationCacheCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkShaderResourceUsageAMD: {
            return create_dynamic_array_copy(1, (VkShaderResourceUsageAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkShaderStatisticsInfoAMD: {
            return create_dynamic_array_copy(1, (VkShaderStatisticsInfoAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkShadingRatePaletteNV: {
            return create_dynamic_array_copy(1, (VkShadingRatePaletteNV*)pNext, pAllocationCallbacks);
        } break;

        case VkSharedPresentSurfaceCapabilitiesKHR: {
            return create_dynamic_array_copy(1, (VkSharedPresentSurfaceCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkSparseBufferMemoryBindInfo: {
            return create_dynamic_array_copy(1, (VkSparseBufferMemoryBindInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkSparseImageFormatProperties: {
            return create_dynamic_array_copy(1, (VkSparseImageFormatProperties*)pNext, pAllocationCallbacks);
        } break;

        case VkSparseImageFormatProperties2: {
            return create_dynamic_array_copy(1, (VkSparseImageFormatProperties2*)pNext, pAllocationCallbacks);
        } break;


        case VkSparseImageMemoryBind: {
            return create_dynamic_array_copy(1, (VkSparseImageMemoryBind*)pNext, pAllocationCallbacks);
        } break;

        case VkSparseImageMemoryBindInfo: {
            return create_dynamic_array_copy(1, (VkSparseImageMemoryBindInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkSparseImageMemoryRequirements: {
            return create_dynamic_array_copy(1, (VkSparseImageMemoryRequirements*)pNext, pAllocationCallbacks);
        } break;

        case VkSparseImageMemoryRequirements2: {
            return create_dynamic_array_copy(1, (VkSparseImageMemoryRequirements2*)pNext, pAllocationCallbacks);
        } break;


        case VkSparseImageOpaqueMemoryBindInfo: {
            return create_dynamic_array_copy(1, (VkSparseImageOpaqueMemoryBindInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkSparseMemoryBind: {
            return create_dynamic_array_copy(1, (VkSparseMemoryBind*)pNext, pAllocationCallbacks);
        } break;

        case VkSpecializationInfo: {
            return create_dynamic_array_copy(1, (VkSpecializationInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkSpecializationMapEntry: {
            return create_dynamic_array_copy(1, (VkSpecializationMapEntry*)pNext, pAllocationCallbacks);
        } break;

        case VkStencilOpState: {
            return create_dynamic_array_copy(1, (VkStencilOpState*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_GGP
        case VkStreamDescriptorSurfaceCreateInfoGGP: {
            return create_dynamic_array_copy(1, (VkStreamDescriptorSurfaceCreateInfoGGP*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_GGP

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkStridedBufferRegionKHR: {
            return create_dynamic_array_copy(1, (VkStridedBufferRegionKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS

        case VkSubmitInfo: {
            return create_dynamic_array_copy(1, (VkSubmitInfo*)pNext, pAllocationCallbacks);
        } break;

        case VkSubpassBeginInfo: {
            return create_dynamic_array_copy(1, (VkSubpassBeginInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSubpassDependency: {
            return create_dynamic_array_copy(1, (VkSubpassDependency*)pNext, pAllocationCallbacks);
        } break;

        case VkSubpassDependency2: {
            return create_dynamic_array_copy(1, (VkSubpassDependency2*)pNext, pAllocationCallbacks);
        } break;


        case VkSubpassDescription: {
            return create_dynamic_array_copy(1, (VkSubpassDescription*)pNext, pAllocationCallbacks);
        } break;

        case VkSubpassDescription2: {
            return create_dynamic_array_copy(1, (VkSubpassDescription2*)pNext, pAllocationCallbacks);
        } break;


        case VkSubpassDescriptionDepthStencilResolve: {
            return create_dynamic_array_copy(1, (VkSubpassDescriptionDepthStencilResolve*)pNext, pAllocationCallbacks);
        } break;


        case VkSubpassEndInfo: {
            return create_dynamic_array_copy(1, (VkSubpassEndInfo*)pNext, pAllocationCallbacks);
        } break;


        case VkSubpassSampleLocationsEXT: {
            return create_dynamic_array_copy(1, (VkSubpassSampleLocationsEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkSubresourceLayout: {
            return create_dynamic_array_copy(1, (VkSubresourceLayout*)pNext, pAllocationCallbacks);
        } break;

        case VkSurfaceCapabilities2EXT: {
            return create_dynamic_array_copy(1, (VkSurfaceCapabilities2EXT*)pNext, pAllocationCallbacks);
        } break;

        case VkSurfaceCapabilities2KHR: {
            return create_dynamic_array_copy(1, (VkSurfaceCapabilities2KHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkSurfaceCapabilitiesFullScreenExclusiveEXT: {
            return create_dynamic_array_copy(1, (VkSurfaceCapabilitiesFullScreenExclusiveEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkSurfaceCapabilitiesKHR: {
            return create_dynamic_array_copy(1, (VkSurfaceCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkSurfaceFormat2KHR: {
            return create_dynamic_array_copy(1, (VkSurfaceFormat2KHR*)pNext, pAllocationCallbacks);
        } break;

        case VkSurfaceFormatKHR: {
            return create_dynamic_array_copy(1, (VkSurfaceFormatKHR*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkSurfaceFullScreenExclusiveInfoEXT: {
            return create_dynamic_array_copy(1, (VkSurfaceFullScreenExclusiveInfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkSurfaceFullScreenExclusiveWin32InfoEXT: {
            return create_dynamic_array_copy(1, (VkSurfaceFullScreenExclusiveWin32InfoEXT*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkSurfaceProtectedCapabilitiesKHR: {
            return create_dynamic_array_copy(1, (VkSurfaceProtectedCapabilitiesKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkSwapchainCounterCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkSwapchainCounterCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkSwapchainCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkSwapchainCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;

        case VkSwapchainDisplayNativeHdrCreateInfoAMD: {
            return create_dynamic_array_copy(1, (VkSwapchainDisplayNativeHdrCreateInfoAMD*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VkSwapchainImageCreateInfoANDROID: {
            return create_dynamic_array_copy(1, (VkSwapchainImageCreateInfoANDROID*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR

        case VkTextureLODGatherFormatPropertiesAMD: {
            return create_dynamic_array_copy(1, (VkTextureLODGatherFormatPropertiesAMD*)pNext, pAllocationCallbacks);
        } break;

        case VkTimelineSemaphoreSubmitInfo: {
            return create_dynamic_array_copy(1, (VkTimelineSemaphoreSubmitInfo*)pNext, pAllocationCallbacks);
        } break;


        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkTraceRaysIndirectCommandKHR: {
            return create_dynamic_array_copy(1, (VkTraceRaysIndirectCommandKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS



        case VkValidationCacheCreateInfoEXT: {
            return create_dynamic_array_copy(1, (VkValidationCacheCreateInfoEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkValidationFeaturesEXT: {
            return create_dynamic_array_copy(1, (VkValidationFeaturesEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkValidationFlagsEXT: {
            return create_dynamic_array_copy(1, (VkValidationFlagsEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkVertexInputAttributeDescription: {
            return create_dynamic_array_copy(1, (VkVertexInputAttributeDescription*)pNext, pAllocationCallbacks);
        } break;

        case VkVertexInputBindingDescription: {
            return create_dynamic_array_copy(1, (VkVertexInputBindingDescription*)pNext, pAllocationCallbacks);
        } break;

        case VkVertexInputBindingDivisorDescriptionEXT: {
            return create_dynamic_array_copy(1, (VkVertexInputBindingDivisorDescriptionEXT*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_VI_NN
        case VkViSurfaceCreateInfoNN: {
            return create_dynamic_array_copy(1, (VkViSurfaceCreateInfoNN*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_VI_NN

        case VkViewport: {
            return create_dynamic_array_copy(1, (VkViewport*)pNext, pAllocationCallbacks);
        } break;

        case VkViewportSwizzleNV: {
            return create_dynamic_array_copy(1, (VkViewportSwizzleNV*)pNext, pAllocationCallbacks);
        } break;

        case VkViewportWScalingNV: {
            return create_dynamic_array_copy(1, (VkViewportWScalingNV*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case VkWaylandSurfaceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkWaylandSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WAYLAND_KHR

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkWin32KeyedMutexAcquireReleaseInfoKHR: {
            return create_dynamic_array_copy(1, (VkWin32KeyedMutexAcquireReleaseInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkWin32KeyedMutexAcquireReleaseInfoNV: {
            return create_dynamic_array_copy(1, (VkWin32KeyedMutexAcquireReleaseInfoNV*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VkWin32SurfaceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkWin32SurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR

        case VkWriteDescriptorSet: {
            return create_dynamic_array_copy(1, (VkWriteDescriptorSet*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VkWriteDescriptorSetAccelerationStructureKHR: {
            return create_dynamic_array_copy(1, (VkWriteDescriptorSetAccelerationStructureKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS


        case VkWriteDescriptorSetInlineUniformBlockEXT: {
            return create_dynamic_array_copy(1, (VkWriteDescriptorSetInlineUniformBlockEXT*)pNext, pAllocationCallbacks);
        } break;

        case VkXYColorEXT: {
            return create_dynamic_array_copy(1, (VkXYColorEXT*)pNext, pAllocationCallbacks);
        } break;

        #ifdef VK_USE_PLATFORM_XCB_KHR
        case VkXcbSurfaceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkXcbSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XCB_KHR

        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case VkXlibSurfaceCreateInfoKHR: {
            return create_dynamic_array_copy(1, (VkXlibSurfaceCreateInfoKHR*)pNext, pAllocationCallbacks);
        } break;
        #endif // VK_USE_PLATFORM_XLIB_KHR
        default:
        }
    }
    return nullptr;
}

} // namespace vk
} // namespace dst
