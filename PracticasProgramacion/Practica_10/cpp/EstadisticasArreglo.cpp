#include "EstadisticasArreglo.h"
#include <iostream>
#include <algorithm>
#include <numeric>

void EstadisticasArreglo::ingresarNumeros() {
    std::cout << "Ingrese 5 numeros en el arreglo:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << "numeros[" << i << "]: ";
        std::cin >> numeros_[i];
    }
}

void EstadisticasArreglo::calcular() const {
    // Metodos get hacen los calculos
}

void EstadisticasArreglo::mostrarResultados() const {
    std::cout << "\nSuma: " << getSuma() << "\n";
    std::cout << "Promedio: " << getPromedio() << "\n";
    std::cout << "Mediana: " << getMediana() << "\n";
    std::cout << "Maximo: " << getMaximo() << "\n";
    std::cout << "Minimo: " << getMinimo() << "\n";
}

double EstadisticasArreglo::getSuma() const {
    return std::accumulate(numeros_, numeros_ + N, 0.0);
}
double EstadisticasArreglo::getPromedio() const {
    return getSuma() / N;
}
double EstadisticasArreglo::getMediana() const {
    double copia[N];
    for (int i = 0; i < N; ++i) copia[i] = numeros_[i];
    std::sort(copia, copia + N);
    return copia[N/2];
}
double EstadisticasArreglo::getMaximo() const {
    return *std::max_element(numeros_, numeros_ + N);
}
double EstadisticasArreglo::getMinimo() const {
    return *std::min_element(numeros_, numeros_ + N);
}
