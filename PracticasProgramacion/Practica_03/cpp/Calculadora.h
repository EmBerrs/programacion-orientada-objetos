/**
 * Practica_03 - Calculadora.h
 * Calculadora básica con las 4 operaciones fundamentales
 */

#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
public:
    Calculadora() = default;

    double sumar(double a, double b) const;
    double restar(double a, double b) const;
    double multiplicar(double a, double b) const;
    double dividir(double a, double b) const;
};

#endif // CALCULADORA_H
