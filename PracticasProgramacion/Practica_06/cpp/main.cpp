/**
 * Practica_06 - Calculadora con Sobrescritura (Operaciones por Sucesiones)
 */

#include "CalculadoraSucesiva.h"
#include <iostream>

int main() {
    CalculadoraSucesiva calc;

    std::cout << "Multiplicacion 4*5 (sumas sucesivas): " << calc.multiplicar(4.0, 5.0) << std::endl;
    std::cout << "Potencia 2^4 (mult sucesivas): " << calc.potencia(2.0, 4) << std::endl;
    std::cout << "Division 15/3 (restas sucesivas): " << calc.dividir(15.0, 3.0) << std::endl;

    return 0;
}
