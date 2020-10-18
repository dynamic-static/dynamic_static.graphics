
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <cassert>
#include <type_traits>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline constexpr VkStructureType get_stype()
{
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureBuildGeometryInfoKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureCreateGeometryTypeInfoKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureDeviceAddressInfoKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureGeometryAabbsDataKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureGeometryInstancesDataKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureGeometryKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureGeometryTrianglesDataKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureInfoNV>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureMemoryRequirementsInfoKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureMemoryRequirementsInfoNV>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAccelerationStructureVersionKHR>) {
        return VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkAcquireNextImageInfoKHR>) {
        return VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkAcquireProfilingLockInfoKHR>) {
        return VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR;
    }
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkAndroidHardwareBufferFormatPropertiesANDROID>) {
        return VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkAndroidHardwareBufferPropertiesANDROID>) {
        return VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkAndroidHardwareBufferUsageANDROID>) {
        return VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkAndroidSurfaceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkApplicationInfo>) {
        return VK_STRUCTURE_TYPE_APPLICATION_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkAttachmentDescription2>) {
        return VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkAttachmentDescriptionStencilLayout>) {
        return VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkAttachmentReference2>) {
        return VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkAttachmentReferenceStencilLayout>) {
        return VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkBindAccelerationStructureMemoryInfoKHR>) {
        return VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkBindBufferMemoryDeviceGroupInfo>) {
        return VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBindBufferMemoryInfo>) {
        return VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBindImageMemoryDeviceGroupInfo>) {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBindImageMemoryInfo>) {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBindImageMemorySwapchainInfoKHR>) {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBindImagePlaneMemoryInfo>) {
        return VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBindSparseInfo>) {
        return VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBufferCreateInfo>) {
        return VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBufferDeviceAddressCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBufferDeviceAddressInfo>) {
        return VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBufferMemoryBarrier>) {
        return VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBufferMemoryRequirementsInfo2>) {
        return VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBufferOpaqueCaptureAddressCreateInfo>) {
        return VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkBufferViewCreateInfo>) {
        return VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCalibratedTimestampInfoEXT>) {
        return VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCheckpointDataNV>) {
        return VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCommandBufferAllocateInfo>) {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCommandBufferBeginInfo>) {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCommandBufferInheritanceConditionalRenderingInfoEXT>) {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCommandBufferInheritanceInfo>) {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCommandBufferInheritanceRenderPassTransformInfoQCOM>) {
        return VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCommandPoolCreateInfo>) {
        return VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkComputePipelineCreateInfo>) {
        return VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkConditionalRenderingBeginInfoEXT>) {
        return VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkCooperativeMatrixPropertiesNV>) {
        return VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkCopyAccelerationStructureInfoKHR>) {
        return VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkCopyAccelerationStructureToMemoryInfoKHR>) {
        return VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkCopyDescriptorSet>) {
        return VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkCopyMemoryToAccelerationStructureInfoKHR>) {
        return VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkD3D12FenceSubmitInfoKHR>) {
        return VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugMarkerMarkerInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugMarkerObjectNameInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugMarkerObjectTagInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugReportCallbackCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugUtilsLabelEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugUtilsMessengerCallbackDataEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugUtilsMessengerCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugUtilsObjectNameInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDebugUtilsObjectTagInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDedicatedAllocationBufferCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDedicatedAllocationImageCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDedicatedAllocationMemoryAllocateInfoNV>) {
        return VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkDeferredOperationInfoKHR>) {
        return VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorPoolCreateInfo>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorPoolInlineUniformBlockCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorSetAllocateInfo>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorSetLayoutBindingFlagsCreateInfo>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorSetLayoutCreateInfo>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorSetLayoutSupport>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorSetVariableDescriptorCountAllocateInfo>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorSetVariableDescriptorCountLayoutSupport>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDescriptorUpdateTemplateCreateInfo>) {
        return VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceCreateInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceDiagnosticsConfigCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceEventInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupBindSparseInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupCommandBufferBeginInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupDeviceCreateInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupPresentCapabilitiesKHR>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupPresentInfoKHR>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupRenderPassBeginInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupSubmitInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceGroupSwapchainCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceMemoryOpaqueCaptureAddressInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceMemoryOverallocationCreateInfoAMD>) {
        return VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDevicePrivateDataCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceQueueCreateInfo>) {
        return VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceQueueGlobalPriorityCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDeviceQueueInfo2>) {
        return VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;
    }
    #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    if constexpr (std::is_same_v<VulkanStructureType, VkDirectFBSurfaceCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_DIRECTFB_SURFACE_CREATE_INFO_EXT;
    }
    #endif // VK_USE_PLATFORM_DIRECTFB_EXT
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayEventInfoEXT>) {
        return VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayModeCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayModeProperties2KHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayNativeHdrSurfaceCapabilitiesAMD>) {
        return VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayPlaneCapabilities2KHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayPlaneInfo2KHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayPlaneProperties2KHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayPowerInfoEXT>) {
        return VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayPresentInfoKHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplayProperties2KHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDisplaySurfaceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkDrmFormatModifierPropertiesListEXT>) {
        return VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkEventCreateInfo>) {
        return VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkExportFenceCreateInfo>) {
        return VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExportFenceWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExportMemoryAllocateInfo>) {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkExportMemoryAllocateInfoNV>) {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExportMemoryWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExportMemoryWin32HandleInfoNV>) {
        return VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExportSemaphoreCreateInfo>) {
        return VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExportSemaphoreWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalBufferProperties>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalFenceProperties>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;
    }
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalFormatANDROID>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalImageFormatProperties>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalMemoryBufferCreateInfo>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalMemoryImageCreateInfo>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalMemoryImageCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkExternalSemaphoreProperties>) {
        return VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkFenceCreateInfo>) {
        return VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkFenceGetFdInfoKHR>) {
        return VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkFenceGetWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkFilterCubicImageViewImageFormatPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkFormatProperties2>) {
        return VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkFramebufferAttachmentImageInfo>) {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkFramebufferAttachmentsCreateInfo>) {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkFramebufferCreateInfo>) {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkFramebufferMixedSamplesCombinationNV>) {
        return VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGeneratedCommandsInfoNV>) {
        return VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGeneratedCommandsMemoryRequirementsInfoNV>) {
        return VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGeometryAABBNV>) {
        return VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGeometryNV>) {
        return VK_STRUCTURE_TYPE_GEOMETRY_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGeometryTrianglesNV>) {
        return VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGraphicsPipelineCreateInfo>) {
        return VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGraphicsPipelineShaderGroupsCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkGraphicsShaderGroupCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkHdrMetadataEXT>) {
        return VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkHeadlessSurfaceCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT;
    }
    #ifdef VK_USE_PLATFORM_IOS_MVK
    if constexpr (std::is_same_v<VulkanStructureType, VkIOSSurfaceCreateInfoMVK>) {
        return VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK;
    }
    #endif // VK_USE_PLATFORM_IOS_MVK
    if constexpr (std::is_same_v<VulkanStructureType, VkImageCreateInfo>) {
        return VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageDrmFormatModifierExplicitCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageDrmFormatModifierListCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageDrmFormatModifierPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageFormatListCreateInfo>) {
        return VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageFormatProperties2>) {
        return VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageMemoryBarrier>) {
        return VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageMemoryRequirementsInfo2>) {
        return VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
    }
    #ifdef VK_USE_PLATFORM_FUCHSIA
    if constexpr (std::is_same_v<VulkanStructureType, VkImagePipeSurfaceCreateInfoFUCHSIA>) {
        return VK_STRUCTURE_TYPE_IMAGEPIPE_SURFACE_CREATE_INFO_FUCHSIA;
    }
    #endif // VK_USE_PLATFORM_FUCHSIA
    if constexpr (std::is_same_v<VulkanStructureType, VkImagePlaneMemoryRequirementsInfo>) {
        return VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageSparseMemoryRequirementsInfo2>) {
        return VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageStencilUsageCreateInfo>) {
        return VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageSwapchainCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageViewASTCDecodeModeEXT>) {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageViewAddressPropertiesNVX>) {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageViewCreateInfo>) {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageViewHandleInfoNVX>) {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImageViewUsageCreateInfo>) {
        return VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO;
    }
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportAndroidHardwareBufferInfoANDROID>) {
        return VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportFenceFdInfoKHR>) {
        return VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportFenceWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportMemoryFdInfoKHR>) {
        return VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkImportMemoryHostPointerInfoEXT>) {
        return VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportMemoryWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportMemoryWin32HandleInfoNV>) {
        return VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportSemaphoreFdInfoKHR>) {
        return VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkImportSemaphoreWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkIndirectCommandsLayoutCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkIndirectCommandsLayoutTokenNV>) {
        return VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkInitializePerformanceApiInfoINTEL>) {
        return VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkInstanceCreateInfo>) {
        return VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    }
    #ifdef VK_USE_PLATFORM_MACOS_MVK
    if constexpr (std::is_same_v<VulkanStructureType, VkMacOSSurfaceCreateInfoMVK>) {
        return VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK;
    }
    #endif // VK_USE_PLATFORM_MACOS_MVK
    if constexpr (std::is_same_v<VulkanStructureType, VkMappedMemoryRange>) {
        return VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryAllocateFlagsInfo>) {
        return VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryAllocateInfo>) {
        return VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryBarrier>) {
        return VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryDedicatedAllocateInfo>) {
        return VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryDedicatedRequirements>) {
        return VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryFdPropertiesKHR>) {
        return VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;
    }
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryGetAndroidHardwareBufferInfoANDROID>) {
        return VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryGetFdInfoKHR>) {
        return VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryGetWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryHostPointerPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryOpaqueCaptureAddressAllocateInfo>) {
        return VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryPriorityAllocateInfoEXT>) {
        return VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryRequirements2>) {
        return VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkMemoryWin32HandlePropertiesKHR>) {
        return VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_METAL_EXT
    if constexpr (std::is_same_v<VulkanStructureType, VkMetalSurfaceCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT;
    }
    #endif // VK_USE_PLATFORM_METAL_EXT
    if constexpr (std::is_same_v<VulkanStructureType, VkMultisamplePropertiesEXT>) {
        return VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;
    }
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkNativeBufferANDROID>) {
        return VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkPerformanceConfigurationAcquireInfoINTEL>) {
        return VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPerformanceCounterDescriptionKHR>) {
        return VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPerformanceCounterKHR>) {
        return VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPerformanceMarkerInfoINTEL>) {
        return VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPerformanceOverrideInfoINTEL>) {
        return VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPerformanceQuerySubmitInfoKHR>) {
        return VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPerformanceStreamMarkerInfoINTEL>) {
        return VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevice16BitStorageFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevice8BitStorageFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceASTCDecodeFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceBufferDeviceAddressFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceCoherentMemoryFeaturesAMD>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceConditionalRenderingFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceConservativeRasterizationPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceCooperativeMatrixFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceCooperativeMatrixPropertiesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceCornerSampledImageFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceCoverageReductionModeFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceCustomBorderColorFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceCustomBorderColorPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDepthClipEnableFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDepthStencilResolveProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDescriptorIndexingFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDescriptorIndexingProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDiagnosticsConfigFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDiscardRectanglePropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceDriverProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceExclusiveScissorFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceExternalBufferInfo>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceExternalFenceInfo>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceExternalImageFormatInfo>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceExternalMemoryHostPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceExternalSemaphoreInfo>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFeatures2>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFloatControlsProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFragmentDensityMapFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFragmentDensityMapPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceGroupProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceHostQueryResetFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceIDProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceImageDrmFormatModifierInfoEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceImageFormatInfo2>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceImageRobustnessFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceImageViewImageFormatInfoEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceImagelessFramebufferFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceIndexTypeUint8FeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceInlineUniformBlockFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceInlineUniformBlockPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceLineRasterizationFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceLineRasterizationPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMaintenance3Properties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMemoryBudgetPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMemoryPriorityFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMemoryProperties2>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMeshShaderFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMeshShaderPropertiesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMultiviewFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceMultiviewProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePCIBusInfoPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePerformanceQueryFeaturesKHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePerformanceQueryPropertiesKHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePointClippingProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;
    }
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePresentationPropertiesANDROID>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePrivateDataFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceProperties2>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceProtectedMemoryFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceProtectedMemoryProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDevicePushDescriptorPropertiesKHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceRayTracingFeaturesKHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceRayTracingPropertiesKHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceRayTracingPropertiesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceRobustness2FeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceRobustness2PropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSampleLocationsPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSamplerFilterMinmaxProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSamplerYcbcrConversionFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceScalarBlockLayoutFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderAtomicInt64Features>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderClockFeaturesKHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderCoreProperties2AMD>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderCorePropertiesAMD>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderDrawParametersFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderFloat16Int8Features>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderImageFootprintFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShadingRateImageFeaturesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceShadingRateImagePropertiesNV>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSparseImageFormatInfo2>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSubgroupProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSubgroupSizeControlFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceSurfaceInfo2KHR>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceTimelineSemaphoreFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceTimelineSemaphoreProperties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceToolPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceTransformFeedbackFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceTransformFeedbackPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceUniformBufferStandardLayoutFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVariablePointersFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVulkan11Features>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVulkan11Properties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVulkan12Features>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVulkan12Properties>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceVulkanMemoryModelFeatures>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineCacheCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineColorBlendAdvancedStateCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineColorBlendStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineCompilerControlCreateInfoAMD>) {
        return VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineCoverageModulationStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineCoverageReductionStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineCoverageToColorStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineCreationFeedbackCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineDepthStencilStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineDiscardRectangleStateCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineDynamicStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineExecutableInfoKHR>) {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineExecutableInternalRepresentationKHR>) {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineExecutablePropertiesKHR>) {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineExecutableStatisticKHR>) {
        return VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineInfoKHR>) {
        return VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineInputAssemblyStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineLayoutCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineLibraryCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineMultisampleStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineRasterizationConservativeStateCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineRasterizationDepthClipStateCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineRasterizationLineStateCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineRasterizationStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineRasterizationStateRasterizationOrderAMD>) {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineRasterizationStateStreamCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineRepresentativeFragmentTestStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineSampleLocationsStateCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineShaderStageCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineTessellationDomainOriginStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineTessellationStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineVertexInputDivisorStateCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineVertexInputStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineViewportExclusiveScissorStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineViewportShadingRateImageStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineViewportStateCreateInfo>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineViewportSwizzleStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPipelineViewportWScalingStateCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;
    }
    #ifdef VK_USE_PLATFORM_GGP
    if constexpr (std::is_same_v<VulkanStructureType, VkPresentFrameTokenGGP>) {
        return VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP;
    }
    #endif // VK_USE_PLATFORM_GGP
    if constexpr (std::is_same_v<VulkanStructureType, VkPresentInfoKHR>) {
        return VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPresentRegionsKHR>) {
        return VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPresentTimesInfoGOOGLE>) {
        return VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkPrivateDataSlotCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkProtectedSubmitInfo>) {
        return VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkQueryPoolCreateInfo>) {
        return VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkQueryPoolPerformanceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkQueryPoolPerformanceQueryCreateInfoINTEL>) {
        return VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkQueueFamilyCheckpointPropertiesNV>) {
        return VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkQueueFamilyProperties2>) {
        return VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkRayTracingPipelineCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkRayTracingPipelineCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkRayTracingPipelineInterfaceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkRayTracingShaderGroupCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkRayTracingShaderGroupCreateInfoNV>) {
        return VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassAttachmentBeginInfo>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassBeginInfo>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassCreateInfo>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassCreateInfo2>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassFragmentDensityMapCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassInputAttachmentAspectCreateInfo>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassMultiviewCreateInfo>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassSampleLocationsBeginInfoEXT>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkRenderPassTransformBeginInfoQCOM>) {
        return VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSampleLocationsInfoEXT>) {
        return VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSamplerCreateInfo>) {
        return VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSamplerCustomBorderColorCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSamplerReductionModeCreateInfo>) {
        return VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSamplerYcbcrConversionCreateInfo>) {
        return VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSamplerYcbcrConversionImageFormatProperties>) {
        return VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSamplerYcbcrConversionInfo>) {
        return VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSemaphoreCreateInfo>) {
        return VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSemaphoreGetFdInfoKHR>) {
        return VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSemaphoreGetWin32HandleInfoKHR>) {
        return VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSemaphoreSignalInfo>) {
        return VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSemaphoreTypeCreateInfo>) {
        return VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSemaphoreWaitInfo>) {
        return VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkShaderModuleCreateInfo>) {
        return VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkShaderModuleValidationCacheCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSharedPresentSurfaceCapabilitiesKHR>) {
        return VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSparseImageFormatProperties2>) {
        return VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSparseImageMemoryRequirements2>) {
        return VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;
    }
    #ifdef VK_USE_PLATFORM_GGP
    if constexpr (std::is_same_v<VulkanStructureType, VkStreamDescriptorSurfaceCreateInfoGGP>) {
        return VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP;
    }
    #endif // VK_USE_PLATFORM_GGP
    if constexpr (std::is_same_v<VulkanStructureType, VkSubmitInfo>) {
        return VK_STRUCTURE_TYPE_SUBMIT_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSubpassBeginInfo>) {
        return VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSubpassDependency2>) {
        return VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSubpassDescription2>) {
        return VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSubpassDescriptionDepthStencilResolve>) {
        return VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSubpassEndInfo>) {
        return VK_STRUCTURE_TYPE_SUBPASS_END_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSurfaceCapabilities2EXT>) {
        return VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSurfaceCapabilities2KHR>) {
        return VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSurfaceCapabilitiesFullScreenExclusiveEXT>) {
        return VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSurfaceFormat2KHR>) {
        return VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR;
    }
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSurfaceFullScreenExclusiveInfoEXT>) {
        return VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSurfaceFullScreenExclusiveWin32InfoEXT>) {
        return VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSurfaceProtectedCapabilitiesKHR>) {
        return VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSwapchainCounterCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSwapchainCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkSwapchainDisplayNativeHdrCreateInfoAMD>) {
        return VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD;
    }
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkSwapchainImageCreateInfoANDROID>) {
        return VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID;
    }
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkTextureLODGatherFormatPropertiesAMD>) {
        return VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkTimelineSemaphoreSubmitInfo>) {
        return VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkValidationCacheCreateInfoEXT>) {
        return VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkValidationFeaturesEXT>) {
        return VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;
    }
    if constexpr (std::is_same_v<VulkanStructureType, VkValidationFlagsEXT>) {
        return VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
    }
    #ifdef VK_USE_PLATFORM_VI_NN
    if constexpr (std::is_same_v<VulkanStructureType, VkViSurfaceCreateInfoNN>) {
        return VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN;
    }
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkWaylandSurfaceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkWin32KeyedMutexAcquireReleaseInfoKHR>) {
        return VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkWin32KeyedMutexAcquireReleaseInfoNV>) {
        return VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkWin32SurfaceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkWriteDescriptorSet>) {
        return VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
    }
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkWriteDescriptorSetAccelerationStructureKHR>) {
        return VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR;
    }
    #endif // VK_ENABLE_BETA_EXTENSIONS
    if constexpr (std::is_same_v<VulkanStructureType, VkWriteDescriptorSetInlineUniformBlockEXT>) {
        return VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT;
    }
    #ifdef VK_USE_PLATFORM_XCB_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkXcbSurfaceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    if constexpr (std::is_same_v<VulkanStructureType, VkXlibSurfaceCreateInfoKHR>) {
        return VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;
    }
    #endif // VK_USE_PLATFORM_XLIB_KHR
    assert(false && "TODO : Error message");
}

} // namespace vk
} // namespace dst
