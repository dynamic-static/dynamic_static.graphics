
# CMake configuration for ComputeFluid2D
get_filename_component(target "${CMAKE_CURRENT_SOURCE_DIR}" NAME)
dst_add_executable(
    target ${target}
    folder examples
    buildDependencies Dynamic_Static.Graphics
    linkLibraries Dynamic_Static.Graphics
    sourceFiles
        ${CMAKE_CURRENT_SOURCE_DIR}/ComputePipeline.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ComputeSurface.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Main.cpp
)
