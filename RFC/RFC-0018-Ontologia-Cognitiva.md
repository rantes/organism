# RFC-0018 — Ontología Cognitiva

**Estado:** Borrador

**Depende de:**

* RFC-0000 — Filosofía del Proyecto
* RFC-0008 — Memoria Cognitiva
* RFC-0009 — Aprendizaje Cognitivo
* RFC-0010 — Predicción Cognitiva
* RFC-0011 — Detección de Contradicciones
* RFC-0013 — Formación de Conceptos
* RFC-0015 — Introspección Cognitiva
* RFC-0016 — Madurez Cognitiva

---

# 1. Propósito

La Ontología Cognitiva define los tipos fundamentales de entidades que el organismo puede representar internamente.

No describe el mundo.

Describe la estructura mínima necesaria para que el organismo pueda comprenderlo.

---

# 2. Principio Fundamental

El organismo nunca conoce la realidad directamente.

Únicamente conoce representaciones internas construidas a partir de la experiencia.

La ontología describe dichas representaciones.

---

# 3. Definición

Una entidad ontológica constituye cualquier objeto cognitivo capaz de participar en el razonamiento del organismo.

Toda entidad posee identidad propia.

---

# 4. Objetivos

La ontología deberá permitir representar:

* objetos;
* propiedades;
* relaciones;
* eventos;
* procesos;
* agentes;
* contextos;
* conceptos;
* estados;
* acciones.

---

# 5. Principios

La ontología deberá ser:

* extensible;
* independiente del lenguaje;
* independiente de la implementación;
* coherente;
* evolutiva.

---

# 6. Entidades Fundamentales

Toda representación cognitiva pertenecerá, al menos, a una de las siguientes categorías.

## Objeto

Entidad relativamente persistente.

Ejemplos:

* piedra;
* árbol;
* persona;
* computadora.

---

## Agente

Objeto capaz de ejecutar acciones.

Ejemplos:

* humano;
* animal;
* organismo cognitivo.

---

## Acción

Cambio producido por un agente.

Ejemplos:

* mover;
* construir;
* hablar;
* aprender.

---

## Evento

Suceso observable.

Ejemplos:

* explosión;
* nacimiento;
* conversación.

---

## Estado

Condición temporal de una entidad.

Ejemplos:

* abierto;
* cansado;
* caliente;
* activo.

---

## Propiedad

Característica atribuible a una entidad.

Ejemplos:

* color;
* tamaño;
* peso;
* velocidad.

---

## Relación

Vínculo entre dos o más entidades.

Ejemplos:

* pertenece a;
* contiene;
* utiliza;
* causa;
* depende de.

---

## Concepto

Abstracción construida por el organismo para describir múltiples experiencias.

---

## Contexto

Conjunto de condiciones que modifican el significado de una observación.

---

## Proceso

Secuencia organizada de eventos relacionados.

---

# 7. Identidad

Toda entidad deberá poseer una identidad estable.

La identidad permanecerá independiente de:

* nombre;
* idioma;
* representación textual.

---

# 8. Persistencia

Las entidades podrán:

* crearse;
* evolucionar;
* fusionarse;
* dividirse;
* desaparecer.

La ontología admite cambio.

---

# 9. Relaciones

Las relaciones también constituyen entidades cognitivas.

Podrán poseer:

* confianza;
* evidencia;
* duración;
* contexto.

---

# 10. Contextualidad

Ninguna entidad posee significado absoluto.

Todo significado depende del contexto en el cual participa.

---

# 11. Abstracción

Las entidades podrán existir en múltiples niveles.

Ejemplo:

```text id="n0dlyi"
Animal

↓

Mamífero

↓

Perro

↓

Border Collie

↓

Mi perro
```

Todos representan entidades válidas.

---

# 12. Evidencia

Toda entidad deberá mantener información acerca de:

* origen;
* evidencia;
* confianza;
* revisiones;
* fecha de creación.

---

# 13. Incertidumbre

La existencia o características de una entidad podrán poseer incertidumbre.

La ontología deberá representar dicha incertidumbre explícitamente.

---

# 14. Contradicción

Una entidad podrá participar simultáneamente en múltiples hipótesis incompatibles mientras exista evidencia insuficiente.

---

# 15. Independencia del Lenguaje

Las palabras constituyen únicamente referencias externas.

La ontología nunca dependerá del idioma utilizado.

---

# 16. Observabilidad

El organismo deberá responder:

* ¿Qué entidades conozco?
* ¿Qué relaciones existen?
* ¿Qué evidencia las respalda?
* ¿Qué nivel de confianza poseen?
* ¿Qué entidades han cambiado recientemente?

---

# 17. No Objetivos

La Ontología Cognitiva no constituye:

* una base de datos;
* un grafo RDF;
* un esquema UML;
* un modelo orientado a objetos.

Podrá implementarse mediante cualquiera de ellos, pero permanece independiente de todos.

---

# 18. Principio Arquitectónico

El organismo razona utilizando entidades ontológicas.

Nunca razona directamente sobre palabras, estructuras de almacenamiento o implementaciones específicas.

La ontología representa el nivel semántico del conocimiento.

---

# 19. Principio de Evolución

La ontología nunca será definitiva.

Nuevos tipos de entidades podrán aparecer conforme el organismo descubra estructuras del mundo que no puedan describirse adecuadamente mediante las categorías existentes.

---

# 20. Principio de Persistencia

La calidad de la adaptación del organismo dependerá de la calidad de su representación interna del mundo.

Una ontología más coherente permitirá construir mejores conceptos, realizar mejores predicciones y aprender con mayor eficiencia.

La ontología constituye el lenguaje interno mediante el cual el organismo interpreta la realidad.
