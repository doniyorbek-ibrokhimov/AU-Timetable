cmake_minimum_required(VERSION 3.21)
project(AU_Timetable)

set(CMAKE_CXX_STANDARD 14)

add_executable(AU_Timetable
        .idea/.gitignore
        .idea/AU-Timetable.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        main.cpp reader.cpp reader.h cases.cpp cases.h)
