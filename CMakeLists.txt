
# ==========================================
#   Copyright (c) 2016-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# CMake configuration for Dynamic_Static.Graphics

cmake_minimum_required(VERSION 3.3)
if(DEFINED ENV{DYNAMIC_STATIC_SDK})
    include("$ENV{DYNAMIC_STATIC_SDK}/Dynamic_Static.Cmake/.cmake")
else()
    include("external/Dynamic_Static.cmake/.cmake")
endif()

DstCreateProject(Dynamic_Static.Graphics)

include("external/Dynamic_Static.Core.cmake")
include("external/Dynamic_Static.System.cmake")
include("external/glslang.cmake")
include("external/SPIRV-Cross.cmake")
include("external/Vulkan.cmake")

set(includePath "${CMAKE_CURRENT_LIST_DIR}/include.ex/Dynamic_Static/Graphics/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source.ex/Dynamic_Static/Graphics/")
DstCreateStaticLibrary(
    target Dynamic_Static.Graphics
    folder Dynamic_Static.Graphics/

    staticLibraries
        Dynamic_Static.System
        "${glslang.staticLibraries}"
        "${SPIRV-Cross.staticLibraries}"
        "${Vulkan.staticLibraries}"

    includeDirectories
        "${CMAKE_CURRENT_LIST_DIR}/include.ex/"
        "${Dynamic_Static.Core.includeDirectories}"
        "${glslang.includeDirectories}"
        "${SPIRV-Cross.includeDirectories}"
        "${Vulkan.includeDirectories}"

    includeFiles
        "${includePath}/Vulkan/Primitives/Box.hpp"
        "${includePath}/Vulkan/TextRenderer/TextMesh.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPosition.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionColor.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionColorTexture.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionNormal.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionNormalColor.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionNormalColorTexture.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionNormalTangentColorTexture.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionNormalTexture.hpp"
        "${includePath}/Vulkan/VertexTypes/VertexPositionTexture.hpp"
        "${includePath}/Vulkan/Application.hpp"
        "${includePath}/Vulkan/Buffer.hpp"
        "${includePath}/Vulkan/CommandBuffer.hpp"
        "${includePath}/Vulkan/CommandPool.hpp"
        "${includePath}/Vulkan/CommandPoolChild.hpp"
        "${includePath}/Vulkan/DebugReportCallbackEXT.hpp"
        "${includePath}/Vulkan/Defines.hpp"
        "${includePath}/Vulkan/DescriptorPool.hpp"
        "${includePath}/Vulkan/DescriptorPoolChild.hpp"
        "${includePath}/Vulkan/DescriptorSet.hpp"
        "${includePath}/Vulkan/DescriptorSetLayout.hpp"
        "${includePath}/Vulkan/Device.hpp"
        "${includePath}/Vulkan/DeviceChild.hpp"
        "${includePath}/Vulkan/DeviceMemory.hpp"
        "${includePath}/Vulkan/DeviceMemoryResource.hpp"
        "${includePath}/Vulkan/Fence.hpp"
        "${includePath}/Vulkan/Framebuffer.hpp"
        "${includePath}/Vulkan/Image.hpp"
        "${includePath}/Vulkan/ImageChild.hpp"
        "${includePath}/Vulkan/ImageView.hpp"
        "${includePath}/Vulkan/Instance.hpp"
        "${includePath}/Vulkan/InstanceChild.hpp"
        "${includePath}/Vulkan/Mesh.hpp"
        "${includePath}/Vulkan/Object.hpp"
        "${includePath}/Vulkan/PhysicalDevice.hpp"
        "${includePath}/Vulkan/PhysicalDeviceChild.hpp"
        "${includePath}/Vulkan/Pipeline.hpp"
        "${includePath}/Vulkan/PipelineLayout.hpp"
        "${includePath}/Vulkan/Primitives.hpp"
        "${includePath}/Vulkan/Queue.hpp"
        "${includePath}/Vulkan/QueueFamily.hpp"
        "${includePath}/Vulkan/RenderPass.hpp"
        "${includePath}/Vulkan/RenderTarget.hpp"
        "${includePath}/Vulkan/Sampler.hpp"
        "${includePath}/Vulkan/Semaphore.hpp"
        "${includePath}/Vulkan/ShaderModule.Compiler.hpp"
        "${includePath}/Vulkan/ShaderModule.hpp"
        "${includePath}/Vulkan/ShaderModule.Reflector.hpp"
        "${includePath}/Vulkan/SurfaceKHR.hpp"
        "${includePath}/Vulkan/SurfaceKHRChild.hpp"
        "${includePath}/Vulkan/SwapchainKHR.hpp"
        "${includePath}/Vulkan/Vertex.hpp"
        "${includePath}/Vulkan/VertexTypes.hpp"
        "${includePath}/Camera.Controller.hpp"
        "${includePath}/Camera.hpp"
        "${includePath}/Defines.hpp"
        "${includePath}/FreeCameraController.hpp"
        "${includePath}/Vulkan.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/include.ex/Dynamic_Static.Graphics.hpp"

    sourceFiles
        "${sourcePath}/Vulkan/Primitives/Box.cpp"
        "${sourcePath}/Vulkan/TextRenderer/TextMesh.cpp"
        "${sourcePath}/Vulkan/Application.cpp"
        "${sourcePath}/Vulkan/Buffer.cpp"
        "${sourcePath}/Vulkan/CommandBuffer.cpp"
        "${sourcePath}/Vulkan/CommandPool.cpp"
        "${sourcePath}/Vulkan/CommandPoolChild.cpp"
        "${sourcePath}/Vulkan/DebugReportCallbackEXT.cpp"
        "${sourcePath}/Vulkan/DescriptorPool.cpp"
        "${sourcePath}/Vulkan/DescriptorPoolChild.cpp"
        "${sourcePath}/Vulkan/DescriptorSet.cpp"
        "${sourcePath}/Vulkan/DescriptorSetLayout.cpp"
        "${sourcePath}/Vulkan/Device.cpp"
        "${sourcePath}/Vulkan/DeviceChild.cpp"
        "${sourcePath}/Vulkan/DeviceMemory.cpp"
        "${sourcePath}/Vulkan/DeviceMemoryResource.cpp"
        "${sourcePath}/Vulkan/Fence.cpp"
        "${sourcePath}/Vulkan/Framebuffer.cpp"
        "${sourcePath}/Vulkan/Image.cpp"
        "${sourcePath}/Vulkan/ImageChild.cpp"
        "${sourcePath}/Vulkan/ImageView.cpp"
        "${sourcePath}/Vulkan/Instance.cpp"
        "${sourcePath}/Vulkan/InstanceChild.cpp"
        "${sourcePath}/Vulkan/Mesh.cpp"
        "${sourcePath}/Vulkan/PhysicalDevice.cpp"
        "${sourcePath}/Vulkan/PhysicalDeviceChild.cpp"
        "${sourcePath}/Vulkan/Pipeline.cpp"
        "${sourcePath}/Vulkan/PipelineLayout.cpp"
        "${sourcePath}/Vulkan/Queue.cpp"
        "${sourcePath}/Vulkan/QueueFamily.cpp"
        "${sourcePath}/Vulkan/RenderPass.cpp"
        "${sourcePath}/Vulkan/RenderTarget.cpp"
        "${sourcePath}/Vulkan/Sampler.cpp"
        "${sourcePath}/Vulkan/Semaphore.cpp"
        "${sourcePath}/Vulkan/ShaderModule.Compiler.cpp"
        "${sourcePath}/Vulkan/ShaderModule.cpp"
        "${sourcePath}/Vulkan/ShaderModule.Reflector.cpp"
        "${sourcePath}/Vulkan/SurfaceKHR.cpp"
        "${sourcePath}/Vulkan/SurfaceKHRChild.cpp"
        "${sourcePath}/Vulkan/SwapchainKHR.cpp"
        "${sourcePath}/Camera.Controller.cpp"
        "${sourcePath}/Camera.cpp"
        "${sourcePath}/FreeCameraController.cpp"
)

option(BUILD_EXAMPLES "Build Dynamic_Static.Graphics.Examples" ON)
if(BUILD_EXAMPLES)
    add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/examples.ex/")
endif()
