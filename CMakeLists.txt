cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(MiProyecto)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Archivos fuente
add_executable(mi_app main.cpp)
