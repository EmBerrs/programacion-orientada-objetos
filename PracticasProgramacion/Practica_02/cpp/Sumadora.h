/**
 * Practica_02 - Sumadora.h
 * Clase para sumar dos números recibidos como parámetros
 */

#ifndef SUMADORA_H
#define SUMADORA_H

class Sumadora {
public:
    Sumadora() = default;

    int sumar(int a, int b) const;
    double sumar(double a, double b) const;
};

#endif // SUMADORA_H
