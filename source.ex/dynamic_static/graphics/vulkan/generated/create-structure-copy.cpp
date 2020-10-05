
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
namespace detail {

////////////////////////////////////////////////////////////////////////////////
// NOTE : The following functions are manually implemented
#if 0
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureBuildGeometryInfoKHR create_structure_copy<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureBuildOffsetInfoKHR create_structure_copy<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureCreateGeometryTypeInfoKHR create_structure_copy<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureCreateInfoKHR create_structure_copy<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureCreateInfoNV create_structure_copy<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureDeviceAddressInfoKHR create_structure_copy<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureGeometryAabbsDataKHR create_structure_copy<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureGeometryDataKHR create_structure_copy<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureGeometryInstancesDataKHR create_structure_copy<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureGeometryKHR create_structure_copy<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureGeometryTrianglesDataKHR create_structure_copy<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureInfoNV create_structure_copy<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureInstanceKHR create_structure_copy<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureMemoryRequirementsInfoKHR create_structure_copy<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureMemoryRequirementsInfoNV create_structure_copy<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkAccelerationStructureVersionKHR create_structure_copy<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> VkClearColorValue create_structure_copy<VkClearColorValue>(const VkClearColorValue& obj, const VkAllocationCallbacks* pAllocator);
template <> VkClearValue create_structure_copy<VkClearValue>(const VkClearValue& obj, const VkAllocationCallbacks* pAllocator);
template <> VkDebugMarkerObjectTagInfoEXT create_structure_copy<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocator);
template <> VkDebugUtilsObjectTagInfoEXT create_structure_copy<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj, const VkAllocationCallbacks* pAllocator);
template <> VkPerformanceCounterResultKHR create_structure_copy<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj, const VkAllocationCallbacks* pAllocator);
template <> VkPerformanceValueDataINTEL create_structure_copy<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj, const VkAllocationCallbacks* pAllocator);
template <> VkPipelineCacheCreateInfo create_structure_copy<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj, const VkAllocationCallbacks* pAllocator);
template <> VkPipelineExecutableInternalRepresentationKHR create_structure_copy<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj, const VkAllocationCallbacks* pAllocator);
template <> VkPipelineExecutableStatisticValueKHR create_structure_copy<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj, const VkAllocationCallbacks* pAllocator);
template <> VkPipelineMultisampleStateCreateInfo create_structure_copy<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator);
template <> VkShaderModuleCreateInfo create_structure_copy<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj, const VkAllocationCallbacks* pAllocator);
template <> VkSpecializationInfo create_structure_copy<VkSpecializationInfo>(const VkSpecializationInfo& obj, const VkAllocationCallbacks* pAllocator);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> VkTransformMatrixKHR create_structure_copy<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj, const VkAllocationCallbacks* pAllocator);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> VkValidationCacheCreateInfoEXT create_structure_copy<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator);
template <> VkWriteDescriptorSetInlineUniformBlockEXT create_structure_copy<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj, const VkAllocationCallbacks* pAllocator);
#endif
////////////////////////////////////////////////////////////////////////////////

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkAabbPositionsKHR create_structure_copy<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAabbPositionsKHR result { };
    result.minX = obj.minX;
    result.minY = obj.minY;
    result.minZ = obj.minZ;
    result.maxX = obj.maxX;
    result.maxY = obj.maxY;
    result.maxZ = obj.maxZ;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS



















template <>
VkAcquireNextImageInfoKHR create_structure_copy<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAcquireNextImageInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.swapchain = obj.swapchain;
    result.timeout = obj.timeout;
    result.semaphore = obj.semaphore;
    result.fence = obj.fence;
    result.deviceMask = obj.deviceMask;
    return result;
}

template <>
VkAcquireProfilingLockInfoKHR create_structure_copy<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAcquireProfilingLockInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.timeout = obj.timeout;
    return result;
}

template <>
VkAllocationCallbacks create_structure_copy<VkAllocationCallbacks>(const VkAllocationCallbacks& obj, const VkAllocationCallbacks* pAllocator)
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
VkAndroidHardwareBufferFormatPropertiesANDROID create_structure_copy<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAndroidHardwareBufferFormatPropertiesANDROID result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.format = obj.format;
    result.externalFormat = obj.externalFormat;
    result.formatFeatures = obj.formatFeatures;
    result.samplerYcbcrConversionComponents = create_structure_copy(obj.samplerYcbcrConversionComponents, pAllocator);
    result.suggestedYcbcrModel = obj.suggestedYcbcrModel;
    result.suggestedYcbcrRange = obj.suggestedYcbcrRange;
    result.suggestedXChromaOffset = obj.suggestedXChromaOffset;
    result.suggestedYChromaOffset = obj.suggestedYChromaOffset;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferPropertiesANDROID create_structure_copy<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAndroidHardwareBufferPropertiesANDROID result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.allocationSize = obj.allocationSize;
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidHardwareBufferUsageANDROID create_structure_copy<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAndroidHardwareBufferUsageANDROID result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.androidHardwareBufferUsage = obj.androidHardwareBufferUsage;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkAndroidSurfaceCreateInfoKHR create_structure_copy<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAndroidSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkApplicationInfo create_structure_copy<VkApplicationInfo>(const VkApplicationInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkApplicationInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pApplicationName = create_dynamic_string_copy(obj.pApplicationName, pAllocator);
    result.applicationVersion = obj.applicationVersion;
    result.pEngineName = create_dynamic_string_copy(obj.pEngineName, pAllocator);
    result.engineVersion = obj.engineVersion;
    result.apiVersion = obj.apiVersion;
    return result;
}

template <>
VkAttachmentDescription create_structure_copy<VkAttachmentDescription>(const VkAttachmentDescription& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAttachmentDescription result { };
    result.flags = obj.flags;
    result.format = obj.format;
    result.samples = obj.samples;
    result.loadOp = obj.loadOp;
    result.storeOp = obj.storeOp;
    result.stencilLoadOp = obj.stencilLoadOp;
    result.stencilStoreOp = obj.stencilStoreOp;
    result.initialLayout = obj.initialLayout;
    result.finalLayout = obj.finalLayout;
    return result;
}

template <>
VkAttachmentDescription2 create_structure_copy<VkAttachmentDescription2>(const VkAttachmentDescription2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAttachmentDescription2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.format = obj.format;
    result.samples = obj.samples;
    result.loadOp = obj.loadOp;
    result.storeOp = obj.storeOp;
    result.stencilLoadOp = obj.stencilLoadOp;
    result.stencilStoreOp = obj.stencilStoreOp;
    result.initialLayout = obj.initialLayout;
    result.finalLayout = obj.finalLayout;
    return result;
}


template <>
VkAttachmentDescriptionStencilLayout create_structure_copy<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAttachmentDescriptionStencilLayout result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.stencilInitialLayout = obj.stencilInitialLayout;
    result.stencilFinalLayout = obj.stencilFinalLayout;
    return result;
}


template <>
VkAttachmentReference create_structure_copy<VkAttachmentReference>(const VkAttachmentReference& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAttachmentReference result { };
    result.attachment = obj.attachment;
    result.layout = obj.layout;
    return result;
}

template <>
VkAttachmentReference2 create_structure_copy<VkAttachmentReference2>(const VkAttachmentReference2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAttachmentReference2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.attachment = obj.attachment;
    result.layout = obj.layout;
    result.aspectMask = obj.aspectMask;
    return result;
}


template <>
VkAttachmentReferenceStencilLayout create_structure_copy<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAttachmentReferenceStencilLayout result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.stencilLayout = obj.stencilLayout;
    return result;
}


template <>
VkAttachmentSampleLocationsEXT create_structure_copy<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkAttachmentSampleLocationsEXT result { };
    result.attachmentIndex = obj.attachmentIndex;
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocator);
    return result;
}

template <>
VkBaseInStructure create_structure_copy<VkBaseInStructure>(const VkBaseInStructure& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBaseInStructure result { };
    result.sType = obj.sType;
    result.pNext = (const VkBaseInStructure*)create_pnext_copy(obj.pNext, pAllocator);
    return result;
}

template <>
VkBaseOutStructure create_structure_copy<VkBaseOutStructure>(const VkBaseOutStructure& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBaseOutStructure result { };
    result.sType = obj.sType;
    result.pNext = (VkBaseOutStructure*)create_pnext_copy(obj.pNext, pAllocator);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkBindAccelerationStructureMemoryInfoKHR create_structure_copy<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindAccelerationStructureMemoryInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.accelerationStructure = obj.accelerationStructure;
    result.memory = obj.memory;
    result.memoryOffset = obj.memoryOffset;
    result.deviceIndexCount = obj.deviceIndexCount;
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocator);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkBindBufferMemoryDeviceGroupInfo create_structure_copy<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindBufferMemoryDeviceGroupInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceIndexCount = obj.deviceIndexCount;
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocator);
    return result;
}


template <>
VkBindBufferMemoryInfo create_structure_copy<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindBufferMemoryInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.buffer = obj.buffer;
    result.memory = obj.memory;
    result.memoryOffset = obj.memoryOffset;
    return result;
}


template <>
VkBindImageMemoryDeviceGroupInfo create_structure_copy<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindImageMemoryDeviceGroupInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceIndexCount = obj.deviceIndexCount;
    result.pDeviceIndices = create_dynamic_array_copy(obj.deviceIndexCount, obj.pDeviceIndices, pAllocator);
    result.splitInstanceBindRegionCount = obj.splitInstanceBindRegionCount;
    result.pSplitInstanceBindRegions = create_dynamic_array_copy(obj.splitInstanceBindRegionCount, obj.pSplitInstanceBindRegions, pAllocator);
    return result;
}


template <>
VkBindImageMemoryInfo create_structure_copy<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindImageMemoryInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.image = obj.image;
    result.memory = obj.memory;
    result.memoryOffset = obj.memoryOffset;
    return result;
}


template <>
VkBindImageMemorySwapchainInfoKHR create_structure_copy<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindImageMemorySwapchainInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.swapchain = obj.swapchain;
    result.imageIndex = obj.imageIndex;
    return result;
}

template <>
VkBindImagePlaneMemoryInfo create_structure_copy<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindImagePlaneMemoryInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.planeAspect = obj.planeAspect;
    return result;
}


template <>
VkBindIndexBufferIndirectCommandNV create_structure_copy<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindIndexBufferIndirectCommandNV result { };
    result.bufferAddress = obj.bufferAddress;
    result.size = obj.size;
    result.indexType = obj.indexType;
    return result;
}

template <>
VkBindShaderGroupIndirectCommandNV create_structure_copy<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindShaderGroupIndirectCommandNV result { };
    result.groupIndex = obj.groupIndex;
    return result;
}

template <>
VkBindSparseInfo create_structure_copy<VkBindSparseInfo>(const VkBindSparseInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindSparseInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocator);
    result.bufferBindCount = obj.bufferBindCount;
    result.pBufferBinds = create_dynamic_array_copy(obj.bufferBindCount, obj.pBufferBinds, pAllocator);
    result.imageOpaqueBindCount = obj.imageOpaqueBindCount;
    result.pImageOpaqueBinds = create_dynamic_array_copy(obj.imageOpaqueBindCount, obj.pImageOpaqueBinds, pAllocator);
    result.imageBindCount = obj.imageBindCount;
    result.pImageBinds = create_dynamic_array_copy(obj.imageBindCount, obj.pImageBinds, pAllocator);
    result.signalSemaphoreCount = obj.signalSemaphoreCount;
    result.pSignalSemaphores = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocator);
    return result;
}

template <>
VkBindVertexBufferIndirectCommandNV create_structure_copy<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBindVertexBufferIndirectCommandNV result { };
    result.bufferAddress = obj.bufferAddress;
    result.size = obj.size;
    result.stride = obj.stride;
    return result;
}

template <>
VkBufferCopy create_structure_copy<VkBufferCopy>(const VkBufferCopy& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferCopy result { };
    result.srcOffset = obj.srcOffset;
    result.dstOffset = obj.dstOffset;
    result.size = obj.size;
    return result;
}

template <>
VkBufferCreateInfo create_structure_copy<VkBufferCreateInfo>(const VkBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.size = obj.size;
    result.usage = obj.usage;
    result.sharingMode = obj.sharingMode;
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
    return result;
}

template <>
VkBufferDeviceAddressCreateInfoEXT create_structure_copy<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferDeviceAddressCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceAddress = obj.deviceAddress;
    return result;
}

template <>
VkBufferDeviceAddressInfo create_structure_copy<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferDeviceAddressInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.buffer = obj.buffer;
    return result;
}



template <>
VkBufferImageCopy create_structure_copy<VkBufferImageCopy>(const VkBufferImageCopy& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferImageCopy result { };
    result.bufferOffset = obj.bufferOffset;
    result.bufferRowLength = obj.bufferRowLength;
    result.bufferImageHeight = obj.bufferImageHeight;
    result.imageSubresource = create_structure_copy(obj.imageSubresource, pAllocator);
    result.imageOffset = create_structure_copy(obj.imageOffset, pAllocator);
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocator);
    return result;
}

template <>
VkBufferMemoryBarrier create_structure_copy<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferMemoryBarrier result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.srcAccessMask = obj.srcAccessMask;
    result.dstAccessMask = obj.dstAccessMask;
    result.srcQueueFamilyIndex = obj.srcQueueFamilyIndex;
    result.dstQueueFamilyIndex = obj.dstQueueFamilyIndex;
    result.buffer = obj.buffer;
    result.offset = obj.offset;
    result.size = obj.size;
    return result;
}

template <>
VkBufferMemoryRequirementsInfo2 create_structure_copy<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferMemoryRequirementsInfo2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.buffer = obj.buffer;
    return result;
}


template <>
VkBufferOpaqueCaptureAddressCreateInfo create_structure_copy<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferOpaqueCaptureAddressCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.opaqueCaptureAddress = obj.opaqueCaptureAddress;
    return result;
}


template <>
VkBufferViewCreateInfo create_structure_copy<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkBufferViewCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.buffer = obj.buffer;
    result.format = obj.format;
    result.offset = obj.offset;
    result.range = obj.range;
    return result;
}

template <>
VkCalibratedTimestampInfoEXT create_structure_copy<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCalibratedTimestampInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.timeDomain = obj.timeDomain;
    return result;
}

template <>
VkCheckpointDataNV create_structure_copy<VkCheckpointDataNV>(const VkCheckpointDataNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCheckpointDataNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.stage = obj.stage;
    result.pCheckpointMarker = obj.pCheckpointMarker;
    return result;
}

template <>
VkClearAttachment create_structure_copy<VkClearAttachment>(const VkClearAttachment& obj, const VkAllocationCallbacks* pAllocator)
{
    VkClearAttachment result { };
    result.aspectMask = obj.aspectMask;
    result.colorAttachment = obj.colorAttachment;
    result.clearValue = create_structure_copy(obj.clearValue, pAllocator);
    return result;
}


template <>
VkClearDepthStencilValue create_structure_copy<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj, const VkAllocationCallbacks* pAllocator)
{
    VkClearDepthStencilValue result { };
    result.depth = obj.depth;
    result.stencil = obj.stencil;
    return result;
}

template <>
VkClearRect create_structure_copy<VkClearRect>(const VkClearRect& obj, const VkAllocationCallbacks* pAllocator)
{
    VkClearRect result { };
    result.rect = create_structure_copy(obj.rect, pAllocator);
    result.baseArrayLayer = obj.baseArrayLayer;
    result.layerCount = obj.layerCount;
    return result;
}


template <>
VkCoarseSampleLocationNV create_structure_copy<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCoarseSampleLocationNV result { };
    result.pixelX = obj.pixelX;
    result.pixelY = obj.pixelY;
    result.sample = obj.sample;
    return result;
}

template <>
VkCoarseSampleOrderCustomNV create_structure_copy<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCoarseSampleOrderCustomNV result { };
    result.shadingRate = obj.shadingRate;
    result.sampleCount = obj.sampleCount;
    result.sampleLocationCount = obj.sampleLocationCount;
    result.pSampleLocations = create_dynamic_array_copy(obj.sampleLocationCount, obj.pSampleLocations, pAllocator);
    return result;
}

template <>
VkCommandBufferAllocateInfo create_structure_copy<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCommandBufferAllocateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.commandPool = obj.commandPool;
    result.level = obj.level;
    result.commandBufferCount = obj.commandBufferCount;
    return result;
}

template <>
VkCommandBufferBeginInfo create_structure_copy<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCommandBufferBeginInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pInheritanceInfo = create_dynamic_array_copy(1, obj.pInheritanceInfo, pAllocator);
    return result;
}

template <>
VkCommandBufferInheritanceConditionalRenderingInfoEXT create_structure_copy<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCommandBufferInheritanceConditionalRenderingInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.conditionalRenderingEnable = obj.conditionalRenderingEnable;
    return result;
}

template <>
VkCommandBufferInheritanceInfo create_structure_copy<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCommandBufferInheritanceInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.renderPass = obj.renderPass;
    result.subpass = obj.subpass;
    result.framebuffer = obj.framebuffer;
    result.occlusionQueryEnable = obj.occlusionQueryEnable;
    result.queryFlags = obj.queryFlags;
    result.pipelineStatistics = obj.pipelineStatistics;
    return result;
}

template <>
VkCommandBufferInheritanceRenderPassTransformInfoQCOM create_structure_copy<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.transform = obj.transform;
    result.renderArea = create_structure_copy(obj.renderArea, pAllocator);
    return result;
}

template <>
VkCommandPoolCreateInfo create_structure_copy<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCommandPoolCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.queueFamilyIndex = obj.queueFamilyIndex;
    return result;
}

template <>
VkComponentMapping create_structure_copy<VkComponentMapping>(const VkComponentMapping& obj, const VkAllocationCallbacks* pAllocator)
{
    VkComponentMapping result { };
    result.r = obj.r;
    result.g = obj.g;
    result.b = obj.b;
    result.a = obj.a;
    return result;
}

template <>
VkComputePipelineCreateInfo create_structure_copy<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkComputePipelineCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.stage = create_structure_copy(obj.stage, pAllocator);
    result.layout = obj.layout;
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}

template <>
VkConditionalRenderingBeginInfoEXT create_structure_copy<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkConditionalRenderingBeginInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.buffer = obj.buffer;
    result.offset = obj.offset;
    result.flags = obj.flags;
    return result;
}

template <>
VkConformanceVersion create_structure_copy<VkConformanceVersion>(const VkConformanceVersion& obj, const VkAllocationCallbacks* pAllocator)
{
    VkConformanceVersion result { };
    result.major = obj.major;
    result.minor = obj.minor;
    result.subminor = obj.subminor;
    result.patch = obj.patch;
    return result;
}


template <>
VkCooperativeMatrixPropertiesNV create_structure_copy<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCooperativeMatrixPropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.MSize = obj.MSize;
    result.NSize = obj.NSize;
    result.KSize = obj.KSize;
    result.AType = obj.AType;
    result.BType = obj.BType;
    result.CType = obj.CType;
    result.DType = obj.DType;
    result.scope = obj.scope;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureInfoKHR create_structure_copy<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCopyAccelerationStructureInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.src = obj.src;
    result.dst = obj.dst;
    result.mode = obj.mode;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyAccelerationStructureToMemoryInfoKHR create_structure_copy<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCopyAccelerationStructureToMemoryInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.src = obj.src;
    result.dst = create_structure_copy(obj.dst, pAllocator);
    result.mode = obj.mode;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkCopyDescriptorSet create_structure_copy<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCopyDescriptorSet result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.srcSet = obj.srcSet;
    result.srcBinding = obj.srcBinding;
    result.srcArrayElement = obj.srcArrayElement;
    result.dstSet = obj.dstSet;
    result.dstBinding = obj.dstBinding;
    result.dstArrayElement = obj.dstArrayElement;
    result.descriptorCount = obj.descriptorCount;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkCopyMemoryToAccelerationStructureInfoKHR create_structure_copy<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkCopyMemoryToAccelerationStructureInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.src = create_structure_copy(obj.src, pAllocator);
    result.dst = obj.dst;
    result.mode = obj.mode;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkD3D12FenceSubmitInfoKHR create_structure_copy<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkD3D12FenceSubmitInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.waitSemaphoreValuesCount = obj.waitSemaphoreValuesCount;
    result.pWaitSemaphoreValues = create_dynamic_array_copy(obj.waitSemaphoreValuesCount, obj.pWaitSemaphoreValues, pAllocator);
    result.signalSemaphoreValuesCount = obj.signalSemaphoreValuesCount;
    result.pSignalSemaphoreValues = create_dynamic_array_copy(obj.signalSemaphoreValuesCount, obj.pSignalSemaphoreValues, pAllocator);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkDebugMarkerMarkerInfoEXT create_structure_copy<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDebugMarkerMarkerInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pMarkerName = create_dynamic_string_copy(obj.pMarkerName, pAllocator);
    create_static_array_copy<4>(result.color, obj.color, pAllocator);
    return result;
}

template <>
VkDebugMarkerObjectNameInfoEXT create_structure_copy<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDebugMarkerObjectNameInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.objectType = obj.objectType;
    result.object = obj.object;
    result.pObjectName = create_dynamic_string_copy(obj.pObjectName, pAllocator);
    return result;
}


template <>
VkDebugReportCallbackCreateInfoEXT create_structure_copy<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDebugReportCallbackCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pfnCallback = obj.pfnCallback;
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkDebugUtilsLabelEXT create_structure_copy<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDebugUtilsLabelEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pLabelName = create_dynamic_string_copy(obj.pLabelName, pAllocator);
    create_static_array_copy<4>(result.color, obj.color, pAllocator);
    return result;
}

template <>
VkDebugUtilsMessengerCallbackDataEXT create_structure_copy<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDebugUtilsMessengerCallbackDataEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pMessageIdName = create_dynamic_string_copy(obj.pMessageIdName, pAllocator);
    result.messageIdNumber = obj.messageIdNumber;
    result.pMessage = create_dynamic_string_copy(obj.pMessage, pAllocator);
    result.queueLabelCount = obj.queueLabelCount;
    result.pQueueLabels = create_dynamic_array_copy(obj.queueLabelCount, obj.pQueueLabels, pAllocator);
    result.cmdBufLabelCount = obj.cmdBufLabelCount;
    result.pCmdBufLabels = create_dynamic_array_copy(obj.cmdBufLabelCount, obj.pCmdBufLabels, pAllocator);
    result.objectCount = obj.objectCount;
    result.pObjects = create_dynamic_array_copy(obj.objectCount, obj.pObjects, pAllocator);
    return result;
}

template <>
VkDebugUtilsMessengerCreateInfoEXT create_structure_copy<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDebugUtilsMessengerCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.messageSeverity = obj.messageSeverity;
    result.messageType = obj.messageType;
    result.pfnUserCallback = obj.pfnUserCallback;
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkDebugUtilsObjectNameInfoEXT create_structure_copy<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDebugUtilsObjectNameInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.objectType = obj.objectType;
    result.objectHandle = obj.objectHandle;
    result.pObjectName = create_dynamic_string_copy(obj.pObjectName, pAllocator);
    return result;
}


template <>
VkDedicatedAllocationBufferCreateInfoNV create_structure_copy<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDedicatedAllocationBufferCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.dedicatedAllocation = obj.dedicatedAllocation;
    return result;
}

template <>
VkDedicatedAllocationImageCreateInfoNV create_structure_copy<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDedicatedAllocationImageCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.dedicatedAllocation = obj.dedicatedAllocation;
    return result;
}

template <>
VkDedicatedAllocationMemoryAllocateInfoNV create_structure_copy<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDedicatedAllocationMemoryAllocateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.image = obj.image;
    result.buffer = obj.buffer;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeferredOperationInfoKHR create_structure_copy<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeferredOperationInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.operationHandle = obj.operationHandle;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDescriptorBufferInfo create_structure_copy<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorBufferInfo result { };
    result.buffer = obj.buffer;
    result.offset = obj.offset;
    result.range = obj.range;
    return result;
}

template <>
VkDescriptorImageInfo create_structure_copy<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorImageInfo result { };
    result.sampler = obj.sampler;
    result.imageView = obj.imageView;
    result.imageLayout = obj.imageLayout;
    return result;
}

template <>
VkDescriptorPoolCreateInfo create_structure_copy<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorPoolCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.maxSets = obj.maxSets;
    result.poolSizeCount = obj.poolSizeCount;
    result.pPoolSizes = create_dynamic_array_copy(obj.poolSizeCount, obj.pPoolSizes, pAllocator);
    return result;
}

template <>
VkDescriptorPoolInlineUniformBlockCreateInfoEXT create_structure_copy<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorPoolInlineUniformBlockCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxInlineUniformBlockBindings = obj.maxInlineUniformBlockBindings;
    return result;
}

template <>
VkDescriptorPoolSize create_structure_copy<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorPoolSize result { };
    result.type = obj.type;
    result.descriptorCount = obj.descriptorCount;
    return result;
}

template <>
VkDescriptorSetAllocateInfo create_structure_copy<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorSetAllocateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.descriptorPool = obj.descriptorPool;
    result.descriptorSetCount = obj.descriptorSetCount;
    result.pSetLayouts = create_dynamic_array_copy(obj.descriptorSetCount, obj.pSetLayouts, pAllocator);
    return result;
}

template <>
VkDescriptorSetLayoutBinding create_structure_copy<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorSetLayoutBinding result { };
    result.binding = obj.binding;
    result.descriptorType = obj.descriptorType;
    result.descriptorCount = obj.descriptorCount;
    result.stageFlags = obj.stageFlags;
    result.pImmutableSamplers = create_dynamic_array_copy(obj.descriptorCount, obj.pImmutableSamplers, pAllocator);
    return result;
}

template <>
VkDescriptorSetLayoutBindingFlagsCreateInfo create_structure_copy<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorSetLayoutBindingFlagsCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.bindingCount = obj.bindingCount;
    result.pBindingFlags = create_dynamic_array_copy(obj.bindingCount, obj.pBindingFlags, pAllocator);
    return result;
}


template <>
VkDescriptorSetLayoutCreateInfo create_structure_copy<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorSetLayoutCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.bindingCount = obj.bindingCount;
    result.pBindings = create_dynamic_array_copy(obj.bindingCount, obj.pBindings, pAllocator);
    return result;
}

template <>
VkDescriptorSetLayoutSupport create_structure_copy<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorSetLayoutSupport result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.supported = obj.supported;
    return result;
}


