#include "CalculadoraSucesiva.h"
#include <cmath>
#include <stdexcept>

double CalculadoraSucesiva::multiplicar(double a, double b) const {
    double resultado = 0;
    for (int i = 0; i < static_cast<int>(std::abs(b)); ++i) {
        resultado += std::abs(a);
    }
    return ((a < 0) != (b < 0)) ? -resultado : resultado;
}

double CalculadoraSucesiva::dividir(double a, double b) const {
    if (b == 0) throw std::runtime_error("Division por cero");
    int cociente = 0;
    double absA = std::abs(a), absB = std::abs(b);
    while (absA >= absB) {
        absA -= absB;
        ++cociente;
    }
    return ((a < 0) != (b < 0)) ? -cociente : cociente;
}

double CalculadoraSucesiva::potencia(double base, int exp) const {
    if (exp < 0) return 0;
    double resultado = 1;
    for (int i = 0; i < exp; ++i) {
        resultado *= base;
    }
    return resultado;
}
