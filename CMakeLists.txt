cmake_minimum_required(VERSION 3.6)
project(DameDePique)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Joueur.cpp Joueur.h Tour.cpp Tour.h)
add_executable(DameDePique ${SOURCE_FILES} main.cpp)