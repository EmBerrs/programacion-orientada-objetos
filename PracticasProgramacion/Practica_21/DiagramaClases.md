# Practica_21 - Diagrama de Clases UML

## Merge Sort Ordenamiento Indirecto (Punteros)

```mermaid
classDiagram
    class AutoPOO {
        -double precio_
        -int anio_
        +AutoPOO()
        +AutoPOO(double, int)
        +getPrecio() double
    }
    class PersonaPOO {
        -string nombre_
        -int edad_
        +PersonaPOO()
        +PersonaPOO(string, int)
        +getNombre() string
    }
    class OrdenadorMergeSortIndirecto {
        -merge(char*[], int, int, int) void
        -mergeSort(char*[], int, int) void
        -merge(int*[], int, int, int) void
        -mergeSort(int*[], int, int) void
        -merge(AutoPOO*[], int, int, int) void
        -mergeSort(AutoPOO*[], int, int) void
        -merge(PersonaPOO*[], int, int, int) void
        -mergeSort(PersonaPOO*[], int, int) void
        +ordenarCaracteres(char*[], int) void
        +ordenarEnteros(int*[], int) void
        +ordenarAutos(AutoPOO*[], int) void
        +ordenarPersonas(PersonaPOO*[], int) void
    }
    OrdenadorMergeSortIndirecto ..> AutoPOO : usa *
    OrdenadorMergeSortIndirecto ..> PersonaPOO : usa *
```

**Python (python/)**: Misma estructura; ordenamiento indirecto vía listas de referencias o `list.sort(key=...)`.
