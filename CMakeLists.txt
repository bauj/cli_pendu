cmake_minimum_required(VERSION 3.10)

project(penduCLI VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BUILD_TYPE Debug)

set(SOURCES
	src/pendu.cpp
	src/jeu.cpp
)

set(HEADERS
	inc/jeu.hpp
	inc/motsPossibles.hpp
	inc/constantes.hpp
)

include_directories(inc)

add_executable(pendu ${SOURCES} ${HEADERS})
