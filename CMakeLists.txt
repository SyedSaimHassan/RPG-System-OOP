cmake_minimum_required(VERSION 3.28)    

include_directories(include)

file(GLOB SOURCES src/*.cpp)

add_executable(GW-RPG ${SOURCES})
