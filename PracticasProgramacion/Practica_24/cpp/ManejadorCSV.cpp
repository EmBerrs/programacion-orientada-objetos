#include "ManejadorCSV.h"
#include <fstream>
#include <iostream>
#include <sstream>

void ManejadorCSV::escribirDatosBasicos(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    f << "tipo,valor\n";
    f << "int,42\n";
    f << "double,3.14\n";
    f << "char,a\n";
    f << "bool,true\n";
}

void ManejadorCSV::escribirArreglo(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    int arr[] = {1, 2, 3, 4, 5};
    f << "index,valor\n";
    for (size_t i = 0; i < 5; ++i)
        f << i << "," << arr[i] << "\n";
}

void ManejadorCSV::escribirAutos(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    AutoADT autos[] = {{15000, 2020}, {25000, 2023}};
    f << "precio,anio\n";
    for (const auto& a : autos)
        f << a.precio << "," << a.anio << "\n";
}

void ManejadorCSV::escribirPersonas(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    PersonaADT personas[] = {{"Juan", "Garcia", "Lopez", "M", 25}, {"Maria", "Perez", "Sanchez", "F", 30}};
    f << "nombre,ap,am,genero,edad\n";
    for (const auto& p : personas)
        f << p.nombre << "," << p.ap << "," << p.am << "," << p.genero << "," << p.edad << "\n";
}

void ManejadorCSV::leerYMostrar(const std::string& nombreArchivo) const {
    std::ifstream f(nombreArchivo);
    if (!f) {
        std::cout << "No se pudo abrir " << nombreArchivo << "\n";
        return;
    }
    std::string linea;
    while (std::getline(f, linea))
        std::cout << linea << "\n";
}
