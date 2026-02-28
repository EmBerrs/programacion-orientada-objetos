# Practica_20 - Diagrama de Clases UML

## Burbuja Ordenamiento Indirecto (Punteros)

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
    class OrdenadorBurbujaIndirecto {
        +ordenarCaracteres(char*[], int) void
        +ordenarEnteros(int*[], int) void
        +ordenarAutos(AutoPOO*[], int) void
        +ordenarPersonas(PersonaPOO*[], int) void
    }
    OrdenadorBurbujaIndirecto ..> AutoPOO : usa *
    OrdenadorBurbujaIndirecto ..> PersonaPOO : usa *
```

**Python (python/)**: Misma estructura; `ordenar_*` recibe listas de objetos/índices. Sin punteros explícitos; equivalente semántico con referencias.
