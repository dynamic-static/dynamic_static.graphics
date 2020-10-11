
# ==========================================
#   Copyright (c) 2017-2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

macro(dst_add_example target)
    dst_add_executable(
        target ${target}
        folder dynamic_static.graphics/examples
        linkLibraries dynamic_static.graphics
        sourceFiles "${CMAKE_CURRENT_SOURCE_DIR}/${target}.cpp"
    )
endmacro()
dst_add_example(triangle)
