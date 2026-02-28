/**
 * Practica_25 - Escribir y leer XML (datos basicos, arreglos, creados, ADT)
 */

#include "ManejadorXML.h"
#include <iostream>

int main() {
    ManejadorXML man;

    man.escribirDatosBasicos("datos_basicos.xml");
    man.escribirArreglo("arreglo.xml");
    man.escribirAutos("autos.xml");
    man.escribirPersonas("personas.xml");

    std::cout << "Leyendo datos basicos:\n";
    man.leerYMostrar("datos_basicos.xml");
    std::cout << "\nLeyendo arreglo:\n";
    man.leerYMostrar("arreglo.xml");
    std::cout << "\nLeyendo autos:\n";
    man.leerYMostrar("autos.xml");
    std::cout << "\nLeyendo personas (ADT):\n";
    man.leerYMostrar("personas.xml");

    return 0;
}
