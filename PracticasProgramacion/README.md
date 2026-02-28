# Practicas_Cpp - 26 Prácticas de Programación en C++

Estructura completa de las 26 prácticas según la tabla de ejercicios.

## Estructura

```
Practicas_Cpp/
├── CMakeLists.txt          # Build raíz
├── Practica_01/            # Hola Mundo
├── Practica_02/            # Suma 2 números
├── Practica_03/            # Calculadora
├── Practica_04/            # Sobrecarga
├── Practica_05/            # Herencia calculadora
├── Practica_06/            # Sobrescritura (sucesiones)
├── Practica_07/            # Tipo Auto (precio, anio)
├── Practica_08/            # Tamaños de tipos
├── Practica_09/            # Promedio 5 números
├── Practica_10/            # Promedio con arreglo
├── Practica_11/            # Promedio con punteros
├── Practica_12/            # Matrices A*B, A*k
├── Practica_13/            # Lista personas y coches
├── Practica_14/            # Lista indirecta
├── Practica_15/            # Factorial, Fibonacci
├── Practica_16/            # Recursividad + Fractales
├── Practica_17/            # Burbuja
├── Practica_18/            # Merge Sort
├── Practica_19/            # Quick Sort
├── Practica_20/            # Burbuja indirecto
├── Practica_21/            # Merge Sort indirecto
├── Practica_22/            # Quick Sort indirecto
├── Practica_23/            # Matriz autoreferenciada
├── Practica_24/            # CSV
├── Practica_25/            # XML
└── Practica_26/            # TXT
```

## Compilación

```bash
cd Practicas_Cpp
mkdir build
cd build
cmake ..
cmake --build .
```

O compilar una práctica individual:

```bash
cd Practica_01
mkdir build && cd build
cmake ..
cmake --build .
./practica_01
```

## Requisitos

- CMake 3.14+
- Compilador C++17 (g++, clang++, MSVC)

## Solución a "undefined reference"

Si usas **MinGW/g++** o **Clang** y aparece "undefined reference", cada `CMakeLists.txt` ya incluye enlace explícito a `stdc++`. Si el problema persiste:

1. **Compilación**: Borra `build`, vuelve a configurar y compilar:
   ```
   rm -rf build
   mkdir build && cd build
   cmake ..
   cmake --build .
   ```

2. **Ejecución (MinGW)**: Si al ejecutar falta `libstdc++-6.dll`, agrega la carpeta `bin` de MinGW al PATH, o recompila con enlace estático:
   ```
   cmake -DCMAKE_CXX_FLAGS="-static-libstdc++ -static-libgcc" ..
   ```
