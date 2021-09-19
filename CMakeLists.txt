cmake_minimum_required(VERSION 3.20)
project(IT_2004Game)

set(CMAKE_CXX_STANDARD 14)

add_executable(IT_2004Game main.cpp Game.cpp Game.h MainCharacter.h MainCharacter.cpp Enemy.h Enemy.cpp)
