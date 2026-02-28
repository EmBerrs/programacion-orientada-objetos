# Practica_06 - Calculadora con Sobrescritura

## Objetivo
Sobrescribir métodos: multiplicación por sumas sucesivas, potencia por multiplicaciones sucesivas, división por restas sucesivas.

## Diagrama de Clases

```
+-------------+         +--------------------+
| Calculadora |<--------| CalculadoraSucesiva|
+-------------+         +--------------------+
                       | * multiplicar()     |
                       | * dividir()         |
                       | + potencia()        |
+--------------------+
```

## Compilación

```bash
mkdir build && cd build && cmake .. && cmake --build .
./practica_06
```
