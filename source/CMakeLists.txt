
dst_add_external_package(
    Dynamic_Static.System
    "${PROJECT_SOURCE_DIR}/external/Dynamic_Static.System.cmake"
)

################################################################################
function(dst_build_external_package packageName packageConfiguration)
    set(externalPackageDirectory "${CMAKE_BINARY_DIR}/${packageName}/")
    configure_file(
        "${packageConfiguration}"
        "${externalPackageDirectory}/CMakeLists.txt"
    )

    execute_process(
        COMMAND "${CMAKE_COMMAND}" -G "${CMAKE_GENERATOR}" .
        WORKING_DIRECTORY "${externalPackageDirectory}"
    )

    execute_process(
        COMMAND "${CMAKE_COMMAND}" --build .
        WORKING_DIRECTORY "${externalPackageDirectory}"
    )
endfunction()
################################################################################

dst_build_external_package(glslang "${PROJECT_SOURCE_DIR}/external/glslang.cmake")
set(glslang.includeDirectories "${CMAKE_BINARY_DIR}/glslang/external/src/glslang/")
if (MSVC)
    set(glslang.linkLibraries
        "${CMAKE_BINARY_DIR}/glslang/external/src/glslang-build/glslang/$(Configuration)/glslang*.lib"
        "${CMAKE_BINARY_DIR}/glslang/external/src/glslang-build/glslang/OSDependent/Windows/$(Configuration)/OSDependent*.lib"
        "${CMAKE_BINARY_DIR}/glslang/external/src/glslang-build/hlsl/$(Configuration)/HLSL*.lib"
        "${CMAKE_BINARY_DIR}/glslang/external/src/glslang-build/OGLCompilersDLL/$(Configuration)/OGLCompiler*.lib"
        "${CMAKE_BINARY_DIR}/glslang/external/src/glslang-build/SPIRV/$(Configuration)/SPIRV*.lib"
        "${CMAKE_BINARY_DIR}/glslang/external/src/glslang-build/SPIRV/$(Configuration)/SPVRemapper*.lib"
    )
else()
    # TODO : ...
    # set(glslang.linkLibraries
    #     "${CMAKE_BINARY_DIR}/external/glslang/glslang/libglslang.a"
    #     "${CMAKE_BINARY_DIR}/external/glslang/glslang/OSDependent/Unix/libOSDependent.a"
    #     "${CMAKE_BINARY_DIR}/external/glslang/hlsl/libHLSL.a"
    #     "${CMAKE_BINARY_DIR}/external/glslang/OGLCompilersDLL/libOGLCompiler.a"
    #     "${CMAKE_BINARY_DIR}/external/glslang/SPIRV/libSPIRV.a"
    #     "${CMAKE_BINARY_DIR}/external/glslang/SPIRV/libSPVRemapper.a"
    # )
endif()

dst_build_external_package(imgui "${PROJECT_SOURCE_DIR}/external/imgui.cmake")
set(imgui.includeDirectories "${CMAKE_BINARY_DIR}/imgui/external/src/imgui/")
file(GLOB imgui.source "${imgui.includeDirectories}/*.cpp")

dst_build_external_package(SPIRV-Cross "${PROJECT_SOURCE_DIR}/external/SPIRV-Cross.cmake")
set(SPIRV-Cross.includeDirectories "${CMAKE_BINARY_DIR}/SPIRV-Cross/external/src/SPIRV-Cross/")
if (MSVC)
    set(SPIRV-Cross.linkLibraries
        "${CMAKE_BINARY_DIR}/SPIRV-Cross/external/src/SPIRV-Cross-build/$(Configuration)/spirv-cross-core.lib"
        "${CMAKE_BINARY_DIR}/SPIRV-Cross/external/src/SPIRV-Cross-build/$(Configuration)/spirv-cross-cpp.lib"
        "${CMAKE_BINARY_DIR}/SPIRV-Cross/external/src/SPIRV-Cross-build/$(Configuration)/spirv-cross-glsl.lib"
        "${CMAKE_BINARY_DIR}/SPIRV-Cross/external/src/SPIRV-Cross-build/$(Configuration)/spirv-cross-hlsl.lib"
        "${CMAKE_BINARY_DIR}/SPIRV-Cross/external/src/SPIRV-Cross-build/$(Configuration)/spirv-cross-msl.lib"
    )
