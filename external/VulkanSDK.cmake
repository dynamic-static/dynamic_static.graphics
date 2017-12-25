
set(VulkanSDK.includeDirectories "${PROJECT_SOURCE_DIR}/external/VulkanSDK/Include/")
if(MSVC)
    file(TO_CMAKE_PATH "$ENV{VULKAN_SDK}/Lib/vulkan-1.lib" VulkanSDK.linkLibraries)
else()
    set(VulkanSDK.linkLibraries "/usr/lib/aarch64-linux-gnu/libvulkan.so.1")
endif()
