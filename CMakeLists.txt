
cmake_minimum_required(VERSION 3.19)
project(UltimateDevMenu)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
    src/UI.cpp
    src/Noclip.cpp
    src/ReplayBot.cpp
    src/Clickbot.cpp
    src/HitboxScaler.cpp
    src/DevTools.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_libraries(${PROJECT_NAME} geode)
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")
