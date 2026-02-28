/**
 * Practica_12 - Matriz.h
 * Operaciones: A * constante, A * B
 */

#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz {
    int filas_, columnas_;
    double** datos_;

    void liberar();

public:
    Matriz(int filas, int columnas);
    Matriz(const Matriz& otra);
    Matriz& operator=(const Matriz& otra);
    ~Matriz();

    void llenar(double valor);
    void set(int f, int c, double v);
    double get(int f, int c) const;

    Matriz multiplicarPorConstante(double k) const;
    Matriz multiplicar(const Matriz& B) const;

    void imprimir() const;
    int getFilas() const { return filas_; }
    int getColumnas() const { return columnas_; }
};

#endif // MATRIZ_H
