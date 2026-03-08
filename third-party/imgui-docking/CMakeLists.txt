cmake_minimum_required(VERSION 3.16)
project(imgui)

set(IMGUI_VERSION_DIR "imgui-1.89.7-docking")

add_library(imgui)
target_sources(imgui PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/${IMGUI_VERSION_DIR}/imgui.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/${IMGUI_VERSION_DIR}/imgui_demo.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/${IMGUI_VERSION_DIR}/imgui_draw.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/${IMGUI_VERSION_DIR}/imgui_tables.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/${IMGUI_VERSION_DIR}/imgui_widgets.cpp"
)

target_include_directories(imgui PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/${IMGUI_VERSION_DIR}")