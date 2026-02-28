/**
 * Practica_02 - Suma de 2 números como parámetros
 */

#include "Sumadora.h"
#include <iostream>

int main() {
    Sumadora calc;
    std::cout << "Suma de 5 y 3: " << calc.sumar(5, 3) << std::endl;
    std::cout << "Suma de 10.5 y 7.3: " << calc.sumar(10.5, 7.3) << std::endl;

    return 0;
}
