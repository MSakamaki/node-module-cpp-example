cmake_minimum_required(VERSION 3.1)

project(addon)

list(APPEND CMAKE_MODULE_PATH 
    ${CMAKE_CURRENT_SOURCE_DIR}/node_modules/node-cmake
)

find_package(NodeJS)

file(GLOB PROJECT_SRC src/*.cc)

add_nodejs_module(${PROJECT_NAME} ${PROJECT_SRC})
