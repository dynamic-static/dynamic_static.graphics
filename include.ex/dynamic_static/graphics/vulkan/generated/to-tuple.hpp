
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/core/span.hpp"
#include "dynamic_static/graphics/vulkan/detail/structure-to-tuple-utilities.hpp"
#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <functional>
#include <string_view>
#include <tuple>
#include <utility>

namespace dst {
namespace vk {
namespace detail {

////////////////////////////////////////////////////////////////////////////////
// NOTE : The following functions are manually implemented
#if 0
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV&);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV&);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV&);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkClearColorValue>(const VkClearColorValue&);
template <> inline auto to_tuple<VkClearValue>(const VkClearValue&);
template <> inline auto to_tuple<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT&);
template <> inline auto to_tuple<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT&);
template <> inline auto to_tuple<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR&);
template <> inline auto to_tuple<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL&);
template <> inline auto to_tuple<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo&);
template <> inline auto to_tuple<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR&);
template <> inline auto to_tuple<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR&);
template <> inline auto to_tuple<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo&);
template <> inline auto to_tuple<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo&);
template <> inline auto to_tuple<VkSpecializationInfo>(const VkSpecializationInfo&);
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkTransformMatrixKHR>(const VkTransformMatrixKHR&);
#endif // VK_ENABLE_BETA_EXTENSIONS
template <> inline auto to_tuple<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT&);
template <> inline auto to_tuple<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT&);
#endif
////////////////////////////////////////////////////////////////////////////////

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj)
{
    return std::make_tuple(
        obj.minX
        ,
        obj.minY
        ,
        obj.minZ
        ,
        obj.maxX
        ,
        obj.maxY
        ,
        obj.maxZ
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS



















template <>
inline auto to_tuple<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.swapchain
        ,
        obj.timeout
        ,
        obj.semaphore
        ,
        obj.fence
        ,
        obj.deviceMask
    );
}

template <>
inline auto to_tuple<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.timeout
    );
}

template <>
inline auto to_tuple<VkAllocationCallbacks>(const VkAllocationCallbacks& obj)
{
    return std::make_tuple(
        obj.pUserData
        ,
        obj.pfnAllocation
        ,
        obj.pfnReallocation
        ,
        obj.pfnFree
        ,
        obj.pfnInternalAllocation
        ,
        obj.pfnInternalFree
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.format
        ,
        obj.externalFormat
        ,
        obj.formatFeatures
        ,
        std::ref(obj.samplerYcbcrConversionComponents)
        ,
        obj.suggestedYcbcrModel
        ,
        obj.suggestedYcbcrRange
        ,
        obj.suggestedXChromaOffset
        ,
        obj.suggestedYChromaOffset
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.allocationSize
        ,
        obj.memoryTypeBits
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.androidHardwareBufferUsage
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto to_tuple<VkApplicationInfo>(const VkApplicationInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pApplicationName ? std::string_view(obj.pApplicationName) : std::string_view()
        ,
        obj.applicationVersion
        ,
        obj.pEngineName ? std::string_view(obj.pEngineName) : std::string_view()
        ,
        obj.engineVersion
        ,
        obj.apiVersion
    );
}

template <>
inline auto to_tuple<VkAttachmentDescription>(const VkAttachmentDescription& obj)
{
    return std::make_tuple(
        obj.flags
        ,
        obj.format
        ,
        obj.samples
        ,
        obj.loadOp
        ,
        obj.storeOp
        ,
        obj.stencilLoadOp
        ,
        obj.stencilStoreOp
        ,
        obj.initialLayout
        ,
        obj.finalLayout
    );
}

template <>
inline auto to_tuple<VkAttachmentDescription2>(const VkAttachmentDescription2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.format
        ,
        obj.samples
        ,
        obj.loadOp
        ,
        obj.storeOp
        ,
        obj.stencilLoadOp
        ,
        obj.stencilStoreOp
        ,
        obj.initialLayout
        ,
        obj.finalLayout
    );
}


template <>
inline auto to_tuple<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.stencilInitialLayout
        ,
        obj.stencilFinalLayout
    );
}


template <>
inline auto to_tuple<VkAttachmentReference>(const VkAttachmentReference& obj)
{
    return std::make_tuple(
        obj.attachment
        ,
        obj.layout
    );
}

template <>
inline auto to_tuple<VkAttachmentReference2>(const VkAttachmentReference2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.attachment
        ,
        obj.layout
        ,
        obj.aspectMask
    );
}


template <>
inline auto to_tuple<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.stencilLayout
    );
}


template <>
inline auto to_tuple<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj)
{
    return std::make_tuple(
        obj.attachmentIndex
        ,
        std::ref(obj.sampleLocationsInfo)
    );
}

template <>
inline auto to_tuple<VkBaseInStructure>(const VkBaseInStructure& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
    );
}

template <>
inline auto to_tuple<VkBaseOutStructure>(const VkBaseOutStructure& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.accelerationStructure
        ,
        obj.memory
        ,
        obj.memoryOffset
        ,
        obj.deviceIndexCount
        ,
        Span(obj.pDeviceIndices, obj.deviceIndexCount)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
inline auto to_tuple<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceIndexCount
        ,
        Span(obj.pDeviceIndices, obj.deviceIndexCount)
    );
}


template <>
inline auto to_tuple<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.buffer
        ,
        obj.memory
        ,
        obj.memoryOffset
    );
}


template <>
inline auto to_tuple<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceIndexCount
        ,
        Span(obj.pDeviceIndices, obj.deviceIndexCount)
        ,
        obj.splitInstanceBindRegionCount
        ,
        Span(obj.pSplitInstanceBindRegions, obj.splitInstanceBindRegionCount)
    );
}


template <>
inline auto to_tuple<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.image
        ,
        obj.memory
        ,
        obj.memoryOffset
    );
}


template <>
inline auto to_tuple<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.swapchain
        ,
        obj.imageIndex
    );
}

template <>
inline auto to_tuple<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.planeAspect
    );
}


template <>
inline auto to_tuple<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj)
{
    return std::make_tuple(
        obj.bufferAddress
        ,
        obj.size
        ,
        obj.indexType
    );
}

template <>
inline auto to_tuple<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj)
{
    return std::make_tuple(
        obj.groupIndex
    );
}

template <>
inline auto to_tuple<VkBindSparseInfo>(const VkBindSparseInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.waitSemaphoreCount
        ,
        Span(obj.pWaitSemaphores, obj.waitSemaphoreCount)
        ,
        obj.bufferBindCount
        ,
        Span(obj.pBufferBinds, obj.bufferBindCount)
        ,
        obj.imageOpaqueBindCount
        ,
        Span(obj.pImageOpaqueBinds, obj.imageOpaqueBindCount)
        ,
        obj.imageBindCount
        ,
        Span(obj.pImageBinds, obj.imageBindCount)
        ,
        obj.signalSemaphoreCount
        ,
        Span(obj.pSignalSemaphores, obj.signalSemaphoreCount)
    );
}

template <>
inline auto to_tuple<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj)
{
    return std::make_tuple(
        obj.bufferAddress
        ,
        obj.size
        ,
        obj.stride
    );
}

template <>
inline auto to_tuple<VkBufferCopy>(const VkBufferCopy& obj)
{
    return std::make_tuple(
        obj.srcOffset
        ,
        obj.dstOffset
        ,
        obj.size
    );
}

template <>
inline auto to_tuple<VkBufferCreateInfo>(const VkBufferCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.size
        ,
        obj.usage
        ,
        obj.sharingMode
        ,
        obj.queueFamilyIndexCount
        ,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount)
    );
}

template <>
inline auto to_tuple<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceAddress
    );
}

template <>
inline auto to_tuple<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.buffer
    );
}



template <>
inline auto to_tuple<VkBufferImageCopy>(const VkBufferImageCopy& obj)
{
    return std::make_tuple(
        obj.bufferOffset
        ,
        obj.bufferRowLength
        ,
        obj.bufferImageHeight
        ,
        std::ref(obj.imageSubresource)
        ,
        std::ref(obj.imageOffset)
        ,
        std::ref(obj.imageExtent)
    );
}

template <>
inline auto to_tuple<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.srcAccessMask
        ,
        obj.dstAccessMask
        ,
        obj.srcQueueFamilyIndex
        ,
        obj.dstQueueFamilyIndex
        ,
        obj.buffer
        ,
        obj.offset
        ,
        obj.size
    );
}

template <>
inline auto to_tuple<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.buffer
    );
}


template <>
inline auto to_tuple<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.opaqueCaptureAddress
    );
}


template <>
inline auto to_tuple<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.buffer
        ,
        obj.format
        ,
        obj.offset
        ,
        obj.range
    );
}

template <>
inline auto to_tuple<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.timeDomain
    );
}

template <>
inline auto to_tuple<VkCheckpointDataNV>(const VkCheckpointDataNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.stage
        ,
        obj.pCheckpointMarker
    );
}

template <>
inline auto to_tuple<VkClearAttachment>(const VkClearAttachment& obj)
{
    return std::make_tuple(
        obj.aspectMask
        ,
        obj.colorAttachment
        ,
        std::ref(obj.clearValue)
    );
}


template <>
inline auto to_tuple<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj)
{
    return std::make_tuple(
        obj.depth
        ,
        obj.stencil
    );
}

template <>
inline auto to_tuple<VkClearRect>(const VkClearRect& obj)
{
    return std::make_tuple(
        std::ref(obj.rect)
        ,
        obj.baseArrayLayer
        ,
        obj.layerCount
    );
}


template <>
inline auto to_tuple<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj)
{
    return std::make_tuple(
        obj.pixelX
        ,
        obj.pixelY
        ,
        obj.sample
    );
}

template <>
inline auto to_tuple<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj)
{
    return std::make_tuple(
        obj.shadingRate
        ,
        obj.sampleCount
        ,
        obj.sampleLocationCount
        ,
        Span(obj.pSampleLocations, obj.sampleLocationCount)
    );
}

template <>
inline auto to_tuple<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.commandPool
        ,
        obj.level
        ,
        obj.commandBufferCount
    );
}

template <>
inline auto to_tuple<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        Span(obj.pInheritanceInfo, 1)
    );
}

template <>
inline auto to_tuple<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.conditionalRenderingEnable
    );
}

template <>
inline auto to_tuple<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.renderPass
        ,
        obj.subpass
        ,
        obj.framebuffer
        ,
        obj.occlusionQueryEnable
        ,
        obj.queryFlags
        ,
        obj.pipelineStatistics
    );
}

template <>
inline auto to_tuple<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.transform
        ,
        std::ref(obj.renderArea)
    );
}

template <>
inline auto to_tuple<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.queueFamilyIndex
    );
}

template <>
inline auto to_tuple<VkComponentMapping>(const VkComponentMapping& obj)
{
    return std::make_tuple(
        obj.r
        ,
        obj.g
        ,
        obj.b
        ,
        obj.a
    );
}

template <>
inline auto to_tuple<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        std::ref(obj.stage)
        ,
        obj.layout
        ,
        obj.basePipelineHandle
        ,
        obj.basePipelineIndex
    );
}

template <>
inline auto to_tuple<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.buffer
        ,
        obj.offset
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkConformanceVersion>(const VkConformanceVersion& obj)
{
    return std::make_tuple(
        obj.major
        ,
        obj.minor
        ,
        obj.subminor
        ,
        obj.patch
    );
}


template <>
inline auto to_tuple<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.MSize
        ,
        obj.NSize
        ,
        obj.KSize
        ,
        obj.AType
        ,
        obj.BType
        ,
        obj.CType
        ,
        obj.DType
        ,
        obj.scope
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.src
        ,
        obj.dst
        ,
        obj.mode
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.src
        ,
        std::ref(obj.dst)
        ,
        obj.mode
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.srcSet
        ,
        obj.srcBinding
        ,
        obj.srcArrayElement
        ,
        obj.dstSet
        ,
        obj.dstBinding
        ,
        obj.dstArrayElement
        ,
        obj.descriptorCount
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.src)
        ,
        obj.dst
        ,
        obj.mode
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.waitSemaphoreValuesCount
        ,
        Span(obj.pWaitSemaphoreValues, obj.waitSemaphoreValuesCount)
        ,
        obj.signalSemaphoreValuesCount
        ,
        Span(obj.pSignalSemaphoreValues, obj.signalSemaphoreValuesCount)
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pMarkerName ? std::string_view(obj.pMarkerName) : std::string_view()
        ,
        Span(obj.color, 4)
    );
}

template <>
inline auto to_tuple<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.objectType
        ,
        obj.object
        ,
        obj.pObjectName ? std::string_view(obj.pObjectName) : std::string_view()
    );
}


template <>
inline auto to_tuple<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.pfnCallback
        ,
        obj.pUserData
    );
}

template <>
inline auto to_tuple<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pLabelName ? std::string_view(obj.pLabelName) : std::string_view()
        ,
        Span(obj.color, 4)
    );
}

template <>
inline auto to_tuple<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.pMessageIdName ? std::string_view(obj.pMessageIdName) : std::string_view()
        ,
        obj.messageIdNumber
        ,
        obj.pMessage ? std::string_view(obj.pMessage) : std::string_view()
        ,
        obj.queueLabelCount
        ,
        Span(obj.pQueueLabels, obj.queueLabelCount)
        ,
        obj.cmdBufLabelCount
        ,
        Span(obj.pCmdBufLabels, obj.cmdBufLabelCount)
        ,
        obj.objectCount
        ,
        Span(obj.pObjects, obj.objectCount)
    );
}

