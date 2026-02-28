# Practica_23 - Diagrama de Clases UML

## Matriz con Puntero al Mismo Tipo (Autoreferenciada)

```mermaid
classDiagram
    class MatrizAutoreferenciada {
        -int filas_
        -int columnas_
        -double** datos_
        -MatrizAutoreferenciada* siguiente_
        -liberar() void
        +MatrizAutoreferenciada(int, int)
        +MatrizAutoreferenciada(MatrizAutoreferenciada)
        +operator=(MatrizAutoreferenciada) MatrizAutoreferenciada
        +~MatrizAutoreferenciada()
        +setSiguiente(MatrizAutoreferenciada*) void
        +getSiguiente() MatrizAutoreferenciada*
        +llenar(double) void
        +multiplicarPorConstante(double) MatrizAutoreferenciada
        +multiplicarConSiguiente() MatrizAutoreferenciada
        +imprimir() void
    }
    MatrizAutoreferenciada "1" o-- "0..1" MatrizAutoreferenciada : siguiente_
```

**Python (python/)**: `_siguiente: Optional[MatrizAutoreferenciada]`; misma API: `set_siguiente`, `get_siguiente`, `multiplicar_con_siguiente`.
