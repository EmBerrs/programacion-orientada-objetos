/**
 * Practica_16 - CalculadoraRecursiva.h
 * Mult por sumas sucesivas recursivas, potencia por mult recursivas, division por restas recursivas
 */

#ifndef CALCULADORARECURSIVA_H
#define CALCULADORARECURSIVA_H

class CalculadoraRecursiva {
public:
    double multiplicar(double a, double b) const;
    double potencia(double base, int exp) const;
    double dividir(double a, double b) const;
};

#endif // CALCULADORARECURSIVA_H
