/**
 * Practica_05 - Calculadora Nueva (Herencia)
 */

#include "CalculadoraNueva.h"
#include <iostream>

int main() {
    CalculadoraNueva calc;
    std::cout << "5 + 3 = " << calc.sumar(5.0, 3.0) << std::endl;
    std::cout << "5 - 3 = " << calc.restar(5.0, 3.0) << std::endl;
    std::cout << "5 * 3 = " << calc.multiplicar(5.0, 3.0) << std::endl;

    return 0;
}
