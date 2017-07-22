
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_PATH ${DST_GFX_INCLUDE}/Dynamic_Static/)
set(INCLUDE_FILES
    ${INCLUDE_PATH}/Graphics/OpenGL/GLEWInclude.hpp

    ${INCLUDE_PATH}/Graphics/Vulkan/DebugReport.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Defines.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Device.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Framebuffer.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Image.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Image.View.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Instance.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Object.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/PhysicalDevice.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Queue.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Semaphore.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/ShaderModule.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/ShaderModule.Compiler.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/SurfaceKHR.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/SwapchainKHR.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/VulkanHppInclude.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/VulkanInclude.hpp

    ${INCLUDE_PATH}/Graphics/Camera.hpp
    ${INCLUDE_PATH}/Graphics/Defines.hpp
    ${INCLUDE_PATH}/Graphics/Monitor.hpp
    ${INCLUDE_PATH}/Graphics/Object.hpp
    ${INCLUDE_PATH}/Graphics/Resolution.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan.hpp
    ${INCLUDE_PATH}/Graphics/Window.hpp
)

set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/)
set(SOURCE_FILES
    ${SOURCE_PATH}/Graphics/Vulkan/DebugReport.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Device.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Framebuffer.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Image.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Image.View.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Instance.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/PhysicalDevice.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Queue.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Semaphore.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/ShaderModule.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/ShaderModule.Compiler.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/SurfaceKHR.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/SwapchainKHR.cpp

    ${SOURCE_PATH}/Graphics/Camera.cpp
    ${SOURCE_PATH}/Graphics/GLFWInclude.hpp
    ${SOURCE_PATH}/Graphics/Monitor.cpp
    ${SOURCE_PATH}/Graphics/Object.cpp
    ${SOURCE_PATH}/Graphics/Resolution.cpp
    ${SOURCE_PATH}/Graphics/Window.cpp
)

include_directories(
    DYNAMIC_STATIC_CORE_INCLUDE_DIRECTORY
    ${GLFW_INCLUDE}
    ${GLEW_INCLUDE}
    ${glslang_INCLUDE}
)

if (MSVC)
    set(DST_GFX_BINARY_DEPENDENCIES
        ${DST_CORE_LIBRARY}
        ${GLFW_LIBRARY}
        ${GLEW_LIBRARY}
        $ENV{VULKAN_SDK}/Lib/vulkan-1.lib
        ${glslang_LIBRARY}
        opengl32.lib
        glu32.lib
        PARENT_SCOPE
    )
else()
    set(DST_GFX_BINARY_DEPENDENCIES
        ${DST_CORE_LIBRARY}

        
        stdc++fs
        
        GL
        GLU
        EGL
        # GLEW
        ${GLFW_LIBRARY}

        Xi
        X11
        Xrandr
        Xinerama
        Xcursor
        Xxf86vm
        
        pthread
        

        dl
        /usr/lib/aarch64-linux-gnu/libvulkan.so
        
        

        PARENT_SCOPE
    )
endif()

add_library(Dynamic_Static.Graphics ${INCLUDE_FILES} ${SOURCE_FILES})
set_target_properties(Dynamic_Static.Graphics PROPERTIES PREFIX "")
add_dependencies(Dynamic_Static.Graphics Dynamic_Static.Core)
add_dependencies(Dynamic_Static.Graphics GLFW)
add_dependencies(Dynamic_Static.Graphics glslang)
create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")

