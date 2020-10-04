
# ==========================================
#   Copyright (c) 2017-2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# dynamic_static.Graphics CMake configuration
cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
project(dynamic_static.graphics VERSION 2.0.0)
set(CMAKE_CXX_STANDARD 17)
set(dynamic_static "${CMAKE_CURRENT_LIST_DIR}/../")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/")
################################################################################
include("${CMAKE_CURRENT_LIST_DIR}/../dynamic_static.build/dynamic_static.cmake")
dst_add_subdirectory(dynamic_static.core)
dst_add_subdirectory(dynamic_static.cpp-generator)
dst_add_subdirectory(dynamic_static.system)
dst_add_subdirectory(dynamic_static.vk-xml-parser)
################################################################################

# Options
option(DST_GFX_BUILD_EXAMPLES "TODO : Documentation" OFF)

# External dependencies
set(externalDirectory "${CMAKE_CURRENT_LIST_DIR}/external/")
find_package(Vulkan REQUIRED)
include(glslang)
include(SPIRV-Cross)
list(APPEND linkLibraries dynamic_static.system)
list(APPEND linkLibraries Vulkan::Vulkan)

set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include.ex/")
set(includePath "${includeDirectory}/dynamic_static/graphics/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source.ex/dynamic_static/graphics/")
set(generatedIncludePath "${includePath}/vulkan/generated/")
set(generatedSourcePath "${sourcePath}/vulkan/generated/")
set(generatedIncludeFiles
    # "${generatedIncludePath}/create-structure-copy.hpp"
    # "${generatedIncludePath}/destroy-structure-copy.hpp"
    # "${generatedIncludePath}/equality-operators.hpp"
    # "${generatedIncludePath}/greater-than-operators.hpp"
    # "${generatedIncludePath}/less-than-operators.hpp"
    "${generatedIncludePath}/structure-to-tuple.hpp"
    # "${generatedIncludePath}/managed-handles.hpp"
    # "${generatedIncludePath}/managed-structures.hpp"
)
set(generatedSourceFiles
    # "${generatedSourcePath}/create-structure-copy.cpp"
    # "${generatedSourcePath}/destroy-structure-copy.cpp"
    # "${generatedSourcePath}/equality-operators.cpp"
    # "${generatedSourcePath}/greater-than-operators.cpp"
    # "${generatedSourcePath}/less-than-operators.cpp"
    # "${generatedSourcePath}/managed-handles.cpp"
)

# dynamic_static.graphics.vulkan.generator
set(generatorSourcePath "${CMAKE_CURRENT_LIST_DIR}/generator/")
dst_add_cpp_generator(
    target dynamic_static.graphics.vulkan.generator
    folder dynamic_static.graphics
    linkLibraries dynamic_static.vk-xml-parser
    sourceFiles
        # "${generatorSourcePath}/create-structure-copy.generator.hpp"
        # "${generatorSourcePath}/destroy-structure-copy.generator.hpp"
        # "${generatorSourcePath}/equality-operators.generator.hpp"
        "${generatorSourcePath}/main.cpp"
        # "${generatorSourcePath}/managed-handles.generator.hpp"
        # "${generatorSourcePath}/managed-structures.generator.hpp"
        "${generatorSourcePath}/structure-to-tuple.generator.hpp"
        "${generatorSourcePath}/utilities.hpp"
    compileDefinitions
        DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_INCLUDE_PATH="${generatedIncludePath}/"
        DYNAMIC_STATIC_GRAPHICS_VULKAN_GENERATED_SOURCE_PATH="${generatedSourcePath}/"
)
#### generatedFiles
####     "${generatedIncludeFiles}"
####     "${generatedSourceFiles}"

