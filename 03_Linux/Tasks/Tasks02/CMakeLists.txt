cmake_minimum_required(VERSION 3.12)
project(MySharedLibrary)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)

# Define the library
add_library(MyLibrary SHARED my_library.cc)

# Define the executable
add_executable(MyApp T02_cmake_ToGenerate_shared_lib.cc)

# Link the executable with the library
target_link_libraries(MyApp PRIVATE MyLibrary)
