# Practica_23 - Matrices con Puntero al Mismo Tipo

## Objetivo
Como ejercicio 12 (matrices), pero la clase contiene un puntero/referencia al mismo tipo de dato.

## Diagrama de Clases

```
+------------------------+
| MatrizAutoreferenciada  |
+------------------------+
| - datos_               |
| - siguiente_: Matriz*  |
+------------------------+
| + multiplicarConSiguiente|
+------------------------+
```

## Compilación

```bash
mkdir build && cd build && cmake .. && cmake --build .
./practica_23
```
