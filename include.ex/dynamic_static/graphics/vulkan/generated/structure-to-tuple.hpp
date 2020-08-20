
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

#include <string_view>
#include <tuple>
#include <utility>

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

///////////////////////////////////////////////////////////////////////////////
// NOTE : The following structure_to_tuple<> functions are manually implemented
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureInstanceKHR>(const VkAccelerationStructureInstanceKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkAccelerationStructureVersionKHR>(const VkAccelerationStructureVersionKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS
#ifdef
template <>
auto structure_to_tuple<VkClearColorValue>(const VkClearColorValue& obj);
#endif //
#ifdef
template <>
auto structure_to_tuple<VkClearValue>(const VkClearValue& obj);
#endif //
#ifdef
template <>
auto structure_to_tuple<VkPerformanceCounterResultKHR>(const VkPerformanceCounterResultKHR& obj);
#endif //
#ifdef
template <>
auto structure_to_tuple<VkPerformanceValueDataINTEL>(const VkPerformanceValueDataINTEL& obj);
#endif //
#ifdef
template <>
auto structure_to_tuple<VkPipelineExecutableStatisticValueKHR>(const VkPipelineExecutableStatisticValueKHR& obj);
#endif //
#ifdef
template <>
auto structure_to_tuple<VkPipelineMultisampleStateCreateInfo>(const VkPipelineMultisampleStateCreateInfo& obj);
#endif //
#ifdef
template <>
auto structure_to_tuple<VkShaderModuleCreateInfo>(const VkShaderModuleCreateInfo& obj);
#endif //
#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
auto structure_to_tuple<VkTransformMatrixKHR>(const VkTransformMatrixKHR& obj);
#endif // VK_ENABLE_BETA_EXTENSIONS
///////////////////////////////////////////////////////////////////////////////

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAabbPositionsKHR>(const VkAabbPositionsKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureBuildGeometryInfoKHR>(const VkAccelerationStructureBuildGeometryInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureBuildOffsetInfoKHR>(const VkAccelerationStructureBuildOffsetInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateGeometryTypeInfoKHR>(const VkAccelerationStructureCreateGeometryTypeInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateInfoKHR>(const VkAccelerationStructureCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAccelerationStructureCreateInfoNV>(const VkAccelerationStructureCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureDeviceAddressInfoKHR>(const VkAccelerationStructureDeviceAddressInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryAabbsDataKHR>(const VkAccelerationStructureGeometryAabbsDataKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryDataKHR>(const VkAccelerationStructureGeometryDataKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryInstancesDataKHR>(const VkAccelerationStructureGeometryInstancesDataKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryKHR>(const VkAccelerationStructureGeometryKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureGeometryTrianglesDataKHR>(const VkAccelerationStructureGeometryTrianglesDataKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAccelerationStructureInfoNV>(const VkAccelerationStructureInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoKHR>(const VkAccelerationStructureMemoryRequirementsInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAccelerationStructureMemoryRequirementsInfoNV>(const VkAccelerationStructureMemoryRequirementsInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAcquireNextImageInfoKHR>(const VkAcquireNextImageInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAcquireProfilingLockInfoKHR>(const VkAcquireProfilingLockInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAllocationCallbacks>(const VkAllocationCallbacks& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferFormatPropertiesANDROID>(const VkAndroidHardwareBufferFormatPropertiesANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferPropertiesANDROID>(const VkAndroidHardwareBufferPropertiesANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidHardwareBufferUsageANDROID>(const VkAndroidHardwareBufferUsageANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkAndroidSurfaceCreateInfoKHR>(const VkAndroidSurfaceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkApplicationInfo>(const VkApplicationInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAttachmentDescription>(const VkAttachmentDescription& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAttachmentDescription2>(const VkAttachmentDescription2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAttachmentDescriptionStencilLayout>(const VkAttachmentDescriptionStencilLayout& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAttachmentReference>(const VkAttachmentReference& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAttachmentReference2>(const VkAttachmentReference2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAttachmentReferenceStencilLayout>(const VkAttachmentReferenceStencilLayout& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkAttachmentSampleLocationsEXT>(const VkAttachmentSampleLocationsEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBaseInStructure>(const VkBaseInStructure& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBaseOutStructure>(const VkBaseOutStructure& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkBindAccelerationStructureMemoryInfoKHR>(const VkBindAccelerationStructureMemoryInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindBufferMemoryDeviceGroupInfo>(const VkBindBufferMemoryDeviceGroupInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindBufferMemoryInfo>(const VkBindBufferMemoryInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindImageMemoryDeviceGroupInfo>(const VkBindImageMemoryDeviceGroupInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindImageMemoryInfo>(const VkBindImageMemoryInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindImageMemorySwapchainInfoKHR>(const VkBindImageMemorySwapchainInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindImagePlaneMemoryInfo>(const VkBindImagePlaneMemoryInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindIndexBufferIndirectCommandNV>(const VkBindIndexBufferIndirectCommandNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindShaderGroupIndirectCommandNV>(const VkBindShaderGroupIndirectCommandNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindSparseInfo>(const VkBindSparseInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBindVertexBufferIndirectCommandNV>(const VkBindVertexBufferIndirectCommandNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferCopy>(const VkBufferCopy& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferCreateInfo>(const VkBufferCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferDeviceAddressCreateInfoEXT>(const VkBufferDeviceAddressCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferDeviceAddressInfo>(const VkBufferDeviceAddressInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferImageCopy>(const VkBufferImageCopy& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferMemoryBarrier>(const VkBufferMemoryBarrier& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferMemoryRequirementsInfo2>(const VkBufferMemoryRequirementsInfo2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferOpaqueCaptureAddressCreateInfo>(const VkBufferOpaqueCaptureAddressCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkBufferViewCreateInfo>(const VkBufferViewCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCalibratedTimestampInfoEXT>(const VkCalibratedTimestampInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCheckpointDataNV>(const VkCheckpointDataNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkClearAttachment>(const VkClearAttachment& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkClearDepthStencilValue>(const VkClearDepthStencilValue& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkClearRect>(const VkClearRect& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCoarseSampleLocationNV>(const VkCoarseSampleLocationNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCoarseSampleOrderCustomNV>(const VkCoarseSampleOrderCustomNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCommandBufferAllocateInfo>(const VkCommandBufferAllocateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCommandBufferBeginInfo>(const VkCommandBufferBeginInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceConditionalRenderingInfoEXT>(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceInfo>(const VkCommandBufferInheritanceInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCommandBufferInheritanceRenderPassTransformInfoQCOM>(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCommandPoolCreateInfo>(const VkCommandPoolCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkComponentMapping>(const VkComponentMapping& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkComputePipelineCreateInfo>(const VkComputePipelineCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkConditionalRenderingBeginInfoEXT>(const VkConditionalRenderingBeginInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkConformanceVersion>(const VkConformanceVersion& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCooperativeMatrixPropertiesNV>(const VkCooperativeMatrixPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyAccelerationStructureInfoKHR>(const VkCopyAccelerationStructureInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyAccelerationStructureToMemoryInfoKHR>(const VkCopyAccelerationStructureToMemoryInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkCopyDescriptorSet>(const VkCopyDescriptorSet& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkCopyMemoryToAccelerationStructureInfoKHR>(const VkCopyMemoryToAccelerationStructureInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkD3D12FenceSubmitInfoKHR>(const VkD3D12FenceSubmitInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugMarkerMarkerInfoEXT>(const VkDebugMarkerMarkerInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugMarkerObjectNameInfoEXT>(const VkDebugMarkerObjectNameInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugMarkerObjectTagInfoEXT>(const VkDebugMarkerObjectTagInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugReportCallbackCreateInfoEXT>(const VkDebugReportCallbackCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugUtilsLabelEXT>(const VkDebugUtilsLabelEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugUtilsMessengerCallbackDataEXT>(const VkDebugUtilsMessengerCallbackDataEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugUtilsMessengerCreateInfoEXT>(const VkDebugUtilsMessengerCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugUtilsObjectNameInfoEXT>(const VkDebugUtilsObjectNameInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDebugUtilsObjectTagInfoEXT>(const VkDebugUtilsObjectTagInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDedicatedAllocationBufferCreateInfoNV>(const VkDedicatedAllocationBufferCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDedicatedAllocationImageCreateInfoNV>(const VkDedicatedAllocationImageCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDedicatedAllocationMemoryAllocateInfoNV>(const VkDedicatedAllocationMemoryAllocateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkDeferredOperationInfoKHR>(const VkDeferredOperationInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorBufferInfo>(const VkDescriptorBufferInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorImageInfo>(const VkDescriptorImageInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorPoolCreateInfo>(const VkDescriptorPoolCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorPoolInlineUniformBlockCreateInfoEXT>(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorPoolSize>(const VkDescriptorPoolSize& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorSetAllocateInfo>(const VkDescriptorSetAllocateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutBinding>(const VkDescriptorSetLayoutBinding& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutBindingFlagsCreateInfo>(const VkDescriptorSetLayoutBindingFlagsCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutCreateInfo>(const VkDescriptorSetLayoutCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorSetLayoutSupport>(const VkDescriptorSetLayoutSupport& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountAllocateInfo>(const VkDescriptorSetVariableDescriptorCountAllocateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorSetVariableDescriptorCountLayoutSupport>(const VkDescriptorSetVariableDescriptorCountLayoutSupport& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorUpdateTemplateCreateInfo>(const VkDescriptorUpdateTemplateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDescriptorUpdateTemplateEntry>(const VkDescriptorUpdateTemplateEntry& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceCreateInfo>(const VkDeviceCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceDiagnosticsConfigCreateInfoNV>(const VkDeviceDiagnosticsConfigCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceEventInfoEXT>(const VkDeviceEventInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupBindSparseInfo>(const VkDeviceGroupBindSparseInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupCommandBufferBeginInfo>(const VkDeviceGroupCommandBufferBeginInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupDeviceCreateInfo>(const VkDeviceGroupDeviceCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupPresentCapabilitiesKHR>(const VkDeviceGroupPresentCapabilitiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupPresentInfoKHR>(const VkDeviceGroupPresentInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupRenderPassBeginInfo>(const VkDeviceGroupRenderPassBeginInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupSubmitInfo>(const VkDeviceGroupSubmitInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceGroupSwapchainCreateInfoKHR>(const VkDeviceGroupSwapchainCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceMemoryOpaqueCaptureAddressInfo>(const VkDeviceMemoryOpaqueCaptureAddressInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceMemoryOverallocationCreateInfoAMD>(const VkDeviceMemoryOverallocationCreateInfoAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkDeviceOrHostAddressConstKHR>(const VkDeviceOrHostAddressConstKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkDeviceOrHostAddressKHR>(const VkDeviceOrHostAddressKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDevicePrivateDataCreateInfoEXT>(const VkDevicePrivateDataCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceQueueCreateInfo>(const VkDeviceQueueCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceQueueGlobalPriorityCreateInfoEXT>(const VkDeviceQueueGlobalPriorityCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDeviceQueueInfo2>(const VkDeviceQueueInfo2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDispatchIndirectCommand>(const VkDispatchIndirectCommand& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayEventInfoEXT>(const VkDisplayEventInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayModeCreateInfoKHR>(const VkDisplayModeCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayModeParametersKHR>(const VkDisplayModeParametersKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayModeProperties2KHR>(const VkDisplayModeProperties2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayModePropertiesKHR>(const VkDisplayModePropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayNativeHdrSurfaceCapabilitiesAMD>(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPlaneCapabilities2KHR>(const VkDisplayPlaneCapabilities2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPlaneCapabilitiesKHR>(const VkDisplayPlaneCapabilitiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPlaneInfo2KHR>(const VkDisplayPlaneInfo2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPlaneProperties2KHR>(const VkDisplayPlaneProperties2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPlanePropertiesKHR>(const VkDisplayPlanePropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPowerInfoEXT>(const VkDisplayPowerInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPresentInfoKHR>(const VkDisplayPresentInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayProperties2KHR>(const VkDisplayProperties2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplayPropertiesKHR>(const VkDisplayPropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDisplaySurfaceCreateInfoKHR>(const VkDisplaySurfaceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDrawIndexedIndirectCommand>(const VkDrawIndexedIndirectCommand& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDrawIndirectCommand>(const VkDrawIndirectCommand& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDrawMeshTasksIndirectCommandNV>(const VkDrawMeshTasksIndirectCommandNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDrmFormatModifierPropertiesEXT>(const VkDrmFormatModifierPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkDrmFormatModifierPropertiesListEXT>(const VkDrmFormatModifierPropertiesListEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkEventCreateInfo>(const VkEventCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExportFenceCreateInfo>(const VkExportFenceCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportFenceWin32HandleInfoKHR>(const VkExportFenceWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExportMemoryAllocateInfo>(const VkExportMemoryAllocateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExportMemoryAllocateInfoNV>(const VkExportMemoryAllocateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportMemoryWin32HandleInfoKHR>(const VkExportMemoryWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportMemoryWin32HandleInfoNV>(const VkExportMemoryWin32HandleInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExportSemaphoreCreateInfo>(const VkExportSemaphoreCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkExportSemaphoreWin32HandleInfoKHR>(const VkExportSemaphoreWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExtensionProperties>(const VkExtensionProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExtent2D>(const VkExtent2D& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExtent3D>(const VkExtent3D& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalBufferProperties>(const VkExternalBufferProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalFenceProperties>(const VkExternalFenceProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkExternalFormatANDROID>(const VkExternalFormatANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalImageFormatProperties>(const VkExternalImageFormatProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalImageFormatPropertiesNV>(const VkExternalImageFormatPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalMemoryBufferCreateInfo>(const VkExternalMemoryBufferCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalMemoryImageCreateInfo>(const VkExternalMemoryImageCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalMemoryImageCreateInfoNV>(const VkExternalMemoryImageCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalMemoryProperties>(const VkExternalMemoryProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkExternalSemaphoreProperties>(const VkExternalSemaphoreProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFenceCreateInfo>(const VkFenceCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFenceGetFdInfoKHR>(const VkFenceGetFdInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkFenceGetWin32HandleInfoKHR>(const VkFenceGetWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFilterCubicImageViewImageFormatPropertiesEXT>(const VkFilterCubicImageViewImageFormatPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFormatProperties>(const VkFormatProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFormatProperties2>(const VkFormatProperties2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFramebufferAttachmentImageInfo>(const VkFramebufferAttachmentImageInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFramebufferAttachmentsCreateInfo>(const VkFramebufferAttachmentsCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFramebufferCreateInfo>(const VkFramebufferCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkFramebufferMixedSamplesCombinationNV>(const VkFramebufferMixedSamplesCombinationNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGeneratedCommandsInfoNV>(const VkGeneratedCommandsInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGeneratedCommandsMemoryRequirementsInfoNV>(const VkGeneratedCommandsMemoryRequirementsInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGeometryAABBNV>(const VkGeometryAABBNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGeometryDataNV>(const VkGeometryDataNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGeometryNV>(const VkGeometryNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGeometryTrianglesNV>(const VkGeometryTrianglesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGraphicsPipelineCreateInfo>(const VkGraphicsPipelineCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGraphicsPipelineShaderGroupsCreateInfoNV>(const VkGraphicsPipelineShaderGroupsCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkGraphicsShaderGroupCreateInfoNV>(const VkGraphicsShaderGroupCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkHdrMetadataEXT>(const VkHdrMetadataEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkHeadlessSurfaceCreateInfoEXT>(const VkHeadlessSurfaceCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_IOS_MVK
template <>
inline auto structure_to_tuple<VkIOSSurfaceCreateInfoMVK>(const VkIOSSurfaceCreateInfoMVK& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageBlit>(const VkImageBlit& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageCopy>(const VkImageCopy& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageCreateInfo>(const VkImageCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierExplicitCreateInfoEXT>(const VkImageDrmFormatModifierExplicitCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierListCreateInfoEXT>(const VkImageDrmFormatModifierListCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageDrmFormatModifierPropertiesEXT>(const VkImageDrmFormatModifierPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageFormatListCreateInfo>(const VkImageFormatListCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageFormatProperties>(const VkImageFormatProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageFormatProperties2>(const VkImageFormatProperties2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageMemoryBarrier>(const VkImageMemoryBarrier& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageMemoryRequirementsInfo2>(const VkImageMemoryRequirementsInfo2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_FUCHSIA
template <>
inline auto structure_to_tuple<VkImagePipeSurfaceCreateInfoFUCHSIA>(const VkImagePipeSurfaceCreateInfoFUCHSIA& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImagePlaneMemoryRequirementsInfo>(const VkImagePlaneMemoryRequirementsInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageResolve>(const VkImageResolve& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageSparseMemoryRequirementsInfo2>(const VkImageSparseMemoryRequirementsInfo2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageStencilUsageCreateInfo>(const VkImageStencilUsageCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageSubresource>(const VkImageSubresource& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageSubresourceLayers>(const VkImageSubresourceLayers& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageSubresourceRange>(const VkImageSubresourceRange& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageSwapchainCreateInfoKHR>(const VkImageSwapchainCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageViewASTCDecodeModeEXT>(const VkImageViewASTCDecodeModeEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageViewAddressPropertiesNVX>(const VkImageViewAddressPropertiesNVX& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageViewCreateInfo>(const VkImageViewCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageViewHandleInfoNVX>(const VkImageViewHandleInfoNVX& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImageViewUsageCreateInfo>(const VkImageViewUsageCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkImportAndroidHardwareBufferInfoANDROID>(const VkImportAndroidHardwareBufferInfoANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImportFenceFdInfoKHR>(const VkImportFenceFdInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportFenceWin32HandleInfoKHR>(const VkImportFenceWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImportMemoryFdInfoKHR>(const VkImportMemoryFdInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImportMemoryHostPointerInfoEXT>(const VkImportMemoryHostPointerInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportMemoryWin32HandleInfoKHR>(const VkImportMemoryWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportMemoryWin32HandleInfoNV>(const VkImportMemoryWin32HandleInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkImportSemaphoreFdInfoKHR>(const VkImportSemaphoreFdInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkImportSemaphoreWin32HandleInfoKHR>(const VkImportSemaphoreWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkIndirectCommandsLayoutCreateInfoNV>(const VkIndirectCommandsLayoutCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkIndirectCommandsLayoutTokenNV>(const VkIndirectCommandsLayoutTokenNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkIndirectCommandsStreamNV>(const VkIndirectCommandsStreamNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkInitializePerformanceApiInfoINTEL>(const VkInitializePerformanceApiInfoINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkInputAttachmentAspectReference>(const VkInputAttachmentAspectReference& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkInstanceCreateInfo>(const VkInstanceCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkLayerProperties>(const VkLayerProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_MACOS_MVK
template <>
inline auto structure_to_tuple<VkMacOSSurfaceCreateInfoMVK>(const VkMacOSSurfaceCreateInfoMVK& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMappedMemoryRange>(const VkMappedMemoryRange& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryAllocateFlagsInfo>(const VkMemoryAllocateFlagsInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryAllocateInfo>(const VkMemoryAllocateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryBarrier>(const VkMemoryBarrier& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryDedicatedAllocateInfo>(const VkMemoryDedicatedAllocateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryDedicatedRequirements>(const VkMemoryDedicatedRequirements& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryFdPropertiesKHR>(const VkMemoryFdPropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkMemoryGetAndroidHardwareBufferInfoANDROID>(const VkMemoryGetAndroidHardwareBufferInfoANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryGetFdInfoKHR>(const VkMemoryGetFdInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkMemoryGetWin32HandleInfoKHR>(const VkMemoryGetWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryHeap>(const VkMemoryHeap& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryHostPointerPropertiesEXT>(const VkMemoryHostPointerPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryOpaqueCaptureAddressAllocateInfo>(const VkMemoryOpaqueCaptureAddressAllocateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryPriorityAllocateInfoEXT>(const VkMemoryPriorityAllocateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryRequirements>(const VkMemoryRequirements& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryRequirements2>(const VkMemoryRequirements2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMemoryType>(const VkMemoryType& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkMemoryWin32HandlePropertiesKHR>(const VkMemoryWin32HandlePropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_METAL_EXT
template <>
inline auto structure_to_tuple<VkMetalSurfaceCreateInfoEXT>(const VkMetalSurfaceCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkMultisamplePropertiesEXT>(const VkMultisamplePropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkNativeBufferANDROID>(const VkNativeBufferANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkNativeBufferUsage2ANDROID>(const VkNativeBufferUsage2ANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkOffset2D>(const VkOffset2D& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkOffset3D>(const VkOffset3D& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPastPresentationTimingGOOGLE>(const VkPastPresentationTimingGOOGLE& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceConfigurationAcquireInfoINTEL>(const VkPerformanceConfigurationAcquireInfoINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceCounterDescriptionKHR>(const VkPerformanceCounterDescriptionKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceCounterKHR>(const VkPerformanceCounterKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceMarkerInfoINTEL>(const VkPerformanceMarkerInfoINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceOverrideInfoINTEL>(const VkPerformanceOverrideInfoINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceQuerySubmitInfoKHR>(const VkPerformanceQuerySubmitInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceStreamMarkerInfoINTEL>(const VkPerformanceStreamMarkerInfoINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPerformanceValueINTEL>(const VkPerformanceValueINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevice16BitStorageFeatures>(const VkPhysicalDevice16BitStorageFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevice8BitStorageFeatures>(const VkPhysicalDevice8BitStorageFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceASTCDecodeFeaturesEXT>(const VkPhysicalDeviceASTCDecodeFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeatures>(const VkPhysicalDeviceBufferDeviceAddressFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceCoherentMemoryFeaturesAMD>(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceConditionalRenderingFeaturesEXT>(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixFeaturesNV>(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceCornerSampledImageFeaturesNV>(const VkPhysicalDeviceCornerSampledImageFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceCoverageReductionModeFeaturesNV>(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceCustomBorderColorFeaturesEXT>(const VkPhysicalDeviceCustomBorderColorFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceCustomBorderColorPropertiesEXT>(const VkPhysicalDeviceCustomBorderColorPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDepthClipEnableFeaturesEXT>(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDepthStencilResolveProperties>(const VkPhysicalDeviceDepthStencilResolveProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingFeatures>(const VkPhysicalDeviceDescriptorIndexingFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDescriptorIndexingProperties>(const VkPhysicalDeviceDescriptorIndexingProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDiagnosticsConfigFeaturesNV>(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceDriverProperties>(const VkPhysicalDeviceDriverProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceExclusiveScissorFeaturesNV>(const VkPhysicalDeviceExclusiveScissorFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalBufferInfo>(const VkPhysicalDeviceExternalBufferInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalFenceInfo>(const VkPhysicalDeviceExternalFenceInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalImageFormatInfo>(const VkPhysicalDeviceExternalImageFormatInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceExternalSemaphoreInfo>(const VkPhysicalDeviceExternalSemaphoreInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceFeatures>(const VkPhysicalDeviceFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceFeatures2>(const VkPhysicalDeviceFeatures2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceFloatControlsProperties>(const VkPhysicalDeviceFloatControlsProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapFeaturesEXT>(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceGroupProperties>(const VkPhysicalDeviceGroupProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceHostQueryResetFeatures>(const VkPhysicalDeviceHostQueryResetFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceIDProperties>(const VkPhysicalDeviceIDProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageFormatInfo2>(const VkPhysicalDeviceImageFormatInfo2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceImageViewImageFormatInfoEXT>(const VkPhysicalDeviceImageViewImageFormatInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceImagelessFramebufferFeatures>(const VkPhysicalDeviceImagelessFramebufferFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceIndexTypeUint8FeaturesEXT>(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceLimits>(const VkPhysicalDeviceLimits& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceLineRasterizationFeaturesEXT>(const VkPhysicalDeviceLineRasterizationFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceLineRasterizationPropertiesEXT>(const VkPhysicalDeviceLineRasterizationPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMaintenance3Properties>(const VkPhysicalDeviceMaintenance3Properties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryPriorityFeaturesEXT>(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryProperties>(const VkPhysicalDeviceMemoryProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMemoryProperties2>(const VkPhysicalDeviceMemoryProperties2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMeshShaderFeaturesNV>(const VkPhysicalDeviceMeshShaderFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMeshShaderPropertiesNV>(const VkPhysicalDeviceMeshShaderPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewFeatures>(const VkPhysicalDeviceMultiviewFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceMultiviewProperties>(const VkPhysicalDeviceMultiviewProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePCIBusInfoPropertiesEXT>(const VkPhysicalDevicePCIBusInfoPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePerformanceQueryFeaturesKHR>(const VkPhysicalDevicePerformanceQueryFeaturesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePerformanceQueryPropertiesKHR>(const VkPhysicalDevicePerformanceQueryPropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePointClippingProperties>(const VkPhysicalDevicePointClippingProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkPhysicalDevicePresentationPropertiesANDROID>(const VkPhysicalDevicePresentationPropertiesANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePrivateDataFeaturesEXT>(const VkPhysicalDevicePrivateDataFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceProperties>(const VkPhysicalDeviceProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceProperties2>(const VkPhysicalDeviceProperties2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryFeatures>(const VkPhysicalDeviceProtectedMemoryFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceProtectedMemoryProperties>(const VkPhysicalDeviceProtectedMemoryProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDevicePushDescriptorPropertiesKHR>(const VkPhysicalDevicePushDescriptorPropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingFeaturesKHR>(const VkPhysicalDeviceRayTracingFeaturesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesKHR>(const VkPhysicalDeviceRayTracingPropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRayTracingPropertiesNV>(const VkPhysicalDeviceRayTracingPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRobustness2FeaturesEXT>(const VkPhysicalDeviceRobustness2FeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceRobustness2PropertiesEXT>(const VkPhysicalDeviceRobustness2PropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSampleLocationsPropertiesEXT>(const VkPhysicalDeviceSampleLocationsPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSamplerFilterMinmaxProperties>(const VkPhysicalDeviceSamplerFilterMinmaxProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSamplerYcbcrConversionFeatures>(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceScalarBlockLayoutFeatures>(const VkPhysicalDeviceScalarBlockLayoutFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderAtomicInt64Features>(const VkPhysicalDeviceShaderAtomicInt64Features& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderClockFeaturesKHR>(const VkPhysicalDeviceShaderClockFeaturesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderCoreProperties2AMD>(const VkPhysicalDeviceShaderCoreProperties2AMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderCorePropertiesAMD>(const VkPhysicalDeviceShaderCorePropertiesAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderDrawParametersFeatures>(const VkPhysicalDeviceShaderDrawParametersFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderFloat16Int8Features>(const VkPhysicalDeviceShaderFloat16Int8Features& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderImageFootprintFeaturesNV>(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShadingRateImageFeaturesNV>(const VkPhysicalDeviceShadingRateImageFeaturesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceShadingRateImagePropertiesNV>(const VkPhysicalDeviceShadingRateImagePropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSparseImageFormatInfo2>(const VkPhysicalDeviceSparseImageFormatInfo2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSparseProperties>(const VkPhysicalDeviceSparseProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupProperties>(const VkPhysicalDeviceSubgroupProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceSurfaceInfo2KHR>(const VkPhysicalDeviceSurfaceInfo2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreFeatures>(const VkPhysicalDeviceTimelineSemaphoreFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceTimelineSemaphoreProperties>(const VkPhysicalDeviceTimelineSemaphoreProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceToolPropertiesEXT>(const VkPhysicalDeviceToolPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackFeaturesEXT>(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceUniformBufferStandardLayoutFeatures>(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVariablePointersFeatures>(const VkPhysicalDeviceVariablePointersFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan11Features>(const VkPhysicalDeviceVulkan11Features& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan11Properties>(const VkPhysicalDeviceVulkan11Properties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan12Features>(const VkPhysicalDeviceVulkan12Features& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkan12Properties>(const VkPhysicalDeviceVulkan12Properties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceVulkanMemoryModelFeatures>(const VkPhysicalDeviceVulkanMemoryModelFeatures& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineCacheCreateInfo>(const VkPipelineCacheCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineColorBlendAdvancedStateCreateInfoEXT>(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineColorBlendAttachmentState>(const VkPipelineColorBlendAttachmentState& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineColorBlendStateCreateInfo>(const VkPipelineColorBlendStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineCompilerControlCreateInfoAMD>(const VkPipelineCompilerControlCreateInfoAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineCoverageModulationStateCreateInfoNV>(const VkPipelineCoverageModulationStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineCoverageReductionStateCreateInfoNV>(const VkPipelineCoverageReductionStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineCoverageToColorStateCreateInfoNV>(const VkPipelineCoverageToColorStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineCreationFeedbackCreateInfoEXT>(const VkPipelineCreationFeedbackCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineCreationFeedbackEXT>(const VkPipelineCreationFeedbackEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineDepthStencilStateCreateInfo>(const VkPipelineDepthStencilStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineDiscardRectangleStateCreateInfoEXT>(const VkPipelineDiscardRectangleStateCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineDynamicStateCreateInfo>(const VkPipelineDynamicStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineExecutableInfoKHR>(const VkPipelineExecutableInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineExecutableInternalRepresentationKHR>(const VkPipelineExecutableInternalRepresentationKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineExecutablePropertiesKHR>(const VkPipelineExecutablePropertiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineExecutableStatisticKHR>(const VkPipelineExecutableStatisticKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineInfoKHR>(const VkPipelineInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineInputAssemblyStateCreateInfo>(const VkPipelineInputAssemblyStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineLayoutCreateInfo>(const VkPipelineLayoutCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkPipelineLibraryCreateInfoKHR>(const VkPipelineLibraryCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineRasterizationConservativeStateCreateInfoEXT>(const VkPipelineRasterizationConservativeStateCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineRasterizationDepthClipStateCreateInfoEXT>(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineRasterizationLineStateCreateInfoEXT>(const VkPipelineRasterizationLineStateCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateCreateInfo>(const VkPipelineRasterizationStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateRasterizationOrderAMD>(const VkPipelineRasterizationStateRasterizationOrderAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineRasterizationStateStreamCreateInfoEXT>(const VkPipelineRasterizationStateStreamCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineRepresentativeFragmentTestStateCreateInfoNV>(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineSampleLocationsStateCreateInfoEXT>(const VkPipelineSampleLocationsStateCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineShaderStageCreateInfo>(const VkPipelineShaderStageCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineTessellationDomainOriginStateCreateInfo>(const VkPipelineTessellationDomainOriginStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineTessellationStateCreateInfo>(const VkPipelineTessellationStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineVertexInputDivisorStateCreateInfoEXT>(const VkPipelineVertexInputDivisorStateCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineVertexInputStateCreateInfo>(const VkPipelineVertexInputStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineViewportExclusiveScissorStateCreateInfoNV>(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineViewportShadingRateImageStateCreateInfoNV>(const VkPipelineViewportShadingRateImageStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineViewportStateCreateInfo>(const VkPipelineViewportStateCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineViewportSwizzleStateCreateInfoNV>(const VkPipelineViewportSwizzleStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPipelineViewportWScalingStateCreateInfoNV>(const VkPipelineViewportWScalingStateCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto structure_to_tuple<VkPresentFrameTokenGGP>(const VkPresentFrameTokenGGP& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPresentInfoKHR>(const VkPresentInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPresentRegionKHR>(const VkPresentRegionKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPresentRegionsKHR>(const VkPresentRegionsKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPresentTimeGOOGLE>(const VkPresentTimeGOOGLE& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPresentTimesInfoGOOGLE>(const VkPresentTimesInfoGOOGLE& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPrivateDataSlotCreateInfoEXT>(const VkPrivateDataSlotCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkProtectedSubmitInfo>(const VkProtectedSubmitInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkPushConstantRange>(const VkPushConstantRange& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkQueryPoolCreateInfo>(const VkQueryPoolCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkQueryPoolPerformanceCreateInfoKHR>(const VkQueryPoolPerformanceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkQueryPoolPerformanceQueryCreateInfoINTEL>(const VkQueryPoolPerformanceQueryCreateInfoINTEL& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkQueueFamilyCheckpointPropertiesNV>(const VkQueueFamilyCheckpointPropertiesNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkQueueFamilyProperties>(const VkQueueFamilyProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkQueueFamilyProperties2>(const VkQueueFamilyProperties2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingPipelineCreateInfoKHR>(const VkRayTracingPipelineCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRayTracingPipelineCreateInfoNV>(const VkRayTracingPipelineCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingPipelineInterfaceCreateInfoKHR>(const VkRayTracingPipelineInterfaceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoKHR>(const VkRayTracingShaderGroupCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRayTracingShaderGroupCreateInfoNV>(const VkRayTracingShaderGroupCreateInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRect2D>(const VkRect2D& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRectLayerKHR>(const VkRectLayerKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRefreshCycleDurationGOOGLE>(const VkRefreshCycleDurationGOOGLE& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassAttachmentBeginInfo>(const VkRenderPassAttachmentBeginInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassBeginInfo>(const VkRenderPassBeginInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassCreateInfo>(const VkRenderPassCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassCreateInfo2>(const VkRenderPassCreateInfo2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassFragmentDensityMapCreateInfoEXT>(const VkRenderPassFragmentDensityMapCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassInputAttachmentAspectCreateInfo>(const VkRenderPassInputAttachmentAspectCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassMultiviewCreateInfo>(const VkRenderPassMultiviewCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassSampleLocationsBeginInfoEXT>(const VkRenderPassSampleLocationsBeginInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkRenderPassTransformBeginInfoQCOM>(const VkRenderPassTransformBeginInfoQCOM& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSampleLocationEXT>(const VkSampleLocationEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSampleLocationsInfoEXT>(const VkSampleLocationsInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSamplerCreateInfo>(const VkSamplerCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSamplerCustomBorderColorCreateInfoEXT>(const VkSamplerCustomBorderColorCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSamplerReductionModeCreateInfo>(const VkSamplerReductionModeCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionCreateInfo>(const VkSamplerYcbcrConversionCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionImageFormatProperties>(const VkSamplerYcbcrConversionImageFormatProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSamplerYcbcrConversionInfo>(const VkSamplerYcbcrConversionInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSemaphoreCreateInfo>(const VkSemaphoreCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSemaphoreGetFdInfoKHR>(const VkSemaphoreGetFdInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSemaphoreGetWin32HandleInfoKHR>(const VkSemaphoreGetWin32HandleInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSemaphoreSignalInfo>(const VkSemaphoreSignalInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSemaphoreTypeCreateInfo>(const VkSemaphoreTypeCreateInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSemaphoreWaitInfo>(const VkSemaphoreWaitInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSetStateFlagsIndirectCommandNV>(const VkSetStateFlagsIndirectCommandNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkShaderModuleValidationCacheCreateInfoEXT>(const VkShaderModuleValidationCacheCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkShaderResourceUsageAMD>(const VkShaderResourceUsageAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkShaderStatisticsInfoAMD>(const VkShaderStatisticsInfoAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkShadingRatePaletteNV>(const VkShadingRatePaletteNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSharedPresentSurfaceCapabilitiesKHR>(const VkSharedPresentSurfaceCapabilitiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseBufferMemoryBindInfo>(const VkSparseBufferMemoryBindInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseImageFormatProperties>(const VkSparseImageFormatProperties& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseImageFormatProperties2>(const VkSparseImageFormatProperties2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseImageMemoryBind>(const VkSparseImageMemoryBind& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseImageMemoryBindInfo>(const VkSparseImageMemoryBindInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseImageMemoryRequirements>(const VkSparseImageMemoryRequirements& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseImageMemoryRequirements2>(const VkSparseImageMemoryRequirements2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseImageOpaqueMemoryBindInfo>(const VkSparseImageOpaqueMemoryBindInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSparseMemoryBind>(const VkSparseMemoryBind& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSpecializationInfo>(const VkSpecializationInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSpecializationMapEntry>(const VkSpecializationMapEntry& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkStencilOpState>(const VkStencilOpState& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_GGP
template <>
inline auto structure_to_tuple<VkStreamDescriptorSurfaceCreateInfoGGP>(const VkStreamDescriptorSurfaceCreateInfoGGP& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkStridedBufferRegionKHR>(const VkStridedBufferRegionKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubmitInfo>(const VkSubmitInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassBeginInfo>(const VkSubpassBeginInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassDependency>(const VkSubpassDependency& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassDependency2>(const VkSubpassDependency2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassDescription>(const VkSubpassDescription& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassDescription2>(const VkSubpassDescription2& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassDescriptionDepthStencilResolve>(const VkSubpassDescriptionDepthStencilResolve& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassEndInfo>(const VkSubpassEndInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubpassSampleLocationsEXT>(const VkSubpassSampleLocationsEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSubresourceLayout>(const VkSubresourceLayout& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSurfaceCapabilities2EXT>(const VkSurfaceCapabilities2EXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSurfaceCapabilities2KHR>(const VkSurfaceCapabilities2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceCapabilitiesFullScreenExclusiveEXT>(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSurfaceCapabilitiesKHR>(const VkSurfaceCapabilitiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSurfaceFormat2KHR>(const VkSurfaceFormat2KHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSurfaceFormatKHR>(const VkSurfaceFormatKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceFullScreenExclusiveInfoEXT>(const VkSurfaceFullScreenExclusiveInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkSurfaceFullScreenExclusiveWin32InfoEXT>(const VkSurfaceFullScreenExclusiveWin32InfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSurfaceProtectedCapabilitiesKHR>(const VkSurfaceProtectedCapabilitiesKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSwapchainCounterCreateInfoEXT>(const VkSwapchainCounterCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSwapchainCreateInfoKHR>(const VkSwapchainCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkSwapchainDisplayNativeHdrCreateInfoAMD>(const VkSwapchainDisplayNativeHdrCreateInfoAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
template <>
inline auto structure_to_tuple<VkSwapchainImageCreateInfoANDROID>(const VkSwapchainImageCreateInfoANDROID& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkTextureLODGatherFormatPropertiesAMD>(const VkTextureLODGatherFormatPropertiesAMD& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkTimelineSemaphoreSubmitInfo>(const VkTimelineSemaphoreSubmitInfo& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkTraceRaysIndirectCommandKHR>(const VkTraceRaysIndirectCommandKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkValidationCacheCreateInfoEXT>(const VkValidationCacheCreateInfoEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkValidationFeaturesEXT>(const VkValidationFeaturesEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkValidationFlagsEXT>(const VkValidationFlagsEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkVertexInputAttributeDescription>(const VkVertexInputAttributeDescription& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkVertexInputBindingDescription>(const VkVertexInputBindingDescription& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkVertexInputBindingDivisorDescriptionEXT>(const VkVertexInputBindingDivisorDescriptionEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_VI_NN
template <>
inline auto structure_to_tuple<VkViSurfaceCreateInfoNN>(const VkViSurfaceCreateInfoNN& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkViewport>(const VkViewport& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkViewportSwizzleNV>(const VkViewportSwizzleNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkViewportWScalingNV>(const VkViewportWScalingNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
template <>
inline auto structure_to_tuple<VkWaylandSurfaceCreateInfoKHR>(const VkWaylandSurfaceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoKHR>(const VkWin32KeyedMutexAcquireReleaseInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32KeyedMutexAcquireReleaseInfoNV>(const VkWin32KeyedMutexAcquireReleaseInfoNV& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_WIN32_KHR
template <>
inline auto structure_to_tuple<VkWin32SurfaceCreateInfoKHR>(const VkWin32SurfaceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkWriteDescriptorSet>(const VkWriteDescriptorSet& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_ENABLE_BETA_EXTENSIONS
template <>
inline auto structure_to_tuple<VkWriteDescriptorSetAccelerationStructureKHR>(const VkWriteDescriptorSetAccelerationStructureKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkWriteDescriptorSetInlineUniformBlockEXT>(const VkWriteDescriptorSetInlineUniformBlockEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef
template <>
inline auto structure_to_tuple<VkXYColorEXT>(const VkXYColorEXT& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_XCB_KHR
template <>
inline auto structure_to_tuple<VkXcbSurfaceCreateInfoKHR>(const VkXcbSurfaceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

#ifdef VK_USE_PLATFORM_XLIB_KHR
template <>
inline auto structure_to_tuple<VkXlibSurfaceCreateInfoKHR>(const VkXlibSurfaceCreateInfoKHR& obj)
{
}
#endif // ${_COMPILE_GUARD}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
