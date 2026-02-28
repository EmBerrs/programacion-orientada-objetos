/**
 * Practica_26 - Escribir y leer TXT (datos basicos, arreglos, creados, ADT)
 */

#include "ManejadorTXT.h"
#include <iostream>

int main() {
    ManejadorTXT man;

    man.escribirDatosBasicos("datos_basicos.txt");
    man.escribirArreglo("arreglo.txt");
    man.escribirAutos("autos.txt");
    man.escribirPersonas("personas.txt");

    std::cout << "Leyendo datos basicos:\n";
    man.leerYMostrar("datos_basicos.txt");
    std::cout << "\nLeyendo arreglo:\n";
    man.leerYMostrar("arreglo.txt");
    std::cout << "\nLeyendo autos:\n";
    man.leerYMostrar("autos.txt");
    std::cout << "\nLeyendo personas (ADT):\n";
    man.leerYMostrar("personas.txt");

    return 0;
}
