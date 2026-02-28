#include "ManejadorTXT.h"
#include <fstream>
#include <iostream>

void ManejadorTXT::escribirDatosBasicos(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    f << "int: 42\n";
    f << "double: 3.14\n";
    f << "char: a\n";
    f << "bool: true\n";
}

void ManejadorTXT::escribirArreglo(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    int arr[] = {1, 2, 3, 4, 5};
    for (size_t i = 0; i < 5; ++i)
        f << "arr[" << i << "] = " << arr[i] << "\n";
}

void ManejadorTXT::escribirAutos(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    AutoADT autos[] = {{15000, 2020}, {25000, 2023}};
    for (size_t i = 0; i < 2; ++i)
        f << "Auto " << i << ": precio=" << autos[i].precio << " anio=" << autos[i].anio << "\n";
}

void ManejadorTXT::escribirPersonas(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    PersonaADT personas[] = {{"Juan", "Garcia", "Lopez", "M", 25}, {"Maria", "Perez", "Sanchez", "F", 30}};
    for (size_t i = 0; i < 2; ++i)
        f << "Persona " << i << ": " << personas[i].nombre << " " << personas[i].ap << " "
          << personas[i].am << ", " << personas[i].genero << ", " << personas[i].edad << " años\n";
}

void ManejadorTXT::leerYMostrar(const std::string& nombreArchivo) const {
    std::ifstream f(nombreArchivo);
    if (!f) {
        std::cout << "No se pudo abrir " << nombreArchivo << "\n";
        return;
    }
    std::string linea;
    while (std::getline(f, linea))
        std::cout << linea << "\n";
}
