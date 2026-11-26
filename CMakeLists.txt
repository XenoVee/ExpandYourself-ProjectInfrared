cmake_minimum_required(VERSION 4.4)
project(ProjectInfrared)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.1.0
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(ProjectInfrared main.cpp
        BaseObject.cpp
        BaseObject.h
        Player.cpp
        Player.h
        Enemy.cpp
        Enemy.h)

#target_compile_features(ProjectInfrared PRIVATE cxx_std_17)
target_link_libraries(ProjectInfrared PRIVATE SFML::Graphics)