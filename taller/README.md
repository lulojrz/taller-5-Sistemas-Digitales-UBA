# Taller 4 — Máquinas de estados finitos

Diseñar, primero en papel y luego en SystemVerilog, el controlador de un
portón automático. Los ejercicios 1 a 3 agregan comportamiento al mismo
sistema. El 4 ya está resuelto: hay que simularlo y comparar, sobre la forma
de onda, una máquina de Mealy y una de Moore.

Sintaxis, simulación, síntesis y herramientas: `sintaxis.pdf`.

## Cómo trabajar

Para los ejercicios 1 a 3:

1. Identificar las entradas, las salidas y los estados necesarios.
2. Dibujar el diagrama de estados en papel.
3. Indicar sobre el diagrama qué condición produce cada transición.
4. Determinar el valor de las salidas en cada estado.
5. Recién entonces traducir el diseño a SystemVerilog.

`top_module.sv` y `async_button.sv` están provistos: no modificarlos. El
`top_module` conecta el botón con el controlador y enciende las luces.

En el ejercicio 4, `detector_mealy.sv` y `detector_moore.sv` también están
provistos: no hay que completarlos.

Un toque del botón es un pulso breve (`0 ─── 1 ─── 0`). `async_button` lo
conserva hasta el flanco de `clk`. Cada toque debe producir una única
transición. Con `rst`, el portón vuelve a cerrado.

Los testbenches no se modifican.

Cada ejercicio vive en `ejercicios/ejN`. En la carpeta del ejercicio:

```text
make sim     # correr el testbench
make wave    # simular e indicar dónde abrir la traza
```

## Ejercicio 1 — Control básico del portón

FSM de cuatro estados: `CERRADO`, `ABRIENDO`, `ABIERTO`, `CERRANDO`. Empieza
en `CERRADO`.

- El botón solo se atiende en los extremos: en `CERRADO` abre, en `ABIERTO`
  cierra. Durante el movimiento no tiene efecto.
- Tras un ciclo en `ABRIENDO` queda `ABIERTO`; tras un ciclo en `CERRANDO`
  queda `CERRADO`.
- Cada estado enciende su luz; exactamente una encendida.

Completar `porton_fsm.sv`.

## Ejercicio 2 — Un portón que tarda en moverse

La posición es de 2 bits: `00`, `01`, `10`, `11`. El botón solo dispara desde
los extremos (`0` o `3`). En `ABRIENDO` o `CERRANDO` la posición cambia una
unidad por flanco, y se detiene al otro extremo. Tarda 4 ciclos:

```text
CERRADO → 00 ABRIENDO → 01 ABRIENDO → 10 ABRIENDO → 11 ABRIENDO → ABIERTO
ABIERTO → 11 CERRANDO → 10 CERRANDO → 01 CERRANDO → 00 CERRANDO → CERRADO
```

Luces: `led_abriendo` / `led_cerrando` mientras hay orden de mover;
`led_abierto` / `led_cerrado` detenido en un extremo; `luces_posicion` es la
posición actual.

Completar `porton_fsm.sv` y `contador_posicion.sv`.

## Ejercicio 3 — Pausa e inversión del movimiento

Un toque durante el movimiento pausa; el siguiente invierte la dirección.
Si al pausar queda en un extremo (`0` o `3`), pasa a `CERRADO` o `ABIERTO`,
no a pausa. `led_pausa` se enciende detenido en una posición intermedia.

El controlador y el contador actualizan en el mismo flanco: el toque deja
completar el paso ya ordenado y después detiene. Ejemplo: abriendo en `1`,
el toque puede dejarlo pausado en `2`.

Completar `porton_fsm.sv` y `contador_posicion.sv`.

## Ejercicio 4 — Moore vs. Mealy: mismo detector, distinto instante

No hay que implementarlo. Los detectores de la subsecuencia `1101` (con
superposición) ya están en `detector_mealy.sv` y `detector_moore.sv`.

- `led_mealy` (Mealy) puede activarse en el mismo ciclo en que llega el bit
  que completa el patrón.
- `led_moore` (Moore) depende solo del estado: un ciclo después.

Correr `make wave` en `ejercicios/ej4`. Agregar `bit_in`, `clk`, `led_mealy`
y `led_moore`. El flujo es `1 1 0 1 1 0 1 0` (`1101` en las posiciones 1–4
y, superpuesto, en 4–7).

Analizar y responder:

1. Identificar cada detección de `1101` (incluido el solapamiento).
2. Medir la distancia entre un pulso de `led_mealy` y el de `led_moore`.
   Confirmar que es exactamente un ciclo de clock.
3. Explicar en una oración por qué ese corrimiento es inevitable en una
   salida Moore.
