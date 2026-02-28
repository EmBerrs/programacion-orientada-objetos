# Practica_04 - Calculadora con Sobrecarga

## Objetivo
Demostrar sobrecarga de funciones: variantes con 2, 0 y 3 parámetros.

## Descripción del Problema
Crear una calculadora cuyas funciones reciben diferente cantidad de parámetros (2, 0 o 3).

## Diagrama de Clases

```
+---------------------------+
|   CalculadoraSobrecargada |
+---------------------------+
| + calcular(double, double)|
| + calcular()              |
| + calcular(a, b, c)       |
+---------------------------+
```

## Compilación

```bash
mkdir build && cd build && cmake .. && cmake --build .
```

## Uso

```bash
./practica_04
```