template <>
VkDescriptorSetVariableDescriptorCountAllocateInfo create_structure_copy<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorSetVariableDescriptorCountAllocateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.descriptorSetCount = obj.descriptorSetCount;
    result.pDescriptorCounts = create_dynamic_array_copy(obj.descriptorSetCount, obj.pDescriptorCounts, pAllocator);
    return result;
}


template <>
VkDescriptorSetVariableDescriptorCountLayoutSupport create_structure_copy<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorSetVariableDescriptorCountLayoutSupport result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxVariableDescriptorCount = obj.maxVariableDescriptorCount;
    return result;
}


template <>
VkDescriptorUpdateTemplateCreateInfo create_structure_copy<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorUpdateTemplateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.descriptorUpdateEntryCount = obj.descriptorUpdateEntryCount;
    result.pDescriptorUpdateEntries = create_dynamic_array_copy(obj.descriptorUpdateEntryCount, obj.pDescriptorUpdateEntries, pAllocator);
    result.templateType = obj.templateType;
    result.descriptorSetLayout = obj.descriptorSetLayout;
    result.pipelineBindPoint = obj.pipelineBindPoint;
    result.pipelineLayout = obj.pipelineLayout;
    result.set = obj.set;
    return result;
}


template <>
VkDescriptorUpdateTemplateEntry create_structure_copy<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDescriptorUpdateTemplateEntry result { };
    result.dstBinding = obj.dstBinding;
    result.dstArrayElement = obj.dstArrayElement;
    result.descriptorCount = obj.descriptorCount;
    result.descriptorType = obj.descriptorType;
    result.offset = obj.offset;
    result.stride = obj.stride;
    return result;
}


template <>
VkDeviceCreateInfo create_structure_copy<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.queueCreateInfoCount = obj.queueCreateInfoCount;
    result.pQueueCreateInfos = create_dynamic_array_copy(obj.queueCreateInfoCount, obj.pQueueCreateInfos, pAllocator);
    result.enabledLayerCount = obj.enabledLayerCount;
    result.ppEnabledLayerNames = create_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocator);
    result.enabledExtensionCount = obj.enabledExtensionCount;
    result.ppEnabledExtensionNames = create_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocator);
    result.pEnabledFeatures = create_dynamic_array_copy(1, obj.pEnabledFeatures, pAllocator);
    return result;
}

template <>
VkDeviceDiagnosticsConfigCreateInfoNV create_structure_copy<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceDiagnosticsConfigCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    return result;
}

template <>
VkDeviceEventInfoEXT create_structure_copy<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceEventInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceEvent = obj.deviceEvent;
    return result;
}

template <>
VkDeviceGroupBindSparseInfo create_structure_copy<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupBindSparseInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.resourceDeviceIndex = obj.resourceDeviceIndex;
    result.memoryDeviceIndex = obj.memoryDeviceIndex;
    return result;
}


template <>
VkDeviceGroupCommandBufferBeginInfo create_structure_copy<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupCommandBufferBeginInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceMask = obj.deviceMask;
    return result;
}


template <>
VkDeviceGroupDeviceCreateInfo create_structure_copy<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupDeviceCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.physicalDeviceCount = obj.physicalDeviceCount;
    result.pPhysicalDevices = create_dynamic_array_copy(obj.physicalDeviceCount, obj.pPhysicalDevices, pAllocator);
    return result;
}


template <>
VkDeviceGroupPresentCapabilitiesKHR create_structure_copy<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupPresentCapabilitiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    create_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(result.presentMask, obj.presentMask, pAllocator);
    result.modes = obj.modes;
    return result;
}

template <>
VkDeviceGroupPresentInfoKHR create_structure_copy<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupPresentInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.swapchainCount = obj.swapchainCount;
    result.pDeviceMasks = create_dynamic_array_copy(obj.swapchainCount, obj.pDeviceMasks, pAllocator);
    result.mode = obj.mode;
    return result;
}

template <>
VkDeviceGroupRenderPassBeginInfo create_structure_copy<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupRenderPassBeginInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceMask = obj.deviceMask;
    result.deviceRenderAreaCount = obj.deviceRenderAreaCount;
    result.pDeviceRenderAreas = create_dynamic_array_copy(obj.deviceRenderAreaCount, obj.pDeviceRenderAreas, pAllocator);
    return result;
}


template <>
VkDeviceGroupSubmitInfo create_structure_copy<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupSubmitInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    result.pWaitSemaphoreDeviceIndices = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphoreDeviceIndices, pAllocator);
    result.commandBufferCount = obj.commandBufferCount;
    result.pCommandBufferDeviceMasks = create_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBufferDeviceMasks, pAllocator);
    result.signalSemaphoreCount = obj.signalSemaphoreCount;
    result.pSignalSemaphoreDeviceIndices = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphoreDeviceIndices, pAllocator);
    return result;
}


template <>
VkDeviceGroupSwapchainCreateInfoKHR create_structure_copy<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceGroupSwapchainCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.modes = obj.modes;
    return result;
}

template <>
VkDeviceMemoryOpaqueCaptureAddressInfo create_structure_copy<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceMemoryOpaqueCaptureAddressInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memory = obj.memory;
    return result;
}


template <>
VkDeviceMemoryOverallocationCreateInfoAMD create_structure_copy<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceMemoryOverallocationCreateInfoAMD result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.overallocationBehavior = obj.overallocationBehavior;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressConstKHR create_structure_copy<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceOrHostAddressConstKHR result { };
    result.deviceAddress = obj.deviceAddress;
    result.hostAddress = obj.hostAddress;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkDeviceOrHostAddressKHR create_structure_copy<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceOrHostAddressKHR result { };
    result.deviceAddress = obj.deviceAddress;
    result.hostAddress = obj.hostAddress;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkDevicePrivateDataCreateInfoEXT create_structure_copy<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDevicePrivateDataCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.privateDataSlotRequestCount = obj.privateDataSlotRequestCount;
    return result;
}

template <>
VkDeviceQueueCreateInfo create_structure_copy<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceQueueCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.queueFamilyIndex = obj.queueFamilyIndex;
    result.queueCount = obj.queueCount;
    result.pQueuePriorities = create_dynamic_array_copy(obj.queueCount, obj.pQueuePriorities, pAllocator);
    return result;
}

template <>
VkDeviceQueueGlobalPriorityCreateInfoEXT create_structure_copy<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceQueueGlobalPriorityCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.globalPriority = obj.globalPriority;
    return result;
}

template <>
VkDeviceQueueInfo2 create_structure_copy<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDeviceQueueInfo2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.queueFamilyIndex = obj.queueFamilyIndex;
    result.queueIndex = obj.queueIndex;
    return result;
}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <>
VkDirectFBSurfaceCreateInfoEXT create_structure_copy<VkDirectFBSurfaceCreateInfoEXT>(const VkDirectFBSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDirectFBSurfaceCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.dfb = obj.dfb;
    result.surface = obj.surface;
    return result;
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
VkDispatchIndirectCommand create_structure_copy<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDispatchIndirectCommand result { };
    result.x = obj.x;
    result.y = obj.y;
    result.z = obj.z;
    return result;
}

template <>
VkDisplayEventInfoEXT create_structure_copy<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayEventInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.displayEvent = obj.displayEvent;
    return result;
}

template <>
VkDisplayModeCreateInfoKHR create_structure_copy<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayModeCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.parameters = create_structure_copy(obj.parameters, pAllocator);
    return result;
}

template <>
VkDisplayModeParametersKHR create_structure_copy<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayModeParametersKHR result { };
    result.visibleRegion = create_structure_copy(obj.visibleRegion, pAllocator);
    result.refreshRate = obj.refreshRate;
    return result;
}

template <>
VkDisplayModeProperties2KHR create_structure_copy<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayModeProperties2KHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.displayModeProperties = create_structure_copy(obj.displayModeProperties, pAllocator);
    return result;
}

template <>
VkDisplayModePropertiesKHR create_structure_copy<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayModePropertiesKHR result { };
    result.displayMode = obj.displayMode;
    result.parameters = create_structure_copy(obj.parameters, pAllocator);
    return result;
}

template <>
VkDisplayNativeHdrSurfaceCapabilitiesAMD create_structure_copy<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayNativeHdrSurfaceCapabilitiesAMD result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.localDimmingSupport = obj.localDimmingSupport;
    return result;
}

template <>
VkDisplayPlaneCapabilities2KHR create_structure_copy<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPlaneCapabilities2KHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.capabilities = create_structure_copy(obj.capabilities, pAllocator);
    return result;
}

template <>
VkDisplayPlaneCapabilitiesKHR create_structure_copy<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPlaneCapabilitiesKHR result { };
    result.supportedAlpha = obj.supportedAlpha;
    result.minSrcPosition = create_structure_copy(obj.minSrcPosition, pAllocator);
    result.maxSrcPosition = create_structure_copy(obj.maxSrcPosition, pAllocator);
    result.minSrcExtent = create_structure_copy(obj.minSrcExtent, pAllocator);
    result.maxSrcExtent = create_structure_copy(obj.maxSrcExtent, pAllocator);
    result.minDstPosition = create_structure_copy(obj.minDstPosition, pAllocator);
    result.maxDstPosition = create_structure_copy(obj.maxDstPosition, pAllocator);
    result.minDstExtent = create_structure_copy(obj.minDstExtent, pAllocator);
    result.maxDstExtent = create_structure_copy(obj.maxDstExtent, pAllocator);
    return result;
}

template <>
VkDisplayPlaneInfo2KHR create_structure_copy<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPlaneInfo2KHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.mode = obj.mode;
    result.planeIndex = obj.planeIndex;
    return result;
}

template <>
VkDisplayPlaneProperties2KHR create_structure_copy<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPlaneProperties2KHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.displayPlaneProperties = create_structure_copy(obj.displayPlaneProperties, pAllocator);
    return result;
}

template <>
VkDisplayPlanePropertiesKHR create_structure_copy<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPlanePropertiesKHR result { };
    result.currentDisplay = obj.currentDisplay;
    result.currentStackIndex = obj.currentStackIndex;
    return result;
}

template <>
VkDisplayPowerInfoEXT create_structure_copy<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPowerInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.powerState = obj.powerState;
    return result;
}

template <>
VkDisplayPresentInfoKHR create_structure_copy<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPresentInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.srcRect = create_structure_copy(obj.srcRect, pAllocator);
    result.dstRect = create_structure_copy(obj.dstRect, pAllocator);
    result.persistent = obj.persistent;
    return result;
}

template <>
VkDisplayProperties2KHR create_structure_copy<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayProperties2KHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.displayProperties = create_structure_copy(obj.displayProperties, pAllocator);
    return result;
}

template <>
VkDisplayPropertiesKHR create_structure_copy<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplayPropertiesKHR result { };
    result.display = obj.display;
    result.displayName = create_dynamic_string_copy(obj.displayName, pAllocator);
    result.physicalDimensions = create_structure_copy(obj.physicalDimensions, pAllocator);
    result.physicalResolution = create_structure_copy(obj.physicalResolution, pAllocator);
    result.supportedTransforms = obj.supportedTransforms;
    result.planeReorderPossible = obj.planeReorderPossible;
    result.persistentContent = obj.persistentContent;
    return result;
}

template <>
VkDisplaySurfaceCreateInfoKHR create_structure_copy<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDisplaySurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.displayMode = obj.displayMode;
    result.planeIndex = obj.planeIndex;
    result.planeStackIndex = obj.planeStackIndex;
    result.transform = obj.transform;
    result.globalAlpha = obj.globalAlpha;
    result.alphaMode = obj.alphaMode;
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocator);
    return result;
}

template <>
VkDrawIndexedIndirectCommand create_structure_copy<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDrawIndexedIndirectCommand result { };
    result.indexCount = obj.indexCount;
    result.instanceCount = obj.instanceCount;
    result.firstIndex = obj.firstIndex;
    result.vertexOffset = obj.vertexOffset;
    result.firstInstance = obj.firstInstance;
    return result;
}

template <>
VkDrawIndirectCommand create_structure_copy<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDrawIndirectCommand result { };
    result.vertexCount = obj.vertexCount;
    result.instanceCount = obj.instanceCount;
    result.firstVertex = obj.firstVertex;
    result.firstInstance = obj.firstInstance;
    return result;
}

template <>
VkDrawMeshTasksIndirectCommandNV create_structure_copy<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDrawMeshTasksIndirectCommandNV result { };
    result.taskCount = obj.taskCount;
    result.firstTask = obj.firstTask;
    return result;
}

template <>
VkDrmFormatModifierPropertiesEXT create_structure_copy<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDrmFormatModifierPropertiesEXT result { };
    result.drmFormatModifier = obj.drmFormatModifier;
    result.drmFormatModifierPlaneCount = obj.drmFormatModifierPlaneCount;
    result.drmFormatModifierTilingFeatures = obj.drmFormatModifierTilingFeatures;
    return result;
}

template <>
VkDrmFormatModifierPropertiesListEXT create_structure_copy<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkDrmFormatModifierPropertiesListEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.drmFormatModifierCount = obj.drmFormatModifierCount;
    result.pDrmFormatModifierProperties = create_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifierProperties, pAllocator);
    return result;
}

template <>
VkEventCreateInfo create_structure_copy<VkEventCreateInfo>(const VkEventCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkEventCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    return result;
}

template <>
VkExportFenceCreateInfo create_structure_copy<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportFenceCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleTypes = obj.handleTypes;
    return result;
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportFenceWin32HandleInfoKHR create_structure_copy<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportFenceWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = obj.dwAccess;
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportMemoryAllocateInfo create_structure_copy<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportMemoryAllocateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleTypes = obj.handleTypes;
    return result;
}


template <>
VkExportMemoryAllocateInfoNV create_structure_copy<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportMemoryAllocateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleTypes = obj.handleTypes;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoKHR create_structure_copy<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportMemoryWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = obj.dwAccess;
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportMemoryWin32HandleInfoNV create_structure_copy<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportMemoryWin32HandleInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = obj.dwAccess;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExportSemaphoreCreateInfo create_structure_copy<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportSemaphoreCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleTypes = obj.handleTypes;
    return result;
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkExportSemaphoreWin32HandleInfoKHR create_structure_copy<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExportSemaphoreWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pAttributes = obj.pAttributes;
    result.dwAccess = obj.dwAccess;
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkExtensionProperties create_structure_copy<VkExtensionProperties>(const VkExtensionProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExtensionProperties result { };
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.extensionName, obj.extensionName);
    result.specVersion = obj.specVersion;
    return result;
}

template <>
VkExtent2D create_structure_copy<VkExtent2D>(const VkExtent2D& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExtent2D result { };
    result.width = obj.width;
    result.height = obj.height;
    return result;
}

template <>
VkExtent3D create_structure_copy<VkExtent3D>(const VkExtent3D& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExtent3D result { };
    result.width = obj.width;
    result.height = obj.height;
    result.depth = obj.depth;
    return result;
}

template <>
VkExternalBufferProperties create_structure_copy<VkExternalBufferProperties>(const VkExternalBufferProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalBufferProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.externalMemoryProperties = create_structure_copy(obj.externalMemoryProperties, pAllocator);
    return result;
}


template <>
VkExternalFenceProperties create_structure_copy<VkExternalFenceProperties>(const VkExternalFenceProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalFenceProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    result.externalFenceFeatures = obj.externalFenceFeatures;
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkExternalFormatANDROID create_structure_copy<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalFormatANDROID result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.externalFormat = obj.externalFormat;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkExternalImageFormatProperties create_structure_copy<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalImageFormatProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.externalMemoryProperties = create_structure_copy(obj.externalMemoryProperties, pAllocator);
    return result;
}


template <>
VkExternalImageFormatPropertiesNV create_structure_copy<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalImageFormatPropertiesNV result { };
    result.imageFormatProperties = create_structure_copy(obj.imageFormatProperties, pAllocator);
    result.externalMemoryFeatures = obj.externalMemoryFeatures;
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    return result;
}

template <>
VkExternalMemoryBufferCreateInfo create_structure_copy<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalMemoryBufferCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleTypes = obj.handleTypes;
    return result;
}


template <>
VkExternalMemoryImageCreateInfo create_structure_copy<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalMemoryImageCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleTypes = obj.handleTypes;
    return result;
}


template <>
VkExternalMemoryImageCreateInfoNV create_structure_copy<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalMemoryImageCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleTypes = obj.handleTypes;
    return result;
}

template <>
VkExternalMemoryProperties create_structure_copy<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalMemoryProperties result { };
    result.externalMemoryFeatures = obj.externalMemoryFeatures;
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    return result;
}


template <>
VkExternalSemaphoreProperties create_structure_copy<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkExternalSemaphoreProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.exportFromImportedHandleTypes = obj.exportFromImportedHandleTypes;
    result.compatibleHandleTypes = obj.compatibleHandleTypes;
    result.externalSemaphoreFeatures = obj.externalSemaphoreFeatures;
    return result;
}


template <>
VkFenceCreateInfo create_structure_copy<VkFenceCreateInfo>(const VkFenceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFenceCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    return result;
}

template <>
VkFenceGetFdInfoKHR create_structure_copy<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFenceGetFdInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fence = obj.fence;
    result.handleType = obj.handleType;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkFenceGetWin32HandleInfoKHR create_structure_copy<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFenceGetWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fence = obj.fence;
    result.handleType = obj.handleType;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkFilterCubicImageViewImageFormatPropertiesEXT create_structure_copy<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFilterCubicImageViewImageFormatPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.filterCubic = obj.filterCubic;
    result.filterCubicMinmax = obj.filterCubicMinmax;
    return result;
}

template <>
VkFormatProperties create_structure_copy<VkFormatProperties>(const VkFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFormatProperties result { };
    result.linearTilingFeatures = obj.linearTilingFeatures;
    result.optimalTilingFeatures = obj.optimalTilingFeatures;
    result.bufferFeatures = obj.bufferFeatures;
    return result;
}

template <>
VkFormatProperties2 create_structure_copy<VkFormatProperties2>(const VkFormatProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFormatProperties2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.formatProperties = create_structure_copy(obj.formatProperties, pAllocator);
    return result;
}


template <>
VkFramebufferAttachmentImageInfo create_structure_copy<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFramebufferAttachmentImageInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.usage = obj.usage;
    result.width = obj.width;
    result.height = obj.height;
    result.layerCount = obj.layerCount;
    result.viewFormatCount = obj.viewFormatCount;
    result.pViewFormats = create_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocator);
    return result;
}


template <>
VkFramebufferAttachmentsCreateInfo create_structure_copy<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFramebufferAttachmentsCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.attachmentImageInfoCount = obj.attachmentImageInfoCount;
    result.pAttachmentImageInfos = create_dynamic_array_copy(obj.attachmentImageInfoCount, obj.pAttachmentImageInfos, pAllocator);
    return result;
}


template <>
VkFramebufferCreateInfo create_structure_copy<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFramebufferCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.renderPass = obj.renderPass;
    result.attachmentCount = obj.attachmentCount;
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    result.width = obj.width;
    result.height = obj.height;
    result.layers = obj.layers;
    return result;
}

template <>
VkFramebufferMixedSamplesCombinationNV create_structure_copy<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkFramebufferMixedSamplesCombinationNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.coverageReductionMode = obj.coverageReductionMode;
    result.rasterizationSamples = obj.rasterizationSamples;
    result.depthStencilSamples = obj.depthStencilSamples;
    result.colorSamples = obj.colorSamples;
    return result;
}

template <>
VkGeneratedCommandsInfoNV create_structure_copy<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGeneratedCommandsInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pipelineBindPoint = obj.pipelineBindPoint;
    result.pipeline = obj.pipeline;
    result.indirectCommandsLayout = obj.indirectCommandsLayout;
    result.streamCount = obj.streamCount;
    result.pStreams = create_dynamic_array_copy(obj.streamCount, obj.pStreams, pAllocator);
    result.sequencesCount = obj.sequencesCount;
    result.preprocessBuffer = obj.preprocessBuffer;
    result.preprocessOffset = obj.preprocessOffset;
    result.preprocessSize = obj.preprocessSize;
    result.sequencesCountBuffer = obj.sequencesCountBuffer;
    result.sequencesCountOffset = obj.sequencesCountOffset;
    result.sequencesIndexBuffer = obj.sequencesIndexBuffer;
    result.sequencesIndexOffset = obj.sequencesIndexOffset;
    return result;
}

template <>
VkGeneratedCommandsMemoryRequirementsInfoNV create_structure_copy<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGeneratedCommandsMemoryRequirementsInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pipelineBindPoint = obj.pipelineBindPoint;
    result.pipeline = obj.pipeline;
    result.indirectCommandsLayout = obj.indirectCommandsLayout;
    result.maxSequencesCount = obj.maxSequencesCount;
    return result;
}

template <>
VkGeometryAABBNV create_structure_copy<VkGeometryAABBNV>(const VkGeometryAABBNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGeometryAABBNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.aabbData = obj.aabbData;
    result.numAABBs = obj.numAABBs;
    result.stride = obj.stride;
    result.offset = obj.offset;
    return result;
}

template <>
VkGeometryDataNV create_structure_copy<VkGeometryDataNV>(const VkGeometryDataNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGeometryDataNV result { };
    result.triangles = create_structure_copy(obj.triangles, pAllocator);
    result.aabbs = create_structure_copy(obj.aabbs, pAllocator);
    return result;
}

template <>
VkGeometryNV create_structure_copy<VkGeometryNV>(const VkGeometryNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGeometryNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.geometryType = obj.geometryType;
    result.geometry = create_structure_copy(obj.geometry, pAllocator);
    result.flags = obj.flags;
    return result;
}

template <>
VkGeometryTrianglesNV create_structure_copy<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGeometryTrianglesNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.vertexData = obj.vertexData;
    result.vertexOffset = obj.vertexOffset;
    result.vertexCount = obj.vertexCount;
    result.vertexStride = obj.vertexStride;
    result.vertexFormat = obj.vertexFormat;
    result.indexData = obj.indexData;
    result.indexOffset = obj.indexOffset;
    result.indexCount = obj.indexCount;
    result.indexType = obj.indexType;
    result.transformData = obj.transformData;
    result.transformOffset = obj.transformOffset;
    return result;
}

template <>
VkGraphicsPipelineCreateInfo create_structure_copy<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGraphicsPipelineCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.stageCount = obj.stageCount;
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    result.pVertexInputState = create_dynamic_array_copy(1, obj.pVertexInputState, pAllocator);
    result.pInputAssemblyState = create_dynamic_array_copy(1, obj.pInputAssemblyState, pAllocator);
    result.pTessellationState = create_dynamic_array_copy(1, obj.pTessellationState, pAllocator);
    result.pViewportState = create_dynamic_array_copy(1, obj.pViewportState, pAllocator);
    result.pRasterizationState = create_dynamic_array_copy(1, obj.pRasterizationState, pAllocator);
    result.pMultisampleState = create_dynamic_array_copy(1, obj.pMultisampleState, pAllocator);
    result.pDepthStencilState = create_dynamic_array_copy(1, obj.pDepthStencilState, pAllocator);
    result.pColorBlendState = create_dynamic_array_copy(1, obj.pColorBlendState, pAllocator);
    result.pDynamicState = create_dynamic_array_copy(1, obj.pDynamicState, pAllocator);
    result.layout = obj.layout;
    result.renderPass = obj.renderPass;
    result.subpass = obj.subpass;
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}

template <>
VkGraphicsPipelineShaderGroupsCreateInfoNV create_structure_copy<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGraphicsPipelineShaderGroupsCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.groupCount = obj.groupCount;
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocator);
    result.pipelineCount = obj.pipelineCount;
    result.pPipelines = create_dynamic_array_copy(obj.pipelineCount, obj.pPipelines, pAllocator);
    return result;
}

template <>
VkGraphicsShaderGroupCreateInfoNV create_structure_copy<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkGraphicsShaderGroupCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.stageCount = obj.stageCount;
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    result.pVertexInputState = create_dynamic_array_copy(1, obj.pVertexInputState, pAllocator);
    result.pTessellationState = create_dynamic_array_copy(1, obj.pTessellationState, pAllocator);
    return result;
}

template <>
VkHdrMetadataEXT create_structure_copy<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkHdrMetadataEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.displayPrimaryRed = create_structure_copy(obj.displayPrimaryRed, pAllocator);
    result.displayPrimaryGreen = create_structure_copy(obj.displayPrimaryGreen, pAllocator);
    result.displayPrimaryBlue = create_structure_copy(obj.displayPrimaryBlue, pAllocator);
    result.whitePoint = create_structure_copy(obj.whitePoint, pAllocator);
    result.maxLuminance = obj.maxLuminance;
    result.minLuminance = obj.minLuminance;
    result.maxContentLightLevel = obj.maxContentLightLevel;
    result.maxFrameAverageLightLevel = obj.maxFrameAverageLightLevel;
    return result;
}

template <>
VkHeadlessSurfaceCreateInfoEXT create_structure_copy<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkHeadlessSurfaceCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    return result;
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
VkIOSSurfaceCreateInfoMVK create_structure_copy<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocator)
{
    VkIOSSurfaceCreateInfoMVK result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pView = obj.pView;
    return result;
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
VkImageBlit create_structure_copy<VkImageBlit>(const VkImageBlit& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageBlit result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocator);
    create_static_array_copy<2>(result.srcOffsets, obj.srcOffsets, pAllocator);
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocator);
    create_static_array_copy<2>(result.dstOffsets, obj.dstOffsets, pAllocator);
    return result;
}

template <>
VkImageCopy create_structure_copy<VkImageCopy>(const VkImageCopy& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageCopy result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocator);
    result.srcOffset = create_structure_copy(obj.srcOffset, pAllocator);
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocator);
    result.dstOffset = create_structure_copy(obj.dstOffset, pAllocator);
    result.extent = create_structure_copy(obj.extent, pAllocator);
    return result;
}

template <>
VkImageCreateInfo create_structure_copy<VkImageCreateInfo>(const VkImageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.imageType = obj.imageType;
    result.format = obj.format;
    result.extent = create_structure_copy(obj.extent, pAllocator);
    result.mipLevels = obj.mipLevels;
    result.arrayLayers = obj.arrayLayers;
    result.samples = obj.samples;
    result.tiling = obj.tiling;
    result.usage = obj.usage;
    result.sharingMode = obj.sharingMode;
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
    result.initialLayout = obj.initialLayout;
    return result;
}