template <>
inline auto to_tuple<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.messageSeverity
        ,
        obj.messageType
        ,
        obj.pfnUserCallback
        ,
        obj.pUserData
    );
}

template <>
inline auto to_tuple<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.objectType
        ,
        obj.objectHandle
        ,
        obj.pObjectName ? std::string_view(obj.pObjectName) : std::string_view()
    );
}


template <>
inline auto to_tuple<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.dedicatedAllocation
    );
}

template <>
inline auto to_tuple<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.dedicatedAllocation
    );
}

template <>
inline auto to_tuple<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.image
        ,
        obj.buffer
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.operationHandle
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj)
{
    return std::make_tuple(
        obj.buffer
        ,
        obj.offset
        ,
        obj.range
    );
}

template <>
inline auto to_tuple<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj)
{
    return std::make_tuple(
        obj.sampler
        ,
        obj.imageView
        ,
        obj.imageLayout
    );
}

template <>
inline auto to_tuple<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.maxSets
        ,
        obj.poolSizeCount
        ,
        Span(obj.pPoolSizes, obj.poolSizeCount)
    );
}

template <>
inline auto to_tuple<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxInlineUniformBlockBindings
    );
}

template <>
inline auto to_tuple<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj)
{
    return std::make_tuple(
        obj.type
        ,
        obj.descriptorCount
    );
}

template <>
inline auto to_tuple<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.descriptorPool
        ,
        obj.descriptorSetCount
        ,
        Span(obj.pSetLayouts, obj.descriptorSetCount)
    );
}

template <>
inline auto to_tuple<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj)
{
    return std::make_tuple(
        obj.binding
        ,
        obj.descriptorType
        ,
        obj.descriptorCount
        ,
        obj.stageFlags
        ,
        Span(obj.pImmutableSamplers, obj.descriptorCount)
    );
}

template <>
inline auto to_tuple<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.bindingCount
        ,
        Span(obj.pBindingFlags, obj.bindingCount)
    );
}


template <>
inline auto to_tuple<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.bindingCount
        ,
        Span(obj.pBindings, obj.bindingCount)
    );
}

template <>
inline auto to_tuple<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.supported
    );
}


template <>
inline auto to_tuple<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.descriptorSetCount
        ,
        Span(obj.pDescriptorCounts, obj.descriptorSetCount)
    );
}


template <>
inline auto to_tuple<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxVariableDescriptorCount
    );
}


template <>
inline auto to_tuple<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.descriptorUpdateEntryCount
        ,
        Span(obj.pDescriptorUpdateEntries, obj.descriptorUpdateEntryCount)
        ,
        obj.templateType
        ,
        obj.descriptorSetLayout
        ,
        obj.pipelineBindPoint
        ,
        obj.pipelineLayout
        ,
        obj.set
    );
}


template <>
inline auto to_tuple<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj)
{
    return std::make_tuple(
        obj.dstBinding
        ,
        obj.dstArrayElement
        ,
        obj.descriptorCount
        ,
        obj.descriptorType
        ,
        obj.offset
        ,
        obj.stride
    );
}


template <>
inline auto to_tuple<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.queueCreateInfoCount
        ,
        Span(obj.pQueueCreateInfos, obj.queueCreateInfoCount)
        ,
        obj.enabledLayerCount
        ,
        DynamicStringArrayTupleElementWrapper { obj.enabledLayerCount, obj.ppEnabledLayerNames }
        ,
        obj.enabledExtensionCount
        ,
        DynamicStringArrayTupleElementWrapper { obj.enabledExtensionCount, obj.ppEnabledExtensionNames }
        ,
        Span(obj.pEnabledFeatures, 1)
    );
}

template <>
inline auto to_tuple<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceEvent
    );
}

template <>
inline auto to_tuple<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.resourceDeviceIndex
        ,
        obj.memoryDeviceIndex
    );
}


template <>
inline auto to_tuple<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceMask
    );
}


template <>
inline auto to_tuple<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.physicalDeviceCount
        ,
        Span(obj.pPhysicalDevices, obj.physicalDeviceCount)
    );
}


template <>
inline auto to_tuple<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        Span(obj.presentMask, VK_MAX_DEVICE_GROUP_SIZE)
        ,
        obj.modes
    );
}

template <>
inline auto to_tuple<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.swapchainCount
        ,
        Span(obj.pDeviceMasks, obj.swapchainCount)
        ,
        obj.mode
    );
}

template <>
inline auto to_tuple<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceMask
        ,
        obj.deviceRenderAreaCount
        ,
        Span(obj.pDeviceRenderAreas, obj.deviceRenderAreaCount)
    );
}


template <>
inline auto to_tuple<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.waitSemaphoreCount
        ,
        Span(obj.pWaitSemaphoreDeviceIndices, obj.waitSemaphoreCount)
        ,
        obj.commandBufferCount
        ,
        Span(obj.pCommandBufferDeviceMasks, obj.commandBufferCount)
        ,
        obj.signalSemaphoreCount
        ,
        Span(obj.pSignalSemaphoreDeviceIndices, obj.signalSemaphoreCount)
    );
}


template <>
inline auto to_tuple<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.modes
    );
}

template <>
inline auto to_tuple<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memory
    );
}


template <>
inline auto to_tuple<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.overallocationBehavior
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj)
{
    return std::make_tuple(
        obj.deviceAddress
        ,
        obj.hostAddress
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj)
{
    return std::make_tuple(
        obj.deviceAddress
        ,
        obj.hostAddress
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.privateDataSlotRequestCount
    );
}

template <>
inline auto to_tuple<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.queueFamilyIndex
        ,
        obj.queueCount
        ,
        Span(obj.pQueuePriorities, obj.queueCount)
    );
}

template <>
inline auto to_tuple<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.globalPriority
    );
}

template <>
inline auto to_tuple<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.queueFamilyIndex
        ,
        obj.queueIndex
    );
}

#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
template <>
inline auto to_tuple<VkDirectFBSurfaceCreateInfoEXT>(const VkDirectFBSurfaceCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.dfb
        ,
        obj.surface
    );
}
#endif // VK_USE_PLATFORM_DIRECTFB_EXT

template <>
inline auto to_tuple<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj)
{
    return std::make_tuple(
        obj.x
        ,
        obj.y
        ,
        obj.z
    );
}

template <>
inline auto to_tuple<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.displayEvent
    );
}

template <>
inline auto to_tuple<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        std::ref(obj.parameters)
    );
}

template <>
inline auto to_tuple<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj)
{
    return std::make_tuple(
        std::ref(obj.visibleRegion)
        ,
        obj.refreshRate
    );
}

template <>
inline auto to_tuple<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.displayModeProperties)
    );
}

template <>
inline auto to_tuple<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj)
{
    return std::make_tuple(
        obj.displayMode
        ,
        std::ref(obj.parameters)
    );
}

template <>
inline auto to_tuple<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.localDimmingSupport
    );
}

template <>
inline auto to_tuple<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.capabilities)
    );
}

template <>
inline auto to_tuple<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj)
{
    return std::make_tuple(
        obj.supportedAlpha
        ,
        std::ref(obj.minSrcPosition)
        ,
        std::ref(obj.maxSrcPosition)
        ,
        std::ref(obj.minSrcExtent)
        ,
        std::ref(obj.maxSrcExtent)
        ,
        std::ref(obj.minDstPosition)
        ,
        std::ref(obj.maxDstPosition)
        ,
        std::ref(obj.minDstExtent)
        ,
        std::ref(obj.maxDstExtent)
    );
}

template <>
inline auto to_tuple<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.mode
        ,
        obj.planeIndex
    );
}

template <>
inline auto to_tuple<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.displayPlaneProperties)
    );
}

template <>
inline auto to_tuple<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj)
{
    return std::make_tuple(
        obj.currentDisplay
        ,
        obj.currentStackIndex
    );
}

template <>
inline auto to_tuple<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.powerState
    );
}

template <>
inline auto to_tuple<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.srcRect)
        ,
        std::ref(obj.dstRect)
        ,
        obj.persistent
    );
}

template <>
inline auto to_tuple<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.displayProperties)
    );
}

template <>
inline auto to_tuple<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj)
{
    return std::make_tuple(
        obj.display
        ,
        obj.displayName ? std::string_view(obj.displayName) : std::string_view()
        ,
        std::ref(obj.physicalDimensions)
        ,
        std::ref(obj.physicalResolution)
        ,
        obj.supportedTransforms
        ,
        obj.planeReorderPossible
        ,
        obj.persistentContent
    );
}

template <>
inline auto to_tuple<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.displayMode
        ,
        obj.planeIndex
        ,
        obj.planeStackIndex
        ,
        obj.transform
        ,
        obj.globalAlpha
        ,
        obj.alphaMode
        ,
        std::ref(obj.imageExtent)
    );
}

template <>
inline auto to_tuple<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj)
{
    return std::make_tuple(
        obj.indexCount
        ,
        obj.instanceCount
        ,
        obj.firstIndex
        ,
        obj.vertexOffset
        ,
        obj.firstInstance
    );
}

template <>
inline auto to_tuple<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj)
{
    return std::make_tuple(
        obj.vertexCount
        ,
        obj.instanceCount
        ,
        obj.firstVertex
        ,
        obj.firstInstance
    );
}

template <>
inline auto to_tuple<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj)
{
    return std::make_tuple(
        obj.taskCount
        ,
        obj.firstTask
    );
}

template <>
inline auto to_tuple<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.drmFormatModifier
        ,
        obj.drmFormatModifierPlaneCount
        ,
        obj.drmFormatModifierTilingFeatures
    );
}

template <>
inline auto to_tuple<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.drmFormatModifierCount
        ,
        Span(obj.pDrmFormatModifierProperties, obj.drmFormatModifierCount)
    );
}

template <>
inline auto to_tuple<VkEventCreateInfo>(const VkEventCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleTypes
    );
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pAttributes
        ,
        obj.dwAccess
        ,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleTypes
    );
}


template <>
inline auto to_tuple<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleTypes
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pAttributes
        ,
        obj.dwAccess
        ,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pAttributes
        ,
        obj.dwAccess
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleTypes
    );
}


#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pAttributes
        ,
        obj.dwAccess
        ,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkExtensionProperties>(const VkExtensionProperties& obj)
{
    return std::make_tuple(
        Span(obj.extensionName, VK_MAX_EXTENSION_NAME_SIZE)
        ,
        obj.specVersion
    );
}

template <>
inline auto to_tuple<VkExtent2D>(const VkExtent2D& obj)
{
    return std::make_tuple(
        obj.width
        ,
        obj.height
    );
}

template <>
inline auto to_tuple<VkExtent3D>(const VkExtent3D& obj)
{
    return std::make_tuple(
        obj.width
        ,
        obj.height
        ,
        obj.depth
    );
}

template <>
inline auto to_tuple<VkExternalBufferProperties>(const VkExternalBufferProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.externalMemoryProperties)
    );
}


template <>
inline auto to_tuple<VkExternalFenceProperties>(const VkExternalFenceProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.exportFromImportedHandleTypes
        ,
        obj.compatibleHandleTypes
        ,
        obj.externalFenceFeatures
    );
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.externalFormat
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto to_tuple<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.externalMemoryProperties)
    );
}


template <>
inline auto to_tuple<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj)
{
    return std::make_tuple(
        std::ref(obj.imageFormatProperties)
        ,
        obj.externalMemoryFeatures
        ,
        obj.exportFromImportedHandleTypes
        ,
        obj.compatibleHandleTypes
    );
}

template <>
inline auto to_tuple<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleTypes
    );
}


template <>
inline auto to_tuple<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleTypes
    );
}


template <>
inline auto to_tuple<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleTypes
    );
}

template <>
inline auto to_tuple<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj)
{
    return std::make_tuple(
        obj.externalMemoryFeatures
        ,
        obj.exportFromImportedHandleTypes
        ,
        obj.compatibleHandleTypes
    );
}


template <>
inline auto to_tuple<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.exportFromImportedHandleTypes
        ,
        obj.compatibleHandleTypes
        ,
        obj.externalSemaphoreFeatures
    );
}


template <>
inline auto to_tuple<VkFenceCreateInfo>(const VkFenceCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fence
        ,
        obj.handleType
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fence
        ,
        obj.handleType
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.filterCubic
        ,
        obj.filterCubicMinmax
    );
}

template <>
inline auto to_tuple<VkFormatProperties>(const VkFormatProperties& obj)
{
    return std::make_tuple(
        obj.linearTilingFeatures
        ,
        obj.optimalTilingFeatures
        ,
        obj.bufferFeatures
    );
}

template <>
inline auto to_tuple<VkFormatProperties2>(const VkFormatProperties2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.formatProperties)
    );
}


template <>
inline auto to_tuple<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.usage
        ,
        obj.width
        ,
        obj.height
        ,
        obj.layerCount
        ,
        obj.viewFormatCount
        ,
        Span(obj.pViewFormats, obj.viewFormatCount)
    );
}


template <>
inline auto to_tuple<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.attachmentImageInfoCount
        ,
        Span(obj.pAttachmentImageInfos, obj.attachmentImageInfoCount)
    );
}


