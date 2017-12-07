
file(
    DOWNLOAD
    # https://github.com/ocornut/imgui/archive/master.zip
    https://github.com/ocornut/imgui/archive/v1.52.zip
    "${CMAKE_BINARY_DIR}/external/downloads/imgui-1.52.zip"
)

execute_process(
    COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_BINARY_DIR}/external/downloads/imgui-1.52.zip"
    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}/external/"
)

file(REMOVE_RECURSE "${CMAKE_BINARY_DIR}/external/imgui-1.52/examples/")
file(REMOVE_RECURSE "${CMAKE_BINARY_DIR}/external/imgui-1.52/extra_fonts/")
set(imgui.includeDirectories "${CMAKE_BINARY_DIR}/external/imgui-1.52/")
file(GLOB imgui.sourceFiles "${imgui.includeDirectories}/*.cpp")
