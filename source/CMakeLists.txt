
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_PATH ${PROJECT_SOURCE_DIR}/include/Dynamic_Static/Graphics/)
set(INCLUDE_FILES
    ${INCLUDE_PATH}/OpenGL/GLEWInclude.hpp

    ${INCLUDE_PATH}/Vulkan/Effects/Bloom.hpp
    ${INCLUDE_PATH}/Vulkan/Effects/BloomCombine.hpp
    ${INCLUDE_PATH}/Vulkan/Effects/ExtractLuminance.hpp
    ${INCLUDE_PATH}/Vulkan/Effects/GaussianBlur.hpp
    ${INCLUDE_PATH}/Vulkan/ImGui/ImGui.hpp
    ${INCLUDE_PATH}/Vulkan/Primitives/Box.hpp
    ${INCLUDE_PATH}/Vulkan/Primitives/Quad.hpp
    ${INCLUDE_PATH}/Vulkan/VertexTypes/VertexPositionColor.hpp
    ${INCLUDE_PATH}/Vulkan/VertexTypes/VertexPositionTexCoord.hpp
    ${INCLUDE_PATH}/Vulkan/VertexTypes/VertexPositionTexCoordColor.hpp
    ${INCLUDE_PATH}/Vulkan/Application.hpp
    ${INCLUDE_PATH}/Vulkan/Buffer.hpp
    ${INCLUDE_PATH}/Vulkan/Command.hpp
    ${INCLUDE_PATH}/Vulkan/Command.Buffer.hpp
    ${INCLUDE_PATH}/Vulkan/Command.Pool.hpp
    ${INCLUDE_PATH}/Vulkan/DebugReport.hpp
    ${INCLUDE_PATH}/Vulkan/Defines.hpp
    ${INCLUDE_PATH}/Vulkan/Descriptor.hpp
    ${INCLUDE_PATH}/Vulkan/Descriptor.Pool.hpp
    ${INCLUDE_PATH}/Vulkan/Descriptor.Set.hpp
    ${INCLUDE_PATH}/Vulkan/Descriptor.Set.Layout.hpp
    ${INCLUDE_PATH}/Vulkan/Device.hpp
    ${INCLUDE_PATH}/Vulkan/DeviceChild.hpp
    ${INCLUDE_PATH}/Vulkan/Effect.hpp
    ${INCLUDE_PATH}/Vulkan/Framebuffer.hpp
    ${INCLUDE_PATH}/Vulkan/Image.hpp
    ${INCLUDE_PATH}/Vulkan/Image.View.hpp
    ${INCLUDE_PATH}/Vulkan/IndexBuffer.hpp
    ${INCLUDE_PATH}/Vulkan/Instance.hpp
    ${INCLUDE_PATH}/Vulkan/Memory.hpp
    ${INCLUDE_PATH}/Vulkan/Mesh.hpp
    ${INCLUDE_PATH}/Vulkan/Object.hpp
    ${INCLUDE_PATH}/Vulkan/PhysicalDevice.hpp
    ${INCLUDE_PATH}/Vulkan/Pipeline.hpp
    ${INCLUDE_PATH}/Vulkan/Pipeline.Layout.hpp
    ${INCLUDE_PATH}/Vulkan/Queue.hpp
    ${INCLUDE_PATH}/Vulkan/RenderPass.hpp
    ${INCLUDE_PATH}/Vulkan/RenderTarget.hpp
    ${INCLUDE_PATH}/Vulkan/Sampler.hpp
    ${INCLUDE_PATH}/Vulkan/Semaphore.hpp
    ${INCLUDE_PATH}/Vulkan/ShaderModule.hpp
    ${INCLUDE_PATH}/Vulkan/ShaderModule.Compiler.hpp
    ${INCLUDE_PATH}/Vulkan/ShaderModule.Reflector.hpp
    ${INCLUDE_PATH}/Vulkan/SurfaceKHR.hpp
    ${INCLUDE_PATH}/Vulkan/SwapchainKHR.hpp
    ${INCLUDE_PATH}/Vulkan/Vertex.hpp
    ${INCLUDE_PATH}/Vulkan/VertexTypes.hpp
    ${INCLUDE_PATH}/Vulkan/VulkanHppInclude.hpp
    ${INCLUDE_PATH}/Vulkan/VulkanInclude.hpp

    ${INCLUDE_PATH}/Application.hpp
    ${INCLUDE_PATH}/Camera.hpp
    ${INCLUDE_PATH}/Camera.Controller.hpp
    ${INCLUDE_PATH}/FreeCameraController.hpp
    ${INCLUDE_PATH}/Defines.hpp
    ${INCLUDE_PATH}/GLTFCache.hpp
    ${INCLUDE_PATH}/GLTFReader.hpp
    ${INCLUDE_PATH}/ImageCache.hpp
    ${INCLUDE_PATH}/ImageReader.hpp
    ${INCLUDE_PATH}/Monitor.hpp
    ${INCLUDE_PATH}/Object.hpp
    ${INCLUDE_PATH}/Resolution.hpp
    ${INCLUDE_PATH}/Vulkan.hpp
    ${INCLUDE_PATH}/Window.hpp
)

