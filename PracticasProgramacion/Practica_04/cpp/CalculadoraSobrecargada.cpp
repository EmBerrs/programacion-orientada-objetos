/**
 * Practica_04 - CalculadoraSobrecargada.cpp
 * Sobrecarga: 2 params=suma, 0 params=valor default, 3 params=suma de los tres
 */

#include "CalculadoraSobrecargada.h"

double CalculadoraSobrecargada::calcular(double a, double b) const {
    return a + b;
}

double CalculadoraSobrecargada::calcular() const {
    return 0.0;
}

double CalculadoraSobrecargada::calcular(double a, double b, double c) const {
    return a + b + c;
}
