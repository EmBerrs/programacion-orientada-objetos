#include "MatrizAutoreferenciada.h"
#include <iostream>
#include <stdexcept>

MatrizAutoreferenciada::MatrizAutoreferenciada(int filas, int columnas)
    : filas_(filas), columnas_(columnas), siguiente_(nullptr) {
    datos_ = new double*[filas_];
    for (int i = 0; i < filas_; ++i)
        datos_[i] = new double[columnas_]();
}

MatrizAutoreferenciada::MatrizAutoreferenciada(const MatrizAutoreferenciada& otra)
    : filas_(otra.filas_), columnas_(otra.columnas_), siguiente_(nullptr) {
    datos_ = new double*[filas_];
    for (int i = 0; i < filas_; ++i) {
        datos_[i] = new double[columnas_];
        for (int j = 0; j < columnas_; ++j)
            datos_[i][j] = otra.datos_[i][j];
    }
}

MatrizAutoreferenciada& MatrizAutoreferenciada::operator=(const MatrizAutoreferenciada& otra) {
    if (this != &otra) {
        liberar();
        filas_ = otra.filas_;
        columnas_ = otra.columnas_;
        siguiente_ = nullptr;
        datos_ = new double*[filas_];
        for (int i = 0; i < filas_; ++i) {
            datos_[i] = new double[columnas_];
            for (int j = 0; j < columnas_; ++j)
                datos_[i][j] = otra.datos_[i][j];
        }
    }
    return *this;
}

MatrizAutoreferenciada::~MatrizAutoreferenciada() { liberar(); }

void MatrizAutoreferenciada::liberar() {
    if (datos_) {
        for (int i = 0; i < filas_; ++i)
            delete[] datos_[i];
        delete[] datos_;
        datos_ = nullptr;
    }
}

void MatrizAutoreferenciada::setSiguiente(MatrizAutoreferenciada* otra) {
    siguiente_ = otra;
}

MatrizAutoreferenciada* MatrizAutoreferenciada::getSiguiente() const {
    return siguiente_;
}

void MatrizAutoreferenciada::llenar(double valor) {
    for (int i = 0; i < filas_; ++i)
        for (int j = 0; j < columnas_; ++j)
            datos_[i][j] = valor;
}

MatrizAutoreferenciada MatrizAutoreferenciada::multiplicarPorConstante(double k) const {
    MatrizAutoreferenciada R(filas_, columnas_);
    for (int i = 0; i < filas_; ++i)
        for (int j = 0; j < columnas_; ++j)
            R.datos_[i][j] = datos_[i][j] * k;
    return R;
}

MatrizAutoreferenciada MatrizAutoreferenciada::multiplicarConSiguiente() const {
    if (!siguiente_)
        throw std::runtime_error("No hay matriz siguiente");
    const MatrizAutoreferenciada& B = *siguiente_;
    if (columnas_ != B.filas_)
        throw std::runtime_error("Dimensiones incompatibles");
    MatrizAutoreferenciada R(filas_, B.columnas_);
    for (int i = 0; i < filas_; ++i)
        for (int j = 0; j < B.columnas_; ++j) {
            double s = 0;
            for (int k = 0; k < columnas_; ++k)
                s += datos_[i][k] * B.datos_[k][j];
            R.datos_[i][j] = s;
        }
    return R;
}

void MatrizAutoreferenciada::imprimir() const {
    for (int i = 0; i < filas_; ++i) {
        for (int j = 0; j < columnas_; ++j)
            std::cout << datos_[i][j] << " ";
        std::cout << "\n";
    }
}