set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/Graphics)
set(SOURCE_FILES
    ${SOURCE_PATH}/Vulkan/Effects/Bloom.cpp
    ${SOURCE_PATH}/Vulkan/Effects/BloomCombine.cpp
    ${SOURCE_PATH}/Vulkan/Effects/ExtractLuminance.cpp
    ${SOURCE_PATH}/Vulkan/Effects/GaussianBlur.cpp
    ${SOURCE_PATH}/Vulkan/ImGui/ImGui.cpp
    ${SOURCE_PATH}/Vulkan/Primitives/Box.cpp
    ${SOURCE_PATH}/Vulkan/Primitives/Quad.cpp
    ${SOURCE_PATH}/Vulkan/Application.cpp
    ${SOURCE_PATH}/Vulkan/Buffer.cpp
    ${SOURCE_PATH}/Vulkan/Command.cpp
    ${SOURCE_PATH}/Vulkan/Command.Buffer.cpp
    ${SOURCE_PATH}/Vulkan/Command.Pool.cpp
    ${SOURCE_PATH}/Vulkan/DebugReport.cpp
    ${SOURCE_PATH}/Vulkan/Descriptor.Pool.cpp
    ${SOURCE_PATH}/Vulkan/Descriptor.Set.cpp
    ${SOURCE_PATH}/Vulkan/Descriptor.Set.Layout.cpp
    ${SOURCE_PATH}/Vulkan/Device.cpp
    ${SOURCE_PATH}/Vulkan/DeviceChild.cpp
    ${SOURCE_PATH}/Vulkan/Effect.cpp
    ${SOURCE_PATH}/Vulkan/Framebuffer.cpp
    ${SOURCE_PATH}/Vulkan/Image.cpp
    ${SOURCE_PATH}/Vulkan/Image.View.cpp
    ${SOURCE_PATH}/Vulkan/IndexBuffer.cpp
    ${SOURCE_PATH}/Vulkan/Instance.cpp
    ${SOURCE_PATH}/Vulkan/Memory.cpp
    ${SOURCE_PATH}/Vulkan/Mesh.cpp
    ${SOURCE_PATH}/Vulkan/PhysicalDevice.cpp
    ${SOURCE_PATH}/Vulkan/Pipeline.cpp
    ${SOURCE_PATH}/Vulkan/Pipeline.Layout.cpp
    ${SOURCE_PATH}/Vulkan/Queue.cpp
    ${SOURCE_PATH}/Vulkan/RenderPass.cpp
    ${SOURCE_PATH}/Vulkan/RenderTarget.cpp
    ${SOURCE_PATH}/Vulkan/Sampler.cpp
    ${SOURCE_PATH}/Vulkan/Semaphore.cpp
    ${SOURCE_PATH}/Vulkan/ShaderModule.cpp
    ${SOURCE_PATH}/Vulkan/ShaderModule.Compiler.cpp
    ${SOURCE_PATH}/Vulkan/ShaderModule.Reflector.cpp
    ${SOURCE_PATH}/Vulkan/SurfaceKHR.cpp
    ${SOURCE_PATH}/Vulkan/SwapchainKHR.cpp

    ${SOURCE_PATH}/Application.cpp
    ${SOURCE_PATH}/Camera.cpp
    ${SOURCE_PATH}/Camera.Controller.cpp
    ${SOURCE_PATH}/FreeCameraController.cpp
    ${SOURCE_PATH}/GLFWInclude.hpp
    ${SOURCE_PATH}/GLTFCache.cpp
    ${SOURCE_PATH}/GLTFReader.cpp
    ${SOURCE_PATH}/ImageCache.cpp
    ${SOURCE_PATH}/ImageReader.cpp
    ${SOURCE_PATH}/Monitor.cpp
    ${SOURCE_PATH}/Object.cpp
    ${SOURCE_PATH}/Resolution.cpp
    ${SOURCE_PATH}/StbImageInclude.hpp
    ${SOURCE_PATH}/StbImageInclude.cpp
    ${SOURCE_PATH}/TinyGLTFInclude.hpp
    ${SOURCE_PATH}/TinyGLTFInclude.cpp
    ${SOURCE_PATH}/Window.cpp

    ${imgui.SOURCE}
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")

if (MSVC)
    set(SYSTEM_INSTALL_DEPENDENCIES
    )
else()
    set(SYSTEM_INSTALL_DEPENDENCIES
        EGL
        X11
        Xcursor
        Xi
        Xinerama
        Xrandr
        Xxf86vm
        dl
        pthread
        stdc++fs
    )
endif()

set(TARGET Dynamic_Static.Graphics)
add_library(${TARGET} ${INCLUDE_FILES} ${SOURCE_FILES})
set_target_properties(Dynamic_Static.Graphics PROPERTIES PREFIX "")
if (EXISTS ${Dynamic_Static.Core.PACKAGE})
    target_include_directories(
        ${TARGET}
        PUBLIC ${PROJECT_SOURCE_DIR}/include/
        PUBLIC ${GLFW.INCLUDE}
        PUBLIC ${glslang.INCLUDE}
        PUBLIC ${imgui.INCLUDE}
        PUBLIC ${SPIRV-Cross.INCLUDE}
        PUBLIC ${VulkanSDK.INCLUDE}
    )

    target_link_libraries(
        ${TARGET}
        PUBLIC ${SYSTEM_INSTALL_DEPENDENCIES}
        PUBLIC Dynamic_Static.Core
        PUBLIC ${GLFW.LIBRARY}
        PUBLIC ${glslang.LIBRARY}
        # NOTE : imgui's source is built as part of Dynamic_Static.Graphics' source tree
        PUBLIC ${SPIRV-Cross.LIBRARY}
        PUBLIC ${VulkanSDK.LIBRARY}
    )

    add_dependencies(${TARGET} Dynamic_Static.Core)
    add_dependencies(${TARGET} GLFW)
    add_dependencies(${TARGET} glslang)
    add_dependencies(${TARGET} imgui)
    add_dependencies(${TARGET} SPIRV-Cross)
    # NOTE : We don't currently build anything in the VulkanSDK
    # add_dependencies(${TARGET} VulkanSDK)

    export(
        TARGETS ${TARGET}
        FILE ${CMAKE_BINARY_DIR}/${CMAKE_PROJECT_NAME}.package.cmake
    )
endif()
