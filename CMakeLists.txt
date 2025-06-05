cmake_minimum_required(VERSION 3.10)
project(AVLTestProject)

# Tell CMake where to find the installed AVLDictionary
set(CMAKE_PREFIX_PATH "D:/hetavi_lib/dist")

# Include the header
include_directories(${CMAKE_PREFIX_PATH}/include)

# Link the library
link_directories(${CMAKE_PREFIX_PATH}/lib)

# Define the executable
add_executable(main main.cpp)
add_executable(test test.cpp)

# Link the static library
target_link_libraries(main AVLDictionary)
target_link_libraries(test AVLDictionary)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
