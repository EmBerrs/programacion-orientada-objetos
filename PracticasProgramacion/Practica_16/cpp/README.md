# Practica_16 - Recursividad: Calculadora y Fractales

## Objetivo
Calcular operaciones por sucesiones recursivas y generar fractales (Sierpinski, Polvo de Cantor).

## Diagrama de Clases

```
+---------------------+  +----------+
| CalculadoraRecursiva|  | Fractales|
+---------------------+  +----------+
| * multiplicar()     |  | Sierpinski|
| * potencia()        |  | Cantor   |
| * dividir()         |  +----------+
+---------------------+
```

## Compilación

```bash
mkdir build && cd build && cmake .. && cmake --build .
./practica_16
```
