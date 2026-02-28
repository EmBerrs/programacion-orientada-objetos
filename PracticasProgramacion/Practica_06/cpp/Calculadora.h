#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
public:
    Calculadora() = default;
    virtual ~Calculadora() = default;

    virtual double sumar(double a, double b) const;
    virtual double restar(double a, double b) const;
    virtual double multiplicar(double a, double b) const;
    virtual double dividir(double a, double b) const;
};

#endif // CALCULADORA_H
