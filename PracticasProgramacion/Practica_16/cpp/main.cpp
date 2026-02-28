/**
 * Practica_16 - Calculadora recursiva + Fractales (Sierpinski, Cantor)
 */

#include "CalculadoraRecursiva.h"
#include "Fractales.h"
#include <iostream>

int main() {
    CalculadoraRecursiva calc;
    std::cout << "4*5 (sumas recursivas): " << calc.multiplicar(4.0, 5.0) << std::endl;
    std::cout << "2^4 (mult recursivas): " << calc.potencia(2.0, 4) << std::endl;
    std::cout << "15/3 (restas recursivas): " << calc.dividir(15.0, 3.0) << std::endl;

    Fractales frac;
    frac.trianguloSierpinski(3);
    std::cout << "\nPolvo de Cantor nivel 2:\n";
    frac.polvoCantor(2, 0);

    return 0;
}
