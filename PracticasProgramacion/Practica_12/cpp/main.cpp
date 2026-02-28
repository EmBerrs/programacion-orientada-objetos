/**
 * Practica_12 - Matrices: A x B, A * constante, A * B
 */

#include "Matriz.h"
#include <iostream>

int main() {
    Matriz A(2, 2), B(2, 2);
    A.llenar(1.0); B.llenar(2.0);

    std::cout << "A * 3:\n";
    Matriz Ac = A.multiplicarPorConstante(3.0);
    Ac.imprimir();

    std::cout << "\nA * B:\n";
    Matriz C = A.multiplicar(B);
    C.imprimir();

    return 0;
}
