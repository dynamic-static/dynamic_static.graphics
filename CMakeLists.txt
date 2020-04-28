
# ==========================================
#   Copyright (c) 2017-2020 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# Dynamic_Static.Graphics CMake configuration
cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
project(Dynamic_Static.Graphics VERSION 2.0.0)
set(CMAKE_CXX_STANDARD 17)
set(dynamic_static "${CMAKE_CURRENT_LIST_DIR}/../")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/")
include("${dynamic_static}/Dynamic_Static.CMake/Dynamic_Static.ex.cmake")
DstAddSubdirectory("Dynamic_Static.Core")
DstAddSubdirectory("Dynamic_Static.CppGenerator")
DstAddSubdirectory("Dynamic_Static.System")
DstAddSubdirectory("Dynamic_Static.VkXmlParser")

# Options
option(DST_GFX_BUILD_EXAMPLES "TODO : Documentation" OFF)

# External dependencies
set(externalDirectory "${CMAKE_CURRENT_LIST_DIR}/external/")
find_package(Vulkan REQUIRED)
include(glslang)
include(SPIRV-Cross)
list(APPEND linkLibraries dynamic_static.system)
list(APPEND linkLibraries Vulkan::Vulkan)

# dynamic_static.vulkan library
add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/vulkan.generator/")
set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include.ex/")
set(includePath "${includeDirectory}/dynamic_static/graphics/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source.ex/dynamic_static/graphics/")
DstAddStaticLibrary(
    target
        dynamic_static.graphics
    linkLibraries
        "${linkLibraries}"
    includeDirectories
        "${includeDirectory}"
        #### "${generatedIncludeDirectory}/"

        ${CMAKE_CURRENT_LIST_DIR}/include/

    includeFiles
        "${includePath}/vulkan/application.hpp"
        "${includePath}/vulkan/create-structure-copy-utilities.hpp"
        "${includePath}/vulkan/defines.hpp"
        "${includePath}/application.hpp"
        "${includePath}/defines.hpp"
        "${includePath}/vulkan.hpp"
        #### "${generatedIncludeFiles}"

        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/Bloom.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/BloomCombine.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/ExtractLuminance.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ImGui/ImGui.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Primitives/Box.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Primitives/Quad.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionColor.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionTexCoord.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionTexCoordColor.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Application.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Buffer.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Command.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/DebugReport.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Defines.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Device.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effect.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Image.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Image.View.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/IndexBuffer.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Instance.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Memory.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Mesh.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Object.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Pipeline.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Queue.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/RenderPass.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/RenderTarget.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Sampler.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Semaphore.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ShaderModule.Compiler.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ShaderModule.Reflector.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Vertex.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VulkanHppInclude.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VulkanInclude.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Application.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Camera.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Camera.Controller.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/FreeCameraController.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Defines.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/GLTFCache.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/GLTFReader.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/ImageCache.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/ImageReader.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Object.hpp
        ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan.hpp

    sourceFiles
        "${sourcePath}/vulkan/application.cpp"
        "${sourcePath}/application.cpp"
        #### "${generatedSourceFiles}"

        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/Bloom.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/BloomCombine.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/ExtractLuminance.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ImGui/ImGui.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Primitives/Box.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Primitives/Quad.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Application.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Buffer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Command.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Command.Buffer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Command.Pool.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/DebugReport.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Device.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/DeviceChild.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effect.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Framebuffer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Image.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Image.View.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/IndexBuffer.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Instance.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Memory.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Mesh.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/PhysicalDevice.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Pipeline.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Queue.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/RenderPass.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/RenderTarget.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Sampler.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Semaphore.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ShaderModule.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ShaderModule.Compiler.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ShaderModule.Reflector.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/SurfaceKHR.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/SwapchainKHR.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Application.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Camera.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Camera.Controller.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/FreeCameraController.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/GLTFCache.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/GLTFReader.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/ImageCache.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/ImageReader.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Object.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/StbImageInclude.hpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/StbImageInclude.cpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/TinyGLTFInclude.hpp
        ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/TinyGLTFInclude.cpp
)

# Examples
if(DST_GFX_BUILD_EXAMPLES)
    add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/examples.ex/")
endif()