template <>
VkImageDrmFormatModifierExplicitCreateInfoEXT create_structure_copy<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageDrmFormatModifierExplicitCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.drmFormatModifier = obj.drmFormatModifier;
    result.drmFormatModifierPlaneCount = obj.drmFormatModifierPlaneCount;
    result.pPlaneLayouts = create_dynamic_array_copy(obj.drmFormatModifierPlaneCount, obj.pPlaneLayouts, pAllocator);
    return result;
}

template <>
VkImageDrmFormatModifierListCreateInfoEXT create_structure_copy<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageDrmFormatModifierListCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.drmFormatModifierCount = obj.drmFormatModifierCount;
    result.pDrmFormatModifiers = create_dynamic_array_copy(obj.drmFormatModifierCount, obj.pDrmFormatModifiers, pAllocator);
    return result;
}

template <>
VkImageDrmFormatModifierPropertiesEXT create_structure_copy<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageDrmFormatModifierPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.drmFormatModifier = obj.drmFormatModifier;
    return result;
}

template <>
VkImageFormatListCreateInfo create_structure_copy<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageFormatListCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.viewFormatCount = obj.viewFormatCount;
    result.pViewFormats = create_dynamic_array_copy(obj.viewFormatCount, obj.pViewFormats, pAllocator);
    return result;
}


template <>
VkImageFormatProperties create_structure_copy<VkImageFormatProperties>(const VkImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageFormatProperties result { };
    result.maxExtent = create_structure_copy(obj.maxExtent, pAllocator);
    result.maxMipLevels = obj.maxMipLevels;
    result.maxArrayLayers = obj.maxArrayLayers;
    result.sampleCounts = obj.sampleCounts;
    result.maxResourceSize = obj.maxResourceSize;
    return result;
}

template <>
VkImageFormatProperties2 create_structure_copy<VkImageFormatProperties2>(const VkImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageFormatProperties2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.imageFormatProperties = create_structure_copy(obj.imageFormatProperties, pAllocator);
    return result;
}


template <>
VkImageMemoryBarrier create_structure_copy<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageMemoryBarrier result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.srcAccessMask = obj.srcAccessMask;
    result.dstAccessMask = obj.dstAccessMask;
    result.oldLayout = obj.oldLayout;
    result.newLayout = obj.newLayout;
    result.srcQueueFamilyIndex = obj.srcQueueFamilyIndex;
    result.dstQueueFamilyIndex = obj.dstQueueFamilyIndex;
    result.image = obj.image;
    result.subresourceRange = create_structure_copy(obj.subresourceRange, pAllocator);
    return result;
}

template <>
VkImageMemoryRequirementsInfo2 create_structure_copy<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageMemoryRequirementsInfo2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.image = obj.image;
    return result;
}


#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
VkImagePipeSurfaceCreateInfoFUCHSIA create_structure_copy<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImagePipeSurfaceCreateInfoFUCHSIA result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.imagePipeHandle = obj.imagePipeHandle;
    return result;
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
VkImagePlaneMemoryRequirementsInfo create_structure_copy<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImagePlaneMemoryRequirementsInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.planeAspect = obj.planeAspect;
    return result;
}


template <>
VkImageResolve create_structure_copy<VkImageResolve>(const VkImageResolve& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageResolve result { };
    result.srcSubresource = create_structure_copy(obj.srcSubresource, pAllocator);
    result.srcOffset = create_structure_copy(obj.srcOffset, pAllocator);
    result.dstSubresource = create_structure_copy(obj.dstSubresource, pAllocator);
    result.dstOffset = create_structure_copy(obj.dstOffset, pAllocator);
    result.extent = create_structure_copy(obj.extent, pAllocator);
    return result;
}

template <>
VkImageSparseMemoryRequirementsInfo2 create_structure_copy<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageSparseMemoryRequirementsInfo2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.image = obj.image;
    return result;
}


template <>
VkImageStencilUsageCreateInfo create_structure_copy<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageStencilUsageCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.stencilUsage = obj.stencilUsage;
    return result;
}


template <>
VkImageSubresource create_structure_copy<VkImageSubresource>(const VkImageSubresource& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageSubresource result { };
    result.aspectMask = obj.aspectMask;
    result.mipLevel = obj.mipLevel;
    result.arrayLayer = obj.arrayLayer;
    return result;
}

template <>
VkImageSubresourceLayers create_structure_copy<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageSubresourceLayers result { };
    result.aspectMask = obj.aspectMask;
    result.mipLevel = obj.mipLevel;
    result.baseArrayLayer = obj.baseArrayLayer;
    result.layerCount = obj.layerCount;
    return result;
}

template <>
VkImageSubresourceRange create_structure_copy<VkImageSubresourceRange>(const VkImageSubresourceRange& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageSubresourceRange result { };
    result.aspectMask = obj.aspectMask;
    result.baseMipLevel = obj.baseMipLevel;
    result.levelCount = obj.levelCount;
    result.baseArrayLayer = obj.baseArrayLayer;
    result.layerCount = obj.layerCount;
    return result;
}

template <>
VkImageSwapchainCreateInfoKHR create_structure_copy<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageSwapchainCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.swapchain = obj.swapchain;
    return result;
}

template <>
VkImageViewASTCDecodeModeEXT create_structure_copy<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageViewASTCDecodeModeEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.decodeMode = obj.decodeMode;
    return result;
}

template <>
VkImageViewAddressPropertiesNVX create_structure_copy<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageViewAddressPropertiesNVX result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceAddress = obj.deviceAddress;
    result.size = obj.size;
    return result;
}

template <>
VkImageViewCreateInfo create_structure_copy<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageViewCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.image = obj.image;
    result.viewType = obj.viewType;
    result.format = obj.format;
    result.components = create_structure_copy(obj.components, pAllocator);
    result.subresourceRange = create_structure_copy(obj.subresourceRange, pAllocator);
    return result;
}

template <>
VkImageViewHandleInfoNVX create_structure_copy<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageViewHandleInfoNVX result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.imageView = obj.imageView;
    result.descriptorType = obj.descriptorType;
    result.sampler = obj.sampler;
    return result;
}

template <>
VkImageViewUsageCreateInfo create_structure_copy<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImageViewUsageCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.usage = obj.usage;
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkImportAndroidHardwareBufferInfoANDROID create_structure_copy<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportAndroidHardwareBufferInfoANDROID result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.buffer = obj.buffer;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkImportFenceFdInfoKHR create_structure_copy<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportFenceFdInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fence = obj.fence;
    result.flags = obj.flags;
    result.handleType = obj.handleType;
    result.fd = obj.fd;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportFenceWin32HandleInfoKHR create_structure_copy<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportFenceWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fence = obj.fence;
    result.flags = obj.flags;
    result.handleType = obj.handleType;
    result.handle = obj.handle;
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportMemoryFdInfoKHR create_structure_copy<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportMemoryFdInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleType = obj.handleType;
    result.fd = obj.fd;
    return result;
}

template <>
VkImportMemoryHostPointerInfoEXT create_structure_copy<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportMemoryHostPointerInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleType = obj.handleType;
    result.pHostPointer = obj.pHostPointer;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoKHR create_structure_copy<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportMemoryWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleType = obj.handleType;
    result.handle = obj.handle;
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportMemoryWin32HandleInfoNV create_structure_copy<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportMemoryWin32HandleInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleType = obj.handleType;
    result.handle = obj.handle;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkImportSemaphoreFdInfoKHR create_structure_copy<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportSemaphoreFdInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.semaphore = obj.semaphore;
    result.flags = obj.flags;
    result.handleType = obj.handleType;
    result.fd = obj.fd;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkImportSemaphoreWin32HandleInfoKHR create_structure_copy<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkImportSemaphoreWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.semaphore = obj.semaphore;
    result.flags = obj.flags;
    result.handleType = obj.handleType;
    result.handle = obj.handle;
    result.name = obj.name;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkIndirectCommandsLayoutCreateInfoNV create_structure_copy<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkIndirectCommandsLayoutCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pipelineBindPoint = obj.pipelineBindPoint;
    result.tokenCount = obj.tokenCount;
    result.pTokens = create_dynamic_array_copy(obj.tokenCount, obj.pTokens, pAllocator);
    result.streamCount = obj.streamCount;
    result.pStreamStrides = create_dynamic_array_copy(obj.streamCount, obj.pStreamStrides, pAllocator);
    return result;
}

template <>
VkIndirectCommandsLayoutTokenNV create_structure_copy<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkIndirectCommandsLayoutTokenNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.tokenType = obj.tokenType;
    result.stream = obj.stream;
    result.offset = obj.offset;
    result.vertexBindingUnit = obj.vertexBindingUnit;
    result.vertexDynamicStride = obj.vertexDynamicStride;
    result.pushconstantPipelineLayout = obj.pushconstantPipelineLayout;
    result.pushconstantShaderStageFlags = obj.pushconstantShaderStageFlags;
    result.pushconstantOffset = obj.pushconstantOffset;
    result.pushconstantSize = obj.pushconstantSize;
    result.indirectStateFlags = obj.indirectStateFlags;
    result.indexTypeCount = obj.indexTypeCount;
    result.pIndexTypes = create_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypes, pAllocator);
    result.pIndexTypeValues = create_dynamic_array_copy(obj.indexTypeCount, obj.pIndexTypeValues, pAllocator);
    return result;
}

template <>
VkIndirectCommandsStreamNV create_structure_copy<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkIndirectCommandsStreamNV result { };
    result.buffer = obj.buffer;
    result.offset = obj.offset;
    return result;
}

template <>
VkInitializePerformanceApiInfoINTEL create_structure_copy<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkInitializePerformanceApiInfoINTEL result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pUserData = obj.pUserData;
    return result;
}

template <>
VkInputAttachmentAspectReference create_structure_copy<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj, const VkAllocationCallbacks* pAllocator)
{
    VkInputAttachmentAspectReference result { };
    result.subpass = obj.subpass;
    result.inputAttachmentIndex = obj.inputAttachmentIndex;
    result.aspectMask = obj.aspectMask;
    return result;
}


template <>
VkInstanceCreateInfo create_structure_copy<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkInstanceCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pApplicationInfo = create_dynamic_array_copy(1, obj.pApplicationInfo, pAllocator);
    result.enabledLayerCount = obj.enabledLayerCount;
    result.ppEnabledLayerNames = create_dynamic_string_array_copy(obj.enabledLayerCount, obj.ppEnabledLayerNames, pAllocator);
    result.enabledExtensionCount = obj.enabledExtensionCount;
    result.ppEnabledExtensionNames = create_dynamic_string_array_copy(obj.enabledExtensionCount, obj.ppEnabledExtensionNames, pAllocator);
    return result;
}

template <>
VkLayerProperties create_structure_copy<VkLayerProperties>(const VkLayerProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkLayerProperties result { };
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.layerName, obj.layerName);
    result.specVersion = obj.specVersion;
    result.implementationVersion = obj.implementationVersion;
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    return result;
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
VkMacOSSurfaceCreateInfoMVK create_structure_copy<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMacOSSurfaceCreateInfoMVK result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pView = obj.pView;
    return result;
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
VkMappedMemoryRange create_structure_copy<VkMappedMemoryRange>(const VkMappedMemoryRange& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMappedMemoryRange result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memory = obj.memory;
    result.offset = obj.offset;
    result.size = obj.size;
    return result;
}

template <>
VkMemoryAllocateFlagsInfo create_structure_copy<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryAllocateFlagsInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.deviceMask = obj.deviceMask;
    return result;
}


template <>
VkMemoryAllocateInfo create_structure_copy<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryAllocateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.allocationSize = obj.allocationSize;
    result.memoryTypeIndex = obj.memoryTypeIndex;
    return result;
}

template <>
VkMemoryBarrier create_structure_copy<VkMemoryBarrier>(const VkMemoryBarrier& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryBarrier result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.srcAccessMask = obj.srcAccessMask;
    result.dstAccessMask = obj.dstAccessMask;
    return result;
}

template <>
VkMemoryDedicatedAllocateInfo create_structure_copy<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryDedicatedAllocateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.image = obj.image;
    result.buffer = obj.buffer;
    return result;
}


template <>
VkMemoryDedicatedRequirements create_structure_copy<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryDedicatedRequirements result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.prefersDedicatedAllocation = obj.prefersDedicatedAllocation;
    result.requiresDedicatedAllocation = obj.requiresDedicatedAllocation;
    return result;
}


template <>
VkMemoryFdPropertiesKHR create_structure_copy<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryFdPropertiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkMemoryGetAndroidHardwareBufferInfoANDROID create_structure_copy<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryGetAndroidHardwareBufferInfoANDROID result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memory = obj.memory;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkMemoryGetFdInfoKHR create_structure_copy<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryGetFdInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memory = obj.memory;
    result.handleType = obj.handleType;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryGetWin32HandleInfoKHR create_structure_copy<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryGetWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memory = obj.memory;
    result.handleType = obj.handleType;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkMemoryHeap create_structure_copy<VkMemoryHeap>(const VkMemoryHeap& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryHeap result { };
    result.size = obj.size;
    result.flags = obj.flags;
    return result;
}

template <>
VkMemoryHostPointerPropertiesEXT create_structure_copy<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryHostPointerPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}

template <>
VkMemoryOpaqueCaptureAddressAllocateInfo create_structure_copy<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryOpaqueCaptureAddressAllocateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.opaqueCaptureAddress = obj.opaqueCaptureAddress;
    return result;
}


template <>
VkMemoryPriorityAllocateInfoEXT create_structure_copy<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryPriorityAllocateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.priority = obj.priority;
    return result;
}

template <>
VkMemoryRequirements create_structure_copy<VkMemoryRequirements>(const VkMemoryRequirements& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryRequirements result { };
    result.size = obj.size;
    result.alignment = obj.alignment;
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}

template <>
VkMemoryRequirements2 create_structure_copy<VkMemoryRequirements2>(const VkMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryRequirements2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memoryRequirements = create_structure_copy(obj.memoryRequirements, pAllocator);
    return result;
}


template <>
VkMemoryType create_structure_copy<VkMemoryType>(const VkMemoryType& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryType result { };
    result.propertyFlags = obj.propertyFlags;
    result.heapIndex = obj.heapIndex;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkMemoryWin32HandlePropertiesKHR create_structure_copy<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMemoryWin32HandlePropertiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memoryTypeBits = obj.memoryTypeBits;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
VkMetalSurfaceCreateInfoEXT create_structure_copy<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMetalSurfaceCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pLayer = obj.pLayer;
    return result;
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
VkMultisamplePropertiesEXT create_structure_copy<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkMultisamplePropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxSampleLocationGridSize = create_structure_copy(obj.maxSampleLocationGridSize, pAllocator);
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferANDROID create_structure_copy<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkNativeBufferANDROID result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handle = obj.handle;
    result.stride = obj.stride;
    result.format = obj.format;
    result.usage = obj.usage;
    result.usage2 = create_structure_copy(obj.usage2, pAllocator);
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkNativeBufferUsage2ANDROID create_structure_copy<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkNativeBufferUsage2ANDROID result { };
    result.consumer = obj.consumer;
    result.producer = obj.producer;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkOffset2D create_structure_copy<VkOffset2D>(const VkOffset2D& obj, const VkAllocationCallbacks* pAllocator)
{
    VkOffset2D result { };
    result.x = obj.x;
    result.y = obj.y;
    return result;
}

template <>
VkOffset3D create_structure_copy<VkOffset3D>(const VkOffset3D& obj, const VkAllocationCallbacks* pAllocator)
{
    VkOffset3D result { };
    result.x = obj.x;
    result.y = obj.y;
    result.z = obj.z;
    return result;
}

template <>
VkPastPresentationTimingGOOGLE create_structure_copy<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPastPresentationTimingGOOGLE result { };
    result.presentID = obj.presentID;
    result.desiredPresentTime = obj.desiredPresentTime;
    result.actualPresentTime = obj.actualPresentTime;
    result.earliestPresentTime = obj.earliestPresentTime;
    result.presentMargin = obj.presentMargin;
    return result;
}

template <>
VkPerformanceConfigurationAcquireInfoINTEL create_structure_copy<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceConfigurationAcquireInfoINTEL result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.type = obj.type;
    return result;
}

template <>
VkPerformanceCounterDescriptionKHR create_structure_copy<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceCounterDescriptionKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.category, obj.category);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    return result;
}

template <>
VkPerformanceCounterKHR create_structure_copy<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceCounterKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.unit = obj.unit;
    result.scope = obj.scope;
    result.storage = obj.storage;
    create_static_array_copy<VK_UUID_SIZE>(result.uuid, obj.uuid, pAllocator);
    return result;
}


template <>
VkPerformanceMarkerInfoINTEL create_structure_copy<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceMarkerInfoINTEL result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.marker = obj.marker;
    return result;
}

template <>
VkPerformanceOverrideInfoINTEL create_structure_copy<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceOverrideInfoINTEL result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.type = obj.type;
    result.enable = obj.enable;
    result.parameter = obj.parameter;
    return result;
}

template <>
VkPerformanceQuerySubmitInfoKHR create_structure_copy<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceQuerySubmitInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.counterPassIndex = obj.counterPassIndex;
    return result;
}

template <>
VkPerformanceStreamMarkerInfoINTEL create_structure_copy<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceStreamMarkerInfoINTEL result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.marker = obj.marker;
    return result;
}


template <>
VkPerformanceValueINTEL create_structure_copy<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPerformanceValueINTEL result { };
    result.type = obj.type;
    result.data = create_structure_copy(obj.data, pAllocator);
    return result;
}

template <>
VkPhysicalDevice16BitStorageFeatures create_structure_copy<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevice16BitStorageFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.storageBuffer16BitAccess = obj.storageBuffer16BitAccess;
    result.uniformAndStorageBuffer16BitAccess = obj.uniformAndStorageBuffer16BitAccess;
    result.storagePushConstant16 = obj.storagePushConstant16;
    result.storageInputOutput16 = obj.storageInputOutput16;
    return result;
}


template <>
VkPhysicalDevice8BitStorageFeatures create_structure_copy<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevice8BitStorageFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.storageBuffer8BitAccess = obj.storageBuffer8BitAccess;
    result.uniformAndStorageBuffer8BitAccess = obj.uniformAndStorageBuffer8BitAccess;
    result.storagePushConstant8 = obj.storagePushConstant8;
    return result;
}


template <>
VkPhysicalDeviceASTCDecodeFeaturesEXT create_structure_copy<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceASTCDecodeFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.decodeModeSharedExponent = obj.decodeModeSharedExponent;
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT create_structure_copy<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.advancedBlendCoherentOperations = obj.advancedBlendCoherentOperations;
    return result;
}

template <>
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT create_structure_copy<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.advancedBlendMaxColorAttachments = obj.advancedBlendMaxColorAttachments;
    result.advancedBlendIndependentBlend = obj.advancedBlendIndependentBlend;
    result.advancedBlendNonPremultipliedSrcColor = obj.advancedBlendNonPremultipliedSrcColor;
    result.advancedBlendNonPremultipliedDstColor = obj.advancedBlendNonPremultipliedDstColor;
    result.advancedBlendCorrelatedOverlap = obj.advancedBlendCorrelatedOverlap;
    result.advancedBlendAllOperations = obj.advancedBlendAllOperations;
    return result;
}


template <>
VkPhysicalDeviceBufferDeviceAddressFeatures create_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceBufferDeviceAddressFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.bufferDeviceAddress = obj.bufferDeviceAddress;
    result.bufferDeviceAddressCaptureReplay = obj.bufferDeviceAddressCaptureReplay;
    result.bufferDeviceAddressMultiDevice = obj.bufferDeviceAddressMultiDevice;
    return result;
}

template <>
VkPhysicalDeviceBufferDeviceAddressFeaturesEXT create_structure_copy<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceBufferDeviceAddressFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.bufferDeviceAddress = obj.bufferDeviceAddress;
    result.bufferDeviceAddressCaptureReplay = obj.bufferDeviceAddressCaptureReplay;
    result.bufferDeviceAddressMultiDevice = obj.bufferDeviceAddressMultiDevice;
    return result;
}


template <>
VkPhysicalDeviceCoherentMemoryFeaturesAMD create_structure_copy<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceCoherentMemoryFeaturesAMD result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceCoherentMemory = obj.deviceCoherentMemory;
    return result;
}

template <>
VkPhysicalDeviceComputeShaderDerivativesFeaturesNV create_structure_copy<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceComputeShaderDerivativesFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.computeDerivativeGroupQuads = obj.computeDerivativeGroupQuads;
    result.computeDerivativeGroupLinear = obj.computeDerivativeGroupLinear;
    return result;
}

template <>
VkPhysicalDeviceConditionalRenderingFeaturesEXT create_structure_copy<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceConditionalRenderingFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.conditionalRendering = obj.conditionalRendering;
    result.inheritedConditionalRendering = obj.inheritedConditionalRendering;
    return result;
}

template <>
VkPhysicalDeviceConservativeRasterizationPropertiesEXT create_structure_copy<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.primitiveOverestimationSize = obj.primitiveOverestimationSize;
    result.maxExtraPrimitiveOverestimationSize = obj.maxExtraPrimitiveOverestimationSize;
    result.extraPrimitiveOverestimationSizeGranularity = obj.extraPrimitiveOverestimationSizeGranularity;
    result.primitiveUnderestimation = obj.primitiveUnderestimation;
    result.conservativePointAndLineRasterization = obj.conservativePointAndLineRasterization;
    result.degenerateTrianglesRasterized = obj.degenerateTrianglesRasterized;
    result.degenerateLinesRasterized = obj.degenerateLinesRasterized;
    result.fullyCoveredFragmentShaderInputVariable = obj.fullyCoveredFragmentShaderInputVariable;
    result.conservativeRasterizationPostDepthCoverage = obj.conservativeRasterizationPostDepthCoverage;
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixFeaturesNV create_structure_copy<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceCooperativeMatrixFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.cooperativeMatrix = obj.cooperativeMatrix;
    result.cooperativeMatrixRobustBufferAccess = obj.cooperativeMatrixRobustBufferAccess;
    return result;
}

template <>
VkPhysicalDeviceCooperativeMatrixPropertiesNV create_structure_copy<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceCooperativeMatrixPropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.cooperativeMatrixSupportedStages = obj.cooperativeMatrixSupportedStages;
    return result;
}

template <>
VkPhysicalDeviceCornerSampledImageFeaturesNV create_structure_copy<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceCornerSampledImageFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.cornerSampledImage = obj.cornerSampledImage;
    return result;
}

template <>
VkPhysicalDeviceCoverageReductionModeFeaturesNV create_structure_copy<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceCoverageReductionModeFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.coverageReductionMode = obj.coverageReductionMode;
    return result;
}

template <>
VkPhysicalDeviceCustomBorderColorFeaturesEXT create_structure_copy<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceCustomBorderColorFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.customBorderColors = obj.customBorderColors;
    result.customBorderColorWithoutFormat = obj.customBorderColorWithoutFormat;
    return result;
}

template <>
VkPhysicalDeviceCustomBorderColorPropertiesEXT create_structure_copy<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceCustomBorderColorPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxCustomBorderColorSamplers = obj.maxCustomBorderColorSamplers;
    return result;
}

template <>
VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV create_structure_copy<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.dedicatedAllocationImageAliasing = obj.dedicatedAllocationImageAliasing;
    return result;
}

template <>
VkPhysicalDeviceDepthClipEnableFeaturesEXT create_structure_copy<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDepthClipEnableFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.depthClipEnable = obj.depthClipEnable;
    return result;
}

template <>
VkPhysicalDeviceDepthStencilResolveProperties create_structure_copy<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDepthStencilResolveProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.supportedDepthResolveModes = obj.supportedDepthResolveModes;
    result.supportedStencilResolveModes = obj.supportedStencilResolveModes;
    result.independentResolveNone = obj.independentResolveNone;
    result.independentResolve = obj.independentResolve;
    return result;
}


template <>
VkPhysicalDeviceDescriptorIndexingFeatures create_structure_copy<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDescriptorIndexingFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderInputAttachmentArrayDynamicIndexing = obj.shaderInputAttachmentArrayDynamicIndexing;
    result.shaderUniformTexelBufferArrayDynamicIndexing = obj.shaderUniformTexelBufferArrayDynamicIndexing;
    result.shaderStorageTexelBufferArrayDynamicIndexing = obj.shaderStorageTexelBufferArrayDynamicIndexing;
    result.shaderUniformBufferArrayNonUniformIndexing = obj.shaderUniformBufferArrayNonUniformIndexing;
    result.shaderSampledImageArrayNonUniformIndexing = obj.shaderSampledImageArrayNonUniformIndexing;
    result.shaderStorageBufferArrayNonUniformIndexing = obj.shaderStorageBufferArrayNonUniformIndexing;
    result.shaderStorageImageArrayNonUniformIndexing = obj.shaderStorageImageArrayNonUniformIndexing;
    result.shaderInputAttachmentArrayNonUniformIndexing = obj.shaderInputAttachmentArrayNonUniformIndexing;
    result.shaderUniformTexelBufferArrayNonUniformIndexing = obj.shaderUniformTexelBufferArrayNonUniformIndexing;
    result.shaderStorageTexelBufferArrayNonUniformIndexing = obj.shaderStorageTexelBufferArrayNonUniformIndexing;
    result.descriptorBindingUniformBufferUpdateAfterBind = obj.descriptorBindingUniformBufferUpdateAfterBind;
    result.descriptorBindingSampledImageUpdateAfterBind = obj.descriptorBindingSampledImageUpdateAfterBind;
    result.descriptorBindingStorageImageUpdateAfterBind = obj.descriptorBindingStorageImageUpdateAfterBind;
    result.descriptorBindingStorageBufferUpdateAfterBind = obj.descriptorBindingStorageBufferUpdateAfterBind;
    result.descriptorBindingUniformTexelBufferUpdateAfterBind = obj.descriptorBindingUniformTexelBufferUpdateAfterBind;
    result.descriptorBindingStorageTexelBufferUpdateAfterBind = obj.descriptorBindingStorageTexelBufferUpdateAfterBind;
    result.descriptorBindingUpdateUnusedWhilePending = obj.descriptorBindingUpdateUnusedWhilePending;
    result.descriptorBindingPartiallyBound = obj.descriptorBindingPartiallyBound;
    result.descriptorBindingVariableDescriptorCount = obj.descriptorBindingVariableDescriptorCount;
    result.runtimeDescriptorArray = obj.runtimeDescriptorArray;
    return result;
}