template <>
inline auto to_tuple<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.renderPass
        ,
        obj.attachmentCount
        ,
        Span(obj.pAttachments, obj.attachmentCount)
        ,
        obj.width
        ,
        obj.height
        ,
        obj.layers
    );
}

template <>
inline auto to_tuple<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.coverageReductionMode
        ,
        obj.rasterizationSamples
        ,
        obj.depthStencilSamples
        ,
        obj.colorSamples
    );
}

template <>
inline auto to_tuple<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pipelineBindPoint
        ,
        obj.pipeline
        ,
        obj.indirectCommandsLayout
        ,
        obj.streamCount
        ,
        Span(obj.pStreams, obj.streamCount)
        ,
        obj.sequencesCount
        ,
        obj.preprocessBuffer
        ,
        obj.preprocessOffset
        ,
        obj.preprocessSize
        ,
        obj.sequencesCountBuffer
        ,
        obj.sequencesCountOffset
        ,
        obj.sequencesIndexBuffer
        ,
        obj.sequencesIndexOffset
    );
}

template <>
inline auto to_tuple<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pipelineBindPoint
        ,
        obj.pipeline
        ,
        obj.indirectCommandsLayout
        ,
        obj.maxSequencesCount
    );
}

template <>
inline auto to_tuple<VkGeometryAABBNV>(const VkGeometryAABBNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.aabbData
        ,
        obj.numAABBs
        ,
        obj.stride
        ,
        obj.offset
    );
}

template <>
inline auto to_tuple<VkGeometryDataNV>(const VkGeometryDataNV& obj)
{
    return std::make_tuple(
        std::ref(obj.triangles)
        ,
        std::ref(obj.aabbs)
    );
}

template <>
inline auto to_tuple<VkGeometryNV>(const VkGeometryNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.geometryType
        ,
        std::ref(obj.geometry)
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.vertexData
        ,
        obj.vertexOffset
        ,
        obj.vertexCount
        ,
        obj.vertexStride
        ,
        obj.vertexFormat
        ,
        obj.indexData
        ,
        obj.indexOffset
        ,
        obj.indexCount
        ,
        obj.indexType
        ,
        obj.transformData
        ,
        obj.transformOffset
    );
}

template <>
inline auto to_tuple<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.stageCount
        ,
        Span(obj.pStages, obj.stageCount)
        ,
        Span(obj.pVertexInputState, 1)
        ,
        Span(obj.pInputAssemblyState, 1)
        ,
        Span(obj.pTessellationState, 1)
        ,
        Span(obj.pViewportState, 1)
        ,
        Span(obj.pRasterizationState, 1)
        ,
        Span(obj.pMultisampleState, 1)
        ,
        Span(obj.pDepthStencilState, 1)
        ,
        Span(obj.pColorBlendState, 1)
        ,
        Span(obj.pDynamicState, 1)
        ,
        obj.layout
        ,
        obj.renderPass
        ,
        obj.subpass
        ,
        obj.basePipelineHandle
        ,
        obj.basePipelineIndex
    );
}

template <>
inline auto to_tuple<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.groupCount
        ,
        Span(obj.pGroups, obj.groupCount)
        ,
        obj.pipelineCount
        ,
        Span(obj.pPipelines, obj.pipelineCount)
    );
}

template <>
inline auto to_tuple<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.stageCount
        ,
        Span(obj.pStages, obj.stageCount)
        ,
        Span(obj.pVertexInputState, 1)
        ,
        Span(obj.pTessellationState, 1)
    );
}

template <>
inline auto to_tuple<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.displayPrimaryRed)
        ,
        std::ref(obj.displayPrimaryGreen)
        ,
        std::ref(obj.displayPrimaryBlue)
        ,
        std::ref(obj.whitePoint)
        ,
        obj.maxLuminance
        ,
        obj.minLuminance
        ,
        obj.maxContentLightLevel
        ,
        obj.maxFrameAverageLightLevel
    );
}

template <>
inline auto to_tuple<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
    );
}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
inline auto to_tuple<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.pView
    );
}
#endif // VK_USE_PLATFORM_IOS_MVK

template <>
inline auto to_tuple<VkImageBlit>(const VkImageBlit& obj)
{
    return std::make_tuple(
        std::ref(obj.srcSubresource)
        ,
        Span(obj.srcOffsets, 2)
        ,
        std::ref(obj.dstSubresource)
        ,
        Span(obj.dstOffsets, 2)
    );
}

template <>
inline auto to_tuple<VkImageCopy>(const VkImageCopy& obj)
{
    return std::make_tuple(
        std::ref(obj.srcSubresource)
        ,
        std::ref(obj.srcOffset)
        ,
        std::ref(obj.dstSubresource)
        ,
        std::ref(obj.dstOffset)
        ,
        std::ref(obj.extent)
    );
}

template <>
inline auto to_tuple<VkImageCreateInfo>(const VkImageCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.imageType
        ,
        obj.format
        ,
        std::ref(obj.extent)
        ,
        obj.mipLevels
        ,
        obj.arrayLayers
        ,
        obj.samples
        ,
        obj.tiling
        ,
        obj.usage
        ,
        obj.sharingMode
        ,
        obj.queueFamilyIndexCount
        ,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount)
        ,
        obj.initialLayout
    );
}

template <>
inline auto to_tuple<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.drmFormatModifier
        ,
        obj.drmFormatModifierPlaneCount
        ,
        Span(obj.pPlaneLayouts, obj.drmFormatModifierPlaneCount)
    );
}

template <>
inline auto to_tuple<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.drmFormatModifierCount
        ,
        Span(obj.pDrmFormatModifiers, obj.drmFormatModifierCount)
    );
}

template <>
inline auto to_tuple<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.drmFormatModifier
    );
}

template <>
inline auto to_tuple<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.viewFormatCount
        ,
        Span(obj.pViewFormats, obj.viewFormatCount)
    );
}


template <>
inline auto to_tuple<VkImageFormatProperties>(const VkImageFormatProperties& obj)
{
    return std::make_tuple(
        std::ref(obj.maxExtent)
        ,
        obj.maxMipLevels
        ,
        obj.maxArrayLayers
        ,
        obj.sampleCounts
        ,
        obj.maxResourceSize
    );
}

template <>
inline auto to_tuple<VkImageFormatProperties2>(const VkImageFormatProperties2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.imageFormatProperties)
    );
}


template <>
inline auto to_tuple<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.srcAccessMask
        ,
        obj.dstAccessMask
        ,
        obj.oldLayout
        ,
        obj.newLayout
        ,
        obj.srcQueueFamilyIndex
        ,
        obj.dstQueueFamilyIndex
        ,
        obj.image
        ,
        std::ref(obj.subresourceRange)
    );
}

template <>
inline auto to_tuple<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.image
    );
}


#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
inline auto to_tuple<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.imagePipeHandle
    );
}
#endif // VK_USE_PLATFORM_FUCHSIA

template <>
inline auto to_tuple<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.planeAspect
    );
}


template <>
inline auto to_tuple<VkImageResolve>(const VkImageResolve& obj)
{
    return std::make_tuple(
        std::ref(obj.srcSubresource)
        ,
        std::ref(obj.srcOffset)
        ,
        std::ref(obj.dstSubresource)
        ,
        std::ref(obj.dstOffset)
        ,
        std::ref(obj.extent)
    );
}

template <>
inline auto to_tuple<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.image
    );
}


template <>
inline auto to_tuple<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.stencilUsage
    );
}


template <>
inline auto to_tuple<VkImageSubresource>(const VkImageSubresource& obj)
{
    return std::make_tuple(
        obj.aspectMask
        ,
        obj.mipLevel
        ,
        obj.arrayLayer
    );
}

template <>
inline auto to_tuple<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj)
{
    return std::make_tuple(
        obj.aspectMask
        ,
        obj.mipLevel
        ,
        obj.baseArrayLayer
        ,
        obj.layerCount
    );
}

template <>
inline auto to_tuple<VkImageSubresourceRange>(const VkImageSubresourceRange& obj)
{
    return std::make_tuple(
        obj.aspectMask
        ,
        obj.baseMipLevel
        ,
        obj.levelCount
        ,
        obj.baseArrayLayer
        ,
        obj.layerCount
    );
}

template <>
inline auto to_tuple<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.swapchain
    );
}

template <>
inline auto to_tuple<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.decodeMode
    );
}

template <>
inline auto to_tuple<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceAddress
        ,
        obj.size
    );
}

template <>
inline auto to_tuple<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.image
        ,
        obj.viewType
        ,
        obj.format
        ,
        std::ref(obj.components)
        ,
        std::ref(obj.subresourceRange)
    );
}

template <>
inline auto to_tuple<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.imageView
        ,
        obj.descriptorType
        ,
        obj.sampler
    );
}

template <>
inline auto to_tuple<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.usage
    );
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.buffer
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto to_tuple<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fence
        ,
        obj.flags
        ,
        obj.handleType
        ,
        obj.fd
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fence
        ,
        obj.flags
        ,
        obj.handleType
        ,
        obj.handle
        ,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleType
        ,
        obj.fd
    );
}

template <>
inline auto to_tuple<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleType
        ,
        obj.pHostPointer
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleType
        ,
        obj.handle
        ,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleType
        ,
        obj.handle
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.semaphore
        ,
        obj.flags
        ,
        obj.handleType
        ,
        obj.fd
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.semaphore
        ,
        obj.flags
        ,
        obj.handleType
        ,
        obj.handle
        ,
        obj.name
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.pipelineBindPoint
        ,
        obj.tokenCount
        ,
        Span(obj.pTokens, obj.tokenCount)
        ,
        obj.streamCount
        ,
        Span(obj.pStreamStrides, obj.streamCount)
    );
}

template <>
inline auto to_tuple<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.tokenType
        ,
        obj.stream
        ,
        obj.offset
        ,
        obj.vertexBindingUnit
        ,
        obj.vertexDynamicStride
        ,
        obj.pushconstantPipelineLayout
        ,
        obj.pushconstantShaderStageFlags
        ,
        obj.pushconstantOffset
        ,
        obj.pushconstantSize
        ,
        obj.indirectStateFlags
        ,
        obj.indexTypeCount
        ,
        Span(obj.pIndexTypes, obj.indexTypeCount)
        ,
        Span(obj.pIndexTypeValues, obj.indexTypeCount)
    );
}

template <>
inline auto to_tuple<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj)
{
    return std::make_tuple(
        obj.buffer
        ,
        obj.offset
    );
}

template <>
inline auto to_tuple<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pUserData
    );
}

template <>
inline auto to_tuple<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj)
{
    return std::make_tuple(
        obj.subpass
        ,
        obj.inputAttachmentIndex
        ,
        obj.aspectMask
    );
}


template <>
inline auto to_tuple<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        Span(obj.pApplicationInfo, 1)
        ,
        obj.enabledLayerCount
        ,
        DynamicStringArrayTupleElementWrapper { obj.enabledLayerCount, obj.ppEnabledLayerNames }
        ,
        obj.enabledExtensionCount
        ,
        DynamicStringArrayTupleElementWrapper { obj.enabledExtensionCount, obj.ppEnabledExtensionNames }
    );
}

template <>
inline auto to_tuple<VkLayerProperties>(const VkLayerProperties& obj)
{
    return std::make_tuple(
        Span(obj.layerName, VK_MAX_EXTENSION_NAME_SIZE)
        ,
        obj.specVersion
        ,
        obj.implementationVersion
        ,
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE)
    );
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
inline auto to_tuple<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.pView
    );
}
#endif // VK_USE_PLATFORM_MACOS_MVK

template <>
inline auto to_tuple<VkMappedMemoryRange>(const VkMappedMemoryRange& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memory
        ,
        obj.offset
        ,
        obj.size
    );
}

template <>
inline auto to_tuple<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.deviceMask
    );
}


template <>
inline auto to_tuple<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.allocationSize
        ,
        obj.memoryTypeIndex
    );
}

template <>
inline auto to_tuple<VkMemoryBarrier>(const VkMemoryBarrier& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.srcAccessMask
        ,
        obj.dstAccessMask
    );
}

template <>
inline auto to_tuple<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.image
        ,
        obj.buffer
    );
}


template <>
inline auto to_tuple<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.prefersDedicatedAllocation
        ,
        obj.requiresDedicatedAllocation
    );
}


template <>
inline auto to_tuple<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memoryTypeBits
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memory
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto to_tuple<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memory
        ,
        obj.handleType
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memory
        ,
        obj.handleType
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkMemoryHeap>(const VkMemoryHeap& obj)
{
    return std::make_tuple(
        obj.size
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memoryTypeBits
    );
}

template <>
inline auto to_tuple<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.opaqueCaptureAddress
    );
}


template <>
inline auto to_tuple<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.priority
    );
}

template <>
inline auto to_tuple<VkMemoryRequirements>(const VkMemoryRequirements& obj)
{
    return std::make_tuple(
        obj.size
        ,
        obj.alignment
        ,
        obj.memoryTypeBits
    );
}

template <>
inline auto to_tuple<VkMemoryRequirements2>(const VkMemoryRequirements2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.memoryRequirements)
    );
}


template <>
inline auto to_tuple<VkMemoryType>(const VkMemoryType& obj)
{
    return std::make_tuple(
        obj.propertyFlags
        ,
        obj.heapIndex
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memoryTypeBits
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
inline auto to_tuple<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.pLayer
    );
}
#endif // VK_USE_PLATFORM_METAL_EXT

