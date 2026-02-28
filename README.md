# Prácticas de Programación - C++ y Python

Colección de **26 prácticas** de programación implementadas en **C++** y **Python**, cubriendo fundamentos de POO, algoritmos de ordenamiento, recursividad, estructuras de datos y manejo de archivos.

## Contenido

| # | Tema | Descripción |
|---|------|-------------|
| 01 | Hola Mundo | Introducción a clases y encapsulamiento |
| 02 | Suma 2 números | Operaciones básicas |
| 03 | Calculadora | Cuatro operaciones fundamentales |
| 04 | Sobrecarga | Sobrecarga de operadores |
| 05 | Herencia | Calculadora con herencia |
| 06 | Sobrescritura | Sucesiones (override) |
| 07 | Tipo Auto | Precio, año, tipos inferidos |
| 08 | Tamaños de tipos | sizeof, tipos primitivos |
| 09 | Promedio 5 números | Estadísticas básicas |
| 10 | Promedio con arreglo | Arreglos unidimensionales |
| 11 | Promedio con punteros | Aritmética de punteros |
| 12 | Matrices | A×B, A×k |
| 13 | Lista personas y coches | Gestión de listas |
| 14 | Lista indirecta | Punteros a objetos |
| 15 | Factorial, Fibonacci | Recursividad básica |
| 16 | Fractales | Recursividad + Fractales |
| 17 | Burbuja | Ordenamiento burbuja |
| 18 | Merge Sort | Ordenamiento por mezcla |
| 19 | Quick Sort | Ordenamiento rápido |
| 20 | Burbuja indirecto | Ordenamiento indirecto |
| 21 | Merge Sort indirecto | Merge Sort indirecto |
| 22 | Quick Sort indirecto | Quick Sort indirecto |
| 23 | Matriz autoreferenciada | Estructuras autoreferenciadas |
| 24 | CSV | Lectura/escritura CSV |
| 25 | XML | Lectura/escritura XML |
| 26 | TXT | Lectura/escritura TXT |

## Estructura del proyecto

```
PracticasProgramacion/
├── CMakeLists.txt              # Build raíz (todas las prácticas C++)
├── Practica_01/                # Hola Mundo
│   ├── cpp/                    # Implementación C++
│   │   ├── main.cpp
│   │   ├── CMakeLists.txt
│   │   └── README.md
│   └── python/                 # Implementación Python
│       └── main.py
├── Practica_02/
...
└── Practica_26/
```

## Requisitos

- **C++**: CMake 3.14+, compilador C++17 (g++, clang++, MSVC)
- **Python**: Python 3.8+ (para prácticas con XML: `pip install lxml`)

## Compilación (C++)

### Todas las prácticas

```bash
cd PracticasProgramacion
mkdir build
cd build
cmake ..
cmake --build .
```

### Una práctica individual

```bash
cd PracticasProgramacion/Practica_01/cpp
mkdir build
cd build
cmake ..
cmake --build .
./practica_01
```

## Ejecución (Python)

```bash
cd PracticasProgramacion/Practica_01/python
python main.py
```
