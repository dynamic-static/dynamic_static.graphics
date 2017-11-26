
get_filename_component(target "${CMAKE_CURRENT_SOURCE_DIR}" NAME)
set(includePath "${CMAKE_CURRENT_SOURCE_DIR}/include/")
set(includeFiles
)

set(sourcePath "${CMAKE_CURRENT_SOURCE_DIR}/source/")
set(sourceFiles
    ${sourcePath}/Main.cpp
)

add_executable(${target} "${includeFiles}" "${sourceFiles}")
dst_setup_target(${target} "${includeFiles}" "${sourceFiles}")
target_link_libraries(${target} Dynamic_Static.Graphics)
set_target_properties(${target} PROPERTIES FOLDER Examples)
add_dependencies(${target} Dynamic_Static.Graphics)
