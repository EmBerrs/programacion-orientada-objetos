#include "EstadisticasNumeros.h"
#include <iostream>
#include <algorithm>
#include <numeric>
EstadisticasNumeros::EstadisticasNumeros()
    : numeros_{0}, suma_(0), promedio_(0), mediana_(0), maximo_(0), minimo_(0) {}

void EstadisticasNumeros::ingresarNumeros() {
    std::cout << "Ingrese 5 numeros:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Numero " << (i+1) << ": ";
        std::cin >> numeros_[i];
    }
    calcular();
}

void EstadisticasNumeros::calcular() {
    suma_ = std::accumulate(std::begin(numeros_), std::end(numeros_), 0.0);
    promedio_ = suma_ / 5.0;
    double copia[5];
    for (int i = 0; i < 5; ++i) copia[i] = numeros_[i];
    std::sort(std::begin(copia), std::end(copia));
    mediana_ = copia[2];
    maximo_ = *std::max_element(std::begin(numeros_), std::end(numeros_));
    minimo_ = *std::min_element(std::begin(numeros_), std::end(numeros_));
}

void EstadisticasNumeros::mostrarResultados() const {
    std::cout << "\nSuma: " << suma_ << "\n";
    std::cout << "Promedio: " << promedio_ << "\n";
    std::cout << "Mediana: " << mediana_ << "\n";
    std::cout << "Maximo: " << maximo_ << "\n";
    std::cout << "Minimo: " << minimo_ << "\n";
}

double EstadisticasNumeros::getSuma() const { return suma_; }
double EstadisticasNumeros::getPromedio() const { return promedio_; }
double EstadisticasNumeros::getMediana() const { return mediana_; }
double EstadisticasNumeros::getMaximo() const { return maximo_; }
double EstadisticasNumeros::getMinimo() const { return minimo_; }
