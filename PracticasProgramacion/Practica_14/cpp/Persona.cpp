#include "Persona.h"

Persona::Persona() : nombre_(""), ap_(""), am_(""), genero_(""), edad_(0) {}

Persona::Persona(const std::string& nombre, const std::string& ap, const std::string& am,
                 const std::string& genero, int edad)
    : nombre_(nombre), ap_(ap), am_(am), genero_(genero), edad_(edad) {}

std::string Persona::getNombre() const { return nombre_; }
void Persona::setNombre(const std::string& nombre) { nombre_ = nombre; }
std::string Persona::getAp() const { return ap_; }
std::string Persona::getAm() const { return am_; }
std::string Persona::getGenero() const { return genero_; }
int Persona::getEdad() const { return edad_; }
