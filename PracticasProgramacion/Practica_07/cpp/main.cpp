/**
 * Practica_07 - Nuevos tipos: Auto y Persona (PE y POO)
 */

#include "Auto.h"
#include "Persona.h"
#include "TiposPE.h"
#include <iostream>

int main() {
    Auto miAuto(25000.50, 2023);
    std::cout << "Auto POO: anio=" << miAuto.getAnio() << ", precio=" << miAuto.getPrecio() << std::endl;

    AutoPE autoPE = {18000.0, 2021};
    std::cout << "Auto PE: anio=" << autoPE.anio << ", precio=" << autoPE.precio << std::endl;

    Persona persona("Juan", "Garcia", "Lopez", "M", 25);
    std::cout << "Persona POO: " << persona.getNombre() << " " << persona.getAp() << " "
              << persona.getAm() << ", " << persona.getGenero() << ", " << persona.getEdad() << " años" << std::endl;

    PersonaPE personaPE = {"Maria", "Perez", "Sanchez", "F", 30};
    std::cout << "Persona PE: " << personaPE.nombre << " " << personaPE.ap << " "
              << personaPE.am << ", " << personaPE.genero << ", " << personaPE.edad << " años" << std::endl;

    return 0;
}