template <>
VkPhysicalDeviceDescriptorIndexingProperties create_structure_copy<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDescriptorIndexingProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxUpdateAfterBindDescriptorsInAllPools = obj.maxUpdateAfterBindDescriptorsInAllPools;
    result.shaderUniformBufferArrayNonUniformIndexingNative = obj.shaderUniformBufferArrayNonUniformIndexingNative;
    result.shaderSampledImageArrayNonUniformIndexingNative = obj.shaderSampledImageArrayNonUniformIndexingNative;
    result.shaderStorageBufferArrayNonUniformIndexingNative = obj.shaderStorageBufferArrayNonUniformIndexingNative;
    result.shaderStorageImageArrayNonUniformIndexingNative = obj.shaderStorageImageArrayNonUniformIndexingNative;
    result.shaderInputAttachmentArrayNonUniformIndexingNative = obj.shaderInputAttachmentArrayNonUniformIndexingNative;
    result.robustBufferAccessUpdateAfterBind = obj.robustBufferAccessUpdateAfterBind;
    result.quadDivergentImplicitLod = obj.quadDivergentImplicitLod;
    result.maxPerStageDescriptorUpdateAfterBindSamplers = obj.maxPerStageDescriptorUpdateAfterBindSamplers;
    result.maxPerStageDescriptorUpdateAfterBindUniformBuffers = obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    result.maxPerStageDescriptorUpdateAfterBindStorageBuffers = obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    result.maxPerStageDescriptorUpdateAfterBindSampledImages = obj.maxPerStageDescriptorUpdateAfterBindSampledImages;
    result.maxPerStageDescriptorUpdateAfterBindStorageImages = obj.maxPerStageDescriptorUpdateAfterBindStorageImages;
    result.maxPerStageDescriptorUpdateAfterBindInputAttachments = obj.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    result.maxPerStageUpdateAfterBindResources = obj.maxPerStageUpdateAfterBindResources;
    result.maxDescriptorSetUpdateAfterBindSamplers = obj.maxDescriptorSetUpdateAfterBindSamplers;
    result.maxDescriptorSetUpdateAfterBindUniformBuffers = obj.maxDescriptorSetUpdateAfterBindUniformBuffers;
    result.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    result.maxDescriptorSetUpdateAfterBindStorageBuffers = obj.maxDescriptorSetUpdateAfterBindStorageBuffers;
    result.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    result.maxDescriptorSetUpdateAfterBindSampledImages = obj.maxDescriptorSetUpdateAfterBindSampledImages;
    result.maxDescriptorSetUpdateAfterBindStorageImages = obj.maxDescriptorSetUpdateAfterBindStorageImages;
    result.maxDescriptorSetUpdateAfterBindInputAttachments = obj.maxDescriptorSetUpdateAfterBindInputAttachments;
    return result;
}


template <>
VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV create_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.deviceGeneratedCommands = obj.deviceGeneratedCommands;
    return result;
}

template <>
VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV create_structure_copy<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxGraphicsShaderGroupCount = obj.maxGraphicsShaderGroupCount;
    result.maxIndirectSequenceCount = obj.maxIndirectSequenceCount;
    result.maxIndirectCommandsTokenCount = obj.maxIndirectCommandsTokenCount;
    result.maxIndirectCommandsStreamCount = obj.maxIndirectCommandsStreamCount;
    result.maxIndirectCommandsTokenOffset = obj.maxIndirectCommandsTokenOffset;
    result.maxIndirectCommandsStreamStride = obj.maxIndirectCommandsStreamStride;
    result.minSequencesCountBufferOffsetAlignment = obj.minSequencesCountBufferOffsetAlignment;
    result.minSequencesIndexBufferOffsetAlignment = obj.minSequencesIndexBufferOffsetAlignment;
    result.minIndirectCommandsBufferOffsetAlignment = obj.minIndirectCommandsBufferOffsetAlignment;
    return result;
}

template <>
VkPhysicalDeviceDiagnosticsConfigFeaturesNV create_structure_copy<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDiagnosticsConfigFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.diagnosticsConfig = obj.diagnosticsConfig;
    return result;
}

template <>
VkPhysicalDeviceDiscardRectanglePropertiesEXT create_structure_copy<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDiscardRectanglePropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxDiscardRectangles = obj.maxDiscardRectangles;
    return result;
}

template <>
VkPhysicalDeviceDriverProperties create_structure_copy<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceDriverProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.driverID = obj.driverID;
    create_static_string_copy<VK_MAX_DRIVER_NAME_SIZE>(result.driverName, obj.driverName);
    create_static_string_copy<VK_MAX_DRIVER_INFO_SIZE>(result.driverInfo, obj.driverInfo);
    result.conformanceVersion = create_structure_copy(obj.conformanceVersion, pAllocator);
    return result;
}


template <>
VkPhysicalDeviceExclusiveScissorFeaturesNV create_structure_copy<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceExclusiveScissorFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.exclusiveScissor = obj.exclusiveScissor;
    return result;
}

template <>
VkPhysicalDeviceExtendedDynamicStateFeaturesEXT create_structure_copy<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.extendedDynamicState = obj.extendedDynamicState;
    return result;
}

template <>
VkPhysicalDeviceExternalBufferInfo create_structure_copy<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceExternalBufferInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.usage = obj.usage;
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceExternalFenceInfo create_structure_copy<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceExternalFenceInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceExternalImageFormatInfo create_structure_copy<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceExternalImageFormatInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceExternalMemoryHostPropertiesEXT create_structure_copy<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.minImportedHostPointerAlignment = obj.minImportedHostPointerAlignment;
    return result;
}

template <>
VkPhysicalDeviceExternalSemaphoreInfo create_structure_copy<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceExternalSemaphoreInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.handleType = obj.handleType;
    return result;
}


template <>
VkPhysicalDeviceFeatures create_structure_copy<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFeatures result { };
    result.robustBufferAccess = obj.robustBufferAccess;
    result.fullDrawIndexUint32 = obj.fullDrawIndexUint32;
    result.imageCubeArray = obj.imageCubeArray;
    result.independentBlend = obj.independentBlend;
    result.geometryShader = obj.geometryShader;
    result.tessellationShader = obj.tessellationShader;
    result.sampleRateShading = obj.sampleRateShading;
    result.dualSrcBlend = obj.dualSrcBlend;
    result.logicOp = obj.logicOp;
    result.multiDrawIndirect = obj.multiDrawIndirect;
    result.drawIndirectFirstInstance = obj.drawIndirectFirstInstance;
    result.depthClamp = obj.depthClamp;
    result.depthBiasClamp = obj.depthBiasClamp;
    result.fillModeNonSolid = obj.fillModeNonSolid;
    result.depthBounds = obj.depthBounds;
    result.wideLines = obj.wideLines;
    result.largePoints = obj.largePoints;
    result.alphaToOne = obj.alphaToOne;
    result.multiViewport = obj.multiViewport;
    result.samplerAnisotropy = obj.samplerAnisotropy;
    result.textureCompressionETC2 = obj.textureCompressionETC2;
    result.textureCompressionASTC_LDR = obj.textureCompressionASTC_LDR;
    result.textureCompressionBC = obj.textureCompressionBC;
    result.occlusionQueryPrecise = obj.occlusionQueryPrecise;
    result.pipelineStatisticsQuery = obj.pipelineStatisticsQuery;
    result.vertexPipelineStoresAndAtomics = obj.vertexPipelineStoresAndAtomics;
    result.fragmentStoresAndAtomics = obj.fragmentStoresAndAtomics;
    result.shaderTessellationAndGeometryPointSize = obj.shaderTessellationAndGeometryPointSize;
    result.shaderImageGatherExtended = obj.shaderImageGatherExtended;
    result.shaderStorageImageExtendedFormats = obj.shaderStorageImageExtendedFormats;
    result.shaderStorageImageMultisample = obj.shaderStorageImageMultisample;
    result.shaderStorageImageReadWithoutFormat = obj.shaderStorageImageReadWithoutFormat;
    result.shaderStorageImageWriteWithoutFormat = obj.shaderStorageImageWriteWithoutFormat;
    result.shaderUniformBufferArrayDynamicIndexing = obj.shaderUniformBufferArrayDynamicIndexing;
    result.shaderSampledImageArrayDynamicIndexing = obj.shaderSampledImageArrayDynamicIndexing;
    result.shaderStorageBufferArrayDynamicIndexing = obj.shaderStorageBufferArrayDynamicIndexing;
    result.shaderStorageImageArrayDynamicIndexing = obj.shaderStorageImageArrayDynamicIndexing;
    result.shaderClipDistance = obj.shaderClipDistance;
    result.shaderCullDistance = obj.shaderCullDistance;
    result.shaderFloat64 = obj.shaderFloat64;
    result.shaderInt64 = obj.shaderInt64;
    result.shaderInt16 = obj.shaderInt16;
    result.shaderResourceResidency = obj.shaderResourceResidency;
    result.shaderResourceMinLod = obj.shaderResourceMinLod;
    result.sparseBinding = obj.sparseBinding;
    result.sparseResidencyBuffer = obj.sparseResidencyBuffer;
    result.sparseResidencyImage2D = obj.sparseResidencyImage2D;
    result.sparseResidencyImage3D = obj.sparseResidencyImage3D;
    result.sparseResidency2Samples = obj.sparseResidency2Samples;
    result.sparseResidency4Samples = obj.sparseResidency4Samples;
    result.sparseResidency8Samples = obj.sparseResidency8Samples;
    result.sparseResidency16Samples = obj.sparseResidency16Samples;
    result.sparseResidencyAliased = obj.sparseResidencyAliased;
    result.variableMultisampleRate = obj.variableMultisampleRate;
    result.inheritedQueries = obj.inheritedQueries;
    return result;
}

template <>
VkPhysicalDeviceFeatures2 create_structure_copy<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFeatures2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.features = create_structure_copy(obj.features, pAllocator);
    return result;
}



template <>
VkPhysicalDeviceFloatControlsProperties create_structure_copy<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFloatControlsProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.denormBehaviorIndependence = obj.denormBehaviorIndependence;
    result.roundingModeIndependence = obj.roundingModeIndependence;
    result.shaderSignedZeroInfNanPreserveFloat16 = obj.shaderSignedZeroInfNanPreserveFloat16;
    result.shaderSignedZeroInfNanPreserveFloat32 = obj.shaderSignedZeroInfNanPreserveFloat32;
    result.shaderSignedZeroInfNanPreserveFloat64 = obj.shaderSignedZeroInfNanPreserveFloat64;
    result.shaderDenormPreserveFloat16 = obj.shaderDenormPreserveFloat16;
    result.shaderDenormPreserveFloat32 = obj.shaderDenormPreserveFloat32;
    result.shaderDenormPreserveFloat64 = obj.shaderDenormPreserveFloat64;
    result.shaderDenormFlushToZeroFloat16 = obj.shaderDenormFlushToZeroFloat16;
    result.shaderDenormFlushToZeroFloat32 = obj.shaderDenormFlushToZeroFloat32;
    result.shaderDenormFlushToZeroFloat64 = obj.shaderDenormFlushToZeroFloat64;
    result.shaderRoundingModeRTEFloat16 = obj.shaderRoundingModeRTEFloat16;
    result.shaderRoundingModeRTEFloat32 = obj.shaderRoundingModeRTEFloat32;
    result.shaderRoundingModeRTEFloat64 = obj.shaderRoundingModeRTEFloat64;
    result.shaderRoundingModeRTZFloat16 = obj.shaderRoundingModeRTZFloat16;
    result.shaderRoundingModeRTZFloat32 = obj.shaderRoundingModeRTZFloat32;
    result.shaderRoundingModeRTZFloat64 = obj.shaderRoundingModeRTZFloat64;
    return result;
}


template <>
VkPhysicalDeviceFragmentDensityMap2FeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFragmentDensityMap2FeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fragmentDensityMapDeferred = obj.fragmentDensityMapDeferred;
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMap2PropertiesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFragmentDensityMap2PropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.subsampledLoads = obj.subsampledLoads;
    result.subsampledCoarseReconstructionEarlyAccess = obj.subsampledCoarseReconstructionEarlyAccess;
    result.maxSubsampledArrayLayers = obj.maxSubsampledArrayLayers;
    result.maxDescriptorSetSubsampledSamplers = obj.maxDescriptorSetSubsampledSamplers;
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapFeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFragmentDensityMapFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fragmentDensityMap = obj.fragmentDensityMap;
    result.fragmentDensityMapDynamic = obj.fragmentDensityMapDynamic;
    result.fragmentDensityMapNonSubsampledImages = obj.fragmentDensityMapNonSubsampledImages;
    return result;
}

template <>
VkPhysicalDeviceFragmentDensityMapPropertiesEXT create_structure_copy<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.minFragmentDensityTexelSize = create_structure_copy(obj.minFragmentDensityTexelSize, pAllocator);
    result.maxFragmentDensityTexelSize = create_structure_copy(obj.maxFragmentDensityTexelSize, pAllocator);
    result.fragmentDensityInvocations = obj.fragmentDensityInvocations;
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV create_structure_copy<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fragmentShaderBarycentric = obj.fragmentShaderBarycentric;
    return result;
}

template <>
VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT create_structure_copy<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fragmentShaderSampleInterlock = obj.fragmentShaderSampleInterlock;
    result.fragmentShaderPixelInterlock = obj.fragmentShaderPixelInterlock;
    result.fragmentShaderShadingRateInterlock = obj.fragmentShaderShadingRateInterlock;
    return result;
}

template <>
VkPhysicalDeviceGroupProperties create_structure_copy<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceGroupProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.physicalDeviceCount = obj.physicalDeviceCount;
    create_static_array_copy<VK_MAX_DEVICE_GROUP_SIZE>(result.physicalDevices, obj.physicalDevices, pAllocator);
    result.subsetAllocation = obj.subsetAllocation;
    return result;
}


template <>
VkPhysicalDeviceHostQueryResetFeatures create_structure_copy<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceHostQueryResetFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.hostQueryReset = obj.hostQueryReset;
    return result;
}


template <>
VkPhysicalDeviceIDProperties create_structure_copy<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceIDProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    create_static_array_copy<VK_UUID_SIZE>(result.deviceUUID, obj.deviceUUID, pAllocator);
    create_static_array_copy<VK_UUID_SIZE>(result.driverUUID, obj.driverUUID, pAllocator);
    create_static_array_copy<VK_LUID_SIZE>(result.deviceLUID, obj.deviceLUID, pAllocator);
    result.deviceNodeMask = obj.deviceNodeMask;
    result.deviceLUIDValid = obj.deviceLUIDValid;
    return result;
}


template <>
VkPhysicalDeviceImageDrmFormatModifierInfoEXT create_structure_copy<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.drmFormatModifier = obj.drmFormatModifier;
    result.sharingMode = obj.sharingMode;
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
    return result;
}

template <>
VkPhysicalDeviceImageFormatInfo2 create_structure_copy<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceImageFormatInfo2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.format = obj.format;
    result.type = obj.type;
    result.tiling = obj.tiling;
    result.usage = obj.usage;
    result.flags = obj.flags;
    return result;
}


template <>
VkPhysicalDeviceImageRobustnessFeaturesEXT create_structure_copy<VkPhysicalDeviceImageRobustnessFeaturesEXT>(const VkPhysicalDeviceImageRobustnessFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceImageRobustnessFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.robustImageAccess = obj.robustImageAccess;
    return result;
}

template <>
VkPhysicalDeviceImageViewImageFormatInfoEXT create_structure_copy<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceImageViewImageFormatInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.imageViewType = obj.imageViewType;
    return result;
}

template <>
VkPhysicalDeviceImagelessFramebufferFeatures create_structure_copy<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceImagelessFramebufferFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.imagelessFramebuffer = obj.imagelessFramebuffer;
    return result;
}


template <>
VkPhysicalDeviceIndexTypeUint8FeaturesEXT create_structure_copy<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceIndexTypeUint8FeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.indexTypeUint8 = obj.indexTypeUint8;
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockFeaturesEXT create_structure_copy<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceInlineUniformBlockFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.inlineUniformBlock = obj.inlineUniformBlock;
    result.descriptorBindingInlineUniformBlockUpdateAfterBind = obj.descriptorBindingInlineUniformBlockUpdateAfterBind;
    return result;
}

template <>
VkPhysicalDeviceInlineUniformBlockPropertiesEXT create_structure_copy<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceInlineUniformBlockPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxInlineUniformBlockSize = obj.maxInlineUniformBlockSize;
    result.maxPerStageDescriptorInlineUniformBlocks = obj.maxPerStageDescriptorInlineUniformBlocks;
    result.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks = obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
    result.maxDescriptorSetInlineUniformBlocks = obj.maxDescriptorSetInlineUniformBlocks;
    result.maxDescriptorSetUpdateAfterBindInlineUniformBlocks = obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
    return result;
}

template <>
VkPhysicalDeviceLimits create_structure_copy<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceLimits result { };
    result.maxImageDimension1D = obj.maxImageDimension1D;
    result.maxImageDimension2D = obj.maxImageDimension2D;
    result.maxImageDimension3D = obj.maxImageDimension3D;
    result.maxImageDimensionCube = obj.maxImageDimensionCube;
    result.maxImageArrayLayers = obj.maxImageArrayLayers;
    result.maxTexelBufferElements = obj.maxTexelBufferElements;
    result.maxUniformBufferRange = obj.maxUniformBufferRange;
    result.maxStorageBufferRange = obj.maxStorageBufferRange;
    result.maxPushConstantsSize = obj.maxPushConstantsSize;
    result.maxMemoryAllocationCount = obj.maxMemoryAllocationCount;
    result.maxSamplerAllocationCount = obj.maxSamplerAllocationCount;
    result.bufferImageGranularity = obj.bufferImageGranularity;
    result.sparseAddressSpaceSize = obj.sparseAddressSpaceSize;
    result.maxBoundDescriptorSets = obj.maxBoundDescriptorSets;
    result.maxPerStageDescriptorSamplers = obj.maxPerStageDescriptorSamplers;
    result.maxPerStageDescriptorUniformBuffers = obj.maxPerStageDescriptorUniformBuffers;
    result.maxPerStageDescriptorStorageBuffers = obj.maxPerStageDescriptorStorageBuffers;
    result.maxPerStageDescriptorSampledImages = obj.maxPerStageDescriptorSampledImages;
    result.maxPerStageDescriptorStorageImages = obj.maxPerStageDescriptorStorageImages;
    result.maxPerStageDescriptorInputAttachments = obj.maxPerStageDescriptorInputAttachments;
    result.maxPerStageResources = obj.maxPerStageResources;
    result.maxDescriptorSetSamplers = obj.maxDescriptorSetSamplers;
    result.maxDescriptorSetUniformBuffers = obj.maxDescriptorSetUniformBuffers;
    result.maxDescriptorSetUniformBuffersDynamic = obj.maxDescriptorSetUniformBuffersDynamic;
    result.maxDescriptorSetStorageBuffers = obj.maxDescriptorSetStorageBuffers;
    result.maxDescriptorSetStorageBuffersDynamic = obj.maxDescriptorSetStorageBuffersDynamic;
    result.maxDescriptorSetSampledImages = obj.maxDescriptorSetSampledImages;
    result.maxDescriptorSetStorageImages = obj.maxDescriptorSetStorageImages;
    result.maxDescriptorSetInputAttachments = obj.maxDescriptorSetInputAttachments;
    result.maxVertexInputAttributes = obj.maxVertexInputAttributes;
    result.maxVertexInputBindings = obj.maxVertexInputBindings;
    result.maxVertexInputAttributeOffset = obj.maxVertexInputAttributeOffset;
    result.maxVertexInputBindingStride = obj.maxVertexInputBindingStride;
    result.maxVertexOutputComponents = obj.maxVertexOutputComponents;
    result.maxTessellationGenerationLevel = obj.maxTessellationGenerationLevel;
    result.maxTessellationPatchSize = obj.maxTessellationPatchSize;
    result.maxTessellationControlPerVertexInputComponents = obj.maxTessellationControlPerVertexInputComponents;
    result.maxTessellationControlPerVertexOutputComponents = obj.maxTessellationControlPerVertexOutputComponents;
    result.maxTessellationControlPerPatchOutputComponents = obj.maxTessellationControlPerPatchOutputComponents;
    result.maxTessellationControlTotalOutputComponents = obj.maxTessellationControlTotalOutputComponents;
    result.maxTessellationEvaluationInputComponents = obj.maxTessellationEvaluationInputComponents;
    result.maxTessellationEvaluationOutputComponents = obj.maxTessellationEvaluationOutputComponents;
    result.maxGeometryShaderInvocations = obj.maxGeometryShaderInvocations;
    result.maxGeometryInputComponents = obj.maxGeometryInputComponents;
    result.maxGeometryOutputComponents = obj.maxGeometryOutputComponents;
    result.maxGeometryOutputVertices = obj.maxGeometryOutputVertices;
    result.maxGeometryTotalOutputComponents = obj.maxGeometryTotalOutputComponents;
    result.maxFragmentInputComponents = obj.maxFragmentInputComponents;
    result.maxFragmentOutputAttachments = obj.maxFragmentOutputAttachments;
    result.maxFragmentDualSrcAttachments = obj.maxFragmentDualSrcAttachments;
    result.maxFragmentCombinedOutputResources = obj.maxFragmentCombinedOutputResources;
    result.maxComputeSharedMemorySize = obj.maxComputeSharedMemorySize;
    create_static_array_copy<3>(result.maxComputeWorkGroupCount, obj.maxComputeWorkGroupCount, pAllocator);
    result.maxComputeWorkGroupInvocations = obj.maxComputeWorkGroupInvocations;
    create_static_array_copy<3>(result.maxComputeWorkGroupSize, obj.maxComputeWorkGroupSize, pAllocator);
    result.subPixelPrecisionBits = obj.subPixelPrecisionBits;
    result.subTexelPrecisionBits = obj.subTexelPrecisionBits;
    result.mipmapPrecisionBits = obj.mipmapPrecisionBits;
    result.maxDrawIndexedIndexValue = obj.maxDrawIndexedIndexValue;
    result.maxDrawIndirectCount = obj.maxDrawIndirectCount;
    result.maxSamplerLodBias = obj.maxSamplerLodBias;
    result.maxSamplerAnisotropy = obj.maxSamplerAnisotropy;
    result.maxViewports = obj.maxViewports;
    create_static_array_copy<2>(result.maxViewportDimensions, obj.maxViewportDimensions, pAllocator);
    create_static_array_copy<2>(result.viewportBoundsRange, obj.viewportBoundsRange, pAllocator);
    result.viewportSubPixelBits = obj.viewportSubPixelBits;
    result.minMemoryMapAlignment = obj.minMemoryMapAlignment;
    result.minTexelBufferOffsetAlignment = obj.minTexelBufferOffsetAlignment;
    result.minUniformBufferOffsetAlignment = obj.minUniformBufferOffsetAlignment;
    result.minStorageBufferOffsetAlignment = obj.minStorageBufferOffsetAlignment;
    result.minTexelOffset = obj.minTexelOffset;
    result.maxTexelOffset = obj.maxTexelOffset;
    result.minTexelGatherOffset = obj.minTexelGatherOffset;
    result.maxTexelGatherOffset = obj.maxTexelGatherOffset;
    result.minInterpolationOffset = obj.minInterpolationOffset;
    result.maxInterpolationOffset = obj.maxInterpolationOffset;
    result.subPixelInterpolationOffsetBits = obj.subPixelInterpolationOffsetBits;
    result.maxFramebufferWidth = obj.maxFramebufferWidth;
    result.maxFramebufferHeight = obj.maxFramebufferHeight;
    result.maxFramebufferLayers = obj.maxFramebufferLayers;
    result.framebufferColorSampleCounts = obj.framebufferColorSampleCounts;
    result.framebufferDepthSampleCounts = obj.framebufferDepthSampleCounts;
    result.framebufferStencilSampleCounts = obj.framebufferStencilSampleCounts;
    result.framebufferNoAttachmentsSampleCounts = obj.framebufferNoAttachmentsSampleCounts;
    result.maxColorAttachments = obj.maxColorAttachments;
    result.sampledImageColorSampleCounts = obj.sampledImageColorSampleCounts;
    result.sampledImageIntegerSampleCounts = obj.sampledImageIntegerSampleCounts;
    result.sampledImageDepthSampleCounts = obj.sampledImageDepthSampleCounts;
    result.sampledImageStencilSampleCounts = obj.sampledImageStencilSampleCounts;
    result.storageImageSampleCounts = obj.storageImageSampleCounts;
    result.maxSampleMaskWords = obj.maxSampleMaskWords;
    result.timestampComputeAndGraphics = obj.timestampComputeAndGraphics;
    result.timestampPeriod = obj.timestampPeriod;
    result.maxClipDistances = obj.maxClipDistances;
    result.maxCullDistances = obj.maxCullDistances;
    result.maxCombinedClipAndCullDistances = obj.maxCombinedClipAndCullDistances;
    result.discreteQueuePriorities = obj.discreteQueuePriorities;
    create_static_array_copy<2>(result.pointSizeRange, obj.pointSizeRange, pAllocator);
    create_static_array_copy<2>(result.lineWidthRange, obj.lineWidthRange, pAllocator);
    result.pointSizeGranularity = obj.pointSizeGranularity;
    result.lineWidthGranularity = obj.lineWidthGranularity;
    result.strictLines = obj.strictLines;
    result.standardSampleLocations = obj.standardSampleLocations;
    result.optimalBufferCopyOffsetAlignment = obj.optimalBufferCopyOffsetAlignment;
    result.optimalBufferCopyRowPitchAlignment = obj.optimalBufferCopyRowPitchAlignment;
    result.nonCoherentAtomSize = obj.nonCoherentAtomSize;
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationFeaturesEXT create_structure_copy<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceLineRasterizationFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.rectangularLines = obj.rectangularLines;
    result.bresenhamLines = obj.bresenhamLines;
    result.smoothLines = obj.smoothLines;
    result.stippledRectangularLines = obj.stippledRectangularLines;
    result.stippledBresenhamLines = obj.stippledBresenhamLines;
    result.stippledSmoothLines = obj.stippledSmoothLines;
    return result;
}

template <>
VkPhysicalDeviceLineRasterizationPropertiesEXT create_structure_copy<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceLineRasterizationPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.lineSubPixelPrecisionBits = obj.lineSubPixelPrecisionBits;
    return result;
}