template <>
inline auto to_tuple<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.maxSampleLocationGridSize)
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handle
        ,
        obj.stride
        ,
        obj.format
        ,
        obj.usage
        ,
        std::ref(obj.usage2)
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj)
{
    return std::make_tuple(
        obj.consumer
        ,
        obj.producer
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto to_tuple<VkOffset2D>(const VkOffset2D& obj)
{
    return std::make_tuple(
        obj.x
        ,
        obj.y
    );
}

template <>
inline auto to_tuple<VkOffset3D>(const VkOffset3D& obj)
{
    return std::make_tuple(
        obj.x
        ,
        obj.y
        ,
        obj.z
    );
}

template <>
inline auto to_tuple<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj)
{
    return std::make_tuple(
        obj.presentID
        ,
        obj.desiredPresentTime
        ,
        obj.actualPresentTime
        ,
        obj.earliestPresentTime
        ,
        obj.presentMargin
    );
}

template <>
inline auto to_tuple<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.type
    );
}

template <>
inline auto to_tuple<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        Span(obj.name, VK_MAX_DESCRIPTION_SIZE)
        ,
        Span(obj.category, VK_MAX_DESCRIPTION_SIZE)
        ,
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE)
    );
}

template <>
inline auto to_tuple<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.unit
        ,
        obj.scope
        ,
        obj.storage
        ,
        Span(obj.uuid, VK_UUID_SIZE)
    );
}


template <>
inline auto to_tuple<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.marker
    );
}

template <>
inline auto to_tuple<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.type
        ,
        obj.enable
        ,
        obj.parameter
    );
}

template <>
inline auto to_tuple<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.counterPassIndex
    );
}

template <>
inline auto to_tuple<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.marker
    );
}


template <>
inline auto to_tuple<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj)
{
    return std::make_tuple(
        obj.type
        ,
        std::ref(obj.data)
    );
}

template <>
inline auto to_tuple<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.storageBuffer16BitAccess
        ,
        obj.uniformAndStorageBuffer16BitAccess
        ,
        obj.storagePushConstant16
        ,
        obj.storageInputOutput16
    );
}


template <>
inline auto to_tuple<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.storageBuffer8BitAccess
        ,
        obj.uniformAndStorageBuffer8BitAccess
        ,
        obj.storagePushConstant8
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.decodeModeSharedExponent
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.advancedBlendCoherentOperations
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.advancedBlendMaxColorAttachments
        ,
        obj.advancedBlendIndependentBlend
        ,
        obj.advancedBlendNonPremultipliedSrcColor
        ,
        obj.advancedBlendNonPremultipliedDstColor
        ,
        obj.advancedBlendCorrelatedOverlap
        ,
        obj.advancedBlendAllOperations
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.bufferDeviceAddress
        ,
        obj.bufferDeviceAddressCaptureReplay
        ,
        obj.bufferDeviceAddressMultiDevice
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.bufferDeviceAddress
        ,
        obj.bufferDeviceAddressCaptureReplay
        ,
        obj.bufferDeviceAddressMultiDevice
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceCoherentMemory
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.computeDerivativeGroupQuads
        ,
        obj.computeDerivativeGroupLinear
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.conditionalRendering
        ,
        obj.inheritedConditionalRendering
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.primitiveOverestimationSize
        ,
        obj.maxExtraPrimitiveOverestimationSize
        ,
        obj.extraPrimitiveOverestimationSizeGranularity
        ,
        obj.primitiveUnderestimation
        ,
        obj.conservativePointAndLineRasterization
        ,
        obj.degenerateTrianglesRasterized
        ,
        obj.degenerateLinesRasterized
        ,
        obj.fullyCoveredFragmentShaderInputVariable
        ,
        obj.conservativeRasterizationPostDepthCoverage
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.cooperativeMatrix
        ,
        obj.cooperativeMatrixRobustBufferAccess
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.cooperativeMatrixSupportedStages
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.cornerSampledImage
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.coverageReductionMode
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.customBorderColors
        ,
        obj.customBorderColorWithoutFormat
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxCustomBorderColorSamplers
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.dedicatedAllocationImageAliasing
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.depthClipEnable
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.supportedDepthResolveModes
        ,
        obj.supportedStencilResolveModes
        ,
        obj.independentResolveNone
        ,
        obj.independentResolve
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderInputAttachmentArrayDynamicIndexing
        ,
        obj.shaderUniformTexelBufferArrayDynamicIndexing
        ,
        obj.shaderStorageTexelBufferArrayDynamicIndexing
        ,
        obj.shaderUniformBufferArrayNonUniformIndexing
        ,
        obj.shaderSampledImageArrayNonUniformIndexing
        ,
        obj.shaderStorageBufferArrayNonUniformIndexing
        ,
        obj.shaderStorageImageArrayNonUniformIndexing
        ,
        obj.shaderInputAttachmentArrayNonUniformIndexing
        ,
        obj.shaderUniformTexelBufferArrayNonUniformIndexing
        ,
        obj.shaderStorageTexelBufferArrayNonUniformIndexing
        ,
        obj.descriptorBindingUniformBufferUpdateAfterBind
        ,
        obj.descriptorBindingSampledImageUpdateAfterBind
        ,
        obj.descriptorBindingStorageImageUpdateAfterBind
        ,
        obj.descriptorBindingStorageBufferUpdateAfterBind
        ,
        obj.descriptorBindingUniformTexelBufferUpdateAfterBind
        ,
        obj.descriptorBindingStorageTexelBufferUpdateAfterBind
        ,
        obj.descriptorBindingUpdateUnusedWhilePending
        ,
        obj.descriptorBindingPartiallyBound
        ,
        obj.descriptorBindingVariableDescriptorCount
        ,
        obj.runtimeDescriptorArray
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxUpdateAfterBindDescriptorsInAllPools
        ,
        obj.shaderUniformBufferArrayNonUniformIndexingNative
        ,
        obj.shaderSampledImageArrayNonUniformIndexingNative
        ,
        obj.shaderStorageBufferArrayNonUniformIndexingNative
        ,
        obj.shaderStorageImageArrayNonUniformIndexingNative
        ,
        obj.shaderInputAttachmentArrayNonUniformIndexingNative
        ,
        obj.robustBufferAccessUpdateAfterBind
        ,
        obj.quadDivergentImplicitLod
        ,
        obj.maxPerStageDescriptorUpdateAfterBindSamplers
        ,
        obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers
        ,
        obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers
        ,
        obj.maxPerStageDescriptorUpdateAfterBindSampledImages
        ,
        obj.maxPerStageDescriptorUpdateAfterBindStorageImages
        ,
        obj.maxPerStageDescriptorUpdateAfterBindInputAttachments
        ,
        obj.maxPerStageUpdateAfterBindResources
        ,
        obj.maxDescriptorSetUpdateAfterBindSamplers
        ,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffers
        ,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic
        ,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffers
        ,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic
        ,
        obj.maxDescriptorSetUpdateAfterBindSampledImages
        ,
        obj.maxDescriptorSetUpdateAfterBindStorageImages
        ,
        obj.maxDescriptorSetUpdateAfterBindInputAttachments
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.deviceGeneratedCommands
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxGraphicsShaderGroupCount
        ,
        obj.maxIndirectSequenceCount
        ,
        obj.maxIndirectCommandsTokenCount
        ,
        obj.maxIndirectCommandsStreamCount
        ,
        obj.maxIndirectCommandsTokenOffset
        ,
        obj.maxIndirectCommandsStreamStride
        ,
        obj.minSequencesCountBufferOffsetAlignment
        ,
        obj.minSequencesIndexBufferOffsetAlignment
        ,
        obj.minIndirectCommandsBufferOffsetAlignment
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.diagnosticsConfig
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxDiscardRectangles
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.driverID
        ,
        Span(obj.driverName, VK_MAX_DRIVER_NAME_SIZE)
        ,
        Span(obj.driverInfo, VK_MAX_DRIVER_INFO_SIZE)
        ,
        std::ref(obj.conformanceVersion)
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.exclusiveScissor
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>(const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.extendedDynamicState
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.usage
        ,
        obj.handleType
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleType
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleType
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.minImportedHostPointerAlignment
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.handleType
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj)
{
    return std::make_tuple(
        obj.robustBufferAccess
        ,
        obj.fullDrawIndexUint32
        ,
        obj.imageCubeArray
        ,
        obj.independentBlend
        ,
        obj.geometryShader
        ,
        obj.tessellationShader
        ,
        obj.sampleRateShading
        ,
        obj.dualSrcBlend
        ,
        obj.logicOp
        ,
        obj.multiDrawIndirect
        ,
        obj.drawIndirectFirstInstance
        ,
        obj.depthClamp
        ,
        obj.depthBiasClamp
        ,
        obj.fillModeNonSolid
        ,
        obj.depthBounds
        ,
        obj.wideLines
        ,
        obj.largePoints
        ,
        obj.alphaToOne
        ,
        obj.multiViewport
        ,
        obj.samplerAnisotropy
        ,
        obj.textureCompressionETC2
        ,
        obj.textureCompressionASTC_LDR
        ,
        obj.textureCompressionBC
        ,
        obj.occlusionQueryPrecise
        ,
        obj.pipelineStatisticsQuery
        ,
        obj.vertexPipelineStoresAndAtomics
        ,
        obj.fragmentStoresAndAtomics
        ,
        obj.shaderTessellationAndGeometryPointSize
        ,
        obj.shaderImageGatherExtended
        ,
        obj.shaderStorageImageExtendedFormats
        ,
        obj.shaderStorageImageMultisample
        ,
        obj.shaderStorageImageReadWithoutFormat
        ,
        obj.shaderStorageImageWriteWithoutFormat
        ,
        obj.shaderUniformBufferArrayDynamicIndexing
        ,
        obj.shaderSampledImageArrayDynamicIndexing
        ,
        obj.shaderStorageBufferArrayDynamicIndexing
        ,
        obj.shaderStorageImageArrayDynamicIndexing
        ,
        obj.shaderClipDistance
        ,
        obj.shaderCullDistance
        ,
        obj.shaderFloat64
        ,
        obj.shaderInt64
        ,
        obj.shaderInt16
        ,
        obj.shaderResourceResidency
        ,
        obj.shaderResourceMinLod
        ,
        obj.sparseBinding
        ,
        obj.sparseResidencyBuffer
        ,
        obj.sparseResidencyImage2D
        ,
        obj.sparseResidencyImage3D
        ,
        obj.sparseResidency2Samples
        ,
        obj.sparseResidency4Samples
        ,
        obj.sparseResidency8Samples
        ,
        obj.sparseResidency16Samples
        ,
        obj.sparseResidencyAliased
        ,
        obj.variableMultisampleRate
        ,
        obj.inheritedQueries
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.features)
    );
}



