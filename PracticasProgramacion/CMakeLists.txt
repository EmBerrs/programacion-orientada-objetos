cmake_minimum_required(VERSION 3.14)
project(Practicas_Cpp CXX)

set(CMAKE_CXX_STANDARD 17)

foreach(N RANGE 1 26)
    string(LENGTH "${N}" LEN)
    if(LEN EQUAL 1)
        set(SUB "0${N}")
    else()
        set(SUB "${N}")
    endif()
    add_subdirectory(Practica_${SUB})
endforeach()
