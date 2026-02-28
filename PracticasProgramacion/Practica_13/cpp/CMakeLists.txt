cmake_minimum_required(VERSION 3.14)
project(Practica_13 CXX)
set(CMAKE_CXX_STANDARD 17)
add_executable(practica_13
    main.cpp GestionListas.cpp Persona.cpp Coche.cpp
)
target_include_directories(practica_13 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_link_libraries(practica_13 PRIVATE stdc++)
endif()
