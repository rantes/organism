# Seed

A homeostatic cognitive organism.

Status:

Early research.

# Requisitos

Actualmente Seed se desarrolla y prueba sobre Ubuntu 20.04 LTS, aunque el objetivo es que sea completamente portable.

## Requisitos mínimos

| Herramienta | Versión recomendada |
| ----------- | ------------------- |
| GCC         | 9.4 o superior      |
| CMake       | 3.16 o superior     |
| GNU Make    | 4.x                 |
| Git         | 2.x                 |

## Herramientas recomendadas

Estas herramientas no son obligatorias para compilar, pero sí para mantener la calidad del proyecto.

| Herramienta  | Propósito                     |
| ------------ | ----------------------------- |
| clang-format | Formato automático del código |
| clang-tidy   | Análisis estático             |
| gdb          | Depuración                    |
| valgrind     | Detección de fugas de memoria |
| cppcheck     | Análisis estático adicional   |

## Instalación (Ubuntu)

```bash
sudo apt update

sudo apt install \
    build-essential \
    cmake \
    clang \
    clang-format \
    clang-tidy \
    gdb \
    valgrind \
    cppcheck \
    git
```

## Compilación

```bash
mkdir build

cd build

cmake ..

make
```

## Ejecución

```bash
./seed
```

## Filosofía

Seed busca mantener el menor número posible de dependencias externas.

Siempre que sea razonable, se preferirá utilizar la biblioteca estándar del lenguaje C antes que incorporar nuevas dependencias.

El objetivo es que el proyecto pueda compilarse con un entorno estándar sin requerir frameworks, SDKs o librerías de terceros.

Toda dependencia externa debe estar justificada.


RFC-0000  Filosofía del Proyecto
RFC-0001  Coding Style
RFC-0002  Arquitectura General
RFC-0003  Homeostasis Cognitiva
RFC-0004  Metabolismo Cognitivo
RFC-0005  Memoria
RFC-0006  Scheduler
RFC-0007  Órganos Cognitivos
RFC-0008  Protocolo de Comunicación
RFC-0009  Aprendizaje
RFC-0010  Madurez
RFC-0011  Ética Emergente
RFC-0012  Persistencia

