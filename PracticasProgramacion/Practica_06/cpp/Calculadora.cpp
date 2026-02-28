#include "Calculadora.h"
#include <stdexcept>

double Calculadora::sumar(double a, double b) const { return a + b; }
double Calculadora::restar(double a, double b) const { return a - b; }
double Calculadora::multiplicar(double a, double b) const { return a * b; }
double Calculadora::dividir(double a, double b) const {
    if (b == 0) throw std::runtime_error("Division por cero");
    return a / b;
}
