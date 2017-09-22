
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_PATH ${DST_GFX_INCLUDE}/Dynamic_Static/)
set(INCLUDE_FILES
    ${INCLUDE_PATH}/Graphics/OpenGL/GLEWInclude.hpp

    ${INCLUDE_PATH}/Graphics/Vulkan/Effects/Bloom.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Effects/BloomCombine.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Effects/BloomExtract.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Effects/GaussianBlur.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/VertexTypes/VertexPositionColor.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Application.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Buffer.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Command.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Command.Buffer.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Command.Pool.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/DebugReport.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Defines.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Descriptor.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Descriptor.Pool.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Descriptor.Set.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Descriptor.Set.Layout.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Device.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/DeviceChild.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Effect.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Framebuffer.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Image.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Image.View.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Instance.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Memory.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Mesh.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Object.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/PhysicalDevice.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Pipeline.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Pipeline.Layout.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Queue.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/RenderPass.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/RenderTarget.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Sampler.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Semaphore.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/ShaderModule.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/ShaderModule.Compiler.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/SurfaceKHR.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/SwapchainKHR.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Vertex.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/VertexTypes.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/VulkanHppInclude.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/VulkanInclude.hpp

    ${INCLUDE_PATH}/Graphics/Application.hpp
    ${INCLUDE_PATH}/Graphics/Camera.hpp
    ${INCLUDE_PATH}/Graphics/Camera.Controller.hpp
    ${INCLUDE_PATH}/Graphics/FreeCameraController.hpp
    ${INCLUDE_PATH}/Graphics/Defines.hpp
    ${INCLUDE_PATH}/Graphics/GLTFCache.hpp
    ${INCLUDE_PATH}/Graphics/GLTFReader.hpp
    ${INCLUDE_PATH}/Graphics/ImageCache.hpp
    ${INCLUDE_PATH}/Graphics/ImageReader.hpp
    ${INCLUDE_PATH}/Graphics/Monitor.hpp
    ${INCLUDE_PATH}/Graphics/Object.hpp
    ${INCLUDE_PATH}/Graphics/Resolution.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan.hpp
    ${INCLUDE_PATH}/Graphics/Window.hpp
)

set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/)
set(SOURCE_FILES
    ${SOURCE_PATH}/Graphics/Vulkan/Effects/Bloom.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Effects/BloomCombine.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Effects/BloomExtract.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Effects/GaussianBlur.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Application.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Buffer.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Command.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Command.Buffer.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Command.Pool.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/DebugReport.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Descriptor.Pool.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Descriptor.Set.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Descriptor.Set.Layout.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Device.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/DeviceChild.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Effect.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Framebuffer.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Image.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Image.View.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Instance.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Memory.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Mesh.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/PhysicalDevice.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Pipeline.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Pipeline.Layout.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Queue.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/RenderPass.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/RenderTarget.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Sampler.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Semaphore.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/ShaderModule.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/ShaderModule.Compiler.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/SurfaceKHR.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/SwapchainKHR.cpp

    ${SOURCE_PATH}/Graphics/Application.cpp
    ${SOURCE_PATH}/Graphics/Camera.cpp
    ${SOURCE_PATH}/Graphics/Camera.Controller.cpp
    ${SOURCE_PATH}/Graphics/FreeCameraController.cpp
    ${SOURCE_PATH}/Graphics/GLFWInclude.hpp
    ${SOURCE_PATH}/Graphics/GLTFCache.cpp
    ${SOURCE_PATH}/Graphics/GLTFReader.cpp
    ${SOURCE_PATH}/Graphics/ImageCache.cpp
    ${SOURCE_PATH}/Graphics/ImageReader.cpp
    ${SOURCE_PATH}/Graphics/Monitor.cpp
    ${SOURCE_PATH}/Graphics/Object.cpp
    ${SOURCE_PATH}/Graphics/Resolution.cpp
    ${SOURCE_PATH}/Graphics/StbImageInclude.hpp
    ${SOURCE_PATH}/Graphics/StbImageInclude.cpp
    ${SOURCE_PATH}/Graphics/TinyGLTFInclude.hpp
    ${SOURCE_PATH}/Graphics/TinyGLTFInclude.cpp
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

        GL
        GLU
        # GLEW
        ${GLFW_LIBRARY}

        EGL

        X11
        Xcursor
        Xi
        Xinerama
        Xrandr
        Xxf86vm

        /usr/lib/aarch64-linux-gnu/libvulkan.so
        ${glslang_LIBRARY}

        dl
        pthread
        stdc++fs

        PARENT_SCOPE
    )
endif()

add_library(Dynamic_Static.Graphics ${INCLUDE_FILES} ${SOURCE_FILES})
set_target_properties(Dynamic_Static.Graphics PROPERTIES PREFIX "")
add_dependencies(Dynamic_Static.Graphics GLFW)
add_dependencies(Dynamic_Static.Graphics glslang)
add_dependencies(Dynamic_Static.Graphics Dynamic_Static.Core)
create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