template <>
VkPhysicalDeviceMaintenance3Properties create_structure_copy<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMaintenance3Properties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxPerSetDescriptors = obj.maxPerSetDescriptors;
    result.maxMemoryAllocationSize = obj.maxMemoryAllocationSize;
    return result;
}


template <>
VkPhysicalDeviceMemoryBudgetPropertiesEXT create_structure_copy<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMemoryBudgetPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.heapBudget, obj.heapBudget, pAllocator);
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.heapUsage, obj.heapUsage, pAllocator);
    return result;
}

template <>
VkPhysicalDeviceMemoryPriorityFeaturesEXT create_structure_copy<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMemoryPriorityFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memoryPriority = obj.memoryPriority;
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties create_structure_copy<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMemoryProperties result { };
    result.memoryTypeCount = obj.memoryTypeCount;
    create_static_array_copy<VK_MAX_MEMORY_TYPES>(result.memoryTypes, obj.memoryTypes, pAllocator);
    result.memoryHeapCount = obj.memoryHeapCount;
    create_static_array_copy<VK_MAX_MEMORY_HEAPS>(result.memoryHeaps, obj.memoryHeaps, pAllocator);
    return result;
}

template <>
VkPhysicalDeviceMemoryProperties2 create_structure_copy<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMemoryProperties2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memoryProperties = create_structure_copy(obj.memoryProperties, pAllocator);
    return result;
}


template <>
VkPhysicalDeviceMeshShaderFeaturesNV create_structure_copy<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMeshShaderFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.taskShader = obj.taskShader;
    result.meshShader = obj.meshShader;
    return result;
}

template <>
VkPhysicalDeviceMeshShaderPropertiesNV create_structure_copy<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMeshShaderPropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxDrawMeshTasksCount = obj.maxDrawMeshTasksCount;
    result.maxTaskWorkGroupInvocations = obj.maxTaskWorkGroupInvocations;
    create_static_array_copy<3>(result.maxTaskWorkGroupSize, obj.maxTaskWorkGroupSize, pAllocator);
    result.maxTaskTotalMemorySize = obj.maxTaskTotalMemorySize;
    result.maxTaskOutputCount = obj.maxTaskOutputCount;
    result.maxMeshWorkGroupInvocations = obj.maxMeshWorkGroupInvocations;
    create_static_array_copy<3>(result.maxMeshWorkGroupSize, obj.maxMeshWorkGroupSize, pAllocator);
    result.maxMeshTotalMemorySize = obj.maxMeshTotalMemorySize;
    result.maxMeshOutputVertices = obj.maxMeshOutputVertices;
    result.maxMeshOutputPrimitives = obj.maxMeshOutputPrimitives;
    result.maxMeshMultiviewViewCount = obj.maxMeshMultiviewViewCount;
    result.meshOutputPerVertexGranularity = obj.meshOutputPerVertexGranularity;
    result.meshOutputPerPrimitiveGranularity = obj.meshOutputPerPrimitiveGranularity;
    return result;
}

template <>
VkPhysicalDeviceMultiviewFeatures create_structure_copy<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMultiviewFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.multiview = obj.multiview;
    result.multiviewGeometryShader = obj.multiviewGeometryShader;
    result.multiviewTessellationShader = obj.multiviewTessellationShader;
    return result;
}


template <>
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX create_structure_copy<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.perViewPositionAllComponents = obj.perViewPositionAllComponents;
    return result;
}

template <>
VkPhysicalDeviceMultiviewProperties create_structure_copy<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceMultiviewProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxMultiviewViewCount = obj.maxMultiviewViewCount;
    result.maxMultiviewInstanceIndex = obj.maxMultiviewInstanceIndex;
    return result;
}


template <>
VkPhysicalDevicePCIBusInfoPropertiesEXT create_structure_copy<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePCIBusInfoPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pciDomain = obj.pciDomain;
    result.pciBus = obj.pciBus;
    result.pciDevice = obj.pciDevice;
    result.pciFunction = obj.pciFunction;
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryFeaturesKHR create_structure_copy<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePerformanceQueryFeaturesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.performanceCounterQueryPools = obj.performanceCounterQueryPools;
    result.performanceCounterMultipleQueryPools = obj.performanceCounterMultipleQueryPools;
    return result;
}

template <>
VkPhysicalDevicePerformanceQueryPropertiesKHR create_structure_copy<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePerformanceQueryPropertiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.allowCommandBufferQueryCopies = obj.allowCommandBufferQueryCopies;
    return result;
}

template <>
VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT create_structure_copy<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pipelineCreationCacheControl = obj.pipelineCreationCacheControl;
    return result;
}

template <>
VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR create_structure_copy<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pipelineExecutableInfo = obj.pipelineExecutableInfo;
    return result;
}

template <>
VkPhysicalDevicePointClippingProperties create_structure_copy<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePointClippingProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pointClippingBehavior = obj.pointClippingBehavior;
    return result;
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkPhysicalDevicePresentationPropertiesANDROID create_structure_copy<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePresentationPropertiesANDROID result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.sharedImage = obj.sharedImage;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkPhysicalDevicePrivateDataFeaturesEXT create_structure_copy<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePrivateDataFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.privateData = obj.privateData;
    return result;
}

template <>
VkPhysicalDeviceProperties create_structure_copy<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceProperties result { };
    result.apiVersion = obj.apiVersion;
    result.driverVersion = obj.driverVersion;
    result.vendorID = obj.vendorID;
    result.deviceID = obj.deviceID;
    result.deviceType = obj.deviceType;
    create_static_string_copy<VK_MAX_PHYSICAL_DEVICE_NAME_SIZE>(result.deviceName, obj.deviceName);
    create_static_array_copy<VK_UUID_SIZE>(result.pipelineCacheUUID, obj.pipelineCacheUUID, pAllocator);
    result.limits = create_structure_copy(obj.limits, pAllocator);
    result.sparseProperties = create_structure_copy(obj.sparseProperties, pAllocator);
    return result;
}

template <>
VkPhysicalDeviceProperties2 create_structure_copy<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceProperties2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.properties = create_structure_copy(obj.properties, pAllocator);
    return result;
}


template <>
VkPhysicalDeviceProtectedMemoryFeatures create_structure_copy<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceProtectedMemoryFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.protectedMemory = obj.protectedMemory;
    return result;
}

template <>
VkPhysicalDeviceProtectedMemoryProperties create_structure_copy<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceProtectedMemoryProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.protectedNoFault = obj.protectedNoFault;
    return result;
}

template <>
VkPhysicalDevicePushDescriptorPropertiesKHR create_structure_copy<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDevicePushDescriptorPropertiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxPushDescriptors = obj.maxPushDescriptors;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingFeaturesKHR create_structure_copy<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceRayTracingFeaturesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.rayTracing = obj.rayTracing;
    result.rayTracingShaderGroupHandleCaptureReplay = obj.rayTracingShaderGroupHandleCaptureReplay;
    result.rayTracingShaderGroupHandleCaptureReplayMixed = obj.rayTracingShaderGroupHandleCaptureReplayMixed;
    result.rayTracingAccelerationStructureCaptureReplay = obj.rayTracingAccelerationStructureCaptureReplay;
    result.rayTracingIndirectTraceRays = obj.rayTracingIndirectTraceRays;
    result.rayTracingIndirectAccelerationStructureBuild = obj.rayTracingIndirectAccelerationStructureBuild;
    result.rayTracingHostAccelerationStructureCommands = obj.rayTracingHostAccelerationStructureCommands;
    result.rayQuery = obj.rayQuery;
    result.rayTracingPrimitiveCulling = obj.rayTracingPrimitiveCulling;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPhysicalDeviceRayTracingPropertiesKHR create_structure_copy<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceRayTracingPropertiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderGroupHandleSize = obj.shaderGroupHandleSize;
    result.maxRecursionDepth = obj.maxRecursionDepth;
    result.maxShaderGroupStride = obj.maxShaderGroupStride;
    result.shaderGroupBaseAlignment = obj.shaderGroupBaseAlignment;
    result.maxGeometryCount = obj.maxGeometryCount;
    result.maxInstanceCount = obj.maxInstanceCount;
    result.maxPrimitiveCount = obj.maxPrimitiveCount;
    result.maxDescriptorSetAccelerationStructures = obj.maxDescriptorSetAccelerationStructures;
    result.shaderGroupHandleCaptureReplaySize = obj.shaderGroupHandleCaptureReplaySize;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkPhysicalDeviceRayTracingPropertiesNV create_structure_copy<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceRayTracingPropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderGroupHandleSize = obj.shaderGroupHandleSize;
    result.maxRecursionDepth = obj.maxRecursionDepth;
    result.maxShaderGroupStride = obj.maxShaderGroupStride;
    result.shaderGroupBaseAlignment = obj.shaderGroupBaseAlignment;
    result.maxGeometryCount = obj.maxGeometryCount;
    result.maxInstanceCount = obj.maxInstanceCount;
    result.maxTriangleCount = obj.maxTriangleCount;
    result.maxDescriptorSetAccelerationStructures = obj.maxDescriptorSetAccelerationStructures;
    return result;
}

template <>
VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV create_structure_copy<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.representativeFragmentTest = obj.representativeFragmentTest;
    return result;
}

template <>
VkPhysicalDeviceRobustness2FeaturesEXT create_structure_copy<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceRobustness2FeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.robustBufferAccess2 = obj.robustBufferAccess2;
    result.robustImageAccess2 = obj.robustImageAccess2;
    result.nullDescriptor = obj.nullDescriptor;
    return result;
}

template <>
VkPhysicalDeviceRobustness2PropertiesEXT create_structure_copy<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceRobustness2PropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.robustStorageBufferAccessSizeAlignment = obj.robustStorageBufferAccessSizeAlignment;
    result.robustUniformBufferAccessSizeAlignment = obj.robustUniformBufferAccessSizeAlignment;
    return result;
}

template <>
VkPhysicalDeviceSampleLocationsPropertiesEXT create_structure_copy<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSampleLocationsPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.sampleLocationSampleCounts = obj.sampleLocationSampleCounts;
    result.maxSampleLocationGridSize = create_structure_copy(obj.maxSampleLocationGridSize, pAllocator);
    create_static_array_copy<2>(result.sampleLocationCoordinateRange, obj.sampleLocationCoordinateRange, pAllocator);
    result.sampleLocationSubPixelBits = obj.sampleLocationSubPixelBits;
    result.variableSampleLocations = obj.variableSampleLocations;
    return result;
}

template <>
VkPhysicalDeviceSamplerFilterMinmaxProperties create_structure_copy<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSamplerFilterMinmaxProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.filterMinmaxSingleComponentFormats = obj.filterMinmaxSingleComponentFormats;
    result.filterMinmaxImageComponentMapping = obj.filterMinmaxImageComponentMapping;
    return result;
}


template <>
VkPhysicalDeviceSamplerYcbcrConversionFeatures create_structure_copy<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSamplerYcbcrConversionFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.samplerYcbcrConversion = obj.samplerYcbcrConversion;
    return result;
}


template <>
VkPhysicalDeviceScalarBlockLayoutFeatures create_structure_copy<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceScalarBlockLayoutFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.scalarBlockLayout = obj.scalarBlockLayout;
    return result;
}


template <>
VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures create_structure_copy<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.separateDepthStencilLayouts = obj.separateDepthStencilLayouts;
    return result;
}


template <>
VkPhysicalDeviceShaderAtomicFloatFeaturesEXT create_structure_copy<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderAtomicFloatFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderBufferFloat32Atomics = obj.shaderBufferFloat32Atomics;
    result.shaderBufferFloat32AtomicAdd = obj.shaderBufferFloat32AtomicAdd;
    result.shaderBufferFloat64Atomics = obj.shaderBufferFloat64Atomics;
    result.shaderBufferFloat64AtomicAdd = obj.shaderBufferFloat64AtomicAdd;
    result.shaderSharedFloat32Atomics = obj.shaderSharedFloat32Atomics;
    result.shaderSharedFloat32AtomicAdd = obj.shaderSharedFloat32AtomicAdd;
    result.shaderSharedFloat64Atomics = obj.shaderSharedFloat64Atomics;
    result.shaderSharedFloat64AtomicAdd = obj.shaderSharedFloat64AtomicAdd;
    result.shaderImageFloat32Atomics = obj.shaderImageFloat32Atomics;
    result.shaderImageFloat32AtomicAdd = obj.shaderImageFloat32AtomicAdd;
    result.sparseImageFloat32Atomics = obj.sparseImageFloat32Atomics;
    result.sparseImageFloat32AtomicAdd = obj.sparseImageFloat32AtomicAdd;
    return result;
}

template <>
VkPhysicalDeviceShaderAtomicInt64Features create_structure_copy<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderAtomicInt64Features result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderBufferInt64Atomics = obj.shaderBufferInt64Atomics;
    result.shaderSharedInt64Atomics = obj.shaderSharedInt64Atomics;
    return result;
}


template <>
VkPhysicalDeviceShaderClockFeaturesKHR create_structure_copy<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderClockFeaturesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderSubgroupClock = obj.shaderSubgroupClock;
    result.shaderDeviceClock = obj.shaderDeviceClock;
    return result;
}

template <>
VkPhysicalDeviceShaderCoreProperties2AMD create_structure_copy<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderCoreProperties2AMD result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderCoreFeatures = obj.shaderCoreFeatures;
    result.activeComputeUnitCount = obj.activeComputeUnitCount;
    return result;
}

template <>
VkPhysicalDeviceShaderCorePropertiesAMD create_structure_copy<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderCorePropertiesAMD result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderEngineCount = obj.shaderEngineCount;
    result.shaderArraysPerEngineCount = obj.shaderArraysPerEngineCount;
    result.computeUnitsPerShaderArray = obj.computeUnitsPerShaderArray;
    result.simdPerComputeUnit = obj.simdPerComputeUnit;
    result.wavefrontsPerSimd = obj.wavefrontsPerSimd;
    result.wavefrontSize = obj.wavefrontSize;
    result.sgprsPerSimd = obj.sgprsPerSimd;
    result.minSgprAllocation = obj.minSgprAllocation;
    result.maxSgprAllocation = obj.maxSgprAllocation;
    result.sgprAllocationGranularity = obj.sgprAllocationGranularity;
    result.vgprsPerSimd = obj.vgprsPerSimd;
    result.minVgprAllocation = obj.minVgprAllocation;
    result.maxVgprAllocation = obj.maxVgprAllocation;
    result.vgprAllocationGranularity = obj.vgprAllocationGranularity;
    return result;
}

template <>
VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT create_structure_copy<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderDemoteToHelperInvocation = obj.shaderDemoteToHelperInvocation;
    return result;
}


template <>
VkPhysicalDeviceShaderDrawParametersFeatures create_structure_copy<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderDrawParametersFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderDrawParameters = obj.shaderDrawParameters;
    return result;
}

template <>
VkPhysicalDeviceShaderFloat16Int8Features create_structure_copy<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderFloat16Int8Features result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderFloat16 = obj.shaderFloat16;
    result.shaderInt8 = obj.shaderInt8;
    return result;
}


template <>
VkPhysicalDeviceShaderImageFootprintFeaturesNV create_structure_copy<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderImageFootprintFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.imageFootprint = obj.imageFootprint;
    return result;
}

template <>
VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL create_structure_copy<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderIntegerFunctions2 = obj.shaderIntegerFunctions2;
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsFeaturesNV create_structure_copy<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderSMBuiltinsFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderSMBuiltins = obj.shaderSMBuiltins;
    return result;
}

template <>
VkPhysicalDeviceShaderSMBuiltinsPropertiesNV create_structure_copy<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderSMCount = obj.shaderSMCount;
    result.shaderWarpsPerSM = obj.shaderWarpsPerSM;
    return result;
}

template <>
VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures create_structure_copy<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shaderSubgroupExtendedTypes = obj.shaderSubgroupExtendedTypes;
    return result;
}


template <>
VkPhysicalDeviceShadingRateImageFeaturesNV create_structure_copy<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShadingRateImageFeaturesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shadingRateImage = obj.shadingRateImage;
    result.shadingRateCoarseSampleOrder = obj.shadingRateCoarseSampleOrder;
    return result;
}

template <>
VkPhysicalDeviceShadingRateImagePropertiesNV create_structure_copy<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceShadingRateImagePropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shadingRateTexelSize = create_structure_copy(obj.shadingRateTexelSize, pAllocator);
    result.shadingRatePaletteSize = obj.shadingRatePaletteSize;
    result.shadingRateMaxCoarseSamples = obj.shadingRateMaxCoarseSamples;
    return result;
}

template <>
VkPhysicalDeviceSparseImageFormatInfo2 create_structure_copy<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSparseImageFormatInfo2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.format = obj.format;
    result.type = obj.type;
    result.samples = obj.samples;
    result.usage = obj.usage;
    result.tiling = obj.tiling;
    return result;
}


template <>
VkPhysicalDeviceSparseProperties create_structure_copy<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSparseProperties result { };
    result.residencyStandard2DBlockShape = obj.residencyStandard2DBlockShape;
    result.residencyStandard2DMultisampleBlockShape = obj.residencyStandard2DMultisampleBlockShape;
    result.residencyStandard3DBlockShape = obj.residencyStandard3DBlockShape;
    result.residencyAlignedMipSize = obj.residencyAlignedMipSize;
    result.residencyNonResidentStrict = obj.residencyNonResidentStrict;
    return result;
}

template <>
VkPhysicalDeviceSubgroupProperties create_structure_copy<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSubgroupProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.subgroupSize = obj.subgroupSize;
    result.supportedStages = obj.supportedStages;
    result.supportedOperations = obj.supportedOperations;
    result.quadOperationsInAllStages = obj.quadOperationsInAllStages;
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlFeaturesEXT create_structure_copy<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSubgroupSizeControlFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.subgroupSizeControl = obj.subgroupSizeControl;
    result.computeFullSubgroups = obj.computeFullSubgroups;
    return result;
}

template <>
VkPhysicalDeviceSubgroupSizeControlPropertiesEXT create_structure_copy<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSubgroupSizeControlPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.minSubgroupSize = obj.minSubgroupSize;
    result.maxSubgroupSize = obj.maxSubgroupSize;
    result.maxComputeWorkgroupSubgroups = obj.maxComputeWorkgroupSubgroups;
    result.requiredSubgroupSizeStages = obj.requiredSubgroupSizeStages;
    return result;
}

template <>
VkPhysicalDeviceSurfaceInfo2KHR create_structure_copy<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceSurfaceInfo2KHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.surface = obj.surface;
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT create_structure_copy<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.texelBufferAlignment = obj.texelBufferAlignment;
    return result;
}

template <>
VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT create_structure_copy<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.storageTexelBufferOffsetAlignmentBytes = obj.storageTexelBufferOffsetAlignmentBytes;
    result.storageTexelBufferOffsetSingleTexelAlignment = obj.storageTexelBufferOffsetSingleTexelAlignment;
    result.uniformTexelBufferOffsetAlignmentBytes = obj.uniformTexelBufferOffsetAlignmentBytes;
    result.uniformTexelBufferOffsetSingleTexelAlignment = obj.uniformTexelBufferOffsetSingleTexelAlignment;
    return result;
}

template <>
VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT create_structure_copy<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.textureCompressionASTC_HDR = obj.textureCompressionASTC_HDR;
    return result;
}

template <>
VkPhysicalDeviceTimelineSemaphoreFeatures create_structure_copy<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceTimelineSemaphoreFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.timelineSemaphore = obj.timelineSemaphore;
    return result;
}


template <>
VkPhysicalDeviceTimelineSemaphoreProperties create_structure_copy<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceTimelineSemaphoreProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxTimelineSemaphoreValueDifference = obj.maxTimelineSemaphoreValueDifference;
    return result;
}


template <>
VkPhysicalDeviceToolPropertiesEXT create_structure_copy<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceToolPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.version, obj.version);
    result.purposes = obj.purposes;
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    create_static_string_copy<VK_MAX_EXTENSION_NAME_SIZE>(result.layer, obj.layer);
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackFeaturesEXT create_structure_copy<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceTransformFeedbackFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.transformFeedback = obj.transformFeedback;
    result.geometryStreams = obj.geometryStreams;
    return result;
}

template <>
VkPhysicalDeviceTransformFeedbackPropertiesEXT create_structure_copy<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceTransformFeedbackPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxTransformFeedbackStreams = obj.maxTransformFeedbackStreams;
    result.maxTransformFeedbackBuffers = obj.maxTransformFeedbackBuffers;
    result.maxTransformFeedbackBufferSize = obj.maxTransformFeedbackBufferSize;
    result.maxTransformFeedbackStreamDataSize = obj.maxTransformFeedbackStreamDataSize;
    result.maxTransformFeedbackBufferDataSize = obj.maxTransformFeedbackBufferDataSize;
    result.maxTransformFeedbackBufferDataStride = obj.maxTransformFeedbackBufferDataStride;
    result.transformFeedbackQueries = obj.transformFeedbackQueries;
    result.transformFeedbackStreamsLinesTriangles = obj.transformFeedbackStreamsLinesTriangles;
    result.transformFeedbackRasterizationStreamSelect = obj.transformFeedbackRasterizationStreamSelect;
    result.transformFeedbackDraw = obj.transformFeedbackDraw;
    return result;
}

template <>
VkPhysicalDeviceUniformBufferStandardLayoutFeatures create_structure_copy<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.uniformBufferStandardLayout = obj.uniformBufferStandardLayout;
    return result;
}




template <>
VkPhysicalDeviceVariablePointersFeatures create_structure_copy<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVariablePointersFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.variablePointersStorageBuffer = obj.variablePointersStorageBuffer;
    result.variablePointers = obj.variablePointers;
    return result;
}


template <>
VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT create_structure_copy<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.vertexAttributeInstanceRateDivisor = obj.vertexAttributeInstanceRateDivisor;
    result.vertexAttributeInstanceRateZeroDivisor = obj.vertexAttributeInstanceRateZeroDivisor;
    return result;
}

template <>
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT create_structure_copy<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxVertexAttribDivisor = obj.maxVertexAttribDivisor;
    return result;
}

template <>
VkPhysicalDeviceVulkan11Features create_structure_copy<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVulkan11Features result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.storageBuffer16BitAccess = obj.storageBuffer16BitAccess;
    result.uniformAndStorageBuffer16BitAccess = obj.uniformAndStorageBuffer16BitAccess;
    result.storagePushConstant16 = obj.storagePushConstant16;
    result.storageInputOutput16 = obj.storageInputOutput16;
    result.multiview = obj.multiview;
    result.multiviewGeometryShader = obj.multiviewGeometryShader;
    result.multiviewTessellationShader = obj.multiviewTessellationShader;
    result.variablePointersStorageBuffer = obj.variablePointersStorageBuffer;
    result.variablePointers = obj.variablePointers;
    result.protectedMemory = obj.protectedMemory;
    result.samplerYcbcrConversion = obj.samplerYcbcrConversion;
    result.shaderDrawParameters = obj.shaderDrawParameters;
    return result;
}

template <>
VkPhysicalDeviceVulkan11Properties create_structure_copy<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVulkan11Properties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    create_static_array_copy<VK_UUID_SIZE>(result.deviceUUID, obj.deviceUUID, pAllocator);
    create_static_array_copy<VK_UUID_SIZE>(result.driverUUID, obj.driverUUID, pAllocator);
    create_static_array_copy<VK_LUID_SIZE>(result.deviceLUID, obj.deviceLUID, pAllocator);
    result.deviceNodeMask = obj.deviceNodeMask;
    result.deviceLUIDValid = obj.deviceLUIDValid;
    result.subgroupSize = obj.subgroupSize;
    result.subgroupSupportedStages = obj.subgroupSupportedStages;
    result.subgroupSupportedOperations = obj.subgroupSupportedOperations;
    result.subgroupQuadOperationsInAllStages = obj.subgroupQuadOperationsInAllStages;
    result.pointClippingBehavior = obj.pointClippingBehavior;
    result.maxMultiviewViewCount = obj.maxMultiviewViewCount;
    result.maxMultiviewInstanceIndex = obj.maxMultiviewInstanceIndex;
    result.protectedNoFault = obj.protectedNoFault;
    result.maxPerSetDescriptors = obj.maxPerSetDescriptors;
    result.maxMemoryAllocationSize = obj.maxMemoryAllocationSize;
    return result;
}

