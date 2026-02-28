# Practica_22 - Diagrama de Clases UML

## Quick Sort Ordenamiento Indirecto (Punteros)

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
    class OrdenadorQuickSortIndirecto {
        -partition(char*[], int, int) int
        -quickSort(char*[], int, int) void
        -partition(int*[], int, int) int
        -quickSort(int*[], int, int) void
        -partition(AutoPOO*[], int, int) int
        -quickSort(AutoPOO*[], int, int) void
        -partition(PersonaPOO*[], int, int) int
        -quickSort(PersonaPOO*[], int, int) void
        +ordenarCaracteres(char*[], int) void
        +ordenarEnteros(int*[], int) void
        +ordenarAutos(AutoPOO*[], int) void
        +ordenarPersonas(PersonaPOO*[], int) void
    }
    OrdenadorQuickSortIndirecto ..> AutoPOO : usa *
    OrdenadorQuickSortIndirecto ..> PersonaPOO : usa *
```

**Python (python/)**: Misma estructura; ordenamiento indirecto vía listas de referencias o `list.sort(key=...)`.