template <>
inline auto to_tuple<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.denormBehaviorIndependence
        ,
        obj.roundingModeIndependence
        ,
        obj.shaderSignedZeroInfNanPreserveFloat16
        ,
        obj.shaderSignedZeroInfNanPreserveFloat32
        ,
        obj.shaderSignedZeroInfNanPreserveFloat64
        ,
        obj.shaderDenormPreserveFloat16
        ,
        obj.shaderDenormPreserveFloat32
        ,
        obj.shaderDenormPreserveFloat64
        ,
        obj.shaderDenormFlushToZeroFloat16
        ,
        obj.shaderDenormFlushToZeroFloat32
        ,
        obj.shaderDenormFlushToZeroFloat64
        ,
        obj.shaderRoundingModeRTEFloat16
        ,
        obj.shaderRoundingModeRTEFloat32
        ,
        obj.shaderRoundingModeRTEFloat64
        ,
        obj.shaderRoundingModeRTZFloat16
        ,
        obj.shaderRoundingModeRTZFloat32
        ,
        obj.shaderRoundingModeRTZFloat64
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>(const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fragmentDensityMapDeferred
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>(const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.subsampledLoads
        ,
        obj.subsampledCoarseReconstructionEarlyAccess
        ,
        obj.maxSubsampledArrayLayers
        ,
        obj.maxDescriptorSetSubsampledSamplers
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fragmentDensityMap
        ,
        obj.fragmentDensityMapDynamic
        ,
        obj.fragmentDensityMapNonSubsampledImages
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.minFragmentDensityTexelSize)
        ,
        std::ref(obj.maxFragmentDensityTexelSize)
        ,
        obj.fragmentDensityInvocations
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fragmentShaderBarycentric
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fragmentShaderSampleInterlock
        ,
        obj.fragmentShaderPixelInterlock
        ,
        obj.fragmentShaderShadingRateInterlock
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.physicalDeviceCount
        ,
        Span(obj.physicalDevices, VK_MAX_DEVICE_GROUP_SIZE)
        ,
        obj.subsetAllocation
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.hostQueryReset
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        Span(obj.deviceUUID, VK_UUID_SIZE)
        ,
        Span(obj.driverUUID, VK_UUID_SIZE)
        ,
        Span(obj.deviceLUID, VK_LUID_SIZE)
        ,
        obj.deviceNodeMask
        ,
        obj.deviceLUIDValid
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.drmFormatModifier
        ,
        obj.sharingMode
        ,
        obj.queueFamilyIndexCount
        ,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount)
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.format
        ,
        obj.type
        ,
        obj.tiling
        ,
        obj.usage
        ,
        obj.flags
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceImageRobustnessFeaturesEXT>(const VkPhysicalDeviceImageRobustnessFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.robustImageAccess
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.imageViewType
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.imagelessFramebuffer
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.indexTypeUint8
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.inlineUniformBlock
        ,
        obj.descriptorBindingInlineUniformBlockUpdateAfterBind
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxInlineUniformBlockSize
        ,
        obj.maxPerStageDescriptorInlineUniformBlocks
        ,
        obj.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks
        ,
        obj.maxDescriptorSetInlineUniformBlocks
        ,
        obj.maxDescriptorSetUpdateAfterBindInlineUniformBlocks
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj)
{
    return std::make_tuple(
        obj.maxImageDimension1D
        ,
        obj.maxImageDimension2D
        ,
        obj.maxImageDimension3D
        ,
        obj.maxImageDimensionCube
        ,
        obj.maxImageArrayLayers
        ,
        obj.maxTexelBufferElements
        ,
        obj.maxUniformBufferRange
        ,
        obj.maxStorageBufferRange
        ,
        obj.maxPushConstantsSize
        ,
        obj.maxMemoryAllocationCount
        ,
        obj.maxSamplerAllocationCount
        ,
        obj.bufferImageGranularity
        ,
        obj.sparseAddressSpaceSize
        ,
        obj.maxBoundDescriptorSets
        ,
        obj.maxPerStageDescriptorSamplers
        ,
        obj.maxPerStageDescriptorUniformBuffers
        ,
        obj.maxPerStageDescriptorStorageBuffers
        ,
        obj.maxPerStageDescriptorSampledImages
        ,
        obj.maxPerStageDescriptorStorageImages
        ,
        obj.maxPerStageDescriptorInputAttachments
        ,
        obj.maxPerStageResources
        ,
        obj.maxDescriptorSetSamplers
        ,
        obj.maxDescriptorSetUniformBuffers
        ,
        obj.maxDescriptorSetUniformBuffersDynamic
        ,
        obj.maxDescriptorSetStorageBuffers
        ,
        obj.maxDescriptorSetStorageBuffersDynamic
        ,
        obj.maxDescriptorSetSampledImages
        ,
        obj.maxDescriptorSetStorageImages
        ,
        obj.maxDescriptorSetInputAttachments
        ,
        obj.maxVertexInputAttributes
        ,
        obj.maxVertexInputBindings
        ,
        obj.maxVertexInputAttributeOffset
        ,
        obj.maxVertexInputBindingStride
        ,
        obj.maxVertexOutputComponents
        ,
        obj.maxTessellationGenerationLevel
        ,
        obj.maxTessellationPatchSize
        ,
        obj.maxTessellationControlPerVertexInputComponents
        ,
        obj.maxTessellationControlPerVertexOutputComponents
        ,
        obj.maxTessellationControlPerPatchOutputComponents
        ,
        obj.maxTessellationControlTotalOutputComponents
        ,
        obj.maxTessellationEvaluationInputComponents
        ,
        obj.maxTessellationEvaluationOutputComponents
        ,
        obj.maxGeometryShaderInvocations
        ,
        obj.maxGeometryInputComponents
        ,
        obj.maxGeometryOutputComponents
        ,
        obj.maxGeometryOutputVertices
        ,
        obj.maxGeometryTotalOutputComponents
        ,
        obj.maxFragmentInputComponents
        ,
        obj.maxFragmentOutputAttachments
        ,
        obj.maxFragmentDualSrcAttachments
        ,
        obj.maxFragmentCombinedOutputResources
        ,
        obj.maxComputeSharedMemorySize
        ,
        Span(obj.maxComputeWorkGroupCount, 3)
        ,
        obj.maxComputeWorkGroupInvocations
        ,
        Span(obj.maxComputeWorkGroupSize, 3)
        ,
        obj.subPixelPrecisionBits
        ,
        obj.subTexelPrecisionBits
        ,
        obj.mipmapPrecisionBits
        ,
        obj.maxDrawIndexedIndexValue
        ,
        obj.maxDrawIndirectCount
        ,
        obj.maxSamplerLodBias
        ,
        obj.maxSamplerAnisotropy
        ,
        obj.maxViewports
        ,
        Span(obj.maxViewportDimensions, 2)
        ,
        Span(obj.viewportBoundsRange, 2)
        ,
        obj.viewportSubPixelBits
        ,
        obj.minMemoryMapAlignment
        ,
        obj.minTexelBufferOffsetAlignment
        ,
        obj.minUniformBufferOffsetAlignment
        ,
        obj.minStorageBufferOffsetAlignment
        ,
        obj.minTexelOffset
        ,
        obj.maxTexelOffset
        ,
        obj.minTexelGatherOffset
        ,
        obj.maxTexelGatherOffset
        ,
        obj.minInterpolationOffset
        ,
        obj.maxInterpolationOffset
        ,
        obj.subPixelInterpolationOffsetBits
        ,
        obj.maxFramebufferWidth
        ,
        obj.maxFramebufferHeight
        ,
        obj.maxFramebufferLayers
        ,
        obj.framebufferColorSampleCounts
        ,
        obj.framebufferDepthSampleCounts
        ,
        obj.framebufferStencilSampleCounts
        ,
        obj.framebufferNoAttachmentsSampleCounts
        ,
        obj.maxColorAttachments
        ,
        obj.sampledImageColorSampleCounts
        ,
        obj.sampledImageIntegerSampleCounts
        ,
        obj.sampledImageDepthSampleCounts
        ,
        obj.sampledImageStencilSampleCounts
        ,
        obj.storageImageSampleCounts
        ,
        obj.maxSampleMaskWords
        ,
        obj.timestampComputeAndGraphics
        ,
        obj.timestampPeriod
        ,
        obj.maxClipDistances
        ,
        obj.maxCullDistances
        ,
        obj.maxCombinedClipAndCullDistances
        ,
        obj.discreteQueuePriorities
        ,
        Span(obj.pointSizeRange, 2)
        ,
        Span(obj.lineWidthRange, 2)
        ,
        obj.pointSizeGranularity
        ,
        obj.lineWidthGranularity
        ,
        obj.strictLines
        ,
        obj.standardSampleLocations
        ,
        obj.optimalBufferCopyOffsetAlignment
        ,
        obj.optimalBufferCopyRowPitchAlignment
        ,
        obj.nonCoherentAtomSize
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.rectangularLines
        ,
        obj.bresenhamLines
        ,
        obj.smoothLines
        ,
        obj.stippledRectangularLines
        ,
        obj.stippledBresenhamLines
        ,
        obj.stippledSmoothLines
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.lineSubPixelPrecisionBits
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxPerSetDescriptors
        ,
        obj.maxMemoryAllocationSize
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        Span(obj.heapBudget, VK_MAX_MEMORY_HEAPS)
        ,
        Span(obj.heapUsage, VK_MAX_MEMORY_HEAPS)
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.memoryPriority
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj)
{
    return std::make_tuple(
        obj.memoryTypeCount
        ,
        Span(obj.memoryTypes, VK_MAX_MEMORY_TYPES)
        ,
        obj.memoryHeapCount
        ,
        Span(obj.memoryHeaps, VK_MAX_MEMORY_HEAPS)
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.memoryProperties)
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.taskShader
        ,
        obj.meshShader
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxDrawMeshTasksCount
        ,
        obj.maxTaskWorkGroupInvocations
        ,
        Span(obj.maxTaskWorkGroupSize, 3)
        ,
        obj.maxTaskTotalMemorySize
        ,
        obj.maxTaskOutputCount
        ,
        obj.maxMeshWorkGroupInvocations
        ,
        Span(obj.maxMeshWorkGroupSize, 3)
        ,
        obj.maxMeshTotalMemorySize
        ,
        obj.maxMeshOutputVertices
        ,
        obj.maxMeshOutputPrimitives
        ,
        obj.maxMeshMultiviewViewCount
        ,
        obj.meshOutputPerVertexGranularity
        ,
        obj.meshOutputPerPrimitiveGranularity
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.multiview
        ,
        obj.multiviewGeometryShader
        ,
        obj.multiviewTessellationShader
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.perViewPositionAllComponents
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxMultiviewViewCount
        ,
        obj.maxMultiviewInstanceIndex
    );
}


template <>
inline auto to_tuple<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pciDomain
        ,
        obj.pciBus
        ,
        obj.pciDevice
        ,
        obj.pciFunction
    );
}

template <>
inline auto to_tuple<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.performanceCounterQueryPools
        ,
        obj.performanceCounterMultipleQueryPools
    );
}

template <>
inline auto to_tuple<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.allowCommandBufferQueryCopies
    );
}

template <>
inline auto to_tuple<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pipelineCreationCacheControl
    );
}

template <>
inline auto to_tuple<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pipelineExecutableInfo
    );
}

template <>
inline auto to_tuple<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pointClippingBehavior
    );
}


#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.sharedImage
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto to_tuple<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.privateData
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj)
{
    return std::make_tuple(
        obj.apiVersion
        ,
        obj.driverVersion
        ,
        obj.vendorID
        ,
        obj.deviceID
        ,
        obj.deviceType
        ,
        Span(obj.deviceName, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE)
        ,
        Span(obj.pipelineCacheUUID, VK_UUID_SIZE)
        ,
        std::ref(obj.limits)
        ,
        std::ref(obj.sparseProperties)
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.properties)
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.protectedMemory
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.protectedNoFault
    );
}

template <>
inline auto to_tuple<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxPushDescriptors
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.rayTracing
        ,
        obj.rayTracingShaderGroupHandleCaptureReplay
        ,
        obj.rayTracingShaderGroupHandleCaptureReplayMixed
        ,
        obj.rayTracingAccelerationStructureCaptureReplay
        ,
        obj.rayTracingIndirectTraceRays
        ,
        obj.rayTracingIndirectAccelerationStructureBuild
        ,
        obj.rayTracingHostAccelerationStructureCommands
        ,
        obj.rayQuery
        ,
        obj.rayTracingPrimitiveCulling
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderGroupHandleSize
        ,
        obj.maxRecursionDepth
        ,
        obj.maxShaderGroupStride
        ,
        obj.shaderGroupBaseAlignment
        ,
        obj.maxGeometryCount
        ,
        obj.maxInstanceCount
        ,
        obj.maxPrimitiveCount
        ,
        obj.maxDescriptorSetAccelerationStructures
        ,
        obj.shaderGroupHandleCaptureReplaySize
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderGroupHandleSize
        ,
        obj.maxRecursionDepth
        ,
        obj.maxShaderGroupStride
        ,
        obj.shaderGroupBaseAlignment
        ,
        obj.maxGeometryCount
        ,
        obj.maxInstanceCount
        ,
        obj.maxTriangleCount
        ,
        obj.maxDescriptorSetAccelerationStructures
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.representativeFragmentTest
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.robustBufferAccess2
        ,
        obj.robustImageAccess2
        ,
        obj.nullDescriptor
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.robustStorageBufferAccessSizeAlignment
        ,
        obj.robustUniformBufferAccessSizeAlignment
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.sampleLocationSampleCounts
        ,
        std::ref(obj.maxSampleLocationGridSize)
        ,
        Span(obj.sampleLocationCoordinateRange, 2)
        ,
        obj.sampleLocationSubPixelBits
        ,
        obj.variableSampleLocations
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.filterMinmaxSingleComponentFormats
        ,
        obj.filterMinmaxImageComponentMapping
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.samplerYcbcrConversion
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.scalarBlockLayout
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.separateDepthStencilLayouts
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>(const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderBufferFloat32Atomics
        ,
        obj.shaderBufferFloat32AtomicAdd
        ,
        obj.shaderBufferFloat64Atomics
        ,
        obj.shaderBufferFloat64AtomicAdd
        ,
        obj.shaderSharedFloat32Atomics
        ,
        obj.shaderSharedFloat32AtomicAdd
        ,
        obj.shaderSharedFloat64Atomics
        ,
        obj.shaderSharedFloat64AtomicAdd
        ,
        obj.shaderImageFloat32Atomics
        ,
        obj.shaderImageFloat32AtomicAdd
        ,
        obj.sparseImageFloat32Atomics
        ,
        obj.sparseImageFloat32AtomicAdd
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderBufferInt64Atomics
        ,
        obj.shaderSharedInt64Atomics
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderSubgroupClock
        ,
        obj.shaderDeviceClock
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderCoreFeatures
        ,
        obj.activeComputeUnitCount
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderEngineCount
        ,
        obj.shaderArraysPerEngineCount
        ,
        obj.computeUnitsPerShaderArray
        ,
        obj.simdPerComputeUnit
        ,
        obj.wavefrontsPerSimd
        ,
        obj.wavefrontSize
        ,
        obj.sgprsPerSimd
        ,
        obj.minSgprAllocation
        ,
        obj.maxSgprAllocation
        ,
        obj.sgprAllocationGranularity
        ,
        obj.vgprsPerSimd
        ,
        obj.minVgprAllocation
        ,
        obj.maxVgprAllocation
        ,
        obj.vgprAllocationGranularity
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderDemoteToHelperInvocation
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderDrawParameters
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderFloat16
        ,
        obj.shaderInt8
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.imageFootprint
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderIntegerFunctions2
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderSMBuiltins
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderSMCount
        ,
        obj.shaderWarpsPerSM
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shaderSubgroupExtendedTypes
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shadingRateImage
        ,
        obj.shadingRateCoarseSampleOrder
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.shadingRateTexelSize)
        ,
        obj.shadingRatePaletteSize
        ,
        obj.shadingRateMaxCoarseSamples
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.format
        ,
        obj.type
        ,
        obj.samples
        ,
        obj.usage
        ,
        obj.tiling
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj)
{
    return std::make_tuple(
        obj.residencyStandard2DBlockShape
        ,
        obj.residencyStandard2DMultisampleBlockShape
        ,
        obj.residencyStandard3DBlockShape
        ,
        obj.residencyAlignedMipSize
        ,
        obj.residencyNonResidentStrict
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.subgroupSize
        ,
        obj.supportedStages
        ,
        obj.supportedOperations
        ,
        obj.quadOperationsInAllStages
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.subgroupSizeControl
        ,
        obj.computeFullSubgroups
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.minSubgroupSize
        ,
        obj.maxSubgroupSize
        ,
        obj.maxComputeWorkgroupSubgroups
        ,
        obj.requiredSubgroupSizeStages
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.surface
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.texelBufferAlignment
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.storageTexelBufferOffsetAlignmentBytes
        ,
        obj.storageTexelBufferOffsetSingleTexelAlignment
        ,
        obj.uniformTexelBufferOffsetAlignmentBytes
        ,
        obj.uniformTexelBufferOffsetSingleTexelAlignment
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.textureCompressionASTC_HDR
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.timelineSemaphore
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxTimelineSemaphoreValueDifference
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        Span(obj.name, VK_MAX_EXTENSION_NAME_SIZE)
        ,
        Span(obj.version, VK_MAX_EXTENSION_NAME_SIZE)
        ,
        obj.purposes
        ,
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE)
        ,
        Span(obj.layer, VK_MAX_EXTENSION_NAME_SIZE)
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.transformFeedback
        ,
        obj.geometryStreams
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxTransformFeedbackStreams
        ,
        obj.maxTransformFeedbackBuffers
        ,
        obj.maxTransformFeedbackBufferSize
        ,
        obj.maxTransformFeedbackStreamDataSize
        ,
        obj.maxTransformFeedbackBufferDataSize
        ,
        obj.maxTransformFeedbackBufferDataStride
        ,
        obj.transformFeedbackQueries
        ,
        obj.transformFeedbackStreamsLinesTriangles
        ,
        obj.transformFeedbackRasterizationStreamSelect
        ,
        obj.transformFeedbackDraw
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.uniformBufferStandardLayout
    );
}




