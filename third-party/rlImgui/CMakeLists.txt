cmake_minimum_required(VERSION 3.16)
project(rlImgui)

add_library(rlImgui)
target_sources(rlImgui PRIVATE "rlImGui.cpp" "rlImGui.h")
target_include_directories(rlImgui PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/")
target_link_libraries(rlImgui PUBLIC imgui raylib_static)