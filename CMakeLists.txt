cmake_minimum_required(VERSION 4.4)
project(ProjectInfrared)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProjectInfrared main.cpp
        BaseObject.cpp
        BaseObject.h
        Player.cpp
        Player.h
        Enemy.cpp
        Enemy.h)
