/**
 * Practica_22 - Quick Sort ordenamiento indirecto
 */

#include "OrdenadorQuickSortIndirecto.h"
#include <iostream>

int main() {
    OrdenadorQuickSortIndirecto ord;

    char chars[] = {'z', 'a', 'm', 'b'};
    char* pChars[] = {chars, chars+1, chars+2, chars+3};
    ord.ordenarCaracteres(pChars, 4);
    std::cout << "Chars: "; for (int i=0;i<4;++i) std::cout << *pChars[i]; std::cout << "\n";

    int enteros[] = {4, 1, 3, 2};
    int* pEnteros[] = {enteros, enteros+1, enteros+2, enteros+3};
    ord.ordenarEnteros(pEnteros, 4);
    std::cout << "Enteros: "; for (int i=0;i<4;++i) std::cout << *pEnteros[i] << " "; std::cout << "\n";

    AutoPOO a1(20000,2020), a2(15000,2022);
    AutoPOO* pAutos[] = {&a1, &a2};
    ord.ordenarAutos(pAutos, 2);
    std::cout << "Autos: "; for (int i=0;i<2;++i) std::cout << pAutos[i]->getPrecio() << " "; std::cout << "\n";

    PersonaPOO p1("Carlos",25), p2("Ana",30);
    PersonaPOO* pPersonas[] = {&p1, &p2};
    ord.ordenarPersonas(pPersonas, 2);
    std::cout << "Personas: "; for (int i=0;i<2;++i) std::cout << pPersonas[i]->getNombre() << " "; std::cout << "\n";

    return 0;
}
