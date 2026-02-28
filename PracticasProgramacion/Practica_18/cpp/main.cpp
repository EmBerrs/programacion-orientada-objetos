/**
 * Practica_18 - Merge Sort: caracteres, enteros, nuevo tipo (PE y POO)
 */

#include "OrdenadorMergeSort.h"
#include <iostream>

int main() {
    OrdenadorMergeSort ord;

    char chars[] = {'z', 'a', 'm', 'b'};
    ord.ordenarCaracteres(chars, 4);
    std::cout << "Chars: "; for (int i=0;i<4;++i) std::cout << chars[i]; std::cout << "\n";

    int enteros[] = {4, 1, 3, 2};
    ord.ordenarEnteros(enteros, 4);
    std::cout << "Enteros: "; for (int i=0;i<4;++i) std::cout << enteros[i] << " "; std::cout << "\n";

    AutoPOO autos[] = {AutoPOO(20000,2020), AutoPOO(15000,2022)};
    ord.ordenarAutos(autos, 2);
    std::cout << "Autos POO: "; for (int i=0;i<2;++i) std::cout << autos[i].getPrecio() << " "; std::cout << "\n";

    AutoPE autosPE[] = {{20000,2020}, {15000,2022}};
    ord.ordenarAutosPE(autosPE, 2);
    std::cout << "Autos PE: "; for (int i=0;i<2;++i) std::cout << autosPE[i].precio << " "; std::cout << "\n";

    PersonaPOO personas[] = {PersonaPOO("Carlos",25), PersonaPOO("Ana",30)};
    ord.ordenarPersonas(personas, 2);
    std::cout << "Personas POO: "; for (int i=0;i<2;++i) std::cout << personas[i].getNombre() << " "; std::cout << "\n";

    PersonaPE personasPE[] = {{"Maria",28}, {"Luis",22}};
    ord.ordenarPersonasPE(personasPE, 2);
    std::cout << "Personas PE: "; for (int i=0;i<2;++i) std::cout << personasPE[i].nombre << " "; std::cout << "\n";

    return 0;
}
