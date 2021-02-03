cmake_minimum_required(VERSION 3.17)
project(ex02)

set(CMAKE_CXX_STANDARD 98)

include_directories(.)

add_executable(ex02
    main.cpp
    Zombie.cpp
    Zombie.hpp
    ZombieEvent.cpp
    ZombieEvent.hpp)
