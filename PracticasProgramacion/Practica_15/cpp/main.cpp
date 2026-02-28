/**
 * Practica_15 - Factorial y Fibonacci recursivos
 */

#include "Recursividad.h"
#include <iostream>

int main() {
    Recursividad rec;

    std::cout << "Factorial(5) = " << rec.factorial(5) << std::endl;
    std::cout << "Fibonacci(7) = " << rec.fibonacci(7) << std::endl;

    return 0;
}
