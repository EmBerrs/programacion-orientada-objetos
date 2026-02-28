/**
 * Practica_24 - Escribir y leer CSV (datos basicos, arreglos, creados, ADT)
 */

#include "ManejadorCSV.h"
#include <iostream>

int main() {
    ManejadorCSV man;

    man.escribirDatosBasicos("datos_basicos.csv");
    man.escribirArreglo("arreglo.csv");
    man.escribirAutos("autos.csv");
    man.escribirPersonas("personas.csv");

    std::cout << "Leyendo datos basicos:\n";
    man.leerYMostrar("datos_basicos.csv");
    std::cout << "\nLeyendo arreglo:\n";
    man.leerYMostrar("arreglo.csv");
    std::cout << "\nLeyendo autos:\n";
    man.leerYMostrar("autos.csv");
    std::cout << "\nLeyendo personas (ADT):\n";
    man.leerYMostrar("personas.csv");

    return 0;
}
