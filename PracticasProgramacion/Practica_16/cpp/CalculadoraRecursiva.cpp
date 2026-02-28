#include "CalculadoraRecursiva.h"
#include <cmath>
#include <stdexcept>

double CalculadoraRecursiva::multiplicar(double a, double b) const {
    int bi = static_cast<int>(b);
    if (bi == 0) return 0;
    if (bi > 0) return a + multiplicar(a, bi - 1);
    return -multiplicar(a, -bi);
}

double CalculadoraRecursiva::potencia(double base, int exp) const {
    if (exp < 0) return 0;
    if (exp == 0) return 1;
    return base * potencia(base, exp - 1);
}

double CalculadoraRecursiva::dividir(double a, double b) const {
    if (b == 0) throw std::runtime_error("Division por cero");
    if (a < 0 && b > 0) return -dividir(-a, b);
    if (a > 0 && b < 0) return -dividir(a, -b);
    if (a < 0 && b < 0) return dividir(-a, -b);
    if (a < b) return 0;
    return 1 + dividir(a - b, b);
}
