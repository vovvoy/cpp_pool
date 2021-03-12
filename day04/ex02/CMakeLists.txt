cmake_minimum_required(VERSION 3.17)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex02 main.cpp ISquad.hpp ISpaceMarine.hpp Squad.cpp Squad.hpp TacticalMarine.cpp TacticalMarine.hpp AssaultTerminator.cpp AssaultTerminator.hpp)