# Arquitectura de un Organismo Cognitivo Homeostático

*Borrador inicial*

## Visión

Objetivo: diseñar un organismo cognitivo que nazca ignorante, aprenda,
madure, reorganice sus creencias y mantenga un estado de equilibrio
dinámico (homeostasis cognitiva), en lugar de maximizar únicamente el
conocimiento.

## Principios

-   La inteligencia emerge de la cooperación entre módulos
    especializados.
-   Aprender implica reorganizar modelos internos, no solo acumular
    datos.
-   Olvidar es una función adaptativa.
-   El sistema debe minimizar consumo energético y complejidad
    innecesaria.
-   La estabilidad es dinámica, no estática.

------------------------------------------------------------------------

# Fisiología del organismo

## Nivel 1 -- Estado del organismo

Variables internas:

-   Energía
-   Curiosidad
-   Fatiga
-   Incertidumbre
-   Confianza
-   Coherencia interna

Estas variables gobiernan el comportamiento global.

------------------------------------------------------------------------

## Nivel 2 -- Metabolismo cognitivo

Ciclo permanente:

1.  Percibir
2.  Evaluar
3.  Decidir
4.  Actuar
5.  Observar consecuencias
6.  Actualizar modelos internos

El objetivo no es maximizar información sino mantener homeostasis
cognitiva.

------------------------------------------------------------------------

## Nivel 3 -- Memoria

Tipos de memoria independientes:

-   Memoria inmediata
-   Memoria episódica
-   Memoria semántica
-   Memoria procedimental
-   Memoria afectiva (valoraciones del sistema)

Cada una posee reglas propias de consolidación y olvido.

------------------------------------------------------------------------

## Nivel 4 -- Atención

La atención es el recurso más escaso.

Responsabilidades:

-   Seleccionar qué merece procesamiento.
-   Ignorar ruido.
-   Asignar recursos computacionales.
-   Detectar novedad.

------------------------------------------------------------------------

## Nivel 5 -- Órganos cognitivos

No existe una red universal.

Existen órganos especializados.

Ejemplos:

-   Detector de novedad
-   Predictor
-   Detector de contradicciones
-   Estimador de incertidumbre
-   Integrador causal
-   Planificador
-   Traductor entre representaciones
-   Coordinador general

Cada órgano tiene una única responsabilidad.

------------------------------------------------------------------------

# Homeostasis cognitiva

Equilibrio entre:

-   Conocimiento
-   Incertidumbre
-   Consumo energético
-   Adaptabilidad
-   Robustez

No todo problema debe resolverse. No toda información debe almacenarse.

------------------------------------------------------------------------

## Representación del conocimiento y gestión de la incertidumbre

Una inteligencia madura no se caracteriza únicamente por la cantidad de conocimiento que posee, sino por su capacidad para distinguir entre aquello que sabe, aquello que infiere y aquello que desconoce.

El organismo no debe asumir que toda representación interna constituye un hecho. Cada idea, concepto o creencia deberá conservar información sobre su origen, el grado de confianza asociado y la posibilidad de ser revisada.

Toda representación cognitiva estará compuesta, como mínimo, por los siguientes atributos:

### Origen

Indica de dónde proviene la información.

Ejemplos:

* Observación directa.
* Inferencia a partir de otras creencias.
* Aprendizaje de otro organismo.
* Hipótesis generada internamente.
* Conocimiento heredado o innato.

El origen nunca debe perderse durante la vida del organismo.

### Confianza

Representa el grado de evidencia acumulada que respalda una creencia.

La confianza no es un valor fijo. Debe modificarse continuamente conforme el organismo interactúe con el entorno.

Las observaciones repetidas incrementan la confianza.

Las contradicciones la disminuyen.

### Revisabilidad

Toda creencia debe indicar qué tan susceptible es de ser modificada.

No todas las creencias poseen el mismo nivel de estabilidad.

Algunas representan observaciones recientes.

Otras constituyen modelos profundamente consolidados.

La madurez no consiste en impedir el cambio, sino en saber cuándo una creencia debe mantenerse y cuándo debe reorganizarse.

### Principio de incertidumbre explícita

El organismo nunca debe verse obligado a responder únicamente porque posee información parcial.

Una respuesta válida puede ser:

> "No poseo evidencia suficiente para llegar a una conclusión."

La incertidumbre constituye un estado interno legítimo del sistema y forma parte de su homeostasis cognitiva.

### Separación entre conocimiento, inferencia e hipótesis

Toda representación interna deberá pertenecer a una de estas categorías:

* **Conocimiento:** información respaldada por suficiente evidencia.
* **Inferencia:** conclusión obtenida a partir del conocimiento disponible.
* **Hipótesis:** explicación provisional que aún requiere validación.

El organismo debe ser consciente de la categoría a la que pertenece cada representación y utilizar dicha clasificación durante el proceso de toma de decisiones.

### Objetivo

El propósito del organismo no consiste en eliminar completamente la incertidumbre.

Su propósito consiste en administrarla de manera eficiente.

La inteligencia no debe medirse por la cantidad de respuestas que produce, sino por su capacidad para reconocer los límites de su conocimiento y decidir cuándo observar más, cuándo formular hipótesis y cuándo actuar.

------------------------------------------------------------------------

# Madurez

La madurez se define como:

> Capacidad de modificar los propios preceptos cuando la evidencia
> contradice el modelo interno sin perder coherencia global.

------------------------------------------------------------------------

# Preguntas fundacionales

1.  ¿Qué es aprender?
2.  ¿Qué es una creencia?
3.  ¿Qué es olvidar?
4.  ¿Qué significa comprender?
5.  ¿Qué inicia una acción?
6.  ¿Cómo emerge un valor?
7.  ¿Cómo se reorganiza una creencia?
8.  ¿Qué constituye la identidad del organismo?
9.  ¿Cómo medir la homeostasis cognitiva?
10. ¿Qué condiciones producen desarrollo y cuáles producen deterioro?

------------------------------------------------------------------------

# Hoja de ruta inicial

## Etapa 0

Definir principios filosóficos y sistémicos.

## Etapa 1

Construir el metabolismo cognitivo.

## Etapa 2

Implementar memorias independientes.

## Etapa 3

Implementar atención.

## Etapa 4

Crear órganos cognitivos mínimos.

## Etapa 5

Diseñar comunicación entre órganos.

## Etapa 6

Agregar aprendizaje continuo.

## Etapa 7

Agregar reorganización de modelos.

## Etapa 8

Incorporar interacción con el entorno.

## Etapa 9

Evaluar aparición de conductas emergentes.

## Estructura de archivos

organism/
│
├── core/
│   ├── organism.c
│   ├── endocrine.c
│   ├── homeostasis.c
│   └── metabolism.c
│
├── organs/
│   ├── novelty.c
│   ├── memory.c
│   ├── prediction.c
│   └── contradiction.c
│
├── include/
│   ├── organism.h
│   ├── organ.h
│   └── homeostasis.h
│
├── examples/
│
└── Makefile

## Nota final

La hipótesis central no es construir un modelo gigantesco, sino un
organismo compuesto por procesos especializados cuya inteligencia emerja
de su cooperación y de su capacidad para mantener un equilibrio dinámico
mientras aprende.

El flujo del sistema sería así:
Homeostasis
        │
        ▼
Sistema Endocrino
        │
        ▼
Hormonas
        │
        ▼
Órganos
        │
        ▼
Cambios
        │
        ▼
Homeostasis
