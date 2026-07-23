# RFC-0004 — Metabolismo Cognitivo

**Estado:** Borrador

**Depende de:**

* RFC-0000 — Filosofía del Proyecto
* RFC-0003 — Homeostasis Cognitiva

---

# 1. Propósito

El metabolismo cognitivo define el conjunto de procesos continuos mediante los cuales el organismo administra su actividad interna.

A diferencia de un programa tradicional, el organismo nunca permanece completamente inactivo.

Mientras exista energía disponible, siempre existirán procesos internos ejecutándose.

---

# 2. Definición

Se entiende por metabolismo cognitivo el ciclo permanente de percepción, evaluación, decisión, acción, observación y reorganización del estado interno.

Todo acto cognitivo forma parte del metabolismo.

Pensar consume recursos.

Recordar consume recursos.

Aprender consume recursos.

Olvidar también consume recursos.

---

# 3. Principio Fundamental

Toda actividad cognitiva posee un costo.

Por tanto, ninguna operación será gratuita.

Todo órgano deberá justificar el consumo de recursos que solicita.

---

# 4. Objetivos

El metabolismo cognitivo busca:

* mantener activo al organismo;
* distribuir recursos entre órganos;
* favorecer el aprendizaje continuo;
* limitar el consumo energético;
* preservar la homeostasis.

---

# 5. Ciclo Metabólico

Cada ciclo del organismo seguirá, de manera general, el siguiente flujo:

```text
Percibir

↓

Sistema de Atención

↓

Seleccionar prioridades

↓

Ejecutar órganos

↓

Actualizar memoria

↓

Actualizar homeostasis

↓

Dormir o continuar
```

No todos los órganos participan en todos los ciclos.

El Scheduler determinará cuáles deben ejecutarse.

---

# 6. Componentes del metabolismo

El metabolismo está compuesto por varios procesos cooperativos.

## Percepción

Recibe información del entorno.

Puede provenir de sensores, archivos, APIs, usuarios u otros organismos.

---

## Atención

Determina qué información merece recursos cognitivos.

Su funcionamiento se define en el RFC-0006.

---

## Procesamiento

Los órganos especializados realizan trabajo sobre la información seleccionada.

Ejemplos:

* memoria;
* predicción;
* detección de contradicciones;
* aprendizaje.

---

## Integración

Los resultados generados por los órganos se incorporan al estado interno del organismo.

---

## Homeostasis

Actualiza las variables internas.

Puede modificar prioridades futuras.

---

## Descanso

Cuando el presupuesto cognitivo resulta insuficiente, el metabolismo reducirá o suspenderá actividades no esenciales.

---

# 7. Presupuesto Cognitivo

Cada ciclo dispone de un presupuesto limitado.

Dicho presupuesto puede expresarse en unidades abstractas.

Ejemplo:

```text
Presupuesto total: 100

Memoria: 20

Predicción: 25

Aprendizaje: 30

Contradicciones: 10

Reserva: 15
```

El Scheduler será responsable de distribuir dicho presupuesto.

---

# 8. Costos

Cada órgano deberá declarar:

* costo energético;
* costo temporal;
* prioridad mínima;
* beneficio esperado.

El metabolismo utilizará esta información para decidir qué procesos ejecutar.

---

# 9. Ritmos

No todos los procesos poseen la misma frecuencia.

Ejemplo:

| Proceso             | Frecuencia     |
| ------------------- | -------------- |
| Atención            | Cada ciclo     |
| Memoria de trabajo  | Cada ciclo     |
| Aprendizaje         | Periódico      |
| Consolidación       | Poco frecuente |
| Limpieza de memoria | Eventual       |
| Reorganización      | Bajo demanda   |

El Scheduler administrará dichos ritmos.

---

# 10. Recuperación

El metabolismo deberá incorporar mecanismos para reducir carga.

Ejemplos:

* suspensión temporal de órganos;
* reducción de curiosidad;
* consolidación de memoria;
* eliminación de información irrelevante.

---

# 11. Aprendizaje

Aprender constituye una consecuencia del metabolismo.

No un proceso separado.

Cada interacción modifica, potencialmente, el estado interno del organismo.

---

# 12. Persistencia

El metabolismo nunca termina.

Únicamente cambia de intensidad.

Incluso durante estados de baja actividad podrán ejecutarse procesos internos de:

* consolidación;
* reorganización;
* mantenimiento.

---

# 13. Observabilidad

El organismo deberá poder responder:

* ¿Qué procesos están activos?
* ¿Qué órganos consumen más recursos?
* ¿Qué presupuesto queda disponible?
* ¿Qué procesos fueron suspendidos?
* ¿Por qué fueron suspendidos?

---

# 14. Escalabilidad

El metabolismo no depende de un órgano específico.

Nuevos órganos podrán incorporarse siempre que:

* declaren su costo;
* respeten el presupuesto cognitivo;
* cooperen con el Scheduler;
* actualicen la homeostasis cuando corresponda.

---

# 15. Principio Arquitectónico

El metabolismo constituye el motor permanente del organismo.

Los órganos no ejecutan trabajo por iniciativa propia.

Son activados por el metabolismo conforme al estado interno, al presupuesto disponible y a las prioridades determinadas por el Sistema de Atención.

El metabolismo representa el equivalente funcional al conjunto de procesos fisiológicos que mantienen vivo a un organismo biológico.
