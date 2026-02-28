#include "Matriz.h"
#include <iostream>
#include <stdexcept>

Matriz::Matriz(int filas, int columnas) : filas_(filas), columnas_(columnas) {
    datos_ = new double*[filas_];
    for (int i = 0; i < filas_; ++i)
        datos_[i] = new double[columnas_]();
}

Matriz::Matriz(const Matriz& otra) : filas_(otra.filas_), columnas_(otra.columnas_) {
    datos_ = new double*[filas_];
    for (int i = 0; i < filas_; ++i) {
        datos_[i] = new double[columnas_];
        for (int j = 0; j < columnas_; ++j)
            datos_[i][j] = otra.datos_[i][j];
    }
}

Matriz& Matriz::operator=(const Matriz& otra) {
    if (this != &otra) {
        liberar();
        filas_ = otra.filas_;
        columnas_ = otra.columnas_;
        datos_ = new double*[filas_];
        for (int i = 0; i < filas_; ++i) {
            datos_[i] = new double[columnas_];
            for (int j = 0; j < columnas_; ++j)
                datos_[i][j] = otra.datos_[i][j];
        }
    }
    return *this;
}

Matriz::~Matriz() { liberar(); }

void Matriz::liberar() {
    if (datos_) {
        for (int i = 0; i < filas_; ++i)
            delete[] datos_[i];
        delete[] datos_;
        datos_ = nullptr;
    }
}

void Matriz::llenar(double valor) {
    for (int i = 0; i < filas_; ++i)
        for (int j = 0; j < columnas_; ++j)
            datos_[i][j] = valor;
}

void Matriz::set(int f, int c, double v) { datos_[f][c] = v; }
double Matriz::get(int f, int c) const { return datos_[f][c]; }

Matriz Matriz::multiplicarPorConstante(double k) const {
    Matriz R(filas_, columnas_);
    for (int i = 0; i < filas_; ++i)
        for (int j = 0; j < columnas_; ++j)
            R.datos_[i][j] = datos_[i][j] * k;
    return R;
}

Matriz Matriz::multiplicar(const Matriz& B) const {
    if (columnas_ != B.filas_)
        throw std::runtime_error("Dimensiones incompatibles");
    Matriz R(filas_, B.columnas_);
    for (int i = 0; i < filas_; ++i)
        for (int j = 0; j < B.columnas_; ++j) {
            double s = 0;
            for (int k = 0; k < columnas_; ++k)
                s += datos_[i][k] * B.datos_[k][j];
            R.datos_[i][j] = s;
        }
    return R;
}

void Matriz::imprimir() const {
    for (int i = 0; i < filas_; ++i) {
        for (int j = 0; j < columnas_; ++j)
            std::cout << datos_[i][j] << " ";
        std::cout << "\n";
    }
}
