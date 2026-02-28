/**
 * Practica_24 - ManejadorCSV.h
 * Escribir y leer CSV: datos basicos, arreglos, creados, ADT
 */

#ifndef MANEJADORCSV_H
#define MANEJADORCSV_H

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

class ManejadorCSV {
public:
    void escribirDatosBasicos(const std::string& nombreArchivo) const;
    void escribirArreglo(const std::string& nombreArchivo) const;
    void escribirAutos(const std::string& nombreArchivo) const;
    void escribirPersonas(const std::string& nombreArchivo) const;
    void leerYMostrar(const std::string& nombreArchivo) const;
};

#endif // MANEJADORCSV_H
