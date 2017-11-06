
# CMake configuration for VulkanSDK

set(VulkanSDK.INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/external/VulkanSDK/Include/")
if (MSVC)
    set(VulkanSDK.LIBRARY "$ENV{VULKAN_SDK}/Lib/vulkan-1.lib")
else()
    set(VulkanSDK.LIBRARY "/usr/lib/aarch64-linux-gnu/libvulkan.so.1")
endif()