template <>
inline auto to_tuple<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.variablePointersStorageBuffer
        ,
        obj.variablePointers
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.vertexAttributeInstanceRateDivisor
        ,
        obj.vertexAttributeInstanceRateZeroDivisor
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxVertexAttribDivisor
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.storageBuffer16BitAccess
        ,
        obj.uniformAndStorageBuffer16BitAccess
        ,
        obj.storagePushConstant16
        ,
        obj.storageInputOutput16
        ,
        obj.multiview
        ,
        obj.multiviewGeometryShader
        ,
        obj.multiviewTessellationShader
        ,
        obj.variablePointersStorageBuffer
        ,
        obj.variablePointers
        ,
        obj.protectedMemory
        ,
        obj.samplerYcbcrConversion
        ,
        obj.shaderDrawParameters
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        Span(obj.deviceUUID, VK_UUID_SIZE)
        ,
        Span(obj.driverUUID, VK_UUID_SIZE)
        ,
        Span(obj.deviceLUID, VK_LUID_SIZE)
        ,
        obj.deviceNodeMask
        ,
        obj.deviceLUIDValid
        ,
        obj.subgroupSize
        ,
        obj.subgroupSupportedStages
        ,
        obj.subgroupSupportedOperations
        ,
        obj.subgroupQuadOperationsInAllStages
        ,
        obj.pointClippingBehavior
        ,
        obj.maxMultiviewViewCount
        ,
        obj.maxMultiviewInstanceIndex
        ,
        obj.protectedNoFault
        ,
        obj.maxPerSetDescriptors
        ,
        obj.maxMemoryAllocationSize
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.samplerMirrorClampToEdge
        ,
        obj.drawIndirectCount
        ,
        obj.storageBuffer8BitAccess
        ,
        obj.uniformAndStorageBuffer8BitAccess
        ,
        obj.storagePushConstant8
        ,
        obj.shaderBufferInt64Atomics
        ,
        obj.shaderSharedInt64Atomics
        ,
        obj.shaderFloat16
        ,
        obj.shaderInt8
        ,
        obj.descriptorIndexing
        ,
        obj.shaderInputAttachmentArrayDynamicIndexing
        ,
        obj.shaderUniformTexelBufferArrayDynamicIndexing
        ,
        obj.shaderStorageTexelBufferArrayDynamicIndexing
        ,
        obj.shaderUniformBufferArrayNonUniformIndexing
        ,
        obj.shaderSampledImageArrayNonUniformIndexing
        ,
        obj.shaderStorageBufferArrayNonUniformIndexing
        ,
        obj.shaderStorageImageArrayNonUniformIndexing
        ,
        obj.shaderInputAttachmentArrayNonUniformIndexing
        ,
        obj.shaderUniformTexelBufferArrayNonUniformIndexing
        ,
        obj.shaderStorageTexelBufferArrayNonUniformIndexing
        ,
        obj.descriptorBindingUniformBufferUpdateAfterBind
        ,
        obj.descriptorBindingSampledImageUpdateAfterBind
        ,
        obj.descriptorBindingStorageImageUpdateAfterBind
        ,
        obj.descriptorBindingStorageBufferUpdateAfterBind
        ,
        obj.descriptorBindingUniformTexelBufferUpdateAfterBind
        ,
        obj.descriptorBindingStorageTexelBufferUpdateAfterBind
        ,
        obj.descriptorBindingUpdateUnusedWhilePending
        ,
        obj.descriptorBindingPartiallyBound
        ,
        obj.descriptorBindingVariableDescriptorCount
        ,
        obj.runtimeDescriptorArray
        ,
        obj.samplerFilterMinmax
        ,
        obj.scalarBlockLayout
        ,
        obj.imagelessFramebuffer
        ,
        obj.uniformBufferStandardLayout
        ,
        obj.shaderSubgroupExtendedTypes
        ,
        obj.separateDepthStencilLayouts
        ,
        obj.hostQueryReset
        ,
        obj.timelineSemaphore
        ,
        obj.bufferDeviceAddress
        ,
        obj.bufferDeviceAddressCaptureReplay
        ,
        obj.bufferDeviceAddressMultiDevice
        ,
        obj.vulkanMemoryModel
        ,
        obj.vulkanMemoryModelDeviceScope
        ,
        obj.vulkanMemoryModelAvailabilityVisibilityChains
        ,
        obj.shaderOutputViewportIndex
        ,
        obj.shaderOutputLayer
        ,
        obj.subgroupBroadcastDynamicId
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.driverID
        ,
        Span(obj.driverName, VK_MAX_DRIVER_NAME_SIZE)
        ,
        Span(obj.driverInfo, VK_MAX_DRIVER_INFO_SIZE)
        ,
        std::ref(obj.conformanceVersion)
        ,
        obj.denormBehaviorIndependence
        ,
        obj.roundingModeIndependence
        ,
        obj.shaderSignedZeroInfNanPreserveFloat16
        ,
        obj.shaderSignedZeroInfNanPreserveFloat32
        ,
        obj.shaderSignedZeroInfNanPreserveFloat64
        ,
        obj.shaderDenormPreserveFloat16
        ,
        obj.shaderDenormPreserveFloat32
        ,
        obj.shaderDenormPreserveFloat64
        ,
        obj.shaderDenormFlushToZeroFloat16
        ,
        obj.shaderDenormFlushToZeroFloat32
        ,
        obj.shaderDenormFlushToZeroFloat64
        ,
        obj.shaderRoundingModeRTEFloat16
        ,
        obj.shaderRoundingModeRTEFloat32
        ,
        obj.shaderRoundingModeRTEFloat64
        ,
        obj.shaderRoundingModeRTZFloat16
        ,
        obj.shaderRoundingModeRTZFloat32
        ,
        obj.shaderRoundingModeRTZFloat64
        ,
        obj.maxUpdateAfterBindDescriptorsInAllPools
        ,
        obj.shaderUniformBufferArrayNonUniformIndexingNative
        ,
        obj.shaderSampledImageArrayNonUniformIndexingNative
        ,
        obj.shaderStorageBufferArrayNonUniformIndexingNative
        ,
        obj.shaderStorageImageArrayNonUniformIndexingNative
        ,
        obj.shaderInputAttachmentArrayNonUniformIndexingNative
        ,
        obj.robustBufferAccessUpdateAfterBind
        ,
        obj.quadDivergentImplicitLod
        ,
        obj.maxPerStageDescriptorUpdateAfterBindSamplers
        ,
        obj.maxPerStageDescriptorUpdateAfterBindUniformBuffers
        ,
        obj.maxPerStageDescriptorUpdateAfterBindStorageBuffers
        ,
        obj.maxPerStageDescriptorUpdateAfterBindSampledImages
        ,
        obj.maxPerStageDescriptorUpdateAfterBindStorageImages
        ,
        obj.maxPerStageDescriptorUpdateAfterBindInputAttachments
        ,
        obj.maxPerStageUpdateAfterBindResources
        ,
        obj.maxDescriptorSetUpdateAfterBindSamplers
        ,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffers
        ,
        obj.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic
        ,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffers
        ,
        obj.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic
        ,
        obj.maxDescriptorSetUpdateAfterBindSampledImages
        ,
        obj.maxDescriptorSetUpdateAfterBindStorageImages
        ,
        obj.maxDescriptorSetUpdateAfterBindInputAttachments
        ,
        obj.supportedDepthResolveModes
        ,
        obj.supportedStencilResolveModes
        ,
        obj.independentResolveNone
        ,
        obj.independentResolve
        ,
        obj.filterMinmaxSingleComponentFormats
        ,
        obj.filterMinmaxImageComponentMapping
        ,
        obj.maxTimelineSemaphoreValueDifference
        ,
        obj.framebufferIntegerColorSampleCounts
    );
}

template <>
inline auto to_tuple<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.vulkanMemoryModel
        ,
        obj.vulkanMemoryModelDeviceScope
        ,
        obj.vulkanMemoryModelAvailabilityVisibilityChains
    );
}


template <>
inline auto to_tuple<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.ycbcrImageArrays
    );
}


template <>
inline auto to_tuple<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.srcPremultiplied
        ,
        obj.dstPremultiplied
        ,
        obj.blendOverlap
    );
}

template <>
inline auto to_tuple<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj)
{
    return std::make_tuple(
        obj.blendEnable
        ,
        obj.srcColorBlendFactor
        ,
        obj.dstColorBlendFactor
        ,
        obj.colorBlendOp
        ,
        obj.srcAlphaBlendFactor
        ,
        obj.dstAlphaBlendFactor
        ,
        obj.alphaBlendOp
        ,
        obj.colorWriteMask
    );
}

template <>
inline auto to_tuple<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.logicOpEnable
        ,
        obj.logicOp
        ,
        obj.attachmentCount
        ,
        Span(obj.pAttachments, obj.attachmentCount)
        ,
        Span(obj.blendConstants, 4)
    );
}

template <>
inline auto to_tuple<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.compilerControlFlags
    );
}

template <>
inline auto to_tuple<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.coverageModulationMode
        ,
        obj.coverageModulationTableEnable
        ,
        obj.coverageModulationTableCount
        ,
        Span(obj.pCoverageModulationTable, obj.coverageModulationTableCount)
    );
}

template <>
inline auto to_tuple<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.coverageReductionMode
    );
}

template <>
inline auto to_tuple<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.coverageToColorEnable
        ,
        obj.coverageToColorLocation
    );
}

template <>
inline auto to_tuple<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        Span(obj.pPipelineCreationFeedback, 1)
        ,
        obj.pipelineStageCreationFeedbackCount
        ,
        Span(obj.pPipelineStageCreationFeedbacks, obj.pipelineStageCreationFeedbackCount)
    );
}

template <>
inline auto to_tuple<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj)
{
    return std::make_tuple(
        obj.flags
        ,
        obj.duration
    );
}

template <>
inline auto to_tuple<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.depthTestEnable
        ,
        obj.depthWriteEnable
        ,
        obj.depthCompareOp
        ,
        obj.depthBoundsTestEnable
        ,
        obj.stencilTestEnable
        ,
        std::ref(obj.front)
        ,
        std::ref(obj.back)
        ,
        obj.minDepthBounds
        ,
        obj.maxDepthBounds
    );
}

template <>
inline auto to_tuple<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.discardRectangleMode
        ,
        obj.discardRectangleCount
        ,
        Span(obj.pDiscardRectangles, obj.discardRectangleCount)
    );
}

template <>
inline auto to_tuple<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.dynamicStateCount
        ,
        Span(obj.pDynamicStates, obj.dynamicStateCount)
    );
}

template <>
inline auto to_tuple<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pipeline
        ,
        obj.executableIndex
    );
}


template <>
inline auto to_tuple<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.stages
        ,
        Span(obj.name, VK_MAX_DESCRIPTION_SIZE)
        ,
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE)
        ,
        obj.subgroupSize
    );
}