else()
    # TODO : ...
    # set(SPIRV-Cross.linkLibraries
    #     "${CMAKE_BINARY_DIR}/SPIRV-Cross/libspirv-cross-core.a"
    #     "${CMAKE_BINARY_DIR}/SPIRV-Cross/libspirv-cross-cpp.a"
    #     "${CMAKE_BINARY_DIR}/SPIRV-Cross/libspirv-cross-glsl.a"
    #     "${CMAKE_BINARY_DIR}/SPIRV-Cross/libspirv-cross-hlsl.a"
    #     "${CMAKE_BINARY_DIR}/SPIRV-Cross/libspirv-cross-msl.a"
    # )
endif()

include("${PROJECT_SOURCE_DIR}/external/VulkanSDK.cmake")

set(includePath ${PROJECT_SOURCE_DIR}/include/Dynamic_Static/Graphics/)
set(includeFiles
    ${includePath}/Vulkan/Effects/Bloom.hpp
    ${includePath}/Vulkan/Effects/BloomCombine.hpp
    ${includePath}/Vulkan/Effects/ExtractLuminance.hpp
    ${includePath}/Vulkan/Effects/GaussianBlur.hpp
    ${includePath}/Vulkan/ImGui/ImGui.hpp
    ${includePath}/Vulkan/Primitives/Box.hpp
    ${includePath}/Vulkan/Primitives/Quad.hpp
    ${includePath}/Vulkan/VertexTypes/VertexPositionColor.hpp
    ${includePath}/Vulkan/VertexTypes/VertexPositionTexCoord.hpp
    ${includePath}/Vulkan/VertexTypes/VertexPositionTexCoordColor.hpp
    ${includePath}/Vulkan/Application.hpp
    ${includePath}/Vulkan/Buffer.hpp
    ${includePath}/Vulkan/Command.hpp
    ${includePath}/Vulkan/Command.Buffer.hpp
    ${includePath}/Vulkan/Command.Pool.hpp
    ${includePath}/Vulkan/DebugReport.hpp
    ${includePath}/Vulkan/Defines.hpp
    ${includePath}/Vulkan/Descriptor.hpp
    ${includePath}/Vulkan/Descriptor.Pool.hpp
    ${includePath}/Vulkan/Descriptor.Set.hpp
    ${includePath}/Vulkan/Descriptor.Set.Layout.hpp
    ${includePath}/Vulkan/Device.hpp
    ${includePath}/Vulkan/DeviceChild.hpp
    ${includePath}/Vulkan/Effect.hpp
    ${includePath}/Vulkan/Framebuffer.hpp
    ${includePath}/Vulkan/Image.hpp
    ${includePath}/Vulkan/Image.View.hpp
    ${includePath}/Vulkan/IndexBuffer.hpp
    ${includePath}/Vulkan/Instance.hpp
    ${includePath}/Vulkan/Memory.hpp
    ${includePath}/Vulkan/Mesh.hpp
    ${includePath}/Vulkan/Object.hpp
    ${includePath}/Vulkan/PhysicalDevice.hpp
    ${includePath}/Vulkan/Pipeline.hpp
    ${includePath}/Vulkan/Pipeline.Layout.hpp
    ${includePath}/Vulkan/Queue.hpp
    ${includePath}/Vulkan/RenderPass.hpp
    ${includePath}/Vulkan/RenderTarget.hpp
    ${includePath}/Vulkan/Sampler.hpp
    ${includePath}/Vulkan/Semaphore.hpp
    ${includePath}/Vulkan/ShaderModule.hpp
    ${includePath}/Vulkan/ShaderModule.Compiler.hpp
    ${includePath}/Vulkan/ShaderModule.Reflector.hpp
    ${includePath}/Vulkan/SurfaceKHR.hpp
    ${includePath}/Vulkan/SwapchainKHR.hpp
    ${includePath}/Vulkan/Vertex.hpp
    ${includePath}/Vulkan/VertexTypes.hpp
    ${includePath}/Vulkan/VulkanHppInclude.hpp
    ${includePath}/Vulkan/VulkanInclude.hpp

    ${includePath}/Application.hpp
    ${includePath}/Camera.hpp
    ${includePath}/Camera.Controller.hpp
    ${includePath}/FreeCameraController.hpp
    ${includePath}/Defines.hpp
    ${includePath}/GLTFCache.hpp
    ${includePath}/GLTFReader.hpp
    ${includePath}/ImageCache.hpp
    ${includePath}/ImageReader.hpp
    ${includePath}/Object.hpp
    ${includePath}/Vulkan.hpp
)

