# ========================================================================
#
#      DESCRIPTION:
#         This is the main CMake configuration file of the project.
#
#      C++ STANDARD:
#         C++11
#       
#      TARGET OS:
#         Cross-Platform (Windows, Linux, macOS)
#   
#      LAST MODIFIED:
#         June 25, 2026
#
# ========================================================================

cmake_minimum_required(VERSION 3.16)

project(WarSimulator LANGUAGES CXX)

# C++ standard configuration
set(CMAKE_CXX_STANDARD 11) # use C++11 standard
set(CMAKE_CXX_STANDARD_REQUIRED ON) # enforce standard requirement
set(CMAKE_CXX_EXTENSIONS OFF) # disable compiler-specific extensions

# compile_commands.json for IDEs 
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# executable target
add_executable(${PROJECT_NAME}
    src/army/Army.cpp
    src/army/Commander.cpp
    src/army/Power.cpp
    src/systems/Multiplier.cpp
    src/systems/Rebirth.cpp
    src/ui/Menus.cpp
    src/core/Main.cpp
    utils/src/console/Clear.cpp
    utils/src/console/Color.cpp
    utils/src/console/Pause.cpp
    utils/src/math/Clamp.cpp
    utils/src/text/Effect.cpp
    utils/src/text/Format.cpp
)

# include directories
target_include_directories(${PROJECT_NAME}
    PRIVATE
        "${PROJECT_SOURCE_DIR}/include"
        "${PROJECT_SOURCE_DIR}/utils/include"
)

# compiler warning settings
if(MSVC) 
   # Microsoft Visual C++ compiler settings
   target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
   # GCC / Clang compiler settings
   target_compile_options(${PROJECT_NAME} PRIVATE
       -Wall
       -Wextra
       -Wpedantic
   )
endif()