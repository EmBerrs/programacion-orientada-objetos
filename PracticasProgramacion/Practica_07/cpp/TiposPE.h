/**
 * Practica_07 - TiposPE.h
 * Tipos en Programacion Estructurada (struct)
 */

#ifndef TIPOSPE_H
#define TIPOSPE_H

#include <string>

struct AutoPE {
    double precio;
    int anio;
};

struct PersonaPE {
    std::string nombre;
    std::string ap;    // apellido paterno
    std::string am;    // apellido materno
    std::string genero;
    int edad;
};

#endif // TIPOSPE_H
