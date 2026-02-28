# Practica_14 - Acceso Indirecto a Lista de Personas

## Objetivo
Acceder de manera indirecta (punteros) a la lista de personas.

## Diagrama de Clases

```
+--------+     +------------------------+
| Persona|     | GestionListasIndirecta |
+--------+     +------------------------+
| nombre |     | personas_: Persona*    |
| edad   |     | + mostrarPersonas()    |
+--------+     +------------------------+
```

## Compilación

```bash
mkdir build && cd build && cmake .. && cmake --build .
./practica_14
```
