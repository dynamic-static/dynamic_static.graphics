
# CMake configuration for Dynamic_Static.Graphics

set(INCLUDE_PATH ${DST_GFX_INCLUDE}/Dynamic_Static/)
set(INCLUDE_FILES
    ${INCLUDE_PATH}/Graphics/OpenGL/GLEWInclude.hpp

    ${INCLUDE_PATH}/Graphics/Vulkan/Defines.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/DebugReport.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Instance.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/Object.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/PhysicalDevice.hpp
    ${INCLUDE_PATH}/Graphics/Vulkan/VulkanInclude.hpp

    ${INCLUDE_PATH}/Graphics/Camera.hpp
    ${INCLUDE_PATH}/Graphics/Defines.hpp
    ${INCLUDE_PATH}/Graphics/Monitor.hpp
    ${INCLUDE_PATH}/Graphics/Object.hpp
    ${INCLUDE_PATH}/Graphics/Resolution.hpp
    ${INCLUDE_PATH}/Graphics/Window.hpp
)

set(SOURCE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Dynamic_Static/)
set(SOURCE_FILES
    ${SOURCE_PATH}/Graphics/Vulkan/DebugReport.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Instance.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/Object.cpp
    ${SOURCE_PATH}/Graphics/Vulkan/PhysicalDevice.cpp

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
)

if (MSVC)
    set(DST_GFX_DEPENDENCIES
        ${DST_CORE_LIBRARY}
        ${GLFW_LIBRARY}
        ${GLEW_LIBRARY}
        $ENV{VULKAN_SDK}/Lib/vulkan-1.lib
        opengl32.lib
        glu32.lib
        PARENT_SCOPE
    )
else()
    set(DST_GFX_DEPENDENCIES
        ${DST_CORE_LIBRARY}
        ${GLFW_LIBRARY}
        PARENT_SCOPE
    )
endif()

add_library(Dynamic_Static.Graphics ${INCLUDE_FILES} ${SOURCE_FILES})
set_target_properties(Dynamic_Static.Graphics PROPERTIES PREFIX "")
add_dependencies(Dynamic_Static.Graphics Dynamic_Static.Core)
add_dependencies(Dynamic_Static.Graphics GLFW)
create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
