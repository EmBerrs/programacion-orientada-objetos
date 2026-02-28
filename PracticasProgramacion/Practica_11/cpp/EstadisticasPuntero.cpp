#include "EstadisticasPuntero.h"
#include <iostream>
#include <algorithm>
#include <numeric>

EstadisticasPuntero::EstadisticasPuntero() : numeros_(new double[N]()) {}

EstadisticasPuntero::~EstadisticasPuntero() {
    delete[] numeros_;
}

void EstadisticasPuntero::ingresarNumeros() {
    std::cout << "Ingrese 5 numeros (acceso indirecto via puntero):\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "*(numeros_+" << i << "): ";
        std::cin >> *(numeros_ + i);
    }
}

void EstadisticasPuntero::mostrarResultados() const {
    std::cout << "\nSuma: " << getSuma() << "\n";
    std::cout << "Promedio: " << getPromedio() << "\n";
    std::cout << "Mediana: " << getMediana() << "\n";
    std::cout << "Maximo: " << getMaximo() << "\n";
    std::cout << "Minimo: " << getMinimo() << "\n";
}

double EstadisticasPuntero::getSuma() const {
    return std::accumulate(numeros_, numeros_ + N, 0.0);
}
double EstadisticasPuntero::getPromedio() const {
    return getSuma() / N;
}
double EstadisticasPuntero::getMediana() const {
    double copia[N];
    for (int i = 0; i < N; ++i) copia[i] = numeros_[i];
    std::sort(copia, copia + N);
    return copia[N/2];
}
double EstadisticasPuntero::getMaximo() const {
    return *std::max_element(numeros_, numeros_ + N);
}
double EstadisticasPuntero::getMinimo() const {
    return *std::min_element(numeros_, numeros_ + N);
}