template <>
VkPhysicalDeviceVulkan12Features create_structure_copy<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVulkan12Features result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.samplerMirrorClampToEdge = obj.samplerMirrorClampToEdge;
    result.drawIndirectCount = obj.drawIndirectCount;
    result.storageBuffer8BitAccess = obj.storageBuffer8BitAccess;
    result.uniformAndStorageBuffer8BitAccess = obj.uniformAndStorageBuffer8BitAccess;
    result.storagePushConstant8 = obj.storagePushConstant8;
    result.shaderBufferInt64Atomics = obj.shaderBufferInt64Atomics;
    result.shaderSharedInt64Atomics = obj.shaderSharedInt64Atomics;
    result.shaderFloat16 = obj.shaderFloat16;
    result.shaderInt8 = obj.shaderInt8;
    result.descriptorIndexing = obj.descriptorIndexing;
    result.shaderInputAttachmentArrayDynamicIndexing = obj.shaderInputAttachmentArrayDynamicIndexing;
    result.shaderUniformTexelBufferArrayDynamicIndexing = obj.shaderUniformTexelBufferArrayDynamicIndexing;
    result.shaderStorageTexelBufferArrayDynamicIndexing = obj.shaderStorageTexelBufferArrayDynamicIndexing;
    result.shaderUniformBufferArrayNonUniformIndexing = obj.shaderUniformBufferArrayNonUniformIndexing;
    result.shaderSampledImageArrayNonUniformIndexing = obj.shaderSampledImageArrayNonUniformIndexing;
    result.shaderStorageBufferArrayNonUniformIndexing = obj.shaderStorageBufferArrayNonUniformIndexing;
    result.shaderStorageImageArrayNonUniformIndexing = obj.shaderStorageImageArrayNonUniformIndexing;
    result.shaderInputAttachmentArrayNonUniformIndexing = obj.shaderInputAttachmentArrayNonUniformIndexing;
    result.shaderUniformTexelBufferArrayNonUniformIndexing = obj.shaderUniformTexelBufferArrayNonUniformIndexing;
    result.shaderStorageTexelBufferArrayNonUniformIndexing = obj.shaderStorageTexelBufferArrayNonUniformIndexing;
    result.descriptorBindingUniformBufferUpdateAfterBind = obj.descriptorBindingUniformBufferUpdateAfterBind;
    result.descriptorBindingSampledImageUpdateAfterBind = obj.descriptorBindingSampledImageUpdateAfterBind;
    result.descriptorBindingStorageImageUpdateAfterBind = obj.descriptorBindingStorageImageUpdateAfterBind;
    result.descriptorBindingStorageBufferUpdateAfterBind = obj.descriptorBindingStorageBufferUpdateAfterBind;
    result.descriptorBindingUniformTexelBufferUpdateAfterBind = obj.descriptorBindingUniformTexelBufferUpdateAfterBind;
    result.descriptorBindingStorageTexelBufferUpdateAfterBind = obj.descriptorBindingStorageTexelBufferUpdateAfterBind;
    result.descriptorBindingUpdateUnusedWhilePending = obj.descriptorBindingUpdateUnusedWhilePending;
    result.descriptorBindingPartiallyBound = obj.descriptorBindingPartiallyBound;
    result.descriptorBindingVariableDescriptorCount = obj.descriptorBindingVariableDescriptorCount;
    result.runtimeDescriptorArray = obj.runtimeDescriptorArray;
    result.samplerFilterMinmax = obj.samplerFilterMinmax;
    result.scalarBlockLayout = obj.scalarBlockLayout;
    result.imagelessFramebuffer = obj.imagelessFramebuffer;
    result.uniformBufferStandardLayout = obj.uniformBufferStandardLayout;
    result.shaderSubgroupExtendedTypes = obj.shaderSubgroupExtendedTypes;
    result.separateDepthStencilLayouts = obj.separateDepthStencilLayouts;
    result.hostQueryReset = obj.hostQueryReset;
    result.timelineSemaphore = obj.timelineSemaphore;
    result.bufferDeviceAddress = obj.bufferDeviceAddress;
    result.bufferDeviceAddressCaptureReplay = obj.bufferDeviceAddressCaptureReplay;
    result.bufferDeviceAddressMultiDevice = obj.bufferDeviceAddressMultiDevice;
    result.vulkanMemoryModel = obj.vulkanMemoryModel;
    result.vulkanMemoryModelDeviceScope = obj.vulkanMemoryModelDeviceScope;
    result.vulkanMemoryModelAvailabilityVisibilityChains = obj.vulkanMemoryModelAvailabilityVisibilityChains;
    result.shaderOutputViewportIndex = obj.shaderOutputViewportIndex;
    result.shaderOutputLayer = obj.shaderOutputLayer;
    result.subgroupBroadcastDynamicId = obj.subgroupBroadcastDynamicId;
    return result;
}

template <>
VkPhysicalDeviceVulkan12Properties create_structure_copy<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVulkan12Properties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.driverID = obj.driverID;
    create_static_string_copy<VK_MAX_DRIVER_NAME_SIZE>(result.driverName, obj.driverName);
    create_static_string_copy<VK_MAX_DRIVER_INFO_SIZE>(result.driverInfo, obj.driverInfo);
    result.conformanceVersion = create_structure_copy(obj.conformanceVersion, pAllocator);
    result.denormBehaviorIndependence = obj.denormBehaviorIndependence;
    result.roundingModeIndependence = obj.roundingModeIndependence;
    result.shaderSignedZeroInfNanPreserveFloat16 = obj.shaderSignedZeroInfNanPreserveFloat16;
    result.shaderSignedZeroInfNanPreserveFloat32 = obj.shaderSignedZeroInfNanPreserveFloat32;
    result.shaderSignedZeroInfNanPreserveFloat64 = obj.shaderSignedZeroInfNanPreserveFloat64;
    result.shaderDenormPreserveFloat16 = obj.shaderDenormPreserveFloat16;
    result.shaderDenormPreserveFloat32 = obj.shaderDenormPreserveFloat32;
    result.shaderDenormPreserveFloat64 = obj.shaderDenormPreserveFloat64;
    result.shaderDenormFlushToZeroFloat16 = obj.shaderDenormFlushToZeroFloat16;
    result.shaderDenormFlushToZeroFloat32 = obj.shaderDenormFlushToZeroFloat32;
    result.shaderDenormFlushToZeroFloat64 = obj.shaderDenormFlushToZeroFloat64;
    result.shaderRoundingModeRTEFloat16 = obj.shaderRoundingModeRTEFloat16;
    result.shaderRoundingModeRTEFloat32 = obj.shaderRoundingModeRTEFloat32;
    result.shaderRoundingModeRTEFloat64 = obj.shaderRoundingModeRTEFloat64;
    result.shaderRoundingModeRTZFloat16 = obj.shaderRoundingModeRTZFloat16;
    result.shaderRoundingModeRTZFloat32 = obj.shaderRoundingModeRTZFloat32;
    result.shaderRoundingModeRTZFloat64 = obj.shaderRoundingModeRTZFloat64;
    result.maxUpdateAfterBindDescriptorsInAllPools = obj.maxUpdateAfterBindDescriptorsInAllPools;
    result.shaderUniformBufferArrayNonUniformIndexingNative = obj.shaderUniformBufferArrayNonUniformIndexingNative;
    result.shaderSampledImageArrayNonUniformIndexingNative = obj.shaderSampledImageArrayNonUniformIndexingNative;
    result.shaderStorageBufferArrayNonUniformIndexingNative = obj.shaderStorageBufferArrayNonUniformIndexingNative;
    result.shaderStorageImageArrayNonUniformIndexingNative = obj.shaderStorageImageArrayNonUniformIndexingNative;
    result.shaderInputAttachmentArrayNonUniformIndexingNative = obj.shaderInputAttachmentArrayNonUniformIndexingNative;
    result.robustBufferAccessUpdateAfterBind = obj.robustBufferAccessUpdateAfterBind;
    result.quadDivergentImplicitLod = obj.quadDivergentImplicitLod;
    result.maxPerStageDescriptorUpdateAfterBindSamplers = obj.maxPerStageDescriptorUpdateAfterBindSamplers;
    result.maxPerStageDescriptorUpdateAfterBindUniformBuffers = obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers;
    result.maxPerStageDescriptorUpdateAfterBindStorageBuffers = obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers;
    result.maxPerStageDescriptorUpdateAfterBindSampledImages = obj.maxPerStageDescriptorUpdateAfterBindSampledImages;
    result.maxPerStageDescriptorUpdateAfterBindStorageImages = obj.maxPerStageDescriptorUpdateAfterBindStorageImages;
    result.maxPerStageDescriptorUpdateAfterBindInputAttachments = obj.maxPerStageDescriptorUpdateAfterBindInputAttachments;
    result.maxPerStageUpdateAfterBindResources = obj.maxPerStageUpdateAfterBindResources;
    result.maxDescriptorSetUpdateAfterBindSamplers = obj.maxDescriptorSetUpdateAfterBindSamplers;
    result.maxDescriptorSetUpdateAfterBindUniformBuffers = obj.maxDescriptorSetUpdateAfterBindUniformBuffers;
    result.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
    result.maxDescriptorSetUpdateAfterBindStorageBuffers = obj.maxDescriptorSetUpdateAfterBindStorageBuffers;
    result.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic = obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
    result.maxDescriptorSetUpdateAfterBindSampledImages = obj.maxDescriptorSetUpdateAfterBindSampledImages;
    result.maxDescriptorSetUpdateAfterBindStorageImages = obj.maxDescriptorSetUpdateAfterBindStorageImages;
    result.maxDescriptorSetUpdateAfterBindInputAttachments = obj.maxDescriptorSetUpdateAfterBindInputAttachments;
    result.supportedDepthResolveModes = obj.supportedDepthResolveModes;
    result.supportedStencilResolveModes = obj.supportedStencilResolveModes;
    result.independentResolveNone = obj.independentResolveNone;
    result.independentResolve = obj.independentResolve;
    result.filterMinmaxSingleComponentFormats = obj.filterMinmaxSingleComponentFormats;
    result.filterMinmaxImageComponentMapping = obj.filterMinmaxImageComponentMapping;
    result.maxTimelineSemaphoreValueDifference = obj.maxTimelineSemaphoreValueDifference;
    result.framebufferIntegerColorSampleCounts = obj.framebufferIntegerColorSampleCounts;
    return result;
}

template <>
VkPhysicalDeviceVulkanMemoryModelFeatures create_structure_copy<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceVulkanMemoryModelFeatures result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.vulkanMemoryModel = obj.vulkanMemoryModel;
    result.vulkanMemoryModelDeviceScope = obj.vulkanMemoryModelDeviceScope;
    result.vulkanMemoryModelAvailabilityVisibilityChains = obj.vulkanMemoryModelAvailabilityVisibilityChains;
    return result;
}


template <>
VkPhysicalDeviceYcbcrImageArraysFeaturesEXT create_structure_copy<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPhysicalDeviceYcbcrImageArraysFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.ycbcrImageArrays = obj.ycbcrImageArrays;
    return result;
}


template <>
VkPipelineColorBlendAdvancedStateCreateInfoEXT create_structure_copy<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineColorBlendAdvancedStateCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.srcPremultiplied = obj.srcPremultiplied;
    result.dstPremultiplied = obj.dstPremultiplied;
    result.blendOverlap = obj.blendOverlap;
    return result;
}

template <>
VkPipelineColorBlendAttachmentState create_structure_copy<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineColorBlendAttachmentState result { };
    result.blendEnable = obj.blendEnable;
    result.srcColorBlendFactor = obj.srcColorBlendFactor;
    result.dstColorBlendFactor = obj.dstColorBlendFactor;
    result.colorBlendOp = obj.colorBlendOp;
    result.srcAlphaBlendFactor = obj.srcAlphaBlendFactor;
    result.dstAlphaBlendFactor = obj.dstAlphaBlendFactor;
    result.alphaBlendOp = obj.alphaBlendOp;
    result.colorWriteMask = obj.colorWriteMask;
    return result;
}

template <>
VkPipelineColorBlendStateCreateInfo create_structure_copy<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineColorBlendStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.logicOpEnable = obj.logicOpEnable;
    result.logicOp = obj.logicOp;
    result.attachmentCount = obj.attachmentCount;
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    create_static_array_copy<4>(result.blendConstants, obj.blendConstants, pAllocator);
    return result;
}

template <>
VkPipelineCompilerControlCreateInfoAMD create_structure_copy<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineCompilerControlCreateInfoAMD result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.compilerControlFlags = obj.compilerControlFlags;
    return result;
}

template <>
VkPipelineCoverageModulationStateCreateInfoNV create_structure_copy<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineCoverageModulationStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.coverageModulationMode = obj.coverageModulationMode;
    result.coverageModulationTableEnable = obj.coverageModulationTableEnable;
    result.coverageModulationTableCount = obj.coverageModulationTableCount;
    result.pCoverageModulationTable = create_dynamic_array_copy(obj.coverageModulationTableCount, obj.pCoverageModulationTable, pAllocator);
    return result;
}

template <>
VkPipelineCoverageReductionStateCreateInfoNV create_structure_copy<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineCoverageReductionStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.coverageReductionMode = obj.coverageReductionMode;
    return result;
}

template <>
VkPipelineCoverageToColorStateCreateInfoNV create_structure_copy<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineCoverageToColorStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.coverageToColorEnable = obj.coverageToColorEnable;
    result.coverageToColorLocation = obj.coverageToColorLocation;
    return result;
}

template <>
VkPipelineCreationFeedbackCreateInfoEXT create_structure_copy<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineCreationFeedbackCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pPipelineCreationFeedback = create_dynamic_array_copy(1, obj.pPipelineCreationFeedback, pAllocator);
    result.pipelineStageCreationFeedbackCount = obj.pipelineStageCreationFeedbackCount;
    result.pPipelineStageCreationFeedbacks = create_dynamic_array_copy(obj.pipelineStageCreationFeedbackCount, obj.pPipelineStageCreationFeedbacks, pAllocator);
    return result;
}

template <>
VkPipelineCreationFeedbackEXT create_structure_copy<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineCreationFeedbackEXT result { };
    result.flags = obj.flags;
    result.duration = obj.duration;
    return result;
}

template <>
VkPipelineDepthStencilStateCreateInfo create_structure_copy<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineDepthStencilStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.depthTestEnable = obj.depthTestEnable;
    result.depthWriteEnable = obj.depthWriteEnable;
    result.depthCompareOp = obj.depthCompareOp;
    result.depthBoundsTestEnable = obj.depthBoundsTestEnable;
    result.stencilTestEnable = obj.stencilTestEnable;
    result.front = create_structure_copy(obj.front, pAllocator);
    result.back = create_structure_copy(obj.back, pAllocator);
    result.minDepthBounds = obj.minDepthBounds;
    result.maxDepthBounds = obj.maxDepthBounds;
    return result;
}

template <>
VkPipelineDiscardRectangleStateCreateInfoEXT create_structure_copy<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineDiscardRectangleStateCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.discardRectangleMode = obj.discardRectangleMode;
    result.discardRectangleCount = obj.discardRectangleCount;
    result.pDiscardRectangles = create_dynamic_array_copy(obj.discardRectangleCount, obj.pDiscardRectangles, pAllocator);
    return result;
}

template <>
VkPipelineDynamicStateCreateInfo create_structure_copy<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineDynamicStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.dynamicStateCount = obj.dynamicStateCount;
    result.pDynamicStates = create_dynamic_array_copy(obj.dynamicStateCount, obj.pDynamicStates, pAllocator);
    return result;
}

template <>
VkPipelineExecutableInfoKHR create_structure_copy<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineExecutableInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pipeline = obj.pipeline;
    result.executableIndex = obj.executableIndex;
    return result;
}


template <>
VkPipelineExecutablePropertiesKHR create_structure_copy<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineExecutablePropertiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.stages = obj.stages;
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    result.subgroupSize = obj.subgroupSize;
    return result;
}

template <>
VkPipelineExecutableStatisticKHR create_structure_copy<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineExecutableStatisticKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.name, obj.name);
    create_static_string_copy<VK_MAX_DESCRIPTION_SIZE>(result.description, obj.description);
    result.format = obj.format;
    result.value = create_structure_copy(obj.value, pAllocator);
    return result;
}


template <>
VkPipelineInfoKHR create_structure_copy<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.pipeline = obj.pipeline;
    return result;
}

template <>
VkPipelineInputAssemblyStateCreateInfo create_structure_copy<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineInputAssemblyStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.topology = obj.topology;
    result.primitiveRestartEnable = obj.primitiveRestartEnable;
    return result;
}

template <>
VkPipelineLayoutCreateInfo create_structure_copy<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineLayoutCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.setLayoutCount = obj.setLayoutCount;
    result.pSetLayouts = create_dynamic_array_copy(obj.setLayoutCount, obj.pSetLayouts, pAllocator);
    result.pushConstantRangeCount = obj.pushConstantRangeCount;
    result.pPushConstantRanges = create_dynamic_array_copy(obj.pushConstantRangeCount, obj.pPushConstantRanges, pAllocator);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkPipelineLibraryCreateInfoKHR create_structure_copy<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineLibraryCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.libraryCount = obj.libraryCount;
    result.pLibraries = create_dynamic_array_copy(obj.libraryCount, obj.pLibraries, pAllocator);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
VkPipelineRasterizationConservativeStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineRasterizationConservativeStateCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.conservativeRasterizationMode = obj.conservativeRasterizationMode;
    result.extraPrimitiveOverestimationSize = obj.extraPrimitiveOverestimationSize;
    return result;
}

template <>
VkPipelineRasterizationDepthClipStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineRasterizationDepthClipStateCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.depthClipEnable = obj.depthClipEnable;
    return result;
}

template <>
VkPipelineRasterizationLineStateCreateInfoEXT create_structure_copy<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineRasterizationLineStateCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.lineRasterizationMode = obj.lineRasterizationMode;
    result.stippledLineEnable = obj.stippledLineEnable;
    result.lineStippleFactor = obj.lineStippleFactor;
    result.lineStipplePattern = obj.lineStipplePattern;
    return result;
}

template <>
VkPipelineRasterizationStateCreateInfo create_structure_copy<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineRasterizationStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.depthClampEnable = obj.depthClampEnable;
    result.rasterizerDiscardEnable = obj.rasterizerDiscardEnable;
    result.polygonMode = obj.polygonMode;
    result.cullMode = obj.cullMode;
    result.frontFace = obj.frontFace;
    result.depthBiasEnable = obj.depthBiasEnable;
    result.depthBiasConstantFactor = obj.depthBiasConstantFactor;
    result.depthBiasClamp = obj.depthBiasClamp;
    result.depthBiasSlopeFactor = obj.depthBiasSlopeFactor;
    result.lineWidth = obj.lineWidth;
    return result;
}

template <>
VkPipelineRasterizationStateRasterizationOrderAMD create_structure_copy<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineRasterizationStateRasterizationOrderAMD result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.rasterizationOrder = obj.rasterizationOrder;
    return result;
}

template <>
VkPipelineRasterizationStateStreamCreateInfoEXT create_structure_copy<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineRasterizationStateStreamCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.rasterizationStream = obj.rasterizationStream;
    return result;
}

template <>
VkPipelineRepresentativeFragmentTestStateCreateInfoNV create_structure_copy<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.representativeFragmentTestEnable = obj.representativeFragmentTestEnable;
    return result;
}

template <>
VkPipelineSampleLocationsStateCreateInfoEXT create_structure_copy<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineSampleLocationsStateCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.sampleLocationsEnable = obj.sampleLocationsEnable;
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocator);
    return result;
}

template <>
VkPipelineShaderStageCreateInfo create_structure_copy<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineShaderStageCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.stage = obj.stage;
    result.module = obj.module;
    result.pName = create_dynamic_string_copy(obj.pName, pAllocator);
    result.pSpecializationInfo = create_dynamic_array_copy(1, obj.pSpecializationInfo, pAllocator);
    return result;
}

template <>
VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT create_structure_copy<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.requiredSubgroupSize = obj.requiredSubgroupSize;
    return result;
}

template <>
VkPipelineTessellationDomainOriginStateCreateInfo create_structure_copy<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineTessellationDomainOriginStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.domainOrigin = obj.domainOrigin;
    return result;
}


template <>
VkPipelineTessellationStateCreateInfo create_structure_copy<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineTessellationStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.patchControlPoints = obj.patchControlPoints;
    return result;
}

template <>
VkPipelineVertexInputDivisorStateCreateInfoEXT create_structure_copy<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineVertexInputDivisorStateCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.vertexBindingDivisorCount = obj.vertexBindingDivisorCount;
    result.pVertexBindingDivisors = create_dynamic_array_copy(obj.vertexBindingDivisorCount, obj.pVertexBindingDivisors, pAllocator);
    return result;
}

template <>
VkPipelineVertexInputStateCreateInfo create_structure_copy<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineVertexInputStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.vertexBindingDescriptionCount = obj.vertexBindingDescriptionCount;
    result.pVertexBindingDescriptions = create_dynamic_array_copy(obj.vertexBindingDescriptionCount, obj.pVertexBindingDescriptions, pAllocator);
    result.vertexAttributeDescriptionCount = obj.vertexAttributeDescriptionCount;
    result.pVertexAttributeDescriptions = create_dynamic_array_copy(obj.vertexAttributeDescriptionCount, obj.pVertexAttributeDescriptions, pAllocator);
    return result;
}

template <>
VkPipelineViewportCoarseSampleOrderStateCreateInfoNV create_structure_copy<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.sampleOrderType = obj.sampleOrderType;
    result.customSampleOrderCount = obj.customSampleOrderCount;
    result.pCustomSampleOrders = create_dynamic_array_copy(obj.customSampleOrderCount, obj.pCustomSampleOrders, pAllocator);
    return result;
}

template <>
VkPipelineViewportExclusiveScissorStateCreateInfoNV create_structure_copy<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineViewportExclusiveScissorStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.exclusiveScissorCount = obj.exclusiveScissorCount;
    result.pExclusiveScissors = create_dynamic_array_copy(obj.exclusiveScissorCount, obj.pExclusiveScissors, pAllocator);
    return result;
}

template <>
VkPipelineViewportShadingRateImageStateCreateInfoNV create_structure_copy<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineViewportShadingRateImageStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.shadingRateImageEnable = obj.shadingRateImageEnable;
    result.viewportCount = obj.viewportCount;
    result.pShadingRatePalettes = create_dynamic_array_copy(obj.viewportCount, obj.pShadingRatePalettes, pAllocator);
    return result;
}

template <>
VkPipelineViewportStateCreateInfo create_structure_copy<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineViewportStateCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.viewportCount = obj.viewportCount;
    result.pViewports = create_dynamic_array_copy(obj.viewportCount, obj.pViewports, pAllocator);
    result.scissorCount = obj.scissorCount;
    result.pScissors = create_dynamic_array_copy(obj.scissorCount, obj.pScissors, pAllocator);
    return result;
}

template <>
VkPipelineViewportSwizzleStateCreateInfoNV create_structure_copy<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineViewportSwizzleStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.viewportCount = obj.viewportCount;
    result.pViewportSwizzles = create_dynamic_array_copy(obj.viewportCount, obj.pViewportSwizzles, pAllocator);
    return result;
}

template <>
VkPipelineViewportWScalingStateCreateInfoNV create_structure_copy<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPipelineViewportWScalingStateCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.viewportWScalingEnable = obj.viewportWScalingEnable;
    result.viewportCount = obj.viewportCount;
    result.pViewportWScalings = create_dynamic_array_copy(obj.viewportCount, obj.pViewportWScalings, pAllocator);
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkPresentFrameTokenGGP create_structure_copy<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPresentFrameTokenGGP result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.frameToken = obj.frameToken;
    return result;
}
#endif // VK_USE_PLATFORM_GGP

template <>
VkPresentInfoKHR create_structure_copy<VkPresentInfoKHR>(const VkPresentInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPresentInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocator);
    result.swapchainCount = obj.swapchainCount;
    result.pSwapchains = create_dynamic_array_copy(obj.swapchainCount, obj.pSwapchains, pAllocator);
    result.pImageIndices = create_dynamic_array_copy(obj.swapchainCount, obj.pImageIndices, pAllocator);
    result.pResults = create_dynamic_array_copy(obj.swapchainCount, obj.pResults, pAllocator);
    return result;
}

template <>
VkPresentRegionKHR create_structure_copy<VkPresentRegionKHR>(const VkPresentRegionKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPresentRegionKHR result { };
    result.rectangleCount = obj.rectangleCount;
    result.pRectangles = create_dynamic_array_copy(obj.rectangleCount, obj.pRectangles, pAllocator);
    return result;
}

template <>
VkPresentRegionsKHR create_structure_copy<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPresentRegionsKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.swapchainCount = obj.swapchainCount;
    result.pRegions = create_dynamic_array_copy(obj.swapchainCount, obj.pRegions, pAllocator);
    return result;
}

template <>
VkPresentTimeGOOGLE create_structure_copy<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPresentTimeGOOGLE result { };
    result.presentID = obj.presentID;
    result.desiredPresentTime = obj.desiredPresentTime;
    return result;
}

template <>
VkPresentTimesInfoGOOGLE create_structure_copy<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPresentTimesInfoGOOGLE result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.swapchainCount = obj.swapchainCount;
    result.pTimes = create_dynamic_array_copy(obj.swapchainCount, obj.pTimes, pAllocator);
    return result;
}

template <>
VkPrivateDataSlotCreateInfoEXT create_structure_copy<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPrivateDataSlotCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    return result;
}

template <>
VkProtectedSubmitInfo create_structure_copy<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkProtectedSubmitInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.protectedSubmit = obj.protectedSubmit;
    return result;
}

template <>
VkPushConstantRange create_structure_copy<VkPushConstantRange>(const VkPushConstantRange& obj, const VkAllocationCallbacks* pAllocator)
{
    VkPushConstantRange result { };
    result.stageFlags = obj.stageFlags;
    result.offset = obj.offset;
    result.size = obj.size;
    return result;
}

template <>
VkQueryPoolCreateInfo create_structure_copy<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkQueryPoolCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.queryType = obj.queryType;
    result.queryCount = obj.queryCount;
    result.pipelineStatistics = obj.pipelineStatistics;
    return result;
}


template <>
VkQueryPoolPerformanceCreateInfoKHR create_structure_copy<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkQueryPoolPerformanceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.queueFamilyIndex = obj.queueFamilyIndex;
    result.counterIndexCount = obj.counterIndexCount;
    result.pCounterIndices = create_dynamic_array_copy(obj.counterIndexCount, obj.pCounterIndices, pAllocator);
    return result;
}

template <>
VkQueryPoolPerformanceQueryCreateInfoINTEL create_structure_copy<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj, const VkAllocationCallbacks* pAllocator)
{
    VkQueryPoolPerformanceQueryCreateInfoINTEL result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.performanceCountersSampling = obj.performanceCountersSampling;
    return result;
}

template <>
VkQueueFamilyCheckpointPropertiesNV create_structure_copy<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkQueueFamilyCheckpointPropertiesNV result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.checkpointExecutionStageMask = obj.checkpointExecutionStageMask;
    return result;
}

template <>
VkQueueFamilyProperties create_structure_copy<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkQueueFamilyProperties result { };
    result.queueFlags = obj.queueFlags;
    result.queueCount = obj.queueCount;
    result.timestampValidBits = obj.timestampValidBits;
    result.minImageTransferGranularity = create_structure_copy(obj.minImageTransferGranularity, pAllocator);
    return result;
}

