# RFC-0005 — Sistema Endocrino Cognitivo

**Estado:** Borrador

**Depende de:**

* RFC-0000 — Filosofía del Proyecto
* RFC-0003 — Homeostasis Cognitiva
* RFC-0004 — Metabolismo Cognitivo

---

# 1. Propósito

El Sistema Endocrino Cognitivo constituye el mecanismo mediante el cual el organismo regula su actividad interna.

No ejecuta órganos.

No toma decisiones cognitivas.

Su responsabilidad consiste en modificar el entorno fisiológico del organismo para que los distintos órganos decidan, de manera autónoma, cuándo resulta apropiado activarse.

---

# 2. Justificación

En los organismos biológicos no existe un planificador central que ordene explícitamente el funcionamiento de cada órgano.

La coordinación emerge mediante señales químicas distribuidas.

Seed adopta el mismo principio.

La cooperación entre órganos debe producirse a través de un medio interno compartido y no mediante llamadas directas entre componentes.

---

# 3. Principio Fundamental

Los órganos nunca deben depender directamente unos de otros.

Toda coordinación deberá realizarse mediante señales endocrinas.

Los órganos observan el estado hormonal del organismo y responden de acuerdo con su propia especialización.

---

# 4. Objetivos

El Sistema Endocrino Cognitivo deberá:

* distribuir señales regulatorias;
* mantener desacoplamiento entre órganos;
* facilitar comportamientos emergentes;
* adaptar dinámicamente la actividad del organismo;
* reducir la complejidad de coordinación.

---

# 5. Hormonas Cognitivas

Las hormonas representan señales globales que describen el estado funcional del organismo.

No constituyen emociones.

No representan conocimiento.

Representan condiciones fisiológicas que afectan el comportamiento de todos los órganos.

---

# 6. Propiedades

Toda hormona deberá cumplir las siguientes características:

* intensidad variable;
* evolución continua;
* degradación natural;
* posibilidad de ser modificada por múltiples órganos;
* efecto sobre múltiples órganos simultáneamente.

---

# 7. Hormonas iniciales

El conjunto inicial podrá incluir:

## Exploración

Incrementa la probabilidad de ejecutar procesos orientados al descubrimiento de información nueva.

---

## Amenaza

Representa el nivel de riesgo estimado.

Favorece respuestas rápidas y reduce actividades exploratorias.

---

## Contradicción

Indica el nivel de inconsistencia detectado entre los modelos internos.

Favorece procesos de reorganización.

---

## Confianza

Expresa el grado de estabilidad de los modelos actuales.

Niveles bajos favorecen revisión.

Niveles altos favorecen explotación.

---

## Novedad

Representa la presencia de estímulos significativamente diferentes del conocimiento existente.

---

## Entropía Cognitiva

Estimación del nivel de desorden interno del organismo.

Cuando aumenta, podrán activarse procesos de reorganización y consolidación.

---

# 8. Ciclo Endocrino

En cada ciclo metabólico el sistema endocrino deberá:

1. Leer el estado homeostático.
2. Recibir modificaciones provenientes de los órganos.
3. Aplicar degradación natural.
4. Calcular nuevas concentraciones hormonales.
5. Publicar el nuevo estado endocrino.

---

# 9. Activación de órganos

Los órganos nunca serán llamados directamente por el Sistema Endocrino.

Cada órgano decidirá su activación consultando el estado hormonal.

Ejemplo conceptual:

```text
Curiosidad alta

↓

Exploración alta

↓

Memoria decide consolidar

Prediction decide simular

Novelty decide explorar
```

La decisión pertenece siempre al órgano.

---

# 10. Retroalimentación

Los órganos no solo consumen hormonas.

También las modifican.

Toda ejecución produce cambios endocrinos.

Ejemplo:

* aprender reduce incertidumbre;
* resolver contradicciones incrementa coherencia;
* explorar consume energía;
* consolidar memoria reduce entropía.

---

# 11. Desacoplamiento

Ningún órgano podrá invocar directamente funciones pertenecientes a otro órgano.

La única información compartida será:

* estado homeostático;
* estado hormonal;
* memoria común cuando corresponda.

Este principio garantiza independencia entre sistemas.

---

# 12. Escalabilidad

Nuevos órganos podrán incorporarse sin modificar el Sistema Endocrino.

Será suficiente con que:

* observen las hormonas relevantes;
* indiquen qué hormonas modifican tras su ejecución.

---

# 13. Observabilidad

El organismo deberá poder responder:

* ¿Qué hormonas presentan mayor concentración?
* ¿Qué órganos modificaron dichas hormonas?
* ¿Qué cambios endocrinos ocurrieron durante el último ciclo?
* ¿Qué tendencia presentan las variables hormonales?

---

# 14. Diferencias respecto a un Scheduler

El Sistema Endocrino Cognitivo no asigna tareas.

No mantiene colas de ejecución.

No posee conocimiento de la lógica interna de los órganos.

Su función consiste únicamente en mantener el medio fisiológico compartido sobre el cual emergen las decisiones individuales de cada órgano.

---

# 15. Principio Arquitectónico

La inteligencia del organismo no emerge de un controlador central.

Emerge de la interacción continua entre órganos especializados coordinados mediante un entorno endocrino común.

Toda evolución futura del organismo deberá preservar este principio.
