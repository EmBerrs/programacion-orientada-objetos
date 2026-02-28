# Practica_01 - Hola Mundo

## Objetivo
Introducir los fundamentos de programación en C++ aplicando Programación Orientada a Objetos (POO).

## Descripción del Problema
Crear un programa que muestre el mensaje "Hola mundo" en consola, encapsulando la lógica en una clase.

## Diagrama de Clases

```
+------------------+
|    HolaMundo     |
+------------------+
| - mensaje_: str  |
+------------------+
| + HolaMundo()    |
| + mostrar()      |
| + setMensaje()   |
| + getMensaje()   |
+------------------+
```

## Instrucciones de Compilación

```bash
cd Practica_01
mkdir build
cd build
cmake ..
cmake --build .
```

## Uso

```bash
./practica_01
```

**Salida esperada:**
```
Hola mundo
```
