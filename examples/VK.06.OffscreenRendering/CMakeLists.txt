
get_filename_component(target "${CMAKE_CURRENT_SOURCE_DIR}" NAME)
set(sourcePath "${CMAKE_CURRENT_SOURCE_DIR}/source/")
dst_add_executable_ex(
    target ${target}
    folder examples
    buildDependencies Dynamic_Static.Graphics
    linkLibraries Dynamic_Static.Graphics
    sourceFiles
        ${sourcePath}/Main.cpp
)
