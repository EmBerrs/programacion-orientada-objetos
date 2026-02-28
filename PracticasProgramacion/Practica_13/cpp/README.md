# Practica_13 - Lista de Personas y Coches

## Objetivo
Partir del ejercicio 7 (tipo Auto) para generar listas de personas y coches como arreglos.

## Diagrama de Clases

```
+----------+  +--------+  +---------------+
| Persona  |  | Coche  |  | GestionListas |
+----------+  +--------+  +---------------+
| nombre   |  | precio |  | personas_[]   |
| edad     |  | anio   |  | coches_[]     |
+----------+  +--------+  +---------------+
```

## Compilación

```bash
mkdir build && cd build && cmake .. && cmake --build .
./practica_13
```