template <>
inline auto to_tuple<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        Span(obj.name, VK_MAX_DESCRIPTION_SIZE)
        ,
        Span(obj.description, VK_MAX_DESCRIPTION_SIZE)
        ,
        obj.format
        ,
        std::ref(obj.value)
    );
}


template <>
inline auto to_tuple<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.pipeline
    );
}

template <>
inline auto to_tuple<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.topology
        ,
        obj.primitiveRestartEnable
    );
}

template <>
inline auto to_tuple<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.setLayoutCount
        ,
        Span(obj.pSetLayouts, obj.setLayoutCount)
        ,
        obj.pushConstantRangeCount
        ,
        Span(obj.pPushConstantRanges, obj.pushConstantRangeCount)
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.libraryCount
        ,
        Span(obj.pLibraries, obj.libraryCount)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS


template <>
inline auto to_tuple<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.conservativeRasterizationMode
        ,
        obj.extraPrimitiveOverestimationSize
    );
}

template <>
inline auto to_tuple<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.depthClipEnable
    );
}

template <>
inline auto to_tuple<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.lineRasterizationMode
        ,
        obj.stippledLineEnable
        ,
        obj.lineStippleFactor
        ,
        obj.lineStipplePattern
    );
}

template <>
inline auto to_tuple<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.depthClampEnable
        ,
        obj.rasterizerDiscardEnable
        ,
        obj.polygonMode
        ,
        obj.cullMode
        ,
        obj.frontFace
        ,
        obj.depthBiasEnable
        ,
        obj.depthBiasConstantFactor
        ,
        obj.depthBiasClamp
        ,
        obj.depthBiasSlopeFactor
        ,
        obj.lineWidth
    );
}

template <>
inline auto to_tuple<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.rasterizationOrder
    );
}

template <>
inline auto to_tuple<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.rasterizationStream
    );
}

template <>
inline auto to_tuple<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.representativeFragmentTestEnable
    );
}

template <>
inline auto to_tuple<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.sampleLocationsEnable
        ,
        std::ref(obj.sampleLocationsInfo)
    );
}

template <>
inline auto to_tuple<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.stage
        ,
        obj.module
        ,
        obj.pName ? std::string_view(obj.pName) : std::string_view()
        ,
        Span(obj.pSpecializationInfo, 1)
    );
}

template <>
inline auto to_tuple<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.requiredSubgroupSize
    );
}

template <>
inline auto to_tuple<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.domainOrigin
    );
}


template <>
inline auto to_tuple<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.patchControlPoints
    );
}

template <>
inline auto to_tuple<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.vertexBindingDivisorCount
        ,
        Span(obj.pVertexBindingDivisors, obj.vertexBindingDivisorCount)
    );
}

template <>
inline auto to_tuple<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.vertexBindingDescriptionCount
        ,
        Span(obj.pVertexBindingDescriptions, obj.vertexBindingDescriptionCount)
        ,
        obj.vertexAttributeDescriptionCount
        ,
        Span(obj.pVertexAttributeDescriptions, obj.vertexAttributeDescriptionCount)
    );
}

template <>
inline auto to_tuple<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.sampleOrderType
        ,
        obj.customSampleOrderCount
        ,
        Span(obj.pCustomSampleOrders, obj.customSampleOrderCount)
    );
}

template <>
inline auto to_tuple<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.exclusiveScissorCount
        ,
        Span(obj.pExclusiveScissors, obj.exclusiveScissorCount)
    );
}

template <>
inline auto to_tuple<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.shadingRateImageEnable
        ,
        obj.viewportCount
        ,
        Span(obj.pShadingRatePalettes, obj.viewportCount)
    );
}

template <>
inline auto to_tuple<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.viewportCount
        ,
        Span(obj.pViewports, obj.viewportCount)
        ,
        obj.scissorCount
        ,
        Span(obj.pScissors, obj.scissorCount)
    );
}

template <>
inline auto to_tuple<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.viewportCount
        ,
        Span(obj.pViewportSwizzles, obj.viewportCount)
    );
}

template <>
inline auto to_tuple<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.viewportWScalingEnable
        ,
        obj.viewportCount
        ,
        Span(obj.pViewportWScalings, obj.viewportCount)
    );
}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto to_tuple<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.frameToken
    );
}
#endif // VK_USE_PLATFORM_GGP

template <>
inline auto to_tuple<VkPresentInfoKHR>(const VkPresentInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.waitSemaphoreCount
        ,
        Span(obj.pWaitSemaphores, obj.waitSemaphoreCount)
        ,
        obj.swapchainCount
        ,
        Span(obj.pSwapchains, obj.swapchainCount)
        ,
        Span(obj.pImageIndices, obj.swapchainCount)
        ,
        Span(obj.pResults, obj.swapchainCount)
    );
}

template <>
inline auto to_tuple<VkPresentRegionKHR>(const VkPresentRegionKHR& obj)
{
    return std::make_tuple(
        obj.rectangleCount
        ,
        Span(obj.pRectangles, obj.rectangleCount)
    );
}

template <>
inline auto to_tuple<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.swapchainCount
        ,
        Span(obj.pRegions, obj.swapchainCount)
    );
}

template <>
inline auto to_tuple<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj)
{
    return std::make_tuple(
        obj.presentID
        ,
        obj.desiredPresentTime
    );
}

template <>
inline auto to_tuple<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.swapchainCount
        ,
        Span(obj.pTimes, obj.swapchainCount)
    );
}

template <>
inline auto to_tuple<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.protectedSubmit
    );
}

template <>
inline auto to_tuple<VkPushConstantRange>(const VkPushConstantRange& obj)
{
    return std::make_tuple(
        obj.stageFlags
        ,
        obj.offset
        ,
        obj.size
    );
}

template <>
inline auto to_tuple<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.queryType
        ,
        obj.queryCount
        ,
        obj.pipelineStatistics
    );
}


template <>
inline auto to_tuple<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.queueFamilyIndex
        ,
        obj.counterIndexCount
        ,
        Span(obj.pCounterIndices, obj.counterIndexCount)
    );
}

template <>
inline auto to_tuple<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.performanceCountersSampling
    );
}

template <>
inline auto to_tuple<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.checkpointExecutionStageMask
    );
}

template <>
inline auto to_tuple<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj)
{
    return std::make_tuple(
        obj.queueFlags
        ,
        obj.queueCount
        ,
        obj.timestampValidBits
        ,
        std::ref(obj.minImageTransferGranularity)
    );
}

template <>
inline auto to_tuple<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.queueFamilyProperties)
    );
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.stageCount
        ,
        Span(obj.pStages, obj.stageCount)
        ,
        obj.groupCount
        ,
        Span(obj.pGroups, obj.groupCount)
        ,
        obj.maxRecursionDepth
        ,
        std::ref(obj.libraries)
        ,
        Span(obj.pLibraryInterface, 1)
        ,
        obj.layout
        ,
        obj.basePipelineHandle
        ,
        obj.basePipelineIndex
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.stageCount
        ,
        Span(obj.pStages, obj.stageCount)
        ,
        obj.groupCount
        ,
        Span(obj.pGroups, obj.groupCount)
        ,
        obj.maxRecursionDepth
        ,
        obj.layout
        ,
        obj.basePipelineHandle
        ,
        obj.basePipelineIndex
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.maxPayloadSize
        ,
        obj.maxAttributeSize
        ,
        obj.maxCallableSize
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.type
        ,
        obj.generalShader
        ,
        obj.closestHitShader
        ,
        obj.anyHitShader
        ,
        obj.intersectionShader
        ,
        obj.pShaderGroupCaptureReplayHandle
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.type
        ,
        obj.generalShader
        ,
        obj.closestHitShader
        ,
        obj.anyHitShader
        ,
        obj.intersectionShader
    );
}

template <>
inline auto to_tuple<VkRect2D>(const VkRect2D& obj)
{
    return std::make_tuple(
        std::ref(obj.offset)
        ,
        std::ref(obj.extent)
    );
}

template <>
inline auto to_tuple<VkRectLayerKHR>(const VkRectLayerKHR& obj)
{
    return std::make_tuple(
        std::ref(obj.offset)
        ,
        std::ref(obj.extent)
        ,
        obj.layer
    );
}

template <>
inline auto to_tuple<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj)
{
    return std::make_tuple(
        obj.refreshDuration
    );
}

template <>
inline auto to_tuple<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.attachmentCount
        ,
        Span(obj.pAttachments, obj.attachmentCount)
    );
}


template <>
inline auto to_tuple<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.renderPass
        ,
        obj.framebuffer
        ,
        std::ref(obj.renderArea)
        ,
        obj.clearValueCount
        ,
        Span(obj.pClearValues, obj.clearValueCount)
    );
}

template <>
inline auto to_tuple<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.attachmentCount
        ,
        Span(obj.pAttachments, obj.attachmentCount)
        ,
        obj.subpassCount
        ,
        Span(obj.pSubpasses, obj.subpassCount)
        ,
        obj.dependencyCount
        ,
        Span(obj.pDependencies, obj.dependencyCount)
    );
}

template <>
inline auto to_tuple<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.attachmentCount
        ,
        Span(obj.pAttachments, obj.attachmentCount)
        ,
        obj.subpassCount
        ,
        Span(obj.pSubpasses, obj.subpassCount)
        ,
        obj.dependencyCount
        ,
        Span(obj.pDependencies, obj.dependencyCount)
        ,
        obj.correlatedViewMaskCount
        ,
        Span(obj.pCorrelatedViewMasks, obj.correlatedViewMaskCount)
    );
}


template <>
inline auto to_tuple<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.fragmentDensityMapAttachment)
    );
}

template <>
inline auto to_tuple<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.aspectReferenceCount
        ,
        Span(obj.pAspectReferences, obj.aspectReferenceCount)
    );
}


template <>
inline auto to_tuple<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.subpassCount
        ,
        Span(obj.pViewMasks, obj.subpassCount)
        ,
        obj.dependencyCount
        ,
        Span(obj.pViewOffsets, obj.dependencyCount)
        ,
        obj.correlationMaskCount
        ,
        Span(obj.pCorrelationMasks, obj.correlationMaskCount)
    );
}


template <>
inline auto to_tuple<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.attachmentInitialSampleLocationsCount
        ,
        Span(obj.pAttachmentInitialSampleLocations, obj.attachmentInitialSampleLocationsCount)
        ,
        obj.postSubpassSampleLocationsCount
        ,
        Span(obj.pPostSubpassSampleLocations, obj.postSubpassSampleLocationsCount)
    );
}

template <>
inline auto to_tuple<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.transform
    );
}

template <>
inline auto to_tuple<VkSampleLocationEXT>(const VkSampleLocationEXT& obj)
{
    return std::make_tuple(
        obj.x
        ,
        obj.y
    );
}

template <>
inline auto to_tuple<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.sampleLocationsPerPixel
        ,
        std::ref(obj.sampleLocationGridSize)
        ,
        obj.sampleLocationsCount
        ,
        Span(obj.pSampleLocations, obj.sampleLocationsCount)
    );
}

template <>
inline auto to_tuple<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.magFilter
        ,
        obj.minFilter
        ,
        obj.mipmapMode
        ,
        obj.addressModeU
        ,
        obj.addressModeV
        ,
        obj.addressModeW
        ,
        obj.mipLodBias
        ,
        obj.anisotropyEnable
        ,
        obj.maxAnisotropy
        ,
        obj.compareEnable
        ,
        obj.compareOp
        ,
        obj.minLod
        ,
        obj.maxLod
        ,
        obj.borderColor
        ,
        obj.unnormalizedCoordinates
    );
}

template <>
inline auto to_tuple<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.customBorderColor)
        ,
        obj.format
    );
}

template <>
inline auto to_tuple<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.reductionMode
    );
}


template <>
inline auto to_tuple<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.format
        ,
        obj.ycbcrModel
        ,
        obj.ycbcrRange
        ,
        std::ref(obj.components)
        ,
        obj.xChromaOffset
        ,
        obj.yChromaOffset
        ,
        obj.chromaFilter
        ,
        obj.forceExplicitReconstruction
    );
}


template <>
inline auto to_tuple<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.combinedImageSamplerDescriptorCount
    );
}


template <>
inline auto to_tuple<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.conversion
    );
}


template <>
inline auto to_tuple<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.semaphore
        ,
        obj.handleType
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.semaphore
        ,
        obj.handleType
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.semaphore
        ,
        obj.value
    );
}


template <>
inline auto to_tuple<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.semaphoreType
        ,
        obj.initialValue
    );
}


template <>
inline auto to_tuple<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.semaphoreCount
        ,
        Span(obj.pSemaphores, obj.semaphoreCount)
        ,
        Span(obj.pValues, obj.semaphoreCount)
    );
}


template <>
inline auto to_tuple<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj)
{
    return std::make_tuple(
        obj.data
    );
}


template <>
inline auto to_tuple<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.validationCache
    );
}

template <>
inline auto to_tuple<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj)
{
    return std::make_tuple(
        obj.numUsedVgprs
        ,
        obj.numUsedSgprs
        ,
        obj.ldsSizePerLocalWorkGroup
        ,
        obj.ldsUsageSizeInBytes
        ,
        obj.scratchMemUsageInBytes
    );
}

template <>
inline auto to_tuple<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj)
{
    return std::make_tuple(
        obj.shaderStageMask
        ,
        std::ref(obj.resourceUsage)
        ,
        obj.numPhysicalVgprs
        ,
        obj.numPhysicalSgprs
        ,
        obj.numAvailableVgprs
        ,
        obj.numAvailableSgprs
        ,
        Span(obj.computeWorkGroupSize, 3)
    );
}

