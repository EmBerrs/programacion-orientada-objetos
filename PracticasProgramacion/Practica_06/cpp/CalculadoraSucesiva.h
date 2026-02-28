/**
 * Practica_06 - CalculadoraSucesiva.h
 * Sobrescritura: mult por sumas, potencia por mults, division por restas
 */

#ifndef CALCULADORASUCESIVA_H
#define CALCULADORASUCESIVA_H

#include "Calculadora.h"

class CalculadoraSucesiva : public Calculadora {
public:
    CalculadoraSucesiva() = default;

    double multiplicar(double a, double b) const override;
    double dividir(double a, double b) const override;
    double potencia(double base, int exp) const;
};

#endif // CALCULADORASUCESIVA_H