set(sourcePath ${PROJECT_SOURCE_DIR}/source/Dynamic_Static/Graphics)
set(sourceFiles
    ${sourcePath}/Vulkan/Effects/Bloom.cpp
    ${sourcePath}/Vulkan/Effects/BloomCombine.cpp
    ${sourcePath}/Vulkan/Effects/ExtractLuminance.cpp
    ${sourcePath}/Vulkan/Effects/GaussianBlur.cpp
    ${sourcePath}/Vulkan/ImGui/ImGui.cpp
    ${sourcePath}/Vulkan/Primitives/Box.cpp
    ${sourcePath}/Vulkan/Primitives/Quad.cpp
    ${sourcePath}/Vulkan/Application.cpp
    ${sourcePath}/Vulkan/Buffer.cpp
    ${sourcePath}/Vulkan/Command.cpp
    ${sourcePath}/Vulkan/Command.Buffer.cpp
    ${sourcePath}/Vulkan/Command.Pool.cpp
    ${sourcePath}/Vulkan/DebugReport.cpp
    ${sourcePath}/Vulkan/Descriptor.Pool.cpp
    ${sourcePath}/Vulkan/Descriptor.Set.cpp
    ${sourcePath}/Vulkan/Descriptor.Set.Layout.cpp
    ${sourcePath}/Vulkan/Device.cpp
    ${sourcePath}/Vulkan/DeviceChild.cpp
    ${sourcePath}/Vulkan/Effect.cpp
    ${sourcePath}/Vulkan/Framebuffer.cpp
    ${sourcePath}/Vulkan/Image.cpp
    ${sourcePath}/Vulkan/Image.View.cpp
    ${sourcePath}/Vulkan/IndexBuffer.cpp
    ${sourcePath}/Vulkan/Instance.cpp
    ${sourcePath}/Vulkan/Memory.cpp
    ${sourcePath}/Vulkan/Mesh.cpp
    ${sourcePath}/Vulkan/PhysicalDevice.cpp
    ${sourcePath}/Vulkan/Pipeline.cpp
    ${sourcePath}/Vulkan/Pipeline.Layout.cpp
    ${sourcePath}/Vulkan/Queue.cpp
    ${sourcePath}/Vulkan/RenderPass.cpp
    ${sourcePath}/Vulkan/RenderTarget.cpp
    ${sourcePath}/Vulkan/Sampler.cpp
    ${sourcePath}/Vulkan/Semaphore.cpp
    ${sourcePath}/Vulkan/ShaderModule.cpp
    ${sourcePath}/Vulkan/ShaderModule.Compiler.cpp
    ${sourcePath}/Vulkan/ShaderModule.Reflector.cpp
    ${sourcePath}/Vulkan/SurfaceKHR.cpp
    ${sourcePath}/Vulkan/SwapchainKHR.cpp

    ${sourcePath}/Application.cpp
    ${sourcePath}/Camera.cpp
    ${sourcePath}/Camera.Controller.cpp
    ${sourcePath}/FreeCameraController.cpp
    ${sourcePath}/GLTFCache.cpp
    ${sourcePath}/GLTFReader.cpp
    ${sourcePath}/ImageCache.cpp
    ${sourcePath}/ImageReader.cpp
    ${sourcePath}/Object.cpp
    ${sourcePath}/StbImageInclude.hpp
    ${sourcePath}/StbImageInclude.cpp
    ${sourcePath}/TinyGLTFInclude.hpp
    ${sourcePath}/TinyGLTFInclude.cpp

    ${imgui.source}
)

add_library(${CMAKE_PROJECT_NAME} STATIC "${includeFiles}" "${sourceFiles}")
add_dependencies(${CMAKE_PROJECT_NAME} Dynamic_Static.System)
# add_dependencies(${CMAKE_PROJECT_NAME} glslang)
# add_dependencies(${CMAKE_PROJECT_NAME} imgui)
# add_dependencies(${CMAKE_PROJECT_NAME} SPIRV-Cross)
dst_setup_target(${CMAKE_PROJECT_NAME} "${includeFiles}" "${sourceFiles}")

target_include_directories(
    ${CMAKE_PROJECT_NAME}
    PUBLIC ${Dynamic_Static.System.includeDirectories}
    PUBLIC ${glslang.includeDirectories}
    PUBLIC ${imgui.includeDirectories}
    PUBLIC ${SPIRV-Cross.includeDirectories}
    PUBLIC ${VulkanSDK.includeDirectories}
)

target_link_libraries(
    ${CMAKE_PROJECT_NAME}
    PUBLIC INTERFACE ${Dynamic_Static.System.linkLibraries}
    PUBLIC INTERFACE ${glslang.linkLibraries}
    PUBLIC INTERFACE ${SPIRV-Cross.linkLibraries}
    PUBLIC INTERFACE ${VulkanSDK.linkLibraries}
)

dst_export_target(${CMAKE_PROJECT_NAME})
