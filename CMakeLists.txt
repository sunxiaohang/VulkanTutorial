cmake_minimum_required(VERSION 3.0.0)
project(VulkanTutorial VERSION 0.1.0 LANGUAGES C CXX)
configure_file(VulkanTutorialConfig.h.in VulkanTutorialConfig.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(./Library/glfw-3.3.8/include)
include_directories(./Library/glm)
include_directories(./Library/vulkan-sdk/Include)

link_directories(${CMAKE_SOURCE_DIR}/Library/glfw-3.3.8/lib)
link_directories(${CMAKE_SOURCE_DIR}/Library/vulkan-sdk/Lib)

set(SRC_LIST
    Utility.cpp
    Framework.cpp
    VulkanTutorial.cpp)
add_executable(${PROJECT_NAME} ${SRC_LIST})

find_library(Vulkan_LIBRARY NAMES vulkan-1 vulkan PATHS ${CMAKE_SOURCE_DIR}/Library/vulkan-sdk/Lib)
find_library(Vulkan_LIBRARY NAMES vulkan-1 vulkan PATHS ${CMAKE_SOURCE_DIR}/Library/glfw-3.3.8/lib)

target_link_libraries(
    ${PROJECT_NAME}
    vulkan-1.lib
    glfw3.lib)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})