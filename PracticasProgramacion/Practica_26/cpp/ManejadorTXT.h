/**
 * Practica_26 - ManejadorTXT.h
 * Escribir y leer TXT: datos basicos, arreglos, creados, ADT
 */

#ifndef MANEJADORTXT_H
#define MANEJADORTXT_H

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

class ManejadorTXT {
public:
    void escribirDatosBasicos(const std::string& nombreArchivo) const;
    void escribirArreglo(const std::string& nombreArchivo) const;
    void escribirAutos(const std::string& nombreArchivo) const;
    void escribirPersonas(const std::string& nombreArchivo) const;
    void leerYMostrar(const std::string& nombreArchivo) const;
};

#endif // MANEJADORTXT_H
