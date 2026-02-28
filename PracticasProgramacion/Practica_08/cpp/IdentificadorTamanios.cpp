#include "IdentificadorTamanios.h"
#include <iostream>

void IdentificadorTamanios::mostrarTamaniosBasicos() const {
    std::cout << "--- Tipos basicos ---\n";
    std::cout << "sizeof(char)    = " << sizeof(char) << "\n";
    std::cout << "sizeof(int)     = " << sizeof(int) << "\n";
    std::cout << "sizeof(long)    = " << sizeof(long) << "\n";
    std::cout << "sizeof(float)   = " << sizeof(float) << "\n";
    std::cout << "sizeof(double)  = " << sizeof(double) << "\n";
    std::cout << "sizeof(bool)    = " << sizeof(bool) << "\n";
    std::cout << "sizeof(size_t)  = " << sizeof(size_t) << "\n";
}

void IdentificadorTamanios::mostrarTamaniosCreados() const {
    std::cout << "\n--- Tipos creados (PE) ---\n";
    std::cout << "sizeof(AutoPE)   = " << sizeof(AutoPE) << "\n";
    std::cout << "sizeof(PersonaPE)= " << sizeof(PersonaPE) << "\n";
    std::cout << "\n--- Tipos creados (POO) ---\n";
    std::cout << "sizeof(AutoPOO)   = " << sizeof(AutoPOO) << "\n";
    std::cout << "sizeof(PersonaPOO)= " << sizeof(PersonaPOO) << "\n";
}
