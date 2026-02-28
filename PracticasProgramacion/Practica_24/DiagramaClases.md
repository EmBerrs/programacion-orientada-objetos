# Practica_24 - Diagrama de Clases UML

## Archivos CSV - Datos Básicos, Arreglos, ADT

```mermaid
classDiagram
    class AutoADT {
        <<struct>>
        +double precio
        +int anio
    }
    class PersonaADT {
        <<struct>>
        +string nombre
        +string ap
        +string am
        +string genero
        +int edad
    }
    class ManejadorCSV {
        +escribirDatosBasicos(string) void
        +escribirArreglo(string) void
        +escribirAutos(string) void
        +escribirPersonas(string) void
        +leerYMostrar(string) void
    }
    ManejadorCSV ..> AutoADT : escribe/lee
    ManejadorCSV ..> PersonaADT : escribe/lee
```

**Python (python/)**: `dataclass` para AutoADT/PersonaADT; mismos métodos (`escribir_datos_basicos`, `escribir_arreglo`, etc.).
