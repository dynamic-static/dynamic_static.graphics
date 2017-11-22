
set(VulkanSDK.includeDirectories "${PROJECT_SOURCE_DIR}/external/VulkanSDK/Include/")
if (MSVC)
    set(VulkanSDK.linkLibraries "$ENV{VULKAN_SDK}/Lib/vulkan-1.lib")
else()
    set(VulkanSDK.linkLibraries "/usr/lib/aarch64-linux-gnu/libvulkan.so.1")
endif()
