#include "ManejadorXML.h"
#include <fstream>
#include <iostream>

void ManejadorXML::escribirDatosBasicos(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    f << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    f << "<datos>\n";
    f << "  <int valor=\"42\"/>\n";
    f << "  <double valor=\"3.14\"/>\n";
    f << "  <char valor=\"a\"/>\n";
    f << "  <bool valor=\"true\"/>\n";
    f << "</datos>\n";
}

void ManejadorXML::escribirArreglo(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    int arr[] = {1, 2, 3, 4, 5};
    f << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    f << "<arreglo>\n";
    for (size_t i = 0; i < 5; ++i)
        f << "  <elemento index=\"" << i << "\" valor=\"" << arr[i] << "\"/>\n";
    f << "</arreglo>\n";
}

void ManejadorXML::escribirAutos(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    AutoADT autos[] = {{15000, 2020}, {25000, 2023}};
    f << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    f << "<autos>\n";
    for (const auto& a : autos)
        f << "  <auto precio=\"" << a.precio << "\" anio=\"" << a.anio << "\"/>\n";
    f << "</autos>\n";
}

void ManejadorXML::escribirPersonas(const std::string& nombreArchivo) const {
    std::ofstream f(nombreArchivo);
    if (!f) return;
    PersonaADT personas[] = {{"Juan", "Garcia", "Lopez", "M", 25}, {"Maria", "Perez", "Sanchez", "F", 30}};
    f << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    f << "<personas>\n";
    for (const auto& p : personas)
        f << "  <persona nombre=\"" << p.nombre << "\" ap=\"" << p.ap << "\" am=\"" << p.am
          << "\" genero=\"" << p.genero << "\" edad=\"" << p.edad << "\"/>\n";
    f << "</personas>\n";
}

void ManejadorXML::leerYMostrar(const std::string& nombreArchivo) const {
    std::ifstream f(nombreArchivo);
    if (!f) {
        std::cout << "No se pudo abrir " << nombreArchivo << "\n";
        return;
    }
    std::string linea;
    while (std::getline(f, linea))
        std::cout << linea << "\n";
}