template <>
VkQueueFamilyProperties2 create_structure_copy<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkQueueFamilyProperties2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.queueFamilyProperties = create_structure_copy(obj.queueFamilyProperties, pAllocator);
    return result;
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineCreateInfoKHR create_structure_copy<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRayTracingPipelineCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.stageCount = obj.stageCount;
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    result.groupCount = obj.groupCount;
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocator);
    result.maxRecursionDepth = obj.maxRecursionDepth;
    result.libraries = create_structure_copy(obj.libraries, pAllocator);
    result.pLibraryInterface = create_dynamic_array_copy(1, obj.pLibraryInterface, pAllocator);
    result.layout = obj.layout;
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingPipelineCreateInfoNV create_structure_copy<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRayTracingPipelineCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.stageCount = obj.stageCount;
    result.pStages = create_dynamic_array_copy(obj.stageCount, obj.pStages, pAllocator);
    result.groupCount = obj.groupCount;
    result.pGroups = create_dynamic_array_copy(obj.groupCount, obj.pGroups, pAllocator);
    result.maxRecursionDepth = obj.maxRecursionDepth;
    result.layout = obj.layout;
    result.basePipelineHandle = obj.basePipelineHandle;
    result.basePipelineIndex = obj.basePipelineIndex;
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingPipelineInterfaceCreateInfoKHR create_structure_copy<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRayTracingPipelineInterfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.maxPayloadSize = obj.maxPayloadSize;
    result.maxAttributeSize = obj.maxAttributeSize;
    result.maxCallableSize = obj.maxCallableSize;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkRayTracingShaderGroupCreateInfoKHR create_structure_copy<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRayTracingShaderGroupCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.type = obj.type;
    result.generalShader = obj.generalShader;
    result.closestHitShader = obj.closestHitShader;
    result.anyHitShader = obj.anyHitShader;
    result.intersectionShader = obj.intersectionShader;
    result.pShaderGroupCaptureReplayHandle = obj.pShaderGroupCaptureReplayHandle;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkRayTracingShaderGroupCreateInfoNV create_structure_copy<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRayTracingShaderGroupCreateInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.type = obj.type;
    result.generalShader = obj.generalShader;
    result.closestHitShader = obj.closestHitShader;
    result.anyHitShader = obj.anyHitShader;
    result.intersectionShader = obj.intersectionShader;
    return result;
}

template <>
VkRect2D create_structure_copy<VkRect2D>(const VkRect2D& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRect2D result { };
    result.offset = create_structure_copy(obj.offset, pAllocator);
    result.extent = create_structure_copy(obj.extent, pAllocator);
    return result;
}

template <>
VkRectLayerKHR create_structure_copy<VkRectLayerKHR>(const VkRectLayerKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRectLayerKHR result { };
    result.offset = create_structure_copy(obj.offset, pAllocator);
    result.extent = create_structure_copy(obj.extent, pAllocator);
    result.layer = obj.layer;
    return result;
}

template <>
VkRefreshCycleDurationGOOGLE create_structure_copy<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRefreshCycleDurationGOOGLE result { };
    result.refreshDuration = obj.refreshDuration;
    return result;
}

template <>
VkRenderPassAttachmentBeginInfo create_structure_copy<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassAttachmentBeginInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.attachmentCount = obj.attachmentCount;
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    return result;
}


template <>
VkRenderPassBeginInfo create_structure_copy<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassBeginInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.renderPass = obj.renderPass;
    result.framebuffer = obj.framebuffer;
    result.renderArea = create_structure_copy(obj.renderArea, pAllocator);
    result.clearValueCount = obj.clearValueCount;
    result.pClearValues = create_dynamic_array_copy(obj.clearValueCount, obj.pClearValues, pAllocator);
    return result;
}

template <>
VkRenderPassCreateInfo create_structure_copy<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.attachmentCount = obj.attachmentCount;
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    result.subpassCount = obj.subpassCount;
    result.pSubpasses = create_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocator);
    result.dependencyCount = obj.dependencyCount;
    result.pDependencies = create_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocator);
    return result;
}

template <>
VkRenderPassCreateInfo2 create_structure_copy<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassCreateInfo2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.attachmentCount = obj.attachmentCount;
    result.pAttachments = create_dynamic_array_copy(obj.attachmentCount, obj.pAttachments, pAllocator);
    result.subpassCount = obj.subpassCount;
    result.pSubpasses = create_dynamic_array_copy(obj.subpassCount, obj.pSubpasses, pAllocator);
    result.dependencyCount = obj.dependencyCount;
    result.pDependencies = create_dynamic_array_copy(obj.dependencyCount, obj.pDependencies, pAllocator);
    result.correlatedViewMaskCount = obj.correlatedViewMaskCount;
    result.pCorrelatedViewMasks = create_dynamic_array_copy(obj.correlatedViewMaskCount, obj.pCorrelatedViewMasks, pAllocator);
    return result;
}


template <>
VkRenderPassFragmentDensityMapCreateInfoEXT create_structure_copy<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassFragmentDensityMapCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fragmentDensityMapAttachment = create_structure_copy(obj.fragmentDensityMapAttachment, pAllocator);
    return result;
}

template <>
VkRenderPassInputAttachmentAspectCreateInfo create_structure_copy<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassInputAttachmentAspectCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.aspectReferenceCount = obj.aspectReferenceCount;
    result.pAspectReferences = create_dynamic_array_copy(obj.aspectReferenceCount, obj.pAspectReferences, pAllocator);
    return result;
}


template <>
VkRenderPassMultiviewCreateInfo create_structure_copy<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassMultiviewCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.subpassCount = obj.subpassCount;
    result.pViewMasks = create_dynamic_array_copy(obj.subpassCount, obj.pViewMasks, pAllocator);
    result.dependencyCount = obj.dependencyCount;
    result.pViewOffsets = create_dynamic_array_copy(obj.dependencyCount, obj.pViewOffsets, pAllocator);
    result.correlationMaskCount = obj.correlationMaskCount;
    result.pCorrelationMasks = create_dynamic_array_copy(obj.correlationMaskCount, obj.pCorrelationMasks, pAllocator);
    return result;
}


template <>
VkRenderPassSampleLocationsBeginInfoEXT create_structure_copy<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassSampleLocationsBeginInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.attachmentInitialSampleLocationsCount = obj.attachmentInitialSampleLocationsCount;
    result.pAttachmentInitialSampleLocations = create_dynamic_array_copy(obj.attachmentInitialSampleLocationsCount, obj.pAttachmentInitialSampleLocations, pAllocator);
    result.postSubpassSampleLocationsCount = obj.postSubpassSampleLocationsCount;
    result.pPostSubpassSampleLocations = create_dynamic_array_copy(obj.postSubpassSampleLocationsCount, obj.pPostSubpassSampleLocations, pAllocator);
    return result;
}

template <>
VkRenderPassTransformBeginInfoQCOM create_structure_copy<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj, const VkAllocationCallbacks* pAllocator)
{
    VkRenderPassTransformBeginInfoQCOM result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.transform = obj.transform;
    return result;
}

template <>
VkSampleLocationEXT create_structure_copy<VkSampleLocationEXT>(const VkSampleLocationEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSampleLocationEXT result { };
    result.x = obj.x;
    result.y = obj.y;
    return result;
}

template <>
VkSampleLocationsInfoEXT create_structure_copy<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSampleLocationsInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.sampleLocationsPerPixel = obj.sampleLocationsPerPixel;
    result.sampleLocationGridSize = create_structure_copy(obj.sampleLocationGridSize, pAllocator);
    result.sampleLocationsCount = obj.sampleLocationsCount;
    result.pSampleLocations = create_dynamic_array_copy(obj.sampleLocationsCount, obj.pSampleLocations, pAllocator);
    return result;
}

template <>
VkSamplerCreateInfo create_structure_copy<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSamplerCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.magFilter = obj.magFilter;
    result.minFilter = obj.minFilter;
    result.mipmapMode = obj.mipmapMode;
    result.addressModeU = obj.addressModeU;
    result.addressModeV = obj.addressModeV;
    result.addressModeW = obj.addressModeW;
    result.mipLodBias = obj.mipLodBias;
    result.anisotropyEnable = obj.anisotropyEnable;
    result.maxAnisotropy = obj.maxAnisotropy;
    result.compareEnable = obj.compareEnable;
    result.compareOp = obj.compareOp;
    result.minLod = obj.minLod;
    result.maxLod = obj.maxLod;
    result.borderColor = obj.borderColor;
    result.unnormalizedCoordinates = obj.unnormalizedCoordinates;
    return result;
}

template <>
VkSamplerCustomBorderColorCreateInfoEXT create_structure_copy<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSamplerCustomBorderColorCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.customBorderColor = create_structure_copy(obj.customBorderColor, pAllocator);
    result.format = obj.format;
    return result;
}

template <>
VkSamplerReductionModeCreateInfo create_structure_copy<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSamplerReductionModeCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.reductionMode = obj.reductionMode;
    return result;
}


template <>
VkSamplerYcbcrConversionCreateInfo create_structure_copy<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSamplerYcbcrConversionCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.format = obj.format;
    result.ycbcrModel = obj.ycbcrModel;
    result.ycbcrRange = obj.ycbcrRange;
    result.components = create_structure_copy(obj.components, pAllocator);
    result.xChromaOffset = obj.xChromaOffset;
    result.yChromaOffset = obj.yChromaOffset;
    result.chromaFilter = obj.chromaFilter;
    result.forceExplicitReconstruction = obj.forceExplicitReconstruction;
    return result;
}


template <>
VkSamplerYcbcrConversionImageFormatProperties create_structure_copy<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSamplerYcbcrConversionImageFormatProperties result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.combinedImageSamplerDescriptorCount = obj.combinedImageSamplerDescriptorCount;
    return result;
}


template <>
VkSamplerYcbcrConversionInfo create_structure_copy<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSamplerYcbcrConversionInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.conversion = obj.conversion;
    return result;
}


template <>
VkSemaphoreCreateInfo create_structure_copy<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSemaphoreCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    return result;
}

template <>
VkSemaphoreGetFdInfoKHR create_structure_copy<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSemaphoreGetFdInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.semaphore = obj.semaphore;
    result.handleType = obj.handleType;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSemaphoreGetWin32HandleInfoKHR create_structure_copy<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSemaphoreGetWin32HandleInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.semaphore = obj.semaphore;
    result.handleType = obj.handleType;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSemaphoreSignalInfo create_structure_copy<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSemaphoreSignalInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.semaphore = obj.semaphore;
    result.value = obj.value;
    return result;
}


template <>
VkSemaphoreTypeCreateInfo create_structure_copy<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSemaphoreTypeCreateInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.semaphoreType = obj.semaphoreType;
    result.initialValue = obj.initialValue;
    return result;
}


template <>
VkSemaphoreWaitInfo create_structure_copy<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSemaphoreWaitInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.semaphoreCount = obj.semaphoreCount;
    result.pSemaphores = create_dynamic_array_copy(obj.semaphoreCount, obj.pSemaphores, pAllocator);
    result.pValues = create_dynamic_array_copy(obj.semaphoreCount, obj.pValues, pAllocator);
    return result;
}


template <>
VkSetStateFlagsIndirectCommandNV create_structure_copy<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSetStateFlagsIndirectCommandNV result { };
    result.data = obj.data;
    return result;
}


template <>
VkShaderModuleValidationCacheCreateInfoEXT create_structure_copy<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkShaderModuleValidationCacheCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.validationCache = obj.validationCache;
    return result;
}

template <>
VkShaderResourceUsageAMD create_structure_copy<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkShaderResourceUsageAMD result { };
    result.numUsedVgprs = obj.numUsedVgprs;
    result.numUsedSgprs = obj.numUsedSgprs;
    result.ldsSizePerLocalWorkGroup = obj.ldsSizePerLocalWorkGroup;
    result.ldsUsageSizeInBytes = obj.ldsUsageSizeInBytes;
    result.scratchMemUsageInBytes = obj.scratchMemUsageInBytes;
    return result;
}

template <>
VkShaderStatisticsInfoAMD create_structure_copy<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkShaderStatisticsInfoAMD result { };
    result.shaderStageMask = obj.shaderStageMask;
    result.resourceUsage = create_structure_copy(obj.resourceUsage, pAllocator);
    result.numPhysicalVgprs = obj.numPhysicalVgprs;
    result.numPhysicalSgprs = obj.numPhysicalSgprs;
    result.numAvailableVgprs = obj.numAvailableVgprs;
    result.numAvailableSgprs = obj.numAvailableSgprs;
    create_static_array_copy<3>(result.computeWorkGroupSize, obj.computeWorkGroupSize, pAllocator);
    return result;
}

template <>
VkShadingRatePaletteNV create_structure_copy<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkShadingRatePaletteNV result { };
    result.shadingRatePaletteEntryCount = obj.shadingRatePaletteEntryCount;
    result.pShadingRatePaletteEntries = create_dynamic_array_copy(obj.shadingRatePaletteEntryCount, obj.pShadingRatePaletteEntries, pAllocator);
    return result;
}

template <>
VkSharedPresentSurfaceCapabilitiesKHR create_structure_copy<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSharedPresentSurfaceCapabilitiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.sharedPresentSupportedUsageFlags = obj.sharedPresentSupportedUsageFlags;
    return result;
}

template <>
VkSparseBufferMemoryBindInfo create_structure_copy<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseBufferMemoryBindInfo result { };
    result.buffer = obj.buffer;
    result.bindCount = obj.bindCount;
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocator);
    return result;
}

template <>
VkSparseImageFormatProperties create_structure_copy<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseImageFormatProperties result { };
    result.aspectMask = obj.aspectMask;
    result.imageGranularity = create_structure_copy(obj.imageGranularity, pAllocator);
    result.flags = obj.flags;
    return result;
}

template <>
VkSparseImageFormatProperties2 create_structure_copy<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseImageFormatProperties2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.properties = create_structure_copy(obj.properties, pAllocator);
    return result;
}


template <>
VkSparseImageMemoryBind create_structure_copy<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseImageMemoryBind result { };
    result.subresource = create_structure_copy(obj.subresource, pAllocator);
    result.offset = create_structure_copy(obj.offset, pAllocator);
    result.extent = create_structure_copy(obj.extent, pAllocator);
    result.memory = obj.memory;
    result.memoryOffset = obj.memoryOffset;
    result.flags = obj.flags;
    return result;
}

template <>
VkSparseImageMemoryBindInfo create_structure_copy<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseImageMemoryBindInfo result { };
    result.image = obj.image;
    result.bindCount = obj.bindCount;
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocator);
    return result;
}

template <>
VkSparseImageMemoryRequirements create_structure_copy<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseImageMemoryRequirements result { };
    result.formatProperties = create_structure_copy(obj.formatProperties, pAllocator);
    result.imageMipTailFirstLod = obj.imageMipTailFirstLod;
    result.imageMipTailSize = obj.imageMipTailSize;
    result.imageMipTailOffset = obj.imageMipTailOffset;
    result.imageMipTailStride = obj.imageMipTailStride;
    return result;
}

template <>
VkSparseImageMemoryRequirements2 create_structure_copy<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseImageMemoryRequirements2 result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.memoryRequirements = create_structure_copy(obj.memoryRequirements, pAllocator);
    return result;
}


template <>
VkSparseImageOpaqueMemoryBindInfo create_structure_copy<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseImageOpaqueMemoryBindInfo result { };
    result.image = obj.image;
    result.bindCount = obj.bindCount;
    result.pBinds = create_dynamic_array_copy(obj.bindCount, obj.pBinds, pAllocator);
    return result;
}

template <>
VkSparseMemoryBind create_structure_copy<VkSparseMemoryBind>(const VkSparseMemoryBind& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSparseMemoryBind result { };
    result.resourceOffset = obj.resourceOffset;
    result.size = obj.size;
    result.memory = obj.memory;
    result.memoryOffset = obj.memoryOffset;
    result.flags = obj.flags;
    return result;
}


template <>
VkSpecializationMapEntry create_structure_copy<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSpecializationMapEntry result { };
    result.constantID = obj.constantID;
    result.offset = obj.offset;
    result.size = obj.size;
    return result;
}

template <>
VkStencilOpState create_structure_copy<VkStencilOpState>(const VkStencilOpState& obj, const VkAllocationCallbacks* pAllocator)
{
    VkStencilOpState result { };
    result.failOp = obj.failOp;
    result.passOp = obj.passOp;
    result.depthFailOp = obj.depthFailOp;
    result.compareOp = obj.compareOp;
    result.compareMask = obj.compareMask;
    result.writeMask = obj.writeMask;
    result.reference = obj.reference;
    return result;
}

#ifdef VK_USE_PLATFORM_GGP
template <>
VkStreamDescriptorSurfaceCreateInfoGGP create_structure_copy<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj, const VkAllocationCallbacks* pAllocator)
{
    VkStreamDescriptorSurfaceCreateInfoGGP result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.streamDescriptor = obj.streamDescriptor;
    return result;
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkStridedBufferRegionKHR create_structure_copy<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkStridedBufferRegionKHR result { };
    result.buffer = obj.buffer;
    result.offset = obj.offset;
    result.stride = obj.stride;
    result.size = obj.size;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
VkSubmitInfo create_structure_copy<VkSubmitInfo>(const VkSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubmitInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.waitSemaphoreCount = obj.waitSemaphoreCount;
    result.pWaitSemaphores = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitSemaphores, pAllocator);
    result.pWaitDstStageMask = create_dynamic_array_copy(obj.waitSemaphoreCount, obj.pWaitDstStageMask, pAllocator);
    result.commandBufferCount = obj.commandBufferCount;
    result.pCommandBuffers = create_dynamic_array_copy(obj.commandBufferCount, obj.pCommandBuffers, pAllocator);
    result.signalSemaphoreCount = obj.signalSemaphoreCount;
    result.pSignalSemaphores = create_dynamic_array_copy(obj.signalSemaphoreCount, obj.pSignalSemaphores, pAllocator);
    return result;
}

template <>
VkSubpassBeginInfo create_structure_copy<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassBeginInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.contents = obj.contents;
    return result;
}


template <>
VkSubpassDependency create_structure_copy<VkSubpassDependency>(const VkSubpassDependency& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassDependency result { };
    result.srcSubpass = obj.srcSubpass;
    result.dstSubpass = obj.dstSubpass;
    result.srcStageMask = obj.srcStageMask;
    result.dstStageMask = obj.dstStageMask;
    result.srcAccessMask = obj.srcAccessMask;
    result.dstAccessMask = obj.dstAccessMask;
    result.dependencyFlags = obj.dependencyFlags;
    return result;
}

template <>
VkSubpassDependency2 create_structure_copy<VkSubpassDependency2>(const VkSubpassDependency2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassDependency2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.srcSubpass = obj.srcSubpass;
    result.dstSubpass = obj.dstSubpass;
    result.srcStageMask = obj.srcStageMask;
    result.dstStageMask = obj.dstStageMask;
    result.srcAccessMask = obj.srcAccessMask;
    result.dstAccessMask = obj.dstAccessMask;
    result.dependencyFlags = obj.dependencyFlags;
    result.viewOffset = obj.viewOffset;
    return result;
}


template <>
VkSubpassDescription create_structure_copy<VkSubpassDescription>(const VkSubpassDescription& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassDescription result { };
    result.flags = obj.flags;
    result.pipelineBindPoint = obj.pipelineBindPoint;
    result.inputAttachmentCount = obj.inputAttachmentCount;
    result.pInputAttachments = create_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocator);
    result.colorAttachmentCount = obj.colorAttachmentCount;
    result.pColorAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocator);
    result.pResolveAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocator);
    result.pDepthStencilAttachment = create_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocator);
    result.preserveAttachmentCount = obj.preserveAttachmentCount;
    result.pPreserveAttachments = create_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocator);
    return result;
}

template <>
VkSubpassDescription2 create_structure_copy<VkSubpassDescription2>(const VkSubpassDescription2& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassDescription2 result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.pipelineBindPoint = obj.pipelineBindPoint;
    result.viewMask = obj.viewMask;
    result.inputAttachmentCount = obj.inputAttachmentCount;
    result.pInputAttachments = create_dynamic_array_copy(obj.inputAttachmentCount, obj.pInputAttachments, pAllocator);
    result.colorAttachmentCount = obj.colorAttachmentCount;
    result.pColorAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pColorAttachments, pAllocator);
    result.pResolveAttachments = create_dynamic_array_copy(obj.colorAttachmentCount, obj.pResolveAttachments, pAllocator);
    result.pDepthStencilAttachment = create_dynamic_array_copy(1, obj.pDepthStencilAttachment, pAllocator);
    result.preserveAttachmentCount = obj.preserveAttachmentCount;
    result.pPreserveAttachments = create_dynamic_array_copy(obj.preserveAttachmentCount, obj.pPreserveAttachments, pAllocator);
    return result;
}


template <>
VkSubpassDescriptionDepthStencilResolve create_structure_copy<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassDescriptionDepthStencilResolve result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.depthResolveMode = obj.depthResolveMode;
    result.stencilResolveMode = obj.stencilResolveMode;
    result.pDepthStencilResolveAttachment = create_dynamic_array_copy(1, obj.pDepthStencilResolveAttachment, pAllocator);
    return result;
}


template <>
VkSubpassEndInfo create_structure_copy<VkSubpassEndInfo>(const VkSubpassEndInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassEndInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    return result;
}


template <>
VkSubpassSampleLocationsEXT create_structure_copy<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubpassSampleLocationsEXT result { };
    result.subpassIndex = obj.subpassIndex;
    result.sampleLocationsInfo = create_structure_copy(obj.sampleLocationsInfo, pAllocator);
    return result;
}

template <>
VkSubresourceLayout create_structure_copy<VkSubresourceLayout>(const VkSubresourceLayout& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSubresourceLayout result { };
    result.offset = obj.offset;
    result.size = obj.size;
    result.rowPitch = obj.rowPitch;
    result.arrayPitch = obj.arrayPitch;
    result.depthPitch = obj.depthPitch;
    return result;
}

template <>
VkSurfaceCapabilities2EXT create_structure_copy<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceCapabilities2EXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.minImageCount = obj.minImageCount;
    result.maxImageCount = obj.maxImageCount;
    result.currentExtent = create_structure_copy(obj.currentExtent, pAllocator);
    result.minImageExtent = create_structure_copy(obj.minImageExtent, pAllocator);
    result.maxImageExtent = create_structure_copy(obj.maxImageExtent, pAllocator);
    result.maxImageArrayLayers = obj.maxImageArrayLayers;
    result.supportedTransforms = obj.supportedTransforms;
    result.currentTransform = obj.currentTransform;
    result.supportedCompositeAlpha = obj.supportedCompositeAlpha;
    result.supportedUsageFlags = obj.supportedUsageFlags;
    result.supportedSurfaceCounters = obj.supportedSurfaceCounters;
    return result;
}

template <>
VkSurfaceCapabilities2KHR create_structure_copy<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceCapabilities2KHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.surfaceCapabilities = create_structure_copy(obj.surfaceCapabilities, pAllocator);
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceCapabilitiesFullScreenExclusiveEXT create_structure_copy<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceCapabilitiesFullScreenExclusiveEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fullScreenExclusiveSupported = obj.fullScreenExclusiveSupported;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceCapabilitiesKHR create_structure_copy<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceCapabilitiesKHR result { };
    result.minImageCount = obj.minImageCount;
    result.maxImageCount = obj.maxImageCount;
    result.currentExtent = create_structure_copy(obj.currentExtent, pAllocator);
    result.minImageExtent = create_structure_copy(obj.minImageExtent, pAllocator);
    result.maxImageExtent = create_structure_copy(obj.maxImageExtent, pAllocator);
    result.maxImageArrayLayers = obj.maxImageArrayLayers;
    result.supportedTransforms = obj.supportedTransforms;
    result.currentTransform = obj.currentTransform;
    result.supportedCompositeAlpha = obj.supportedCompositeAlpha;
    result.supportedUsageFlags = obj.supportedUsageFlags;
    return result;
}

template <>
VkSurfaceFormat2KHR create_structure_copy<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceFormat2KHR result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.surfaceFormat = create_structure_copy(obj.surfaceFormat, pAllocator);
    return result;
}

template <>
VkSurfaceFormatKHR create_structure_copy<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceFormatKHR result { };
    result.format = obj.format;
    result.colorSpace = obj.colorSpace;
    return result;
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveInfoEXT create_structure_copy<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceFullScreenExclusiveInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.fullScreenExclusive = obj.fullScreenExclusive;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkSurfaceFullScreenExclusiveWin32InfoEXT create_structure_copy<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceFullScreenExclusiveWin32InfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.hmonitor = obj.hmonitor;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkSurfaceProtectedCapabilitiesKHR create_structure_copy<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSurfaceProtectedCapabilitiesKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.supportsProtected = obj.supportsProtected;
    return result;
}

template <>
VkSwapchainCounterCreateInfoEXT create_structure_copy<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSwapchainCounterCreateInfoEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.surfaceCounters = obj.surfaceCounters;
    return result;
}

template <>
VkSwapchainCreateInfoKHR create_structure_copy<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSwapchainCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.surface = obj.surface;
    result.minImageCount = obj.minImageCount;
    result.imageFormat = obj.imageFormat;
    result.imageColorSpace = obj.imageColorSpace;
    result.imageExtent = create_structure_copy(obj.imageExtent, pAllocator);
    result.imageArrayLayers = obj.imageArrayLayers;
    result.imageUsage = obj.imageUsage;
    result.imageSharingMode = obj.imageSharingMode;
    result.queueFamilyIndexCount = obj.queueFamilyIndexCount;
    result.pQueueFamilyIndices = create_dynamic_array_copy(obj.queueFamilyIndexCount, obj.pQueueFamilyIndices, pAllocator);
    result.preTransform = obj.preTransform;
    result.compositeAlpha = obj.compositeAlpha;
    result.presentMode = obj.presentMode;
    result.clipped = obj.clipped;
    result.oldSwapchain = obj.oldSwapchain;
    return result;
}

template <>
VkSwapchainDisplayNativeHdrCreateInfoAMD create_structure_copy<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSwapchainDisplayNativeHdrCreateInfoAMD result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.localDimmingEnable = obj.localDimmingEnable;
    return result;
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
VkSwapchainImageCreateInfoANDROID create_structure_copy<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj, const VkAllocationCallbacks* pAllocator)
{
    VkSwapchainImageCreateInfoANDROID result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.usage = obj.usage;
    return result;
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
VkTextureLODGatherFormatPropertiesAMD create_structure_copy<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj, const VkAllocationCallbacks* pAllocator)
{
    VkTextureLODGatherFormatPropertiesAMD result { };
    result.sType = obj.sType;
    result.pNext = (void*)create_pnext_copy(obj.pNext, pAllocator);
    result.supportsTextureGatherLODBiasAMD = obj.supportsTextureGatherLODBiasAMD;
    return result;
}

