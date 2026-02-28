# Practica_25 - Diagrama de Clases UML

## Archivos XML - Datos Básicos, Arreglos, ADT

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
    class ManejadorXML {
        +escribirDatosBasicos(string) void
        +escribirArreglo(string) void
        +escribirAutos(string) void
        +escribirPersonas(string) void
        +leerYMostrar(string) void
    }
    ManejadorXML ..> AutoADT : escribe/lee
    ManejadorXML ..> PersonaADT : escribe/lee
```

**Python (python/)**: `dataclass` para AutoADT/PersonaADT; mismos métodos; salida XML idéntica.
