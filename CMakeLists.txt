cmake_minimum_required(VERSION 4.2)
project(learn_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(learn_cpp main.cpp
        aula_for.cpp
        aula_for.h
        arrays.cpp
        arrays.h
        ponteiros/ponteiros.cpp
        ponteiros/ponteiros.h
        ponteiros/exercise/change.cpp
        ponteiros/exercise/change.h
        ponteiros/exercise/calculadora.cpp
        ponteiros/exercise/calculadora.h
        ponteiros/exercise/potencias.cpp
        ponteiros/exercise/potencias.h
        ponteiros/exercise/temper.cpp
        ponteiros/exercise/temper.h
        ponteiros/exercise/counter_n_p.cpp
        ponteiros/exercise/counter_n_p.h
        referencias/exercises/doubles.cpp
        referencias/exercises/doubles.h
)