#### # dynamic_static.graphics
#### dst_add_static_library(
####     target
####         dynamic_static.graphics
####     linkLibraries
####         "${linkLibraries}"
####     includeDirectories
####         "${includeDirectory}"
#### 
####         ${CMAKE_CURRENT_LIST_DIR}/include/
#### 
####     includeFiles
####         "${includePath}/vulkan/detail/comparison-operators-utilities.hpp"
####         "${includePath}/vulkan/detail/managed.hpp"
####         "${includePath}/vulkan/detail/managed-handle.hpp"
####         "${includePath}/vulkan/detail/managed-structure.hpp"
####         "${includePath}/vulkan/detail/structure-copy-utilities.hpp"
####         "${includePath}/vulkan/detail/structure-to-tuple.hpp"
####         "${includePath}/vulkan/detail/structure-to-tuple-manual.hpp"
####         "${includePath}/vulkan/detail/structure-to-tuple-utilities.hpp"
####         "${includePath}/vulkan/detail/tuple-element-wrappers.hpp"
####         "${includePath}/vulkan/managed-handles/managed-buffer.hpp"
####         "${includePath}/vulkan/comparison-operators.hpp"
####         "${includePath}/vulkan/application.hpp"
####         "${includePath}/vulkan/defines.hpp"
####         "${includePath}/vulkan/managed.hpp"
####         "${includePath}/application.hpp"
####         "${includePath}/defines.hpp"
####         "${includePath}/vulkan.hpp"
####         "${generatedIncludeFiles}"
#### 
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/Bloom.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/BloomCombine.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/ExtractLuminance.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ImGui/ImGui.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Primitives/Box.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Primitives/Quad.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionColor.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionTexCoord.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes/VertexPositionTexCoordColor.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Application.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Buffer.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Command.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Command.Buffer.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Command.Pool.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/DebugReport.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Defines.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Device.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Effect.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Framebuffer.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Image.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Image.View.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/IndexBuffer.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Instance.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Memory.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Mesh.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Object.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Pipeline.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Queue.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/RenderPass.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/RenderTarget.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Sampler.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Semaphore.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ShaderModule.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ShaderModule.Compiler.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/ShaderModule.Reflector.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/SurfaceKHR.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/SwapchainKHR.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/Vertex.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VertexTypes.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VulkanHppInclude.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan/VulkanInclude.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Application.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Camera.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Camera.Controller.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/FreeCameraController.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Defines.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/GLTFCache.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/GLTFReader.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/ImageCache.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/ImageReader.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Object.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/include/Dynamic_Static/Graphics/Vulkan.hpp
#### 
####     sourceFiles
####         "${sourcePath}/vulkan/detail/create-structure-copy-manual.cpp"
####         "${sourcePath}/vulkan/detail/destroy-structure-copy-manual.cpp"
####         "${sourcePath}/vulkan/application.cpp"
####         "${sourcePath}/application.cpp"
####         "${generatedSourceFiles}"
#### 
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/Bloom.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/BloomCombine.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/ExtractLuminance.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effects/GaussianBlur.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ImGui/ImGui.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Primitives/Box.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Primitives/Quad.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Application.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Buffer.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Command.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Command.Buffer.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Command.Pool.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/DebugReport.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Descriptor.Pool.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Descriptor.Set.Layout.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Device.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/DeviceChild.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Effect.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Framebuffer.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Image.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Image.View.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/IndexBuffer.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Instance.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Memory.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Mesh.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/PhysicalDevice.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Pipeline.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Pipeline.Layout.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Queue.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/RenderPass.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/RenderTarget.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Sampler.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/Semaphore.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ShaderModule.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ShaderModule.Compiler.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/ShaderModule.Reflector.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/SurfaceKHR.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Vulkan/SwapchainKHR.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Application.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Camera.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Camera.Controller.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/FreeCameraController.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/GLTFCache.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/GLTFReader.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/ImageCache.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/ImageReader.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/Object.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/StbImageInclude.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/StbImageInclude.cpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/TinyGLTFInclude.hpp
####         ${CMAKE_CURRENT_LIST_DIR}/source/Dynamic_Static/Graphics/TinyGLTFInclude.cpp
#### )
#### 
#### # # dynamic_static.graphics.tests
#### # if(DST_CORE_BUILD_TESTS)
#### #     set(testsPath "${Dynamic_Static.Graphics_SOURCE_DIR}/tests/")
#### #     dst_add_test_suite(
#### #         target dynamic_static.graphics
#### #         sourceFiles
#### #             "${testsPath}/comparison-operators.tests.cpp"
#### #             "${testsPath}/randomize-structure.hpp"
#### #             "${testsPath}/structure-copy.tests.cpp"
#### #     )
#### # endif()
#### 
#### # Examples
#### if(DST_GFX_BUILD_EXAMPLES)
####     add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/examples.ex/")
#### endif()