template <>
inline auto to_tuple<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj)
{
    return std::make_tuple(
        obj.shadingRatePaletteEntryCount
        ,
        Span(obj.pShadingRatePaletteEntries, obj.shadingRatePaletteEntryCount)
    );
}

template <>
inline auto to_tuple<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.sharedPresentSupportedUsageFlags
    );
}

template <>
inline auto to_tuple<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj)
{
    return std::make_tuple(
        obj.buffer
        ,
        obj.bindCount
        ,
        Span(obj.pBinds, obj.bindCount)
    );
}

template <>
inline auto to_tuple<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj)
{
    return std::make_tuple(
        obj.aspectMask
        ,
        std::ref(obj.imageGranularity)
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.properties)
    );
}


template <>
inline auto to_tuple<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj)
{
    return std::make_tuple(
        std::ref(obj.subresource)
        ,
        std::ref(obj.offset)
        ,
        std::ref(obj.extent)
        ,
        obj.memory
        ,
        obj.memoryOffset
        ,
        obj.flags
    );
}

template <>
inline auto to_tuple<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj)
{
    return std::make_tuple(
        obj.image
        ,
        obj.bindCount
        ,
        Span(obj.pBinds, obj.bindCount)
    );
}

template <>
inline auto to_tuple<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj)
{
    return std::make_tuple(
        std::ref(obj.formatProperties)
        ,
        obj.imageMipTailFirstLod
        ,
        obj.imageMipTailSize
        ,
        obj.imageMipTailOffset
        ,
        obj.imageMipTailStride
    );
}

template <>
inline auto to_tuple<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.memoryRequirements)
    );
}


template <>
inline auto to_tuple<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj)
{
    return std::make_tuple(
        obj.image
        ,
        obj.bindCount
        ,
        Span(obj.pBinds, obj.bindCount)
    );
}

template <>
inline auto to_tuple<VkSparseMemoryBind>(const VkSparseMemoryBind& obj)
{
    return std::make_tuple(
        obj.resourceOffset
        ,
        obj.size
        ,
        obj.memory
        ,
        obj.memoryOffset
        ,
        obj.flags
    );
}


template <>
inline auto to_tuple<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj)
{
    return std::make_tuple(
        obj.constantID
        ,
        obj.offset
        ,
        obj.size
    );
}

template <>
inline auto to_tuple<VkStencilOpState>(const VkStencilOpState& obj)
{
    return std::make_tuple(
        obj.failOp
        ,
        obj.passOp
        ,
        obj.depthFailOp
        ,
        obj.compareOp
        ,
        obj.compareMask
        ,
        obj.writeMask
        ,
        obj.reference
    );
}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto to_tuple<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.streamDescriptor
    );
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj)
{
    return std::make_tuple(
        obj.buffer
        ,
        obj.offset
        ,
        obj.stride
        ,
        obj.size
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS

template <>
inline auto to_tuple<VkSubmitInfo>(const VkSubmitInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.waitSemaphoreCount
        ,
        Span(obj.pWaitSemaphores, obj.waitSemaphoreCount)
        ,
        Span(obj.pWaitDstStageMask, obj.waitSemaphoreCount)
        ,
        obj.commandBufferCount
        ,
        Span(obj.pCommandBuffers, obj.commandBufferCount)
        ,
        obj.signalSemaphoreCount
        ,
        Span(obj.pSignalSemaphores, obj.signalSemaphoreCount)
    );
}

template <>
inline auto to_tuple<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.contents
    );
}


template <>
inline auto to_tuple<VkSubpassDependency>(const VkSubpassDependency& obj)
{
    return std::make_tuple(
        obj.srcSubpass
        ,
        obj.dstSubpass
        ,
        obj.srcStageMask
        ,
        obj.dstStageMask
        ,
        obj.srcAccessMask
        ,
        obj.dstAccessMask
        ,
        obj.dependencyFlags
    );
}

template <>
inline auto to_tuple<VkSubpassDependency2>(const VkSubpassDependency2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.srcSubpass
        ,
        obj.dstSubpass
        ,
        obj.srcStageMask
        ,
        obj.dstStageMask
        ,
        obj.srcAccessMask
        ,
        obj.dstAccessMask
        ,
        obj.dependencyFlags
        ,
        obj.viewOffset
    );
}


template <>
inline auto to_tuple<VkSubpassDescription>(const VkSubpassDescription& obj)
{
    return std::make_tuple(
        obj.flags
        ,
        obj.pipelineBindPoint
        ,
        obj.inputAttachmentCount
        ,
        Span(obj.pInputAttachments, obj.inputAttachmentCount)
        ,
        obj.colorAttachmentCount
        ,
        Span(obj.pColorAttachments, obj.colorAttachmentCount)
        ,
        Span(obj.pResolveAttachments, obj.colorAttachmentCount)
        ,
        Span(obj.pDepthStencilAttachment, 1)
        ,
        obj.preserveAttachmentCount
        ,
        Span(obj.pPreserveAttachments, obj.preserveAttachmentCount)
    );
}

template <>
inline auto to_tuple<VkSubpassDescription2>(const VkSubpassDescription2& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.pipelineBindPoint
        ,
        obj.viewMask
        ,
        obj.inputAttachmentCount
        ,
        Span(obj.pInputAttachments, obj.inputAttachmentCount)
        ,
        obj.colorAttachmentCount
        ,
        Span(obj.pColorAttachments, obj.colorAttachmentCount)
        ,
        Span(obj.pResolveAttachments, obj.colorAttachmentCount)
        ,
        Span(obj.pDepthStencilAttachment, 1)
        ,
        obj.preserveAttachmentCount
        ,
        Span(obj.pPreserveAttachments, obj.preserveAttachmentCount)
    );
}


template <>
inline auto to_tuple<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.depthResolveMode
        ,
        obj.stencilResolveMode
        ,
        Span(obj.pDepthStencilResolveAttachment, 1)
    );
}


template <>
inline auto to_tuple<VkSubpassEndInfo>(const VkSubpassEndInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
    );
}


template <>
inline auto to_tuple<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj)
{
    return std::make_tuple(
        obj.subpassIndex
        ,
        std::ref(obj.sampleLocationsInfo)
    );
}

template <>
inline auto to_tuple<VkSubresourceLayout>(const VkSubresourceLayout& obj)
{
    return std::make_tuple(
        obj.offset
        ,
        obj.size
        ,
        obj.rowPitch
        ,
        obj.arrayPitch
        ,
        obj.depthPitch
    );
}

template <>
inline auto to_tuple<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.minImageCount
        ,
        obj.maxImageCount
        ,
        std::ref(obj.currentExtent)
        ,
        std::ref(obj.minImageExtent)
        ,
        std::ref(obj.maxImageExtent)
        ,
        obj.maxImageArrayLayers
        ,
        obj.supportedTransforms
        ,
        obj.currentTransform
        ,
        obj.supportedCompositeAlpha
        ,
        obj.supportedUsageFlags
        ,
        obj.supportedSurfaceCounters
    );
}

template <>
inline auto to_tuple<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.surfaceCapabilities)
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fullScreenExclusiveSupported
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj)
{
    return std::make_tuple(
        obj.minImageCount
        ,
        obj.maxImageCount
        ,
        std::ref(obj.currentExtent)
        ,
        std::ref(obj.minImageExtent)
        ,
        std::ref(obj.maxImageExtent)
        ,
        obj.maxImageArrayLayers
        ,
        obj.supportedTransforms
        ,
        obj.currentTransform
        ,
        obj.supportedCompositeAlpha
        ,
        obj.supportedUsageFlags
    );
}

template <>
inline auto to_tuple<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        std::ref(obj.surfaceFormat)
    );
}

template <>
inline auto to_tuple<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj)
{
    return std::make_tuple(
        obj.format
        ,
        obj.colorSpace
    );
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.fullScreenExclusive
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.hmonitor
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.supportsProtected
    );
}

template <>
inline auto to_tuple<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.surfaceCounters
    );
}

template <>
inline auto to_tuple<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.surface
        ,
        obj.minImageCount
        ,
        obj.imageFormat
        ,
        obj.imageColorSpace
        ,
        std::ref(obj.imageExtent)
        ,
        obj.imageArrayLayers
        ,
        obj.imageUsage
        ,
        obj.imageSharingMode
        ,
        obj.queueFamilyIndexCount
        ,
        Span(obj.pQueueFamilyIndices, obj.queueFamilyIndexCount)
        ,
        obj.preTransform
        ,
        obj.compositeAlpha
        ,
        obj.presentMode
        ,
        obj.clipped
        ,
        obj.oldSwapchain
    );
}

template <>
inline auto to_tuple<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.localDimmingEnable
    );
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto to_tuple<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.usage
    );
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

template <>
inline auto to_tuple<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.supportsTextureGatherLODBiasAMD
    );
}

template <>
inline auto to_tuple<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.waitSemaphoreValueCount
        ,
        Span(obj.pWaitSemaphoreValues, obj.waitSemaphoreValueCount)
        ,
        obj.signalSemaphoreValueCount
        ,
        Span(obj.pSignalSemaphoreValues, obj.signalSemaphoreValueCount)
    );
}


#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj)
{
    return std::make_tuple(
        obj.width
        ,
        obj.height
        ,
        obj.depth
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS




template <>
inline auto to_tuple<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.enabledValidationFeatureCount
        ,
        Span(obj.pEnabledValidationFeatures, obj.enabledValidationFeatureCount)
        ,
        obj.disabledValidationFeatureCount
        ,
        Span(obj.pDisabledValidationFeatures, obj.disabledValidationFeatureCount)
    );
}

template <>
inline auto to_tuple<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.disabledValidationCheckCount
        ,
        Span(obj.pDisabledValidationChecks, obj.disabledValidationCheckCount)
    );
}

template <>
inline auto to_tuple<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj)
{
    return std::make_tuple(
        obj.location
        ,
        obj.binding
        ,
        obj.format
        ,
        obj.offset
    );
}

template <>
inline auto to_tuple<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj)
{
    return std::make_tuple(
        obj.binding
        ,
        obj.stride
        ,
        obj.inputRate
    );
}

template <>
inline auto to_tuple<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj)
{
    return std::make_tuple(
        obj.binding
        ,
        obj.divisor
    );
}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
inline auto to_tuple<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_VI_NN

template <>
inline auto to_tuple<VkViewport>(const VkViewport& obj)
{
    return std::make_tuple(
        obj.x
        ,
        obj.y
        ,
        obj.width
        ,
        obj.height
        ,
        obj.minDepth
        ,
        obj.maxDepth
    );
}

template <>
inline auto to_tuple<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj)
{
    return std::make_tuple(
        obj.x
        ,
        obj.y
        ,
        obj.z
        ,
        obj.w
    );
}

template <>
inline auto to_tuple<VkViewportWScalingNV>(const VkViewportWScalingNV& obj)
{
    return std::make_tuple(
        obj.xcoeff
        ,
        obj.ycoeff
    );
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
inline auto to_tuple<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.display
        ,
        obj.surface
    );
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.acquireCount
        ,
        Span(obj.pAcquireSyncs, obj.acquireCount)
        ,
        Span(obj.pAcquireKeys, obj.acquireCount)
        ,
        Span(obj.pAcquireTimeouts, obj.acquireCount)
        ,
        obj.releaseCount
        ,
        Span(obj.pReleaseSyncs, obj.releaseCount)
        ,
        Span(obj.pReleaseKeys, obj.releaseCount)
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.acquireCount
        ,
        Span(obj.pAcquireSyncs, obj.acquireCount)
        ,
        Span(obj.pAcquireKeys, obj.acquireCount)
        ,
        Span(obj.pAcquireTimeoutMilliseconds, obj.acquireCount)
        ,
        obj.releaseCount
        ,
        Span(obj.pReleaseSyncs, obj.releaseCount)
        ,
        Span(obj.pReleaseKeys, obj.releaseCount)
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto to_tuple<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.hinstance
        ,
        obj.hwnd
    );
}
#endif // VK_USE_PLATFORM_WIN32_KHR

template <>
inline auto to_tuple<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.dstSet
        ,
        obj.dstBinding
        ,
        obj.dstArrayElement
        ,
        obj.descriptorCount
        ,
        obj.descriptorType
        ,
        Span(obj.pImageInfo, obj.descriptorCount)
        ,
        Span(obj.pBufferInfo, obj.descriptorCount)
        ,
        Span(obj.pTexelBufferView, obj.descriptorCount)
    );
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto to_tuple<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.accelerationStructureCount
        ,
        Span(obj.pAccelerationStructures, obj.accelerationStructureCount)
    );
}
#endif // VK_ENABLE_BETA_EXTENSIONS



template <>
inline auto to_tuple<VkXYColorEXT>(const VkXYColorEXT& obj)
{
    return std::make_tuple(
        obj.x
        ,
        obj.y
    );
}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
inline auto to_tuple<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.connection
        ,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
inline auto to_tuple<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj)
{
    return std::make_tuple(
        obj.sType
        ,
        PNextTupleElementWrapper { obj.pNext }
        ,
        obj.flags
        ,
        obj.dpy
        ,
        obj.window
    );
}
#endif // VK_USE_PLATFORM_XLIB_KHR

} // namespace detail
} // namespace vk
} // namespace dst
