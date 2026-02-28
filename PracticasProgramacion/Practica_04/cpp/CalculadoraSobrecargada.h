/**
 * Practica_04 - CalculadoraSobrecargada.h
 * Calculadora con variantes: 2 params, 0 params, 3 params
 */

#ifndef CALCULADORASOBRECARGADA_H
#define CALCULADORASOBRECARGADA_H

class CalculadoraSobrecargada {
public:
    CalculadoraSobrecargada() = default;

    double calcular(double a, double b) const;
    double calcular() const;
    double calcular(double a, double b, double c) const;
};

#endif // CALCULADORASOBRECARGADA_H
