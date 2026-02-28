/**
 * Practica_04 - Calculadora con Sobrecarga de Funciones
 */

#include "CalculadoraSobrecargada.h"
#include <iostream>

int main() {
    CalculadoraSobrecargada calc;

    std::cout << "Con 2 params (10, 3): " << calc.calcular(10.0, 3.0) << std::endl;
    std::cout << "Con 0 params (usa default): " << calc.calcular() << std::endl;
    std::cout << "Con 3 params (2, 3, 4): " << calc.calcular(2.0, 3.0, 4.0) << std::endl;

    return 0;
}
