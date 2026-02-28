/**
 * Practica_03 - Calculadora
 */

#include "Calculadora.h"
#include <iostream>

int main() {
    Calculadora calc;

    std::cout << "5 + 3 = " << calc.sumar(5, 3) << std::endl;
    std::cout << "5 - 3 = " << calc.restar(5, 3) << std::endl;
    std::cout << "5 * 3 = " << calc.multiplicar(5, 3) << std::endl;
    std::cout << "6 / 3 = " << calc.dividir(6, 3) << std::endl;

    return 0;
}
