# RFC-0001 --- Coding Style

Estado: Borrador

## Objetivo

Definir un estilo de código único para todo el proyecto.

## Principios

-   Legibilidad sobre ingenio.
-   Una función, una responsabilidad.
-   Los comentarios explican el **por qué**, no el **cómo**.

## Llaves

Se utiliza el estilo **Attach (K&R)**.

``` c
if (condition) {
    do_something();
} else {
    do_something_else();
}
```

## Indentación

-   4 espacios.
-   Sin tabulaciones.

## Longitud de línea

-   100 caracteres.

## Nombres

### Funciones

snake_case con verbos: `mind_tick()`, `memory_store()`.

### Variables

snake_case: `energy_level`.

### Tipos

PascalCase: `Mind`, `Organism`.

### Constantes

Mayúsculas: `SEED_MAX_MEMORY`.

## Comentarios

Explican decisiones y restricciones, no el funcionamiento obvio.

## Herramientas

### .clang-format

``` yaml
BasedOnStyle: LLVM
IndentWidth: 4
ColumnLimit: 100
BreakBeforeBraces: Attach
PointerAlignment: Left
SortIncludes: false
```

### clang-tidy

Obligatorio para análisis estático.

## Evolución

Este RFC podrá evolucionar junto con el proyecto.