template <>
VkTimelineSemaphoreSubmitInfo create_structure_copy<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj, const VkAllocationCallbacks* pAllocator)
{
    VkTimelineSemaphoreSubmitInfo result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.waitSemaphoreValueCount = obj.waitSemaphoreValueCount;
    result.pWaitSemaphoreValues = create_dynamic_array_copy(obj.waitSemaphoreValueCount, obj.pWaitSemaphoreValues, pAllocator);
    result.signalSemaphoreValueCount = obj.signalSemaphoreValueCount;
    result.pSignalSemaphoreValues = create_dynamic_array_copy(obj.signalSemaphoreValueCount, obj.pSignalSemaphoreValues, pAllocator);
    return result;
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkTraceRaysIndirectCommandKHR create_structure_copy<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkTraceRaysIndirectCommandKHR result { };
    result.width = obj.width;
    result.height = obj.height;
    result.depth = obj.depth;
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS




template <>
VkValidationFeaturesEXT create_structure_copy<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkValidationFeaturesEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.enabledValidationFeatureCount = obj.enabledValidationFeatureCount;
    result.pEnabledValidationFeatures = create_dynamic_array_copy(obj.enabledValidationFeatureCount, obj.pEnabledValidationFeatures, pAllocator);
    result.disabledValidationFeatureCount = obj.disabledValidationFeatureCount;
    result.pDisabledValidationFeatures = create_dynamic_array_copy(obj.disabledValidationFeatureCount, obj.pDisabledValidationFeatures, pAllocator);
    return result;
}

template <>
VkValidationFlagsEXT create_structure_copy<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkValidationFlagsEXT result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.disabledValidationCheckCount = obj.disabledValidationCheckCount;
    result.pDisabledValidationChecks = create_dynamic_array_copy(obj.disabledValidationCheckCount, obj.pDisabledValidationChecks, pAllocator);
    return result;
}

template <>
VkVertexInputAttributeDescription create_structure_copy<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj, const VkAllocationCallbacks* pAllocator)
{
    VkVertexInputAttributeDescription result { };
    result.location = obj.location;
    result.binding = obj.binding;
    result.format = obj.format;
    result.offset = obj.offset;
    return result;
}

template <>
VkVertexInputBindingDescription create_structure_copy<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj, const VkAllocationCallbacks* pAllocator)
{
    VkVertexInputBindingDescription result { };
    result.binding = obj.binding;
    result.stride = obj.stride;
    result.inputRate = obj.inputRate;
    return result;
}

template <>
VkVertexInputBindingDivisorDescriptionEXT create_structure_copy<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkVertexInputBindingDivisorDescriptionEXT result { };
    result.binding = obj.binding;
    result.divisor = obj.divisor;
    return result;
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
VkViSurfaceCreateInfoNN create_structure_copy<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj, const VkAllocationCallbacks* pAllocator)
{
    VkViSurfaceCreateInfoNN result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
VkViewport create_structure_copy<VkViewport>(const VkViewport& obj, const VkAllocationCallbacks* pAllocator)
{
    VkViewport result { };
    result.x = obj.x;
    result.y = obj.y;
    result.width = obj.width;
    result.height = obj.height;
    result.minDepth = obj.minDepth;
    result.maxDepth = obj.maxDepth;
    return result;
}

template <>
VkViewportSwizzleNV create_structure_copy<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkViewportSwizzleNV result { };
    result.x = obj.x;
    result.y = obj.y;
    result.z = obj.z;
    result.w = obj.w;
    return result;
}

template <>
VkViewportWScalingNV create_structure_copy<VkViewportWScalingNV>(const VkViewportWScalingNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkViewportWScalingNV result { };
    result.xcoeff = obj.xcoeff;
    result.ycoeff = obj.ycoeff;
    return result;
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
VkWaylandSurfaceCreateInfoKHR create_structure_copy<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkWaylandSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.display = obj.display;
    result.surface = obj.surface;
    return result;
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoKHR create_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkWin32KeyedMutexAcquireReleaseInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.acquireCount = obj.acquireCount;
    result.pAcquireSyncs = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocator);
    result.pAcquireKeys = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocator);
    result.pAcquireTimeouts = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeouts, pAllocator);
    result.releaseCount = obj.releaseCount;
    result.pReleaseSyncs = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocator);
    result.pReleaseKeys = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocator);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32KeyedMutexAcquireReleaseInfoNV create_structure_copy<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj, const VkAllocationCallbacks* pAllocator)
{
    VkWin32KeyedMutexAcquireReleaseInfoNV result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.acquireCount = obj.acquireCount;
    result.pAcquireSyncs = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireSyncs, pAllocator);
    result.pAcquireKeys = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireKeys, pAllocator);
    result.pAcquireTimeoutMilliseconds = create_dynamic_array_copy(obj.acquireCount, obj.pAcquireTimeoutMilliseconds, pAllocator);
    result.releaseCount = obj.releaseCount;
    result.pReleaseSyncs = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseSyncs, pAllocator);
    result.pReleaseKeys = create_dynamic_array_copy(obj.releaseCount, obj.pReleaseKeys, pAllocator);
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
VkWin32SurfaceCreateInfoKHR create_structure_copy<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkWin32SurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.hinstance = obj.hinstance;
    result.hwnd = obj.hwnd;
    return result;
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
VkWriteDescriptorSet create_structure_copy<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj, const VkAllocationCallbacks* pAllocator)
{
    VkWriteDescriptorSet result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.dstSet = obj.dstSet;
    result.dstBinding = obj.dstBinding;
    result.dstArrayElement = obj.dstArrayElement;
    result.descriptorCount = obj.descriptorCount;
    result.descriptorType = obj.descriptorType;
    result.pImageInfo = create_dynamic_array_copy(obj.descriptorCount, obj.pImageInfo, pAllocator);
    result.pBufferInfo = create_dynamic_array_copy(obj.descriptorCount, obj.pBufferInfo, pAllocator);
    result.pTexelBufferView = create_dynamic_array_copy(obj.descriptorCount, obj.pTexelBufferView, pAllocator);
    return result;
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
VkWriteDescriptorSetAccelerationStructureKHR create_structure_copy<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkWriteDescriptorSetAccelerationStructureKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.accelerationStructureCount = obj.accelerationStructureCount;
    result.pAccelerationStructures = create_dynamic_array_copy(obj.accelerationStructureCount, obj.pAccelerationStructures, pAllocator);
    return result;
}
#endif // VK_ENABLE_BETA_EXTENSIONS



template <>
VkXYColorEXT create_structure_copy<VkXYColorEXT>(const VkXYColorEXT& obj, const VkAllocationCallbacks* pAllocator)
{
    VkXYColorEXT result { };
    result.x = obj.x;
    result.y = obj.y;
    return result;
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
VkXcbSurfaceCreateInfoKHR create_structure_copy<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkXcbSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.connection = obj.connection;
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
VkXlibSurfaceCreateInfoKHR create_structure_copy<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj, const VkAllocationCallbacks* pAllocator)
{
    VkXlibSurfaceCreateInfoKHR result { };
    result.sType = obj.sType;
    result.pNext = (const void*)create_pnext_copy(obj.pNext, pAllocator);
    result.flags = obj.flags;
    result.dpy = obj.dpy;
    result.window = obj.window;
    return result;
}
#endif // VK_USE_PLATFORM_XLIB_KHR

void* create_pnext_copy(const void* pNext, const VkAllocationCallbacks* pAllocator)
{
    if (pNext) {
        switch (*(VkStructureType*)pNext) {
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureBuildGeometryInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureCreateGeometryTypeInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureCreateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureDeviceAddressInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryAabbsDataKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryInstancesDataKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureGeometryTrianglesDataKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureMemoryRequirementsInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureMemoryRequirementsInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR: {
            return create_dynamic_array_copy(1, (VkAccelerationStructureVersionKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAcquireNextImageInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAcquireProfilingLockInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID: {
            return create_dynamic_array_copy(1, (VkAndroidHardwareBufferFormatPropertiesANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID: {
            return create_dynamic_array_copy(1, (VkAndroidHardwareBufferPropertiesANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID: {
            return create_dynamic_array_copy(1, (VkAndroidHardwareBufferUsageANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkAndroidSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_APPLICATION_INFO: {
            return create_dynamic_array_copy(1, (VkApplicationInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2: {
            return create_dynamic_array_copy(1, (VkAttachmentDescription2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT: {
            return create_dynamic_array_copy(1, (VkAttachmentDescriptionStencilLayout*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2: {
            return create_dynamic_array_copy(1, (VkAttachmentReference2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT: {
            return create_dynamic_array_copy(1, (VkAttachmentReferenceStencilLayout*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkBindAccelerationStructureMemoryInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO: {
            return create_dynamic_array_copy(1, (VkBindBufferMemoryDeviceGroupInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO: {
            return create_dynamic_array_copy(1, (VkBindBufferMemoryInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO: {
            return create_dynamic_array_copy(1, (VkBindImageMemoryDeviceGroupInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO: {
            return create_dynamic_array_copy(1, (VkBindImageMemoryInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkBindImageMemorySwapchainInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO: {
            return create_dynamic_array_copy(1, (VkBindImagePlaneMemoryInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: {
            return create_dynamic_array_copy(1, (VkBindSparseInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkBufferCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkBufferDeviceAddressCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO: {
            return create_dynamic_array_copy(1, (VkBufferDeviceAddressInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: {
            return create_dynamic_array_copy(1, (VkBufferMemoryBarrier*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2: {
            return create_dynamic_array_copy(1, (VkBufferMemoryRequirementsInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkBufferOpaqueCaptureAddressCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkBufferViewCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkCalibratedTimestampInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: {
            return create_dynamic_array_copy(1, (VkCheckpointDataNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (VkCommandBufferAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (VkCommandBufferBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkCommandBufferInheritanceConditionalRenderingInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: {
            return create_dynamic_array_copy(1, (VkCommandBufferInheritanceInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
            return create_dynamic_array_copy(1, (VkCommandBufferInheritanceRenderPassTransformInfoQCOM*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkCommandPoolCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkComputePipelineCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkConditionalRenderingBeginInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkCooperativeMatrixPropertiesNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkCopyAccelerationStructureInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkCopyAccelerationStructureToMemoryInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: {
            return create_dynamic_array_copy(1, (VkCopyDescriptorSet*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkCopyMemoryToAccelerationStructureInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkD3D12FenceSubmitInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDebugMarkerMarkerInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDebugMarkerObjectNameInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDebugMarkerObjectTagInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDebugReportCallbackCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsLabelEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsMessengerCallbackDataEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsMessengerCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsObjectNameInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDebugUtilsObjectTagInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkDedicatedAllocationBufferCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkDedicatedAllocationImageCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkDedicatedAllocationMemoryAllocateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkDeferredOperationInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkDescriptorPoolCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDescriptorPoolInlineUniformBlockCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (VkDescriptorSetAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkDescriptorSetLayoutBindingFlagsCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkDescriptorSetLayoutCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT: {
            return create_dynamic_array_copy(1, (VkDescriptorSetLayoutSupport*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (VkDescriptorSetVariableDescriptorCountAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT: {
            return create_dynamic_array_copy(1, (VkDescriptorSetVariableDescriptorCountLayoutSupport*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkDescriptorUpdateTemplateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkDeviceDiagnosticsConfigCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDeviceEventInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceGroupBindSparseInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceGroupCommandBufferBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceGroupDeviceCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: {
            return create_dynamic_array_copy(1, (VkDeviceGroupPresentCapabilitiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkDeviceGroupPresentInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceGroupRenderPassBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceGroupSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkDeviceGroupSwapchainCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceMemoryOpaqueCaptureAddressInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
            return create_dynamic_array_copy(1, (VkDeviceMemoryOverallocationCreateInfoAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDevicePrivateDataCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkDeviceQueueCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDeviceQueueGlobalPriorityCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2: {
            return create_dynamic_array_copy(1, (VkDeviceQueueInfo2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
        case VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDirectFBSurfaceCreateInfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_DIRECTFB_EXT
        case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDisplayEventInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkDisplayModeCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: {
            return create_dynamic_array_copy(1, (VkDisplayModeProperties2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
            return create_dynamic_array_copy(1, (VkDisplayNativeHdrSurfaceCapabilitiesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlaneCapabilities2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlaneInfo2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: {
            return create_dynamic_array_copy(1, (VkDisplayPlaneProperties2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkDisplayPowerInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkDisplayPresentInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: {
            return create_dynamic_array_copy(1, (VkDisplayProperties2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkDisplaySurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
            return create_dynamic_array_copy(1, (VkDrmFormatModifierPropertiesListEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkEventCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkExportFenceCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkExportFenceWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (VkExportMemoryAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkExportMemoryAllocateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkExportMemoryWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkExportMemoryWin32HandleInfoNV*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkExportSemaphoreCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkExportSemaphoreWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkExternalBufferProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkExternalFenceProperties*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
            return create_dynamic_array_copy(1, (VkExternalFormatANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkExternalImageFormatProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkExternalMemoryBufferCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkExternalMemoryImageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkExternalMemoryImageCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkExternalSemaphoreProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkFenceCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkFenceGetFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkFenceGetWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkFilterCubicImageViewImageFormatPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2: {
            return create_dynamic_array_copy(1, (VkFormatProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO: {
            return create_dynamic_array_copy(1, (VkFramebufferAttachmentImageInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkFramebufferAttachmentsCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkFramebufferCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: {
            return create_dynamic_array_copy(1, (VkFramebufferMixedSamplesCombinationNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: {
            return create_dynamic_array_copy(1, (VkGeneratedCommandsInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: {
            return create_dynamic_array_copy(1, (VkGeneratedCommandsMemoryRequirementsInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV: {
            return create_dynamic_array_copy(1, (VkGeometryAABBNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_NV: {
            return create_dynamic_array_copy(1, (VkGeometryNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: {
            return create_dynamic_array_copy(1, (VkGeometryTrianglesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkGraphicsPipelineCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkGraphicsPipelineShaderGroupsCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkGraphicsShaderGroupCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: {
            return create_dynamic_array_copy(1, (VkHdrMetadataEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkHeadlessSurfaceCreateInfoEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_IOS_MVK
        case VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK: {
            return create_dynamic_array_copy(1, (VkIOSSurfaceCreateInfoMVK*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_IOS_MVK
        case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkImageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkImageDrmFormatModifierExplicitCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkImageDrmFormatModifierListCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkImageDrmFormatModifierPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkImageFormatListCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2: {
            return create_dynamic_array_copy(1, (VkImageFormatProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: {
            return create_dynamic_array_copy(1, (VkImageMemoryBarrier*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2: {
            return create_dynamic_array_copy(1, (VkImageMemoryRequirementsInfo2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA: {
            return create_dynamic_array_copy(1, (VkImagePipeSurfaceCreateInfoFUCHSIA*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_FUCHSIA
        case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO: {
            return create_dynamic_array_copy(1, (VkImagePlaneMemoryRequirementsInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2: {
            return create_dynamic_array_copy(1, (VkImageSparseMemoryRequirementsInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkImageStencilUsageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkImageSwapchainCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT: {
            return create_dynamic_array_copy(1, (VkImageViewASTCDecodeModeEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX: {
            return create_dynamic_array_copy(1, (VkImageViewAddressPropertiesNVX*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkImageViewCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX: {
            return create_dynamic_array_copy(1, (VkImageViewHandleInfoNVX*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkImageViewUsageCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
            return create_dynamic_array_copy(1, (VkImportAndroidHardwareBufferInfoANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkImportFenceFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkImportFenceWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkImportMemoryFdInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkImportMemoryHostPointerInfoEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkImportMemoryWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkImportMemoryWin32HandleInfoNV*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkImportSemaphoreFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkImportSemaphoreWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkIndirectCommandsLayoutCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: {
            return create_dynamic_array_copy(1, (VkIndirectCommandsLayoutTokenNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: {
            return create_dynamic_array_copy(1, (VkInitializePerformanceApiInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkInstanceCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_MACOS_MVK
        case VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK: {
            return create_dynamic_array_copy(1, (VkMacOSSurfaceCreateInfoMVK*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_MACOS_MVK
        case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: {
            return create_dynamic_array_copy(1, (VkMappedMemoryRange*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO: {
            return create_dynamic_array_copy(1, (VkMemoryAllocateFlagsInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (VkMemoryAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_BARRIER: {
            return create_dynamic_array_copy(1, (VkMemoryBarrier*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (VkMemoryDedicatedAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS: {
            return create_dynamic_array_copy(1, (VkMemoryDedicatedRequirements*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (VkMemoryFdPropertiesKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID: {
            return create_dynamic_array_copy(1, (VkMemoryGetAndroidHardwareBufferInfoANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkMemoryGetFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkMemoryGetWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkMemoryHostPointerPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO: {
            return create_dynamic_array_copy(1, (VkMemoryOpaqueCaptureAddressAllocateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkMemoryPriorityAllocateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2: {
            return create_dynamic_array_copy(1, (VkMemoryRequirements2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (VkMemoryWin32HandlePropertiesKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkMetalSurfaceCreateInfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_METAL_EXT
        case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkMultisamplePropertiesEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID: {
            return create_dynamic_array_copy(1, (VkNativeBufferANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceConfigurationAcquireInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: {
            return create_dynamic_array_copy(1, (VkPerformanceCounterDescriptionKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: {
            return create_dynamic_array_copy(1, (VkPerformanceCounterKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceMarkerInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceOverrideInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkPerformanceQuerySubmitInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: {
            return create_dynamic_array_copy(1, (VkPerformanceStreamMarkerInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDevice16BitStorageFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDevice8BitStorageFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceASTCDecodeFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBufferDeviceAddressFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCoherentMemoryFeaturesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceConditionalRenderingFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCooperativeMatrixFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCooperativeMatrixPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCornerSampledImageFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCoverageReductionModeFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCustomBorderColorFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceCustomBorderColorPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDepthClipEnableFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDepthStencilResolveProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDescriptorIndexingFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDescriptorIndexingProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDiagnosticsConfigFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDiscardRectanglePropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceDriverProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExclusiveScissorFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalBufferInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalFenceInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalImageFormatInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceExternalSemaphoreInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFeatures2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFloatControlsProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMap2PropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceGroupProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceHostQueryResetFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceIDProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageDrmFormatModifierInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageFormatInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageRobustnessFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImageViewImageFormatInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceImagelessFramebufferFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceInlineUniformBlockFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceInlineUniformBlockPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceLineRasterizationFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceLineRasterizationPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMaintenance3Properties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMemoryBudgetPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMemoryPriorityFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMemoryProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMeshShaderFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMeshShaderPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMultiviewFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceMultiviewProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePCIBusInfoPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePerformanceQueryFeaturesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePerformanceQueryPropertiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePointClippingProperties*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePresentationPropertiesANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePrivateDataFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceProtectedMemoryFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceProtectedMemoryProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDevicePushDescriptorPropertiesKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRayTracingFeaturesKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRayTracingPropertiesKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRayTracingPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRobustness2FeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceRobustness2PropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSampleLocationsPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSamplerFilterMinmaxProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSamplerYcbcrConversionFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceScalarBlockLayoutFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderAtomicInt64Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderClockFeaturesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderCoreProperties2AMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderCorePropertiesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderDrawParametersFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderFloat16Int8Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderImageFootprintFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderSMBuiltinsPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShadingRateImageFeaturesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceShadingRateImagePropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSparseImageFormatInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSubgroupProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSubgroupSizeControlFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSubgroupSizeControlPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceSurfaceInfo2KHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTimelineSemaphoreFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTimelineSemaphoreProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceToolPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTransformFeedbackFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceTransformFeedbackPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceUniformBufferStandardLayoutFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVariablePointersFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan11Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan11Properties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan12Features*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkan12Properties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceVulkanMemoryModelFeatures*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineCacheCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineColorBlendAdvancedStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineColorBlendStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
            return create_dynamic_array_copy(1, (VkPipelineCompilerControlCreateInfoAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineCoverageModulationStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineCoverageReductionStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineCoverageToColorStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineCreationFeedbackCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineDepthStencilStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineDiscardRectangleStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineDynamicStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutableInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutableInternalRepresentationKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutablePropertiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: {
            return create_dynamic_array_copy(1, (VkPipelineExecutableStatisticKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkPipelineInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineInputAssemblyStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineLayoutCreateInfo*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkPipelineLibraryCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineMultisampleStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationConservativeStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationDepthClipStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationLineStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationStateRasterizationOrderAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineRasterizationStateStreamCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineRepresentativeFragmentTestStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineSampleLocationsStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineShaderStageCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineTessellationDomainOriginStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineTessellationStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPipelineVertexInputDivisorStateCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineVertexInputStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportExclusiveScissorStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportShadingRateImageStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkPipelineViewportStateCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportSwizzleStateCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkPipelineViewportWScalingStateCreateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
            return create_dynamic_array_copy(1, (VkPresentFrameTokenGGP*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkPresentInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
            return create_dynamic_array_copy(1, (VkPresentRegionsKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
            return create_dynamic_array_copy(1, (VkPresentTimesInfoGOOGLE*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkPrivateDataSlotCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO: {
            return create_dynamic_array_copy(1, (VkProtectedSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkQueryPoolCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkQueryPoolPerformanceCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL: {
            return create_dynamic_array_copy(1, (VkQueryPoolPerformanceQueryCreateInfoINTEL*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
            return create_dynamic_array_copy(1, (VkQueueFamilyCheckpointPropertiesNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2: {
            return create_dynamic_array_copy(1, (VkQueueFamilyProperties2*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkRayTracingPipelineCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkRayTracingPipelineCreateInfoNV*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkRayTracingPipelineInterfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkRayTracingShaderGroupCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkRayTracingShaderGroupCreateInfoNV*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (VkRenderPassAttachmentBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (VkRenderPassBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkRenderPassCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2: {
            return create_dynamic_array_copy(1, (VkRenderPassCreateInfo2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkRenderPassFragmentDensityMapCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkRenderPassInputAttachmentAspectCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkRenderPassMultiviewCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkRenderPassSampleLocationsBeginInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
            return create_dynamic_array_copy(1, (VkRenderPassTransformBeginInfoQCOM*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkSampleLocationsInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkSamplerCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkSamplerCustomBorderColorCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkSamplerReductionModeCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkSamplerYcbcrConversionCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES: {
            return create_dynamic_array_copy(1, (VkSamplerYcbcrConversionImageFormatProperties*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO: {
            return create_dynamic_array_copy(1, (VkSamplerYcbcrConversionInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkSemaphoreCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkSemaphoreGetFdInfoKHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkSemaphoreGetWin32HandleInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO: {
            return create_dynamic_array_copy(1, (VkSemaphoreSignalInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkSemaphoreTypeCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO: {
            return create_dynamic_array_copy(1, (VkSemaphoreWaitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
            return create_dynamic_array_copy(1, (VkShaderModuleCreateInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkShaderModuleValidationCacheCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
            return create_dynamic_array_copy(1, (VkSharedPresentSurfaceCapabilitiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2: {
            return create_dynamic_array_copy(1, (VkSparseImageFormatProperties2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2: {
            return create_dynamic_array_copy(1, (VkSparseImageMemoryRequirements2*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: {
            return create_dynamic_array_copy(1, (VkStreamDescriptorSurfaceCreateInfoGGP*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_GGP
        case VK_STRUCTURE_TYPE_SUBMIT_INFO: {
            return create_dynamic_array_copy(1, (VkSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO: {
            return create_dynamic_array_copy(1, (VkSubpassBeginInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2: {
            return create_dynamic_array_copy(1, (VkSubpassDependency2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2: {
            return create_dynamic_array_copy(1, (VkSubpassDescription2*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE: {
            return create_dynamic_array_copy(1, (VkSubpassDescriptionDepthStencilResolve*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SUBPASS_END_INFO: {
            return create_dynamic_array_copy(1, (VkSubpassEndInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: {
            return create_dynamic_array_copy(1, (VkSurfaceCapabilities2EXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: {
            return create_dynamic_array_copy(1, (VkSurfaceCapabilities2KHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
            return create_dynamic_array_copy(1, (VkSurfaceCapabilitiesFullScreenExclusiveEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: {
            return create_dynamic_array_copy(1, (VkSurfaceFormat2KHR*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkSurfaceFullScreenExclusiveInfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkSurfaceFullScreenExclusiveWin32InfoEXT*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
            return create_dynamic_array_copy(1, (VkSurfaceProtectedCapabilitiesKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkSwapchainCounterCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkSwapchainCreateInfoKHR*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
            return create_dynamic_array_copy(1, (VkSwapchainDisplayNativeHdrCreateInfoAMD*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID: {
            return create_dynamic_array_copy(1, (VkSwapchainImageCreateInfoANDROID*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_ANDROID_KHR
        case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD: {
            return create_dynamic_array_copy(1, (VkTextureLODGatherFormatPropertiesAMD*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO: {
            return create_dynamic_array_copy(1, (VkTimelineSemaphoreSubmitInfo*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: {
            return create_dynamic_array_copy(1, (VkValidationCacheCreateInfoEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
            return create_dynamic_array_copy(1, (VkValidationFeaturesEXT*)pNext, pAllocator);
        } break;
        case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
            return create_dynamic_array_copy(1, (VkValidationFlagsEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_VI_NN
        case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: {
            return create_dynamic_array_copy(1, (VkViSurfaceCreateInfoNN*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_VI_NN
        #ifdef VK_USE_PLATFORM_WAYLAND_KHR
        case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkWaylandSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WAYLAND_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkWin32KeyedMutexAcquireReleaseInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
            return create_dynamic_array_copy(1, (VkWin32KeyedMutexAcquireReleaseInfoNV*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        #ifdef VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkWin32SurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_WIN32_KHR
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: {
            return create_dynamic_array_copy(1, (VkWriteDescriptorSet*)pNext, pAllocator);
        } break;
        #ifdef VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
            return create_dynamic_array_copy(1, (VkWriteDescriptorSetAccelerationStructureKHR*)pNext, pAllocator);
        } break;
        #endif // VK_ENABLE_BETA_EXTENSIONS
        case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: {
            return create_dynamic_array_copy(1, (VkWriteDescriptorSetInlineUniformBlockEXT*)pNext, pAllocator);
        } break;
        #ifdef VK_USE_PLATFORM_XCB_KHR
        case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkXcbSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_XCB_KHR
        #ifdef VK_USE_PLATFORM_XLIB_KHR
        case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: {
            return create_dynamic_array_copy(1, (VkXlibSurfaceCreateInfoKHR*)pNext, pAllocator);
        } break;
        #endif // VK_USE_PLATFORM_XLIB_KHR
        default: {
        } break;
        }
    }
    return nullptr;
}

} // namespace detail
} // namespace vk
} // namespace dst
