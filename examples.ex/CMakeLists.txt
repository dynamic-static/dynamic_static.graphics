
# ==========================================
#   Copyright (c) 2018-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

macro(CreateExample target)
    DstCreateExecutable(
        target ${target}
        folder Dynamic_Static.Graphics/examples/

        sharedLibraries
            ${glew.sharedLibraries}

        staticLibraries
            Dynamic_Static.Graphics

        sourceFiles
            "${CMAKE_CURRENT_LIST_DIR}/${target}.cpp"
    )
endmacro()

CreateExample(Vk.00.PhysicalDevice)
CreateExample(Vk.01.Triangle)
