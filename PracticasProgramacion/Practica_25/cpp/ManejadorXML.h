/**
 * Practica_25 - ManejadorXML.h
 * Escribir y leer XML: datos basicos, arreglos, creados, ADT
 */

#ifndef MANEJADORXML_H
#define MANEJADORXML_H

#include <string>

struct AutoADT {
    double precio;
    int anio;
};

struct PersonaADT {
    std::string nombre;
    std::string ap;
    std::string am;
    std::string genero;
    int edad;
};

class ManejadorXML {
public:
    void escribirDatosBasicos(const std::string& nombreArchivo) const;
    void escribirArreglo(const std::string& nombreArchivo) const;
    void escribirAutos(const std::string& nombreArchivo) const;
    void escribirPersonas(const std::string& nombreArchivo) const;
    void leerYMostrar(const std::string& nombreArchivo) const;
};

#endif // MANEJADORXML_H
