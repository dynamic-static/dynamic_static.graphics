
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/generated/less-than-operators.hpp"
#include "dynamic_static/graphics/vulkan/detail/comparison-operators-utilities.hpp"
#include "dynamic_static/graphics/vulkan/generated/structure-to-tuple.hpp"

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAabbPositionsKHR& lhs, const VkAabbPositionsKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureBuildGeometryInfoKHR& lhs, const VkAccelerationStructureBuildGeometryInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureBuildOffsetInfoKHR& lhs, const VkAccelerationStructureBuildOffsetInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureCreateGeometryTypeInfoKHR& lhs, const VkAccelerationStructureCreateGeometryTypeInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureCreateInfoKHR& lhs, const VkAccelerationStructureCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureCreateInfoNV& lhs, const VkAccelerationStructureCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureDeviceAddressInfoKHR& lhs, const VkAccelerationStructureDeviceAddressInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryAabbsDataKHR& lhs, const VkAccelerationStructureGeometryAabbsDataKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryDataKHR& lhs, const VkAccelerationStructureGeometryDataKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryInstancesDataKHR& lhs, const VkAccelerationStructureGeometryInstancesDataKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryKHR& lhs, const VkAccelerationStructureGeometryKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureGeometryTrianglesDataKHR& lhs, const VkAccelerationStructureGeometryTrianglesDataKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureInfoNV& lhs, const VkAccelerationStructureInfoNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureInstanceKHR& lhs, const VkAccelerationStructureInstanceKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureMemoryRequirementsInfoKHR& lhs, const VkAccelerationStructureMemoryRequirementsInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAccelerationStructureMemoryRequirementsInfoNV& lhs, const VkAccelerationStructureMemoryRequirementsInfoNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkAccelerationStructureVersionKHR& lhs, const VkAccelerationStructureVersionKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAcquireNextImageInfoKHR& lhs, const VkAcquireNextImageInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAcquireProfilingLockInfoKHR& lhs, const VkAcquireProfilingLockInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAllocationCallbacks& lhs, const VkAllocationCallbacks& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidHardwareBufferFormatPropertiesANDROID& lhs, const VkAndroidHardwareBufferFormatPropertiesANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidHardwareBufferPropertiesANDROID& lhs, const VkAndroidHardwareBufferPropertiesANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidHardwareBufferUsageANDROID& lhs, const VkAndroidHardwareBufferUsageANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkAndroidSurfaceCreateInfoKHR& lhs, const VkAndroidSurfaceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkApplicationInfo& lhs, const VkApplicationInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescription& lhs, const VkAttachmentDescription& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescription2& lhs, const VkAttachmentDescription2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAttachmentDescriptionStencilLayout& lhs, const VkAttachmentDescriptionStencilLayout& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAttachmentReference& lhs, const VkAttachmentReference& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAttachmentReference2& lhs, const VkAttachmentReference2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAttachmentReferenceStencilLayout& lhs, const VkAttachmentReferenceStencilLayout& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkAttachmentSampleLocationsEXT& lhs, const VkAttachmentSampleLocationsEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBaseInStructure& lhs, const VkBaseInStructure& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBaseOutStructure& lhs, const VkBaseOutStructure& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkBindAccelerationStructureMemoryInfoKHR& lhs, const VkBindAccelerationStructureMemoryInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindBufferMemoryDeviceGroupInfo& lhs, const VkBindBufferMemoryDeviceGroupInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindBufferMemoryInfo& lhs, const VkBindBufferMemoryInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindImageMemoryDeviceGroupInfo& lhs, const VkBindImageMemoryDeviceGroupInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindImageMemoryInfo& lhs, const VkBindImageMemoryInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindImageMemorySwapchainInfoKHR& lhs, const VkBindImageMemorySwapchainInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindImagePlaneMemoryInfo& lhs, const VkBindImagePlaneMemoryInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindIndexBufferIndirectCommandNV& lhs, const VkBindIndexBufferIndirectCommandNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindShaderGroupIndirectCommandNV& lhs, const VkBindShaderGroupIndirectCommandNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindSparseInfo& lhs, const VkBindSparseInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBindVertexBufferIndirectCommandNV& lhs, const VkBindVertexBufferIndirectCommandNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferCopy& lhs, const VkBufferCopy& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferCopy& lhs, const VkBufferCopy& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferCreateInfo& lhs, const VkBufferCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferDeviceAddressCreateInfoEXT& lhs, const VkBufferDeviceAddressCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferDeviceAddressInfo& lhs, const VkBufferDeviceAddressInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferImageCopy& lhs, const VkBufferImageCopy& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferMemoryBarrier& lhs, const VkBufferMemoryBarrier& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferMemoryRequirementsInfo2& lhs, const VkBufferMemoryRequirementsInfo2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferOpaqueCaptureAddressCreateInfo& lhs, const VkBufferOpaqueCaptureAddressCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkBufferViewCreateInfo& lhs, const VkBufferViewCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCalibratedTimestampInfoEXT& lhs, const VkCalibratedTimestampInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCheckpointDataNV& lhs, const VkCheckpointDataNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkClearAttachment& lhs, const VkClearAttachment& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkClearAttachment& lhs, const VkClearAttachment& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkClearColorValue& lhs, const VkClearColorValue& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkClearColorValue& lhs, const VkClearColorValue& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkClearDepthStencilValue& lhs, const VkClearDepthStencilValue& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkClearRect& lhs, const VkClearRect& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkClearRect& lhs, const VkClearRect& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkClearValue& lhs, const VkClearValue& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkClearValue& lhs, const VkClearValue& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCoarseSampleLocationNV& lhs, const VkCoarseSampleLocationNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCoarseSampleOrderCustomNV& lhs, const VkCoarseSampleOrderCustomNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCommandBufferAllocateInfo& lhs, const VkCommandBufferAllocateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCommandBufferBeginInfo& lhs, const VkCommandBufferBeginInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceConditionalRenderingInfoEXT& lhs, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceInfo& lhs, const VkCommandBufferInheritanceInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& lhs, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCommandPoolCreateInfo& lhs, const VkCommandPoolCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkComponentMapping& lhs, const VkComponentMapping& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkComponentMapping& lhs, const VkComponentMapping& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkComputePipelineCreateInfo& lhs, const VkComputePipelineCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkConditionalRenderingBeginInfoEXT& lhs, const VkConditionalRenderingBeginInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkConformanceVersion& lhs, const VkConformanceVersion& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCooperativeMatrixPropertiesNV& lhs, const VkCooperativeMatrixPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkCopyAccelerationStructureInfoKHR& lhs, const VkCopyAccelerationStructureInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkCopyAccelerationStructureToMemoryInfoKHR& lhs, const VkCopyAccelerationStructureToMemoryInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkCopyDescriptorSet& lhs, const VkCopyDescriptorSet& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkCopyMemoryToAccelerationStructureInfoKHR& lhs, const VkCopyMemoryToAccelerationStructureInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkD3D12FenceSubmitInfoKHR& lhs, const VkD3D12FenceSubmitInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerMarkerInfoEXT& lhs, const VkDebugMarkerMarkerInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerObjectNameInfoEXT& lhs, const VkDebugMarkerObjectNameInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugMarkerObjectTagInfoEXT& lhs, const VkDebugMarkerObjectTagInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugReportCallbackCreateInfoEXT& lhs, const VkDebugReportCallbackCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsLabelEXT& lhs, const VkDebugUtilsLabelEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsMessengerCallbackDataEXT& lhs, const VkDebugUtilsMessengerCallbackDataEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsMessengerCreateInfoEXT& lhs, const VkDebugUtilsMessengerCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsObjectNameInfoEXT& lhs, const VkDebugUtilsObjectNameInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDebugUtilsObjectTagInfoEXT& lhs, const VkDebugUtilsObjectTagInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationBufferCreateInfoNV& lhs, const VkDedicatedAllocationBufferCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationImageCreateInfoNV& lhs, const VkDedicatedAllocationImageCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDedicatedAllocationMemoryAllocateInfoNV& lhs, const VkDedicatedAllocationMemoryAllocateInfoNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkDeferredOperationInfoKHR& lhs, const VkDeferredOperationInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorBufferInfo& lhs, const VkDescriptorBufferInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorImageInfo& lhs, const VkDescriptorImageInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolCreateInfo& lhs, const VkDescriptorPoolCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& lhs, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorPoolSize& lhs, const VkDescriptorPoolSize& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetAllocateInfo& lhs, const VkDescriptorSetAllocateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutBinding& lhs, const VkDescriptorSetLayoutBinding& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutBindingFlagsCreateInfo& lhs, const VkDescriptorSetLayoutBindingFlagsCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutCreateInfo& lhs, const VkDescriptorSetLayoutCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetLayoutSupport& lhs, const VkDescriptorSetLayoutSupport& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetVariableDescriptorCountAllocateInfo& lhs, const VkDescriptorSetVariableDescriptorCountAllocateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorSetVariableDescriptorCountLayoutSupport& lhs, const VkDescriptorSetVariableDescriptorCountLayoutSupport& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorUpdateTemplateCreateInfo& lhs, const VkDescriptorUpdateTemplateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDescriptorUpdateTemplateEntry& lhs, const VkDescriptorUpdateTemplateEntry& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceCreateInfo& lhs, const VkDeviceCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceDiagnosticsConfigCreateInfoNV& lhs, const VkDeviceDiagnosticsConfigCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceEventInfoEXT& lhs, const VkDeviceEventInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupBindSparseInfo& lhs, const VkDeviceGroupBindSparseInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupCommandBufferBeginInfo& lhs, const VkDeviceGroupCommandBufferBeginInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupDeviceCreateInfo& lhs, const VkDeviceGroupDeviceCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupPresentCapabilitiesKHR& lhs, const VkDeviceGroupPresentCapabilitiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupPresentInfoKHR& lhs, const VkDeviceGroupPresentInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupRenderPassBeginInfo& lhs, const VkDeviceGroupRenderPassBeginInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupSubmitInfo& lhs, const VkDeviceGroupSubmitInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceGroupSwapchainCreateInfoKHR& lhs, const VkDeviceGroupSwapchainCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceMemoryOpaqueCaptureAddressInfo& lhs, const VkDeviceMemoryOpaqueCaptureAddressInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceMemoryOverallocationCreateInfoAMD& lhs, const VkDeviceMemoryOverallocationCreateInfoAMD& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkDeviceOrHostAddressConstKHR& lhs, const VkDeviceOrHostAddressConstKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkDeviceOrHostAddressKHR& lhs, const VkDeviceOrHostAddressKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueCreateInfo& lhs, const VkDeviceQueueCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueGlobalPriorityCreateInfoEXT& lhs, const VkDeviceQueueGlobalPriorityCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDeviceQueueInfo2& lhs, const VkDeviceQueueInfo2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDispatchIndirectCommand& lhs, const VkDispatchIndirectCommand& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayEventInfoEXT& lhs, const VkDisplayEventInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayModeCreateInfoKHR& lhs, const VkDisplayModeCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayModeParametersKHR& lhs, const VkDisplayModeParametersKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayModeProperties2KHR& lhs, const VkDisplayModeProperties2KHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayModePropertiesKHR& lhs, const VkDisplayModePropertiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayNativeHdrSurfaceCapabilitiesAMD& lhs, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneCapabilities2KHR& lhs, const VkDisplayPlaneCapabilities2KHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneCapabilitiesKHR& lhs, const VkDisplayPlaneCapabilitiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneInfo2KHR& lhs, const VkDisplayPlaneInfo2KHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPlaneProperties2KHR& lhs, const VkDisplayPlaneProperties2KHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPlanePropertiesKHR& lhs, const VkDisplayPlanePropertiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPowerInfoEXT& lhs, const VkDisplayPowerInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPresentInfoKHR& lhs, const VkDisplayPresentInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayProperties2KHR& lhs, const VkDisplayProperties2KHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplayPropertiesKHR& lhs, const VkDisplayPropertiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDisplaySurfaceCreateInfoKHR& lhs, const VkDisplaySurfaceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDrawIndexedIndirectCommand& lhs, const VkDrawIndexedIndirectCommand& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDrawIndirectCommand& lhs, const VkDrawIndirectCommand& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDrawMeshTasksIndirectCommandNV& lhs, const VkDrawMeshTasksIndirectCommandNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDrmFormatModifierPropertiesEXT& lhs, const VkDrmFormatModifierPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkDrmFormatModifierPropertiesListEXT& lhs, const VkDrmFormatModifierPropertiesListEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkEventCreateInfo& lhs, const VkEventCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExportFenceCreateInfo& lhs, const VkExportFenceCreateInfo& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportFenceWin32HandleInfoKHR& lhs, const VkExportFenceWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExportMemoryAllocateInfo& lhs, const VkExportMemoryAllocateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExportMemoryAllocateInfoNV& lhs, const VkExportMemoryAllocateInfoNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportMemoryWin32HandleInfoKHR& lhs, const VkExportMemoryWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportMemoryWin32HandleInfoNV& lhs, const VkExportMemoryWin32HandleInfoNV& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExportSemaphoreCreateInfo& lhs, const VkExportSemaphoreCreateInfo& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkExportSemaphoreWin32HandleInfoKHR& lhs, const VkExportSemaphoreWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExtensionProperties& lhs, const VkExtensionProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExtent2D& lhs, const VkExtent2D& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExtent2D& lhs, const VkExtent2D& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExtent3D& lhs, const VkExtent3D& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExtent3D& lhs, const VkExtent3D& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalBufferProperties& lhs, const VkExternalBufferProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalFenceProperties& lhs, const VkExternalFenceProperties& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkExternalFormatANDROID& lhs, const VkExternalFormatANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalImageFormatProperties& lhs, const VkExternalImageFormatProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalImageFormatPropertiesNV& lhs, const VkExternalImageFormatPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryBufferCreateInfo& lhs, const VkExternalMemoryBufferCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryImageCreateInfo& lhs, const VkExternalMemoryImageCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryImageCreateInfoNV& lhs, const VkExternalMemoryImageCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalMemoryProperties& lhs, const VkExternalMemoryProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkExternalSemaphoreProperties& lhs, const VkExternalSemaphoreProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFenceCreateInfo& lhs, const VkFenceCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFenceGetFdInfoKHR& lhs, const VkFenceGetFdInfoKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkFenceGetWin32HandleInfoKHR& lhs, const VkFenceGetWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFilterCubicImageViewImageFormatPropertiesEXT& lhs, const VkFilterCubicImageViewImageFormatPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFormatProperties& lhs, const VkFormatProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFormatProperties& lhs, const VkFormatProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFormatProperties2& lhs, const VkFormatProperties2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFramebufferAttachmentImageInfo& lhs, const VkFramebufferAttachmentImageInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFramebufferAttachmentsCreateInfo& lhs, const VkFramebufferAttachmentsCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFramebufferCreateInfo& lhs, const VkFramebufferCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkFramebufferMixedSamplesCombinationNV& lhs, const VkFramebufferMixedSamplesCombinationNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGeneratedCommandsInfoNV& lhs, const VkGeneratedCommandsInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGeneratedCommandsMemoryRequirementsInfoNV& lhs, const VkGeneratedCommandsMemoryRequirementsInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGeometryAABBNV& lhs, const VkGeometryAABBNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGeometryDataNV& lhs, const VkGeometryDataNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGeometryNV& lhs, const VkGeometryNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGeometryNV& lhs, const VkGeometryNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGeometryTrianglesNV& lhs, const VkGeometryTrianglesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGraphicsPipelineCreateInfo& lhs, const VkGraphicsPipelineCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGraphicsPipelineShaderGroupsCreateInfoNV& lhs, const VkGraphicsPipelineShaderGroupsCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkGraphicsShaderGroupCreateInfoNV& lhs, const VkGraphicsShaderGroupCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkHdrMetadataEXT& lhs, const VkHdrMetadataEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkHeadlessSurfaceCreateInfoEXT& lhs, const VkHeadlessSurfaceCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_IOS_MVK
bool operator<(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_IOS_MVK

#ifdef VK_USE_PLATFORM_IOS_MVK
bool operator<=(const VkIOSSurfaceCreateInfoMVK& lhs, const VkIOSSurfaceCreateInfoMVK& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_IOS_MVK

bool operator<(const VkImageBlit& lhs, const VkImageBlit& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageBlit& lhs, const VkImageBlit& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageCopy& lhs, const VkImageCopy& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageCopy& lhs, const VkImageCopy& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageCreateInfo& lhs, const VkImageCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierExplicitCreateInfoEXT& lhs, const VkImageDrmFormatModifierExplicitCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierListCreateInfoEXT& lhs, const VkImageDrmFormatModifierListCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageDrmFormatModifierPropertiesEXT& lhs, const VkImageDrmFormatModifierPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageFormatListCreateInfo& lhs, const VkImageFormatListCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageFormatProperties& lhs, const VkImageFormatProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageFormatProperties2& lhs, const VkImageFormatProperties2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageMemoryBarrier& lhs, const VkImageMemoryBarrier& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageMemoryRequirementsInfo2& lhs, const VkImageMemoryRequirementsInfo2& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_FUCHSIA
bool operator<(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_FUCHSIA

#ifdef VK_USE_PLATFORM_FUCHSIA
bool operator<=(const VkImagePipeSurfaceCreateInfoFUCHSIA& lhs, const VkImagePipeSurfaceCreateInfoFUCHSIA& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_FUCHSIA

bool operator<(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImagePlaneMemoryRequirementsInfo& lhs, const VkImagePlaneMemoryRequirementsInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageResolve& lhs, const VkImageResolve& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageResolve& lhs, const VkImageResolve& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageSparseMemoryRequirementsInfo2& lhs, const VkImageSparseMemoryRequirementsInfo2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageStencilUsageCreateInfo& lhs, const VkImageStencilUsageCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageSubresource& lhs, const VkImageSubresource& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageSubresource& lhs, const VkImageSubresource& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageSubresourceLayers& lhs, const VkImageSubresourceLayers& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageSubresourceRange& lhs, const VkImageSubresourceRange& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageSwapchainCreateInfoKHR& lhs, const VkImageSwapchainCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageViewASTCDecodeModeEXT& lhs, const VkImageViewASTCDecodeModeEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageViewCreateInfo& lhs, const VkImageViewCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageViewHandleInfoNVX& lhs, const VkImageViewHandleInfoNVX& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImageViewUsageCreateInfo& lhs, const VkImageViewUsageCreateInfo& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkImportAndroidHardwareBufferInfoANDROID& lhs, const VkImportAndroidHardwareBufferInfoANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImportFenceFdInfoKHR& lhs, const VkImportFenceFdInfoKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportFenceWin32HandleInfoKHR& lhs, const VkImportFenceWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImportMemoryFdInfoKHR& lhs, const VkImportMemoryFdInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImportMemoryHostPointerInfoEXT& lhs, const VkImportMemoryHostPointerInfoEXT& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportMemoryWin32HandleInfoKHR& lhs, const VkImportMemoryWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportMemoryWin32HandleInfoNV& lhs, const VkImportMemoryWin32HandleInfoNV& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkImportSemaphoreFdInfoKHR& lhs, const VkImportSemaphoreFdInfoKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkImportSemaphoreWin32HandleInfoKHR& lhs, const VkImportSemaphoreWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsLayoutCreateInfoNV& lhs, const VkIndirectCommandsLayoutCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsLayoutTokenNV& lhs, const VkIndirectCommandsLayoutTokenNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkIndirectCommandsStreamNV& lhs, const VkIndirectCommandsStreamNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkInitializePerformanceApiInfoINTEL& lhs, const VkInitializePerformanceApiInfoINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkInputAttachmentAspectReference& lhs, const VkInputAttachmentAspectReference& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkInstanceCreateInfo& lhs, const VkInstanceCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkLayerProperties& lhs, const VkLayerProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkLayerProperties& lhs, const VkLayerProperties& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_MACOS_MVK
bool operator<(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_MACOS_MVK

#ifdef VK_USE_PLATFORM_MACOS_MVK
bool operator<=(const VkMacOSSurfaceCreateInfoMVK& lhs, const VkMacOSSurfaceCreateInfoMVK& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_MACOS_MVK

bool operator<(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMappedMemoryRange& lhs, const VkMappedMemoryRange& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryAllocateFlagsInfo& lhs, const VkMemoryAllocateFlagsInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryAllocateInfo& lhs, const VkMemoryAllocateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryBarrier& lhs, const VkMemoryBarrier& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryDedicatedAllocateInfo& lhs, const VkMemoryDedicatedAllocateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryDedicatedRequirements& lhs, const VkMemoryDedicatedRequirements& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryFdPropertiesKHR& lhs, const VkMemoryFdPropertiesKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkMemoryGetAndroidHardwareBufferInfoANDROID& lhs, const VkMemoryGetAndroidHardwareBufferInfoANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryGetFdInfoKHR& lhs, const VkMemoryGetFdInfoKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkMemoryGetWin32HandleInfoKHR& lhs, const VkMemoryGetWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryHeap& lhs, const VkMemoryHeap& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryHostPointerPropertiesEXT& lhs, const VkMemoryHostPointerPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryOpaqueCaptureAddressAllocateInfo& lhs, const VkMemoryOpaqueCaptureAddressAllocateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryPriorityAllocateInfoEXT& lhs, const VkMemoryPriorityAllocateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryRequirements& lhs, const VkMemoryRequirements& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryRequirements2& lhs, const VkMemoryRequirements2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkMemoryType& lhs, const VkMemoryType& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMemoryType& lhs, const VkMemoryType& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkMemoryWin32HandlePropertiesKHR& lhs, const VkMemoryWin32HandlePropertiesKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_METAL_EXT
bool operator<(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_METAL_EXT

#ifdef VK_USE_PLATFORM_METAL_EXT
bool operator<=(const VkMetalSurfaceCreateInfoEXT& lhs, const VkMetalSurfaceCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_METAL_EXT

bool operator<(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkMultisamplePropertiesEXT& lhs, const VkMultisamplePropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkNativeBufferANDROID& lhs, const VkNativeBufferANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkNativeBufferUsage2ANDROID& lhs, const VkNativeBufferUsage2ANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkOffset2D& lhs, const VkOffset2D& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkOffset2D& lhs, const VkOffset2D& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkOffset3D& lhs, const VkOffset3D& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkOffset3D& lhs, const VkOffset3D& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPastPresentationTimingGOOGLE& lhs, const VkPastPresentationTimingGOOGLE& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceConfigurationAcquireInfoINTEL& lhs, const VkPerformanceConfigurationAcquireInfoINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterDescriptionKHR& lhs, const VkPerformanceCounterDescriptionKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterKHR& lhs, const VkPerformanceCounterKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceCounterResultKHR& lhs, const VkPerformanceCounterResultKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceMarkerInfoINTEL& lhs, const VkPerformanceMarkerInfoINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceOverrideInfoINTEL& lhs, const VkPerformanceOverrideInfoINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceQuerySubmitInfoKHR& lhs, const VkPerformanceQuerySubmitInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceStreamMarkerInfoINTEL& lhs, const VkPerformanceStreamMarkerInfoINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceValueDataINTEL& lhs, const VkPerformanceValueDataINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPerformanceValueINTEL& lhs, const VkPerformanceValueINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevice16BitStorageFeatures& lhs, const VkPhysicalDevice16BitStorageFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevice8BitStorageFeatures& lhs, const VkPhysicalDevice8BitStorageFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceASTCDecodeFeaturesEXT& lhs, const VkPhysicalDeviceASTCDecodeFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& lhs, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBufferDeviceAddressFeatures& lhs, const VkPhysicalDeviceBufferDeviceAddressFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& lhs, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCoherentMemoryFeaturesAMD& lhs, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& lhs, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceConditionalRenderingFeaturesEXT& lhs, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCooperativeMatrixFeaturesNV& lhs, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCooperativeMatrixPropertiesNV& lhs, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCornerSampledImageFeaturesNV& lhs, const VkPhysicalDeviceCornerSampledImageFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceCoverageReductionModeFeaturesNV& lhs, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& lhs, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDepthClipEnableFeaturesEXT& lhs, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDepthStencilResolveProperties& lhs, const VkPhysicalDeviceDepthStencilResolveProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDescriptorIndexingFeatures& lhs, const VkPhysicalDeviceDescriptorIndexingFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDescriptorIndexingProperties& lhs, const VkPhysicalDeviceDescriptorIndexingProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& lhs, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& lhs, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDiscardRectanglePropertiesEXT& lhs, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceDriverProperties& lhs, const VkPhysicalDeviceDriverProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExclusiveScissorFeaturesNV& lhs, const VkPhysicalDeviceExclusiveScissorFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalBufferInfo& lhs, const VkPhysicalDeviceExternalBufferInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalFenceInfo& lhs, const VkPhysicalDeviceExternalFenceInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalImageFormatInfo& lhs, const VkPhysicalDeviceExternalImageFormatInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& lhs, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceExternalSemaphoreInfo& lhs, const VkPhysicalDeviceExternalSemaphoreInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFeatures& lhs, const VkPhysicalDeviceFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFeatures2& lhs, const VkPhysicalDeviceFeatures2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFloatControlsProperties& lhs, const VkPhysicalDeviceFloatControlsProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& lhs, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& lhs, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& lhs, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceGroupProperties& lhs, const VkPhysicalDeviceGroupProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceHostQueryResetFeatures& lhs, const VkPhysicalDeviceHostQueryResetFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceIDProperties& lhs, const VkPhysicalDeviceIDProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& lhs, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageFormatInfo2& lhs, const VkPhysicalDeviceImageFormatInfo2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImageViewImageFormatInfoEXT& lhs, const VkPhysicalDeviceImageViewImageFormatInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceImagelessFramebufferFeatures& lhs, const VkPhysicalDeviceImagelessFramebufferFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& lhs, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& lhs, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLimits& lhs, const VkPhysicalDeviceLimits& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLineRasterizationFeaturesEXT& lhs, const VkPhysicalDeviceLineRasterizationFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceLineRasterizationPropertiesEXT& lhs, const VkPhysicalDeviceLineRasterizationPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMaintenance3Properties& lhs, const VkPhysicalDeviceMaintenance3Properties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryBudgetPropertiesEXT& lhs, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryPriorityFeaturesEXT& lhs, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryProperties& lhs, const VkPhysicalDeviceMemoryProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMemoryProperties2& lhs, const VkPhysicalDeviceMemoryProperties2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMeshShaderFeaturesNV& lhs, const VkPhysicalDeviceMeshShaderFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMeshShaderPropertiesNV& lhs, const VkPhysicalDeviceMeshShaderPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewFeatures& lhs, const VkPhysicalDeviceMultiviewFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& lhs, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceMultiviewProperties& lhs, const VkPhysicalDeviceMultiviewProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePCIBusInfoPropertiesEXT& lhs, const VkPhysicalDevicePCIBusInfoPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePerformanceQueryFeaturesKHR& lhs, const VkPhysicalDevicePerformanceQueryFeaturesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePerformanceQueryPropertiesKHR& lhs, const VkPhysicalDevicePerformanceQueryPropertiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& lhs, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& lhs, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePointClippingProperties& lhs, const VkPhysicalDevicePointClippingProperties& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkPhysicalDevicePresentationPropertiesANDROID& lhs, const VkPhysicalDevicePresentationPropertiesANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProperties& lhs, const VkPhysicalDeviceProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProperties2& lhs, const VkPhysicalDeviceProperties2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProtectedMemoryFeatures& lhs, const VkPhysicalDeviceProtectedMemoryFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceProtectedMemoryProperties& lhs, const VkPhysicalDeviceProtectedMemoryProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDevicePushDescriptorPropertiesKHR& lhs, const VkPhysicalDevicePushDescriptorPropertiesKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkPhysicalDeviceRayTracingFeaturesKHR& lhs, const VkPhysicalDeviceRayTracingFeaturesKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkPhysicalDeviceRayTracingPropertiesKHR& lhs, const VkPhysicalDeviceRayTracingPropertiesKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRayTracingPropertiesNV& lhs, const VkPhysicalDeviceRayTracingPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& lhs, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSampleLocationsPropertiesEXT& lhs, const VkPhysicalDeviceSampleLocationsPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSamplerFilterMinmaxProperties& lhs, const VkPhysicalDeviceSamplerFilterMinmaxProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSamplerYcbcrConversionFeatures& lhs, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceScalarBlockLayoutFeatures& lhs, const VkPhysicalDeviceScalarBlockLayoutFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& lhs, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderAtomicInt64Features& lhs, const VkPhysicalDeviceShaderAtomicInt64Features& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderClockFeaturesKHR& lhs, const VkPhysicalDeviceShaderClockFeaturesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderCoreProperties2AMD& lhs, const VkPhysicalDeviceShaderCoreProperties2AMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderCorePropertiesAMD& lhs, const VkPhysicalDeviceShaderCorePropertiesAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& lhs, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderDrawParametersFeatures& lhs, const VkPhysicalDeviceShaderDrawParametersFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderFloat16Int8Features& lhs, const VkPhysicalDeviceShaderFloat16Int8Features& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderImageFootprintFeaturesNV& lhs, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& lhs, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& lhs, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& lhs, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShadingRateImageFeaturesNV& lhs, const VkPhysicalDeviceShadingRateImageFeaturesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceShadingRateImagePropertiesNV& lhs, const VkPhysicalDeviceShadingRateImagePropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSparseImageFormatInfo2& lhs, const VkPhysicalDeviceSparseImageFormatInfo2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSparseProperties& lhs, const VkPhysicalDeviceSparseProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupProperties& lhs, const VkPhysicalDeviceSubgroupProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& lhs, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceSurfaceInfo2KHR& lhs, const VkPhysicalDeviceSurfaceInfo2KHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& lhs, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& lhs, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTimelineSemaphoreFeatures& lhs, const VkPhysicalDeviceTimelineSemaphoreFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTimelineSemaphoreProperties& lhs, const VkPhysicalDeviceTimelineSemaphoreProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceToolPropertiesEXT& lhs, const VkPhysicalDeviceToolPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTransformFeedbackFeaturesEXT& lhs, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceTransformFeedbackPropertiesEXT& lhs, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& lhs, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVariablePointersFeatures& lhs, const VkPhysicalDeviceVariablePointersFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& lhs, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan11Features& lhs, const VkPhysicalDeviceVulkan11Features& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan11Properties& lhs, const VkPhysicalDeviceVulkan11Properties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan12Features& lhs, const VkPhysicalDeviceVulkan12Features& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkan12Properties& lhs, const VkPhysicalDeviceVulkan12Properties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceVulkanMemoryModelFeatures& lhs, const VkPhysicalDeviceVulkanMemoryModelFeatures& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& lhs, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineCacheCreateInfo& lhs, const VkPipelineCacheCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendAdvancedStateCreateInfoEXT& lhs, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendAttachmentState& lhs, const VkPipelineColorBlendAttachmentState& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineColorBlendStateCreateInfo& lhs, const VkPipelineColorBlendStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineCompilerControlCreateInfoAMD& lhs, const VkPipelineCompilerControlCreateInfoAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageModulationStateCreateInfoNV& lhs, const VkPipelineCoverageModulationStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageReductionStateCreateInfoNV& lhs, const VkPipelineCoverageReductionStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineCoverageToColorStateCreateInfoNV& lhs, const VkPipelineCoverageToColorStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineCreationFeedbackCreateInfoEXT& lhs, const VkPipelineCreationFeedbackCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineCreationFeedbackEXT& lhs, const VkPipelineCreationFeedbackEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineDepthStencilStateCreateInfo& lhs, const VkPipelineDepthStencilStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineDiscardRectangleStateCreateInfoEXT& lhs, const VkPipelineDiscardRectangleStateCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineDynamicStateCreateInfo& lhs, const VkPipelineDynamicStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableInfoKHR& lhs, const VkPipelineExecutableInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableInternalRepresentationKHR& lhs, const VkPipelineExecutableInternalRepresentationKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutablePropertiesKHR& lhs, const VkPipelineExecutablePropertiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableStatisticKHR& lhs, const VkPipelineExecutableStatisticKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineExecutableStatisticValueKHR& lhs, const VkPipelineExecutableStatisticValueKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineInfoKHR& lhs, const VkPipelineInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineInputAssemblyStateCreateInfo& lhs, const VkPipelineInputAssemblyStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineLayoutCreateInfo& lhs, const VkPipelineLayoutCreateInfo& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkPipelineLibraryCreateInfoKHR& lhs, const VkPipelineLibraryCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineMultisampleStateCreateInfo& lhs, const VkPipelineMultisampleStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationConservativeStateCreateInfoEXT& lhs, const VkPipelineRasterizationConservativeStateCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationDepthClipStateCreateInfoEXT& lhs, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationLineStateCreateInfoEXT& lhs, const VkPipelineRasterizationLineStateCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateCreateInfo& lhs, const VkPipelineRasterizationStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateRasterizationOrderAMD& lhs, const VkPipelineRasterizationStateRasterizationOrderAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineRasterizationStateStreamCreateInfoEXT& lhs, const VkPipelineRasterizationStateStreamCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& lhs, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineSampleLocationsStateCreateInfoEXT& lhs, const VkPipelineSampleLocationsStateCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineShaderStageCreateInfo& lhs, const VkPipelineShaderStageCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& lhs, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineTessellationDomainOriginStateCreateInfo& lhs, const VkPipelineTessellationDomainOriginStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineTessellationStateCreateInfo& lhs, const VkPipelineTessellationStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineVertexInputDivisorStateCreateInfoEXT& lhs, const VkPipelineVertexInputDivisorStateCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineVertexInputStateCreateInfo& lhs, const VkPipelineVertexInputStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& lhs, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportExclusiveScissorStateCreateInfoNV& lhs, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportShadingRateImageStateCreateInfoNV& lhs, const VkPipelineViewportShadingRateImageStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportStateCreateInfo& lhs, const VkPipelineViewportStateCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportSwizzleStateCreateInfoNV& lhs, const VkPipelineViewportSwizzleStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPipelineViewportWScalingStateCreateInfoNV& lhs, const VkPipelineViewportWScalingStateCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator<(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_GGP
bool operator<=(const VkPresentFrameTokenGGP& lhs, const VkPresentFrameTokenGGP& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_GGP

bool operator<(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPresentInfoKHR& lhs, const VkPresentInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPresentRegionKHR& lhs, const VkPresentRegionKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPresentRegionsKHR& lhs, const VkPresentRegionsKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPresentTimeGOOGLE& lhs, const VkPresentTimeGOOGLE& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPresentTimesInfoGOOGLE& lhs, const VkPresentTimesInfoGOOGLE& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkProtectedSubmitInfo& lhs, const VkProtectedSubmitInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkPushConstantRange& lhs, const VkPushConstantRange& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkQueryPoolCreateInfo& lhs, const VkQueryPoolCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkQueryPoolPerformanceCreateInfoKHR& lhs, const VkQueryPoolPerformanceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkQueryPoolPerformanceQueryCreateInfoINTEL& lhs, const VkQueryPoolPerformanceQueryCreateInfoINTEL& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyCheckpointPropertiesNV& lhs, const VkQueueFamilyCheckpointPropertiesNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyProperties& lhs, const VkQueueFamilyProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkQueueFamilyProperties2& lhs, const VkQueueFamilyProperties2& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkRayTracingPipelineCreateInfoKHR& lhs, const VkRayTracingPipelineCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRayTracingPipelineCreateInfoNV& lhs, const VkRayTracingPipelineCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkRayTracingPipelineInterfaceCreateInfoKHR& lhs, const VkRayTracingPipelineInterfaceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkRayTracingShaderGroupCreateInfoKHR& lhs, const VkRayTracingShaderGroupCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRayTracingShaderGroupCreateInfoNV& lhs, const VkRayTracingShaderGroupCreateInfoNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRect2D& lhs, const VkRect2D& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRect2D& lhs, const VkRect2D& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRectLayerKHR& lhs, const VkRectLayerKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRefreshCycleDurationGOOGLE& lhs, const VkRefreshCycleDurationGOOGLE& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassAttachmentBeginInfo& lhs, const VkRenderPassAttachmentBeginInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassBeginInfo& lhs, const VkRenderPassBeginInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassCreateInfo& lhs, const VkRenderPassCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassCreateInfo2& lhs, const VkRenderPassCreateInfo2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassFragmentDensityMapCreateInfoEXT& lhs, const VkRenderPassFragmentDensityMapCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassInputAttachmentAspectCreateInfo& lhs, const VkRenderPassInputAttachmentAspectCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassMultiviewCreateInfo& lhs, const VkRenderPassMultiviewCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassSampleLocationsBeginInfoEXT& lhs, const VkRenderPassSampleLocationsBeginInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkRenderPassTransformBeginInfoQCOM& lhs, const VkRenderPassTransformBeginInfoQCOM& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSampleLocationEXT& lhs, const VkSampleLocationEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSampleLocationsInfoEXT& lhs, const VkSampleLocationsInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSamplerCreateInfo& lhs, const VkSamplerCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSamplerReductionModeCreateInfo& lhs, const VkSamplerReductionModeCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionCreateInfo& lhs, const VkSamplerYcbcrConversionCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionImageFormatProperties& lhs, const VkSamplerYcbcrConversionImageFormatProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSamplerYcbcrConversionInfo& lhs, const VkSamplerYcbcrConversionInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSemaphoreCreateInfo& lhs, const VkSemaphoreCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSemaphoreGetFdInfoKHR& lhs, const VkSemaphoreGetFdInfoKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSemaphoreGetWin32HandleInfoKHR& lhs, const VkSemaphoreGetWin32HandleInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSemaphoreSignalInfo& lhs, const VkSemaphoreSignalInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSemaphoreTypeCreateInfo& lhs, const VkSemaphoreTypeCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSemaphoreWaitInfo& lhs, const VkSemaphoreWaitInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSetStateFlagsIndirectCommandNV& lhs, const VkSetStateFlagsIndirectCommandNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkShaderModuleCreateInfo& lhs, const VkShaderModuleCreateInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkShaderModuleValidationCacheCreateInfoEXT& lhs, const VkShaderModuleValidationCacheCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkShaderResourceUsageAMD& lhs, const VkShaderResourceUsageAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkShaderStatisticsInfoAMD& lhs, const VkShaderStatisticsInfoAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkShadingRatePaletteNV& lhs, const VkShadingRatePaletteNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSharedPresentSurfaceCapabilitiesKHR& lhs, const VkSharedPresentSurfaceCapabilitiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseBufferMemoryBindInfo& lhs, const VkSparseBufferMemoryBindInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseImageFormatProperties& lhs, const VkSparseImageFormatProperties& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseImageFormatProperties2& lhs, const VkSparseImageFormatProperties2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryBind& lhs, const VkSparseImageMemoryBind& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryBindInfo& lhs, const VkSparseImageMemoryBindInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryRequirements& lhs, const VkSparseImageMemoryRequirements& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseImageMemoryRequirements2& lhs, const VkSparseImageMemoryRequirements2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseImageOpaqueMemoryBindInfo& lhs, const VkSparseImageOpaqueMemoryBindInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSparseMemoryBind& lhs, const VkSparseMemoryBind& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSpecializationInfo& lhs, const VkSpecializationInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSpecializationMapEntry& lhs, const VkSpecializationMapEntry& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkStencilOpState& lhs, const VkStencilOpState& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkStencilOpState& lhs, const VkStencilOpState& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_GGP
bool operator<(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_USE_PLATFORM_GGP
bool operator<=(const VkStreamDescriptorSurfaceCreateInfoGGP& lhs, const VkStreamDescriptorSurfaceCreateInfoGGP& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_GGP

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkStridedBufferRegionKHR& lhs, const VkStridedBufferRegionKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubmitInfo& lhs, const VkSubmitInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassBeginInfo& lhs, const VkSubpassBeginInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassDependency& lhs, const VkSubpassDependency& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassDependency2& lhs, const VkSubpassDependency2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassDescription& lhs, const VkSubpassDescription& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassDescription2& lhs, const VkSubpassDescription2& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassDescriptionDepthStencilResolve& lhs, const VkSubpassDescriptionDepthStencilResolve& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassEndInfo& lhs, const VkSubpassEndInfo& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubpassSampleLocationsEXT& lhs, const VkSubpassSampleLocationsEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSubresourceLayout& lhs, const VkSubresourceLayout& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilities2EXT& lhs, const VkSurfaceCapabilities2EXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilities2KHR& lhs, const VkSurfaceCapabilities2KHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSurfaceCapabilitiesFullScreenExclusiveEXT& lhs, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSurfaceCapabilitiesKHR& lhs, const VkSurfaceCapabilitiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSurfaceFormat2KHR& lhs, const VkSurfaceFormat2KHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSurfaceFormatKHR& lhs, const VkSurfaceFormatKHR& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSurfaceFullScreenExclusiveInfoEXT& lhs, const VkSurfaceFullScreenExclusiveInfoEXT& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkSurfaceFullScreenExclusiveWin32InfoEXT& lhs, const VkSurfaceFullScreenExclusiveWin32InfoEXT& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSurfaceProtectedCapabilitiesKHR& lhs, const VkSurfaceProtectedCapabilitiesKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSwapchainCounterCreateInfoEXT& lhs, const VkSwapchainCounterCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSwapchainCreateInfoKHR& lhs, const VkSwapchainCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkSwapchainDisplayNativeHdrCreateInfoAMD& lhs, const VkSwapchainDisplayNativeHdrCreateInfoAMD& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

#ifdef VK_USE_PLATFORM_ANDROID_KHR
bool operator<=(const VkSwapchainImageCreateInfoANDROID& lhs, const VkSwapchainImageCreateInfoANDROID& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_ANDROID_KHR

bool operator<(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkTextureLODGatherFormatPropertiesAMD& lhs, const VkTextureLODGatherFormatPropertiesAMD& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkTimelineSemaphoreSubmitInfo& lhs, const VkTimelineSemaphoreSubmitInfo& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkTraceRaysIndirectCommandKHR& lhs, const VkTraceRaysIndirectCommandKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkTransformMatrixKHR& lhs, const VkTransformMatrixKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkValidationCacheCreateInfoEXT& lhs, const VkValidationCacheCreateInfoEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkValidationFeaturesEXT& lhs, const VkValidationFeaturesEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkValidationFlagsEXT& lhs, const VkValidationFlagsEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkVertexInputAttributeDescription& lhs, const VkVertexInputAttributeDescription& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkVertexInputBindingDescription& lhs, const VkVertexInputBindingDescription& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkVertexInputBindingDivisorDescriptionEXT& lhs, const VkVertexInputBindingDivisorDescriptionEXT& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_VI_NN
bool operator<(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_VI_NN

#ifdef VK_USE_PLATFORM_VI_NN
bool operator<=(const VkViSurfaceCreateInfoNN& lhs, const VkViSurfaceCreateInfoNN& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_VI_NN

bool operator<(const VkViewport& lhs, const VkViewport& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkViewport& lhs, const VkViewport& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkViewportSwizzleNV& lhs, const VkViewportSwizzleNV& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkViewportWScalingNV& lhs, const VkViewportWScalingNV& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool operator<(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
bool operator<=(const VkWaylandSurfaceCreateInfoKHR& lhs, const VkWaylandSurfaceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WAYLAND_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkWin32KeyedMutexAcquireReleaseInfoKHR& lhs, const VkWin32KeyedMutexAcquireReleaseInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkWin32KeyedMutexAcquireReleaseInfoNV& lhs, const VkWin32KeyedMutexAcquireReleaseInfoNV& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

#ifdef VK_USE_PLATFORM_WIN32_KHR
bool operator<=(const VkWin32SurfaceCreateInfoKHR& lhs, const VkWin32SurfaceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_WIN32_KHR

bool operator<(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkWriteDescriptorSet& lhs, const VkWriteDescriptorSet& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

#ifdef VK_ENABLE_BETA_EXTENSIONS
bool operator<=(const VkWriteDescriptorSetAccelerationStructureKHR& lhs, const VkWriteDescriptorSetAccelerationStructureKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_ENABLE_BETA_EXTENSIONS

bool operator<(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkWriteDescriptorSetInlineUniformBlockEXT& lhs, const VkWriteDescriptorSetInlineUniformBlockEXT& rhs)
{
    return !(rhs < lhs);
}

bool operator<(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}

bool operator<=(const VkXYColorEXT& lhs, const VkXYColorEXT& rhs)
{
    return !(rhs < lhs);
}

#ifdef VK_USE_PLATFORM_XCB_KHR
bool operator<(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XCB_KHR
bool operator<=(const VkXcbSurfaceCreateInfoKHR& lhs, const VkXcbSurfaceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_XCB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
bool operator<(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs)
{
    using namespace dst::gfx::vk::detail;
    return structure_to_tuple(lhs) < structure_to_tuple(rhs);
}
#endif // VK_USE_PLATFORM_XLIB_KHR

#ifdef VK_USE_PLATFORM_XLIB_KHR
bool operator<=(const VkXlibSurfaceCreateInfoKHR& lhs, const VkXlibSurfaceCreateInfoKHR& rhs)
{
    return !(rhs < lhs);
}
#endif // VK_USE_PLATFORM_XLIB_KHR

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

bool operator<(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs)
{
    if (lhs.pNext == rhs.pNext) {
        return false;
    }
    if (lhs.pNext && !rhs.pNext) {
        return false;
    }
    if (!lhs.pNext && rhs.pNext) {
        return true;
    }
    const auto& lhsBaseInStructure = *(const VkBaseInStructure*)lhs.pNext;
    const auto& rhsBaseInStructure = *(const VkBaseInStructure*)rhs.pNext;
    if (lhsBaseInStructure.sType < rhsBaseInStructure.sType) {
        return true;
    }
    if (lhsBaseInStructure.sType > rhsBaseInStructure.sType) {
        return false;
    }
    switch (lhsBaseInStructure.sType) {
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR: {
        return (const VkAccelerationStructureBuildGeometryInfoKHR&)lhsBaseInStructure < (const VkAccelerationStructureBuildGeometryInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_GEOMETRY_TYPE_INFO_KHR: {
        return (const VkAccelerationStructureCreateGeometryTypeInfoKHR&)lhsBaseInStructure < (const VkAccelerationStructureCreateGeometryTypeInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR: {
        return (const VkAccelerationStructureCreateInfoKHR&)lhsBaseInStructure < (const VkAccelerationStructureCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV: {
        return (const VkAccelerationStructureCreateInfoNV&)lhsBaseInStructure < (const VkAccelerationStructureCreateInfoNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR: {
        return (const VkAccelerationStructureDeviceAddressInfoKHR&)lhsBaseInStructure < (const VkAccelerationStructureDeviceAddressInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR: {
        return (const VkAccelerationStructureGeometryAabbsDataKHR&)lhsBaseInStructure < (const VkAccelerationStructureGeometryAabbsDataKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR: {
        return (const VkAccelerationStructureGeometryInstancesDataKHR&)lhsBaseInStructure < (const VkAccelerationStructureGeometryInstancesDataKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR: {
        return (const VkAccelerationStructureGeometryKHR&)lhsBaseInStructure < (const VkAccelerationStructureGeometryKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR: {
        return (const VkAccelerationStructureGeometryTrianglesDataKHR&)lhsBaseInStructure < (const VkAccelerationStructureGeometryTrianglesDataKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV: {
        return (const VkAccelerationStructureInfoNV&)lhsBaseInStructure < (const VkAccelerationStructureInfoNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_KHR: {
        return (const VkAccelerationStructureMemoryRequirementsInfoKHR&)lhsBaseInStructure < (const VkAccelerationStructureMemoryRequirementsInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV: {
        return (const VkAccelerationStructureMemoryRequirementsInfoNV&)lhsBaseInStructure < (const VkAccelerationStructureMemoryRequirementsInfoNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_KHR: {
        return (const VkAccelerationStructureVersionKHR&)lhsBaseInStructure < (const VkAccelerationStructureVersionKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR: {
        return (const VkAcquireNextImageInfoKHR&)lhsBaseInStructure < (const VkAcquireNextImageInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR: {
        return (const VkAcquireProfilingLockInfoKHR&)lhsBaseInStructure < (const VkAcquireProfilingLockInfoKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_KHR: {
        return (const VkBindAccelerationStructureMemoryInfoKHR&)lhsBaseInStructure < (const VkBindAccelerationStructureMemoryInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR: {
        return (const VkBindImageMemorySwapchainInfoKHR&)lhsBaseInStructure < (const VkBindImageMemorySwapchainInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT: {
        return (const VkBufferDeviceAddressCreateInfoEXT&)lhsBaseInStructure < (const VkBufferDeviceAddressCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT: {
        return (const VkCalibratedTimestampInfoEXT&)lhsBaseInStructure < (const VkCalibratedTimestampInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV: {
        return (const VkCheckpointDataNV&)lhsBaseInStructure < (const VkCheckpointDataNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT: {
        return (const VkCommandBufferInheritanceConditionalRenderingInfoEXT&)lhsBaseInStructure < (const VkCommandBufferInheritanceConditionalRenderingInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM: {
        return (const VkCommandBufferInheritanceRenderPassTransformInfoQCOM&)lhsBaseInStructure < (const VkCommandBufferInheritanceRenderPassTransformInfoQCOM&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT: {
        return (const VkConditionalRenderingBeginInfoEXT&)lhsBaseInStructure < (const VkConditionalRenderingBeginInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
        return (const VkCooperativeMatrixPropertiesNV&)lhsBaseInStructure < (const VkCooperativeMatrixPropertiesNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR: {
        return (const VkCopyAccelerationStructureInfoKHR&)lhsBaseInStructure < (const VkCopyAccelerationStructureInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR: {
        return (const VkCopyAccelerationStructureToMemoryInfoKHR&)lhsBaseInStructure < (const VkCopyAccelerationStructureToMemoryInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR: {
        return (const VkCopyMemoryToAccelerationStructureInfoKHR&)lhsBaseInStructure < (const VkCopyMemoryToAccelerationStructureInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT: {
        return (const VkDebugMarkerMarkerInfoEXT&)lhsBaseInStructure < (const VkDebugMarkerMarkerInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT: {
        return (const VkDebugMarkerObjectNameInfoEXT&)lhsBaseInStructure < (const VkDebugMarkerObjectNameInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT: {
        return (const VkDebugMarkerObjectTagInfoEXT&)lhsBaseInStructure < (const VkDebugMarkerObjectTagInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT: {
        return (const VkDebugReportCallbackCreateInfoEXT&)lhsBaseInStructure < (const VkDebugReportCallbackCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT: {
        return (const VkDebugUtilsLabelEXT&)lhsBaseInStructure < (const VkDebugUtilsLabelEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT: {
        return (const VkDebugUtilsMessengerCallbackDataEXT&)lhsBaseInStructure < (const VkDebugUtilsMessengerCallbackDataEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT: {
        return (const VkDebugUtilsMessengerCreateInfoEXT&)lhsBaseInStructure < (const VkDebugUtilsMessengerCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT: {
        return (const VkDebugUtilsObjectNameInfoEXT&)lhsBaseInStructure < (const VkDebugUtilsObjectNameInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT: {
        return (const VkDebugUtilsObjectTagInfoEXT&)lhsBaseInStructure < (const VkDebugUtilsObjectTagInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV: {
        return (const VkDedicatedAllocationBufferCreateInfoNV&)lhsBaseInStructure < (const VkDedicatedAllocationBufferCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV: {
        return (const VkDedicatedAllocationImageCreateInfoNV&)lhsBaseInStructure < (const VkDedicatedAllocationImageCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV: {
        return (const VkDedicatedAllocationMemoryAllocateInfoNV&)lhsBaseInStructure < (const VkDedicatedAllocationMemoryAllocateInfoNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_DEFERRED_OPERATION_INFO_KHR: {
        return (const VkDeferredOperationInfoKHR&)lhsBaseInStructure < (const VkDeferredOperationInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO_EXT: {
        return (const VkDescriptorPoolInlineUniformBlockCreateInfoEXT&)lhsBaseInStructure < (const VkDescriptorPoolInlineUniformBlockCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV: {
        return (const VkDeviceDiagnosticsConfigCreateInfoNV&)lhsBaseInStructure < (const VkDeviceDiagnosticsConfigCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT: {
        return (const VkDeviceEventInfoEXT&)lhsBaseInStructure < (const VkDeviceEventInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR: {
        return (const VkDeviceGroupPresentCapabilitiesKHR&)lhsBaseInStructure < (const VkDeviceGroupPresentCapabilitiesKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR: {
        return (const VkDeviceGroupPresentInfoKHR&)lhsBaseInStructure < (const VkDeviceGroupPresentInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR: {
        return (const VkDeviceGroupSwapchainCreateInfoKHR&)lhsBaseInStructure < (const VkDeviceGroupSwapchainCreateInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD: {
        return (const VkDeviceMemoryOverallocationCreateInfoAMD&)lhsBaseInStructure < (const VkDeviceMemoryOverallocationCreateInfoAMD&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT: {
        return (const VkDeviceQueueGlobalPriorityCreateInfoEXT&)lhsBaseInStructure < (const VkDeviceQueueGlobalPriorityCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT: {
        return (const VkDisplayEventInfoEXT&)lhsBaseInStructure < (const VkDisplayEventInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR: {
        return (const VkDisplayModeCreateInfoKHR&)lhsBaseInStructure < (const VkDisplayModeCreateInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR: {
        return (const VkDisplayModeProperties2KHR&)lhsBaseInStructure < (const VkDisplayModeProperties2KHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD: {
        return (const VkDisplayNativeHdrSurfaceCapabilitiesAMD&)lhsBaseInStructure < (const VkDisplayNativeHdrSurfaceCapabilitiesAMD&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR: {
        return (const VkDisplayPlaneCapabilities2KHR&)lhsBaseInStructure < (const VkDisplayPlaneCapabilities2KHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR: {
        return (const VkDisplayPlaneInfo2KHR&)lhsBaseInStructure < (const VkDisplayPlaneInfo2KHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR: {
        return (const VkDisplayPlaneProperties2KHR&)lhsBaseInStructure < (const VkDisplayPlaneProperties2KHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT: {
        return (const VkDisplayPowerInfoEXT&)lhsBaseInStructure < (const VkDisplayPowerInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR: {
        return (const VkDisplayPresentInfoKHR&)lhsBaseInStructure < (const VkDisplayPresentInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR: {
        return (const VkDisplayProperties2KHR&)lhsBaseInStructure < (const VkDisplayProperties2KHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR: {
        return (const VkDisplaySurfaceCreateInfoKHR&)lhsBaseInStructure < (const VkDisplaySurfaceCreateInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
        return (const VkDrmFormatModifierPropertiesEXT&)lhsBaseInStructure < (const VkDrmFormatModifierPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT: {
        return (const VkDrmFormatModifierPropertiesListEXT&)lhsBaseInStructure < (const VkDrmFormatModifierPropertiesListEXT&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
        return (const VkExportFenceWin32HandleInfoKHR&)lhsBaseInStructure < (const VkExportFenceWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV: {
        return (const VkExportMemoryAllocateInfoNV&)lhsBaseInStructure < (const VkExportMemoryAllocateInfoNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
        return (const VkExportMemoryWin32HandleInfoKHR&)lhsBaseInStructure < (const VkExportMemoryWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
        return (const VkExportMemoryWin32HandleInfoNV&)lhsBaseInStructure < (const VkExportMemoryWin32HandleInfoNV&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
        return (const VkExportSemaphoreWin32HandleInfoKHR&)lhsBaseInStructure < (const VkExportSemaphoreWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID: {
        return (const VkExternalFormatANDROID&)lhsBaseInStructure < (const VkExternalFormatANDROID&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV: {
        return (const VkExternalMemoryImageCreateInfoNV&)lhsBaseInStructure < (const VkExternalMemoryImageCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR: {
        return (const VkFenceGetFdInfoKHR&)lhsBaseInStructure < (const VkFenceGetFdInfoKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR: {
        return (const VkFenceGetWin32HandleInfoKHR&)lhsBaseInStructure < (const VkFenceGetWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT: {
        return (const VkFilterCubicImageViewImageFormatPropertiesEXT&)lhsBaseInStructure < (const VkFilterCubicImageViewImageFormatPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV: {
        return (const VkFramebufferMixedSamplesCombinationNV&)lhsBaseInStructure < (const VkFramebufferMixedSamplesCombinationNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV: {
        return (const VkGeneratedCommandsInfoNV&)lhsBaseInStructure < (const VkGeneratedCommandsInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV: {
        return (const VkGeneratedCommandsMemoryRequirementsInfoNV&)lhsBaseInStructure < (const VkGeneratedCommandsMemoryRequirementsInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_GEOMETRY_NV: {
        return (const VkGeometryNV&)lhsBaseInStructure < (const VkGeometryNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV: {
        return (const VkGeometryTrianglesNV&)lhsBaseInStructure < (const VkGeometryTrianglesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV: {
        return (const VkGraphicsPipelineShaderGroupsCreateInfoNV&)lhsBaseInStructure < (const VkGraphicsPipelineShaderGroupsCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV: {
        return (const VkGraphicsShaderGroupCreateInfoNV&)lhsBaseInStructure < (const VkGraphicsShaderGroupCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_HDR_METADATA_EXT: {
        return (const VkHdrMetadataEXT&)lhsBaseInStructure < (const VkHdrMetadataEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT: {
        return (const VkHeadlessSurfaceCreateInfoEXT&)lhsBaseInStructure < (const VkHeadlessSurfaceCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT: {
        return (const VkImageDrmFormatModifierExplicitCreateInfoEXT&)lhsBaseInStructure < (const VkImageDrmFormatModifierExplicitCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT: {
        return (const VkImageDrmFormatModifierListCreateInfoEXT&)lhsBaseInStructure < (const VkImageDrmFormatModifierListCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT: {
        return (const VkImageDrmFormatModifierPropertiesEXT&)lhsBaseInStructure < (const VkImageDrmFormatModifierPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR: {
        return (const VkImageSwapchainCreateInfoKHR&)lhsBaseInStructure < (const VkImageSwapchainCreateInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX: {
        return (const VkImageViewHandleInfoNVX&)lhsBaseInStructure < (const VkImageViewHandleInfoNVX&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR: {
        return (const VkImportFenceFdInfoKHR&)lhsBaseInStructure < (const VkImportFenceFdInfoKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR: {
        return (const VkImportFenceWin32HandleInfoKHR&)lhsBaseInStructure < (const VkImportFenceWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR: {
        return (const VkImportMemoryFdInfoKHR&)lhsBaseInStructure < (const VkImportMemoryFdInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT: {
        return (const VkImportMemoryHostPointerInfoEXT&)lhsBaseInStructure < (const VkImportMemoryHostPointerInfoEXT&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR: {
        return (const VkImportMemoryWin32HandleInfoKHR&)lhsBaseInStructure < (const VkImportMemoryWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV: {
        return (const VkImportMemoryWin32HandleInfoNV&)lhsBaseInStructure < (const VkImportMemoryWin32HandleInfoNV&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR: {
        return (const VkImportSemaphoreFdInfoKHR&)lhsBaseInStructure < (const VkImportSemaphoreFdInfoKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR: {
        return (const VkImportSemaphoreWin32HandleInfoKHR&)lhsBaseInStructure < (const VkImportSemaphoreWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV: {
        return (const VkIndirectCommandsLayoutCreateInfoNV&)lhsBaseInStructure < (const VkIndirectCommandsLayoutCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV: {
        return (const VkIndirectCommandsLayoutTokenNV&)lhsBaseInStructure < (const VkIndirectCommandsLayoutTokenNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL: {
        return (const VkInitializePerformanceApiInfoINTEL&)lhsBaseInStructure < (const VkInitializePerformanceApiInfoINTEL&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR: {
        return (const VkMemoryFdPropertiesKHR&)lhsBaseInStructure < (const VkMemoryFdPropertiesKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR: {
        return (const VkMemoryGetFdInfoKHR&)lhsBaseInStructure < (const VkMemoryGetFdInfoKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR: {
        return (const VkMemoryGetWin32HandleInfoKHR&)lhsBaseInStructure < (const VkMemoryGetWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT: {
        return (const VkMemoryHostPointerPropertiesEXT&)lhsBaseInStructure < (const VkMemoryHostPointerPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT: {
        return (const VkMemoryPriorityAllocateInfoEXT&)lhsBaseInStructure < (const VkMemoryPriorityAllocateInfoEXT&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR: {
        return (const VkMemoryWin32HandlePropertiesKHR&)lhsBaseInStructure < (const VkMemoryWin32HandlePropertiesKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_METAL_EXT
    case VK_STRUCTURE_TYPE_METAL_SURFACE_CREATE_INFO_EXT: {
        return (const VkMetalSurfaceCreateInfoEXT&)lhsBaseInStructure < (const VkMetalSurfaceCreateInfoEXT&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_METAL_EXT
    case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT: {
        return (const VkMultisamplePropertiesEXT&)lhsBaseInStructure < (const VkMultisamplePropertiesEXT&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_NATIVE_BUFFER_ANDROID: {
        return (const VkNativeBufferANDROID&)lhsBaseInStructure < (const VkNativeBufferANDROID&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL: {
        return (const VkPerformanceConfigurationAcquireInfoINTEL&)lhsBaseInStructure < (const VkPerformanceConfigurationAcquireInfoINTEL&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR: {
        return (const VkPerformanceCounterDescriptionKHR&)lhsBaseInStructure < (const VkPerformanceCounterDescriptionKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR: {
        return (const VkPerformanceCounterKHR&)lhsBaseInStructure < (const VkPerformanceCounterKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL: {
        return (const VkPerformanceMarkerInfoINTEL&)lhsBaseInStructure < (const VkPerformanceMarkerInfoINTEL&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL: {
        return (const VkPerformanceOverrideInfoINTEL&)lhsBaseInStructure < (const VkPerformanceOverrideInfoINTEL&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR: {
        return (const VkPerformanceQuerySubmitInfoKHR&)lhsBaseInStructure < (const VkPerformanceQuerySubmitInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL: {
        return (const VkPerformanceStreamMarkerInfoINTEL&)lhsBaseInStructure < (const VkPerformanceStreamMarkerInfoINTEL&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT: {
        return (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT: {
        return (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD: {
        return (const VkPhysicalDeviceCoherentMemoryFeaturesAMD&)lhsBaseInStructure < (const VkPhysicalDeviceCoherentMemoryFeaturesAMD&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV: {
        return (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT: {
        return (const VkPhysicalDeviceConditionalRenderingFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceConditionalRenderingFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV: {
        return (const VkPhysicalDeviceCooperativeMatrixFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceCooperativeMatrixFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV: {
        return (const VkPhysicalDeviceCooperativeMatrixPropertiesNV&)lhsBaseInStructure < (const VkPhysicalDeviceCooperativeMatrixPropertiesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV: {
        return (const VkPhysicalDeviceCornerSampledImageFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceCornerSampledImageFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV: {
        return (const VkPhysicalDeviceCoverageReductionModeFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceCoverageReductionModeFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV: {
        return (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT: {
        return (const VkPhysicalDeviceDepthClipEnableFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceDepthClipEnableFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV: {
        return (const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV: {
        return (const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&)lhsBaseInStructure < (const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV: {
        return (const VkPhysicalDeviceDiagnosticsConfigFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceDiagnosticsConfigFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceDiscardRectanglePropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceDiscardRectanglePropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV: {
        return (const VkPhysicalDeviceExclusiveScissorFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceExclusiveScissorFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT: {
        return (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceFragmentDensityMapFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceFragmentDensityMapPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceFragmentDensityMapPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_NV: {
        return (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT: {
        return (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT: {
        return (const VkPhysicalDeviceImageDrmFormatModifierInfoEXT&)lhsBaseInStructure < (const VkPhysicalDeviceImageDrmFormatModifierInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT: {
        return (const VkPhysicalDeviceImageViewImageFormatInfoEXT&)lhsBaseInStructure < (const VkPhysicalDeviceImageViewImageFormatInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT: {
        return (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceIndexTypeUint8FeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT: {
        return (const VkPhysicalDeviceInlineUniformBlockFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceInlineUniformBlockFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceInlineUniformBlockPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceInlineUniformBlockPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT: {
        return (const VkPhysicalDeviceLineRasterizationFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceLineRasterizationFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceLineRasterizationPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceLineRasterizationPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceMemoryBudgetPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceMemoryBudgetPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT: {
        return (const VkPhysicalDeviceMemoryPriorityFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceMemoryPriorityFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV: {
        return (const VkPhysicalDeviceMeshShaderFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceMeshShaderFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV: {
        return (const VkPhysicalDeviceMeshShaderPropertiesNV&)lhsBaseInStructure < (const VkPhysicalDeviceMeshShaderPropertiesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX: {
        return (const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&)lhsBaseInStructure < (const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR: {
        return (const VkPhysicalDevicePerformanceQueryFeaturesKHR&)lhsBaseInStructure < (const VkPhysicalDevicePerformanceQueryFeaturesKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR: {
        return (const VkPhysicalDevicePerformanceQueryPropertiesKHR&)lhsBaseInStructure < (const VkPhysicalDevicePerformanceQueryPropertiesKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT: {
        return (const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR: {
        return (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&)lhsBaseInStructure < (const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENTATION_PROPERTIES_ANDROID: {
        return (const VkPhysicalDevicePresentationPropertiesANDROID&)lhsBaseInStructure < (const VkPhysicalDevicePresentationPropertiesANDROID&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR: {
        return (const VkPhysicalDevicePushDescriptorPropertiesKHR&)lhsBaseInStructure < (const VkPhysicalDevicePushDescriptorPropertiesKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_FEATURES_KHR: {
        return (const VkPhysicalDeviceRayTracingFeaturesKHR&)lhsBaseInStructure < (const VkPhysicalDeviceRayTracingFeaturesKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_KHR: {
        return (const VkPhysicalDeviceRayTracingPropertiesKHR&)lhsBaseInStructure < (const VkPhysicalDeviceRayTracingPropertiesKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV: {
        return (const VkPhysicalDeviceRayTracingPropertiesNV&)lhsBaseInStructure < (const VkPhysicalDeviceRayTracingPropertiesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV: {
        return (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceSampleLocationsPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceSampleLocationsPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR: {
        return (const VkPhysicalDeviceShaderClockFeaturesKHR&)lhsBaseInStructure < (const VkPhysicalDeviceShaderClockFeaturesKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD: {
        return (const VkPhysicalDeviceShaderCoreProperties2AMD&)lhsBaseInStructure < (const VkPhysicalDeviceShaderCoreProperties2AMD&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD: {
        return (const VkPhysicalDeviceShaderCorePropertiesAMD&)lhsBaseInStructure < (const VkPhysicalDeviceShaderCorePropertiesAMD&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES_EXT: {
        return (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV: {
        return (const VkPhysicalDeviceShaderImageFootprintFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceShaderImageFootprintFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL: {
        return (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&)lhsBaseInStructure < (const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV: {
        return (const VkPhysicalDeviceShadingRateImageFeaturesNV&)lhsBaseInStructure < (const VkPhysicalDeviceShadingRateImageFeaturesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV: {
        return (const VkPhysicalDeviceShadingRateImagePropertiesNV&)lhsBaseInStructure < (const VkPhysicalDeviceShadingRateImagePropertiesNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES_EXT: {
        return (const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR: {
        return (const VkPhysicalDeviceSurfaceInfo2KHR&)lhsBaseInStructure < (const VkPhysicalDeviceSurfaceInfo2KHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT: {
        return (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceToolPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceToolPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT: {
        return (const VkPhysicalDeviceTransformFeedbackFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceTransformFeedbackFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceTransformFeedbackPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceTransformFeedbackPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT: {
        return (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT: {
        return (const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT: {
        return (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&)lhsBaseInStructure < (const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT: {
        return (const VkPipelineColorBlendAdvancedStateCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineColorBlendAdvancedStateCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD: {
        return (const VkPipelineCompilerControlCreateInfoAMD&)lhsBaseInStructure < (const VkPipelineCompilerControlCreateInfoAMD&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV: {
        return (const VkPipelineCoverageModulationStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineCoverageModulationStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV: {
        return (const VkPipelineCoverageReductionStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineCoverageReductionStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV: {
        return (const VkPipelineCoverageToColorStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineCoverageToColorStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO_EXT: {
        return (const VkPipelineCreationFeedbackCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineCreationFeedbackCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT: {
        return (const VkPipelineDiscardRectangleStateCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineDiscardRectangleStateCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR: {
        return (const VkPipelineExecutableInfoKHR&)lhsBaseInStructure < (const VkPipelineExecutableInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR: {
        return (const VkPipelineExecutableInternalRepresentationKHR&)lhsBaseInStructure < (const VkPipelineExecutableInternalRepresentationKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR: {
        return (const VkPipelineExecutablePropertiesKHR&)lhsBaseInStructure < (const VkPipelineExecutablePropertiesKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR: {
        return (const VkPipelineExecutableStatisticKHR&)lhsBaseInStructure < (const VkPipelineExecutableStatisticKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR: {
        return (const VkPipelineInfoKHR&)lhsBaseInStructure < (const VkPipelineInfoKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR: {
        return (const VkPipelineLibraryCreateInfoKHR&)lhsBaseInStructure < (const VkPipelineLibraryCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT: {
        return (const VkPipelineRasterizationConservativeStateCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineRasterizationConservativeStateCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT: {
        return (const VkPipelineRasterizationDepthClipStateCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineRasterizationDepthClipStateCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT: {
        return (const VkPipelineRasterizationLineStateCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineRasterizationLineStateCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD: {
        return (const VkPipelineRasterizationStateRasterizationOrderAMD&)lhsBaseInStructure < (const VkPipelineRasterizationStateRasterizationOrderAMD&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT: {
        return (const VkPipelineRasterizationStateStreamCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineRasterizationStateStreamCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV: {
        return (const VkPipelineRepresentativeFragmentTestStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineRepresentativeFragmentTestStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT: {
        return (const VkPipelineSampleLocationsStateCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineSampleLocationsStateCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO_EXT: {
        return (const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT: {
        return (const VkPipelineVertexInputDivisorStateCreateInfoEXT&)lhsBaseInStructure < (const VkPipelineVertexInputDivisorStateCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV: {
        return (const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV: {
        return (const VkPipelineViewportExclusiveScissorStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineViewportExclusiveScissorStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV: {
        return (const VkPipelineViewportShadingRateImageStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineViewportShadingRateImageStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV: {
        return (const VkPipelineViewportSwizzleStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineViewportSwizzleStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV: {
        return (const VkPipelineViewportWScalingStateCreateInfoNV&)lhsBaseInStructure < (const VkPipelineViewportWScalingStateCreateInfoNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_GGP
    case VK_STRUCTURE_TYPE_PRESENT_FRAME_TOKEN_GGP: {
        return (const VkPresentFrameTokenGGP&)lhsBaseInStructure < (const VkPresentFrameTokenGGP&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_GGP
    case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR: {
        return (const VkPresentInfoKHR&)lhsBaseInStructure < (const VkPresentInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR: {
        return (const VkPresentRegionsKHR&)lhsBaseInStructure < (const VkPresentRegionsKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE: {
        return (const VkPresentTimesInfoGOOGLE&)lhsBaseInStructure < (const VkPresentTimesInfoGOOGLE&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO_INTEL: {
        return (const VkQueryPoolCreateInfoINTEL&)lhsBaseInStructure < (const VkQueryPoolCreateInfoINTEL&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR: {
        return (const VkQueryPoolPerformanceCreateInfoKHR&)lhsBaseInStructure < (const VkQueryPoolPerformanceCreateInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV: {
        return (const VkQueueFamilyCheckpointPropertiesNV&)lhsBaseInStructure < (const VkQueueFamilyCheckpointPropertiesNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR: {
        return (const VkRayTracingPipelineCreateInfoKHR&)lhsBaseInStructure < (const VkRayTracingPipelineCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV: {
        return (const VkRayTracingPipelineCreateInfoNV&)lhsBaseInStructure < (const VkRayTracingPipelineCreateInfoNV&)rhsBaseInStructure;
    } break;
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR: {
        return (const VkRayTracingPipelineInterfaceCreateInfoKHR&)lhsBaseInStructure < (const VkRayTracingPipelineInterfaceCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR: {
        return (const VkRayTracingShaderGroupCreateInfoKHR&)lhsBaseInStructure < (const VkRayTracingShaderGroupCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV: {
        return (const VkRayTracingShaderGroupCreateInfoNV&)lhsBaseInStructure < (const VkRayTracingShaderGroupCreateInfoNV&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT: {
        return (const VkRenderPassFragmentDensityMapCreateInfoEXT&)lhsBaseInStructure < (const VkRenderPassFragmentDensityMapCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT: {
        return (const VkRenderPassSampleLocationsBeginInfoEXT&)lhsBaseInStructure < (const VkRenderPassSampleLocationsBeginInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM: {
        return (const VkRenderPassTransformBeginInfoQCOM&)lhsBaseInStructure < (const VkRenderPassTransformBeginInfoQCOM&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT: {
        return (const VkSampleLocationsInfoEXT&)lhsBaseInStructure < (const VkSampleLocationsInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR: {
        return (const VkSemaphoreGetFdInfoKHR&)lhsBaseInStructure < (const VkSemaphoreGetFdInfoKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR: {
        return (const VkSemaphoreGetWin32HandleInfoKHR&)lhsBaseInStructure < (const VkSemaphoreGetWin32HandleInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT: {
        return (const VkShaderModuleValidationCacheCreateInfoEXT&)lhsBaseInStructure < (const VkShaderModuleValidationCacheCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR: {
        return (const VkSharedPresentSurfaceCapabilitiesKHR&)lhsBaseInStructure < (const VkSharedPresentSurfaceCapabilitiesKHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_GGP
    case VK_STRUCTURE_TYPE_STREAM_DESCRIPTOR_SURFACE_CREATE_INFO_GGP: {
        return (const VkStreamDescriptorSurfaceCreateInfoGGP&)lhsBaseInStructure < (const VkStreamDescriptorSurfaceCreateInfoGGP&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_GGP
    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT: {
        return (const VkSurfaceCapabilities2EXT&)lhsBaseInStructure < (const VkSurfaceCapabilities2EXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR: {
        return (const VkSurfaceCapabilities2KHR&)lhsBaseInStructure < (const VkSurfaceCapabilities2KHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_FULL_SCREEN_EXCLUSIVE_EXT: {
        return (const VkSurfaceCapabilitiesFullScreenExclusiveEXT&)lhsBaseInStructure < (const VkSurfaceCapabilitiesFullScreenExclusiveEXT&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR: {
        return (const VkSurfaceFormat2KHR&)lhsBaseInStructure < (const VkSurfaceFormat2KHR&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_INFO_EXT: {
        return (const VkSurfaceFullScreenExclusiveInfoEXT&)lhsBaseInStructure < (const VkSurfaceFullScreenExclusiveInfoEXT&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_SURFACE_FULL_SCREEN_EXCLUSIVE_WIN32_INFO_EXT: {
        return (const VkSurfaceFullScreenExclusiveWin32InfoEXT&)lhsBaseInStructure < (const VkSurfaceFullScreenExclusiveWin32InfoEXT&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR: {
        return (const VkSurfaceProtectedCapabilitiesKHR&)lhsBaseInStructure < (const VkSurfaceProtectedCapabilitiesKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT: {
        return (const VkSwapchainCounterCreateInfoEXT&)lhsBaseInStructure < (const VkSwapchainCounterCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR: {
        return (const VkSwapchainCreateInfoKHR&)lhsBaseInStructure < (const VkSwapchainCreateInfoKHR&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD: {
        return (const VkSwapchainDisplayNativeHdrCreateInfoAMD&)lhsBaseInStructure < (const VkSwapchainDisplayNativeHdrCreateInfoAMD&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_SWAPCHAIN_IMAGE_CREATE_INFO_ANDROID: {
        return (const VkSwapchainImageCreateInfoANDROID&)lhsBaseInStructure < (const VkSwapchainImageCreateInfoANDROID&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_ANDROID_KHR
    case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT: {
        return (const VkValidationCacheCreateInfoEXT&)lhsBaseInStructure < (const VkValidationCacheCreateInfoEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT: {
        return (const VkValidationFeaturesEXT&)lhsBaseInStructure < (const VkValidationFeaturesEXT&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT: {
        return (const VkValidationFlagsEXT&)lhsBaseInStructure < (const VkValidationFlagsEXT&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_VI_NN
    case VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN: {
        return (const VkViSurfaceCreateInfoNN&)lhsBaseInStructure < (const VkViSurfaceCreateInfoNN&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_VI_NN
    #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    case VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR: {
        return (const VkWaylandSurfaceCreateInfoKHR&)lhsBaseInStructure < (const VkWaylandSurfaceCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WAYLAND_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR: {
        return (const VkWin32KeyedMutexAcquireReleaseInfoKHR&)lhsBaseInStructure < (const VkWin32KeyedMutexAcquireReleaseInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV: {
        return (const VkWin32KeyedMutexAcquireReleaseInfoNV&)lhsBaseInStructure < (const VkWin32KeyedMutexAcquireReleaseInfoNV&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    case VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR: {
        return (const VkWin32SurfaceCreateInfoKHR&)lhsBaseInStructure < (const VkWin32SurfaceCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_WIN32_KHR
    #ifdef VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR: {
        return (const VkWriteDescriptorSetAccelerationStructureKHR&)lhsBaseInStructure < (const VkWriteDescriptorSetAccelerationStructureKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_ENABLE_BETA_EXTENSIONS
    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK_EXT: {
        return (const VkWriteDescriptorSetInlineUniformBlockEXT&)lhsBaseInStructure < (const VkWriteDescriptorSetInlineUniformBlockEXT&)rhsBaseInStructure;
    } break;
    #ifdef VK_USE_PLATFORM_XCB_KHR
    case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR: {
        return (const VkXcbSurfaceCreateInfoKHR&)lhsBaseInStructure < (const VkXcbSurfaceCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_XCB_KHR
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR: {
        return (const VkXlibSurfaceCreateInfoKHR&)lhsBaseInStructure < (const VkXlibSurfaceCreateInfoKHR&)rhsBaseInStructure;
    } break;
    #endif // VK_USE_PLATFORM_XLIB_KHR
    case VK_STRUCTURE_TYPE_APPLICATION_INFO: {
        return (const VkApplicationInfo&)lhsBaseInStructure < (const VkApplicationInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO: {
        return (const VkInstanceCreateInfo&)lhsBaseInStructure < (const VkInstanceCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO: {
        return (const VkEventCreateInfo&)lhsBaseInStructure < (const VkEventCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO: {
        return (const VkQueryPoolCreateInfo&)lhsBaseInStructure < (const VkQueryPoolCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO: {
        return (const VkBufferCreateInfo&)lhsBaseInStructure < (const VkBufferCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO: {
        return (const VkBufferViewCreateInfo&)lhsBaseInStructure < (const VkBufferViewCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO: {
        return (const VkImageCreateInfo&)lhsBaseInStructure < (const VkImageCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO: {
        return (const VkImageViewCreateInfo&)lhsBaseInStructure < (const VkImageViewCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO: {
        return (const VkShaderModuleCreateInfo&)lhsBaseInStructure < (const VkShaderModuleCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO: {
        return (const VkPipelineCacheCreateInfo&)lhsBaseInStructure < (const VkPipelineCacheCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO: {
        return (const VkPipelineShaderStageCreateInfo&)lhsBaseInStructure < (const VkPipelineShaderStageCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO: {
        return (const VkPipelineVertexInputStateCreateInfo&)lhsBaseInStructure < (const VkPipelineVertexInputStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO: {
        return (const VkDeviceQueueCreateInfo&)lhsBaseInStructure < (const VkDeviceQueueCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO: {
        return (const VkPipelineInputAssemblyStateCreateInfo&)lhsBaseInStructure < (const VkPipelineInputAssemblyStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO: {
        return (const VkPipelineTessellationStateCreateInfo&)lhsBaseInStructure < (const VkPipelineTessellationStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO: {
        return (const VkPipelineViewportStateCreateInfo&)lhsBaseInStructure < (const VkPipelineViewportStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO: {
        return (const VkPipelineRasterizationStateCreateInfo&)lhsBaseInStructure < (const VkPipelineRasterizationStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO: {
        return (const VkPipelineMultisampleStateCreateInfo&)lhsBaseInStructure < (const VkPipelineMultisampleStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO: {
        return (const VkPipelineDepthStencilStateCreateInfo&)lhsBaseInStructure < (const VkPipelineDepthStencilStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO: {
        return (const VkPipelineColorBlendStateCreateInfo&)lhsBaseInStructure < (const VkPipelineColorBlendStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO: {
        return (const VkPipelineDynamicStateCreateInfo&)lhsBaseInStructure < (const VkPipelineDynamicStateCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO: {
        return (const VkGraphicsPipelineCreateInfo&)lhsBaseInStructure < (const VkGraphicsPipelineCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO: {
        return (const VkComputePipelineCreateInfo&)lhsBaseInStructure < (const VkComputePipelineCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO: {
        return (const VkDeviceCreateInfo&)lhsBaseInStructure < (const VkDeviceCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO: {
        return (const VkPipelineLayoutCreateInfo&)lhsBaseInStructure < (const VkPipelineLayoutCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO: {
        return (const VkSamplerCreateInfo&)lhsBaseInStructure < (const VkSamplerCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO: {
        return (const VkDescriptorSetLayoutCreateInfo&)lhsBaseInStructure < (const VkDescriptorSetLayoutCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO: {
        return (const VkDescriptorPoolCreateInfo&)lhsBaseInStructure < (const VkDescriptorPoolCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO: {
        return (const VkDescriptorSetAllocateInfo&)lhsBaseInStructure < (const VkDescriptorSetAllocateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET: {
        return (const VkWriteDescriptorSet&)lhsBaseInStructure < (const VkWriteDescriptorSet&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET: {
        return (const VkCopyDescriptorSet&)lhsBaseInStructure < (const VkCopyDescriptorSet&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO: {
        return (const VkFramebufferCreateInfo&)lhsBaseInStructure < (const VkFramebufferCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO: {
        return (const VkRenderPassCreateInfo&)lhsBaseInStructure < (const VkRenderPassCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO: {
        return (const VkCommandPoolCreateInfo&)lhsBaseInStructure < (const VkCommandPoolCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SUBMIT_INFO: {
        return (const VkSubmitInfo&)lhsBaseInStructure < (const VkSubmitInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO: {
        return (const VkCommandBufferAllocateInfo&)lhsBaseInStructure < (const VkCommandBufferAllocateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO: {
        return (const VkCommandBufferInheritanceInfo&)lhsBaseInStructure < (const VkCommandBufferInheritanceInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO: {
        return (const VkCommandBufferBeginInfo&)lhsBaseInStructure < (const VkCommandBufferBeginInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO: {
        return (const VkRenderPassBeginInfo&)lhsBaseInStructure < (const VkRenderPassBeginInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER: {
        return (const VkBufferMemoryBarrier&)lhsBaseInStructure < (const VkBufferMemoryBarrier&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER: {
        return (const VkImageMemoryBarrier&)lhsBaseInStructure < (const VkImageMemoryBarrier&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_MEMORY_BARRIER: {
        return (const VkMemoryBarrier&)lhsBaseInStructure < (const VkMemoryBarrier&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO: {
        return (const VkMemoryAllocateInfo&)lhsBaseInStructure < (const VkMemoryAllocateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE: {
        return (const VkMappedMemoryRange&)lhsBaseInStructure < (const VkMappedMemoryRange&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO: {
        return (const VkBindSparseInfo&)lhsBaseInStructure < (const VkBindSparseInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO: {
        return (const VkFenceCreateInfo&)lhsBaseInStructure < (const VkFenceCreateInfo&)rhsBaseInStructure;
    } break;
    case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO: {
        return (const VkSemaphoreCreateInfo&)lhsBaseInStructure < (const VkSemaphoreCreateInfo&)rhsBaseInStructure;
    } break;
    default: {
    } break;
    }
    return false;
}

bool operator<=(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs)
{
    return !(rhs < lhs);
}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
