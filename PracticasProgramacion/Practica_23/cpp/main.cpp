/**
 * Practica_23 - Matrices con puntero/referencia al mismo tipo
 */

#include "MatrizAutoreferenciada.h"
#include <iostream>

int main() {
    MatrizAutoreferenciada A(2, 2);
    A.llenar(1.0);

    MatrizAutoreferenciada B(2, 2);
    B.llenar(2.0);

    A.setSiguiente(&B);
    MatrizAutoreferenciada C = A.multiplicarConSiguiente();
    std::cout << "A * B (via puntero):\n";
    C.imprimir();

    return 0;
}
