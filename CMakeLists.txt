cmake_minimum_required(VERSION 3.16)

project(
    Seed
    VERSION 0.0.1
    DESCRIPTION "Homeostatic Cognitive Organism"
    LANGUAGES C
)

###############################################################################
# Configuración
###############################################################################

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

###############################################################################
# Includes
###############################################################################

include_directories(include)

###############################################################################
# Código fuente
###############################################################################

file(GLOB_RECURSE SOURCES
    src/*.c
)

###############################################################################
# Ejecutable
###############################################################################

add_executable(seed ${SOURCES})

###############################################################################
# Opciones del compilador
###############################################################################

target_compile_options(seed PRIVATE

    -Wall
    -Wextra
    -Wpedantic

    -Wshadow
    -Wconversion
    -Wsign-conversion

    -Wdouble-promotion

    -Wformat=2

)