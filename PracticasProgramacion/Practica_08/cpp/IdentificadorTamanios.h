/**
 * Practica_08 - IdentificadorTamanios.h
 * Tamaño de tipos basicos y creados (Auto, Persona en PE y POO)
 */

#ifndef IDENTIFICADORTAMANIOS_H
#define IDENTIFICADORTAMANIOS_H

#include <string>

struct AutoPE {
    double precio;
    int anio;
};

struct PersonaPE {
    std::string nombre;
    std::string ap;
    std::string am;
    std::string genero;
    int edad;
};

class AutoPOO {
    double precio_;
    int anio_;
public:
    AutoPOO() : precio_(0), anio_(0) {}
};

class PersonaPOO {
    std::string nombre_;
    std::string ap_;
    std::string am_;
    std::string genero_;
    int edad_;
public:
    PersonaPOO() : edad_(0) {}
};

class IdentificadorTamanios {
public:
    void mostrarTamaniosBasicos() const;
    void mostrarTamaniosCreados() const;
};

#endif // IDENTIFICADORTAMANIOS_H
