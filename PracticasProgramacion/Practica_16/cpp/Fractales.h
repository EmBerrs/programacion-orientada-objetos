/**
 * Practica_16 - Fractales.h
 * Triángulo de Sierpinski y Polvo de Cantor
 */

#ifndef FRACTALES_H
#define FRACTALES_H

#include <iostream>
#include <string>

class Fractales {
    void sierpinskiAux(int nivel, const std::string& prefijo) const;

public:
    void trianguloSierpinski(int nivel) const;
    void polvoCantor(int nivel, int indent) const;
};

#endif // FRACTALES_H
