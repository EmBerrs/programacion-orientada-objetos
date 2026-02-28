#include "Fractales.h"
#include <iostream>
#include <cmath>

void Fractales::sierpinskiAux(int nivel, const std::string& prefijo) const {
    if (nivel <= 0) return;
    std::cout << prefijo << "  *\n";
    std::cout << prefijo << " ***\n";
    std::cout << prefijo << "*****\n\n";
    sierpinskiAux(nivel - 1, prefijo + "   ");
}

void Fractales::trianguloSierpinski(int nivel) const {
    std::cout << "Triangulo Sierpinski nivel " << nivel << ":\n";
    for (int i = 0; i < nivel; ++i) {
        std::string esp(i * 2, ' ');
        std::cout << esp << "  *\n" << esp << " ***\n" << esp << "*****\n";
    }
}

void Fractales::polvoCantor(int nivel, int indent) const {
    if (nivel <= 0) {
        std::cout << std::string(indent, ' ') << "___" << std::endl;
        return;
    }
    polvoCantor(nivel - 1, indent);
    std::cout << std::string(indent, ' ') << "   " << std::endl;
    polvoCantor(nivel - 1, indent + 4);
}
