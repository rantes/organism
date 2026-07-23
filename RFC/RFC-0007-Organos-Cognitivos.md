# RFC-0007 — Órganos Cognitivos

**Estado:** Borrador

**Depende de:**

* RFC-0000 — Filosofía del Proyecto
* RFC-0003 — Homeostasis Cognitiva
* RFC-0004 — Metabolismo Cognitivo
* RFC-0005 — Sistema Endocrino Cognitivo
* RFC-0006 — Sistema de Atención

---

# 1. Propósito

Los órganos cognitivos constituyen las unidades funcionales especializadas del organismo.

Cada órgano posee una única responsabilidad claramente definida.

La inteligencia global del organismo emerge de la cooperación entre múltiples órganos, nunca de uno solo.

---

# 2. Principio Fundamental

Todo órgano deberá cumplir una única responsabilidad.

No deberá incorporar lógica perteneciente a otros órganos.

La especialización favorece la simplicidad, el desacoplamiento y la evolución independiente.

---

# 3. Definición

Un órgano cognitivo es un componente capaz de:

* observar el estado interno del organismo;
* interpretar señales endocrinas;
* realizar trabajo especializado;
* modificar el estado del organismo;
* consumir recursos cognitivos.

---

# 4. Ciclo de vida

Todo órgano participa del metabolismo mediante el siguiente ciclo:

```text
Observar

↓

Evaluar

↓

Decidir

↓

Ejecutar

↓

Modificar Homeostasis

↓

Modificar Hormonas

↓

Finalizar
```

El órgano nunca ejecuta trabajo fuera de este ciclo.

---

# 5. Responsabilidades

Todo órgano deberá definir explícitamente:

* su propósito;
* qué información consume;
* qué información produce;
* qué variables homeostáticas observa;
* qué hormonas observa;
* qué hormonas modifica;
* cuál es su costo metabólico.

---

# 6. Restricciones

Un órgano no podrá:

* invocar directamente otro órgano;
* modificar el estado interno de otro órgano;
* alterar la homeostasis sin registrar dicho cambio;
* consumir recursos sin declararlos.

---

# 7. Activación

Los órganos no son ejecutados por otros órganos.

Cada órgano determina autónomamente si debe activarse, considerando:

* estado homeostático;
* estado endocrino;
* información disponible;
* presupuesto cognitivo.

---

# 8. Comunicación

La comunicación entre órganos será exclusivamente indirecta.

Los mecanismos permitidos son:

* Homeostasis.
* Hormonas.
* Memoria compartida.
* Eventos definidos por el metabolismo.

Se prohíbe el acoplamiento directo entre órganos.

---

# 9. Estado interno

Cada órgano podrá mantener estado propio.

Ejemplos:

* cachés;
* modelos internos;
* estadísticas;
* parámetros de aprendizaje.

Este estado pertenece únicamente al órgano.

---

# 10. Fallos

El fallo de un órgano no deberá comprometer el funcionamiento del organismo completo.

Los demás órganos deberán continuar operando siempre que la homeostasis lo permita.

---

# 11. Escalabilidad

El organismo podrá incorporar nuevos órganos sin modificar los ya existentes.

La incorporación de un nuevo órgano requerirá únicamente:

* registrarlo;
* declarar sus dependencias;
* declarar su costo metabólico.

---

# 12. Observabilidad

Todo órgano deberá exponer, como mínimo:

* nombre;
* estado;
* costo acumulado;
* número de activaciones;
* tiempo de ejecución;
* hormonas observadas;
* hormonas modificadas.

---

# 13. Contrato mínimo

Todo órgano deberá implementar una interfaz equivalente al siguiente comportamiento conceptual:

```text
Inicializar

↓

Evaluar condiciones

↓

¿Debe ejecutarse?

↓

No → Esperar

Sí

↓

Ejecutar

↓

Actualizar estado

↓

Reportar cambios
```

La implementación concreta podrá variar, pero el contrato funcional deberá mantenerse.

---

# 14. Principio Arquitectónico

Los órganos no representan algoritmos.

Representan capacidades.

Un algoritmo puede cambiar.

La capacidad permanece.

Por esta razón, los RFC describen responsabilidades funcionales y no implementaciones específicas.

---

# 15. Órganos iniciales

El conjunto inicial previsto para Seed incluye:

* Memoria
* Predicción
* Detección de contradicciones
* Novedad
* Aprendizaje
* Lenguaje (futuro)
* Planificación (futuro)

Cada uno será definido mediante su propio RFC.

---

# 16. Principio de Evolución

El organismo podrá desarrollar nuevos órganos siempre que estos:

* aporten una nueva capacidad;
* respeten la homeostasis;
* cooperen mediante el sistema endocrino;
* mantengan el desacoplamiento arquitectónico.

La evolución del organismo deberá producirse mediante la incorporación y maduración de capacidades, nunca mediante el crecimiento indiscriminado de un único componente.
