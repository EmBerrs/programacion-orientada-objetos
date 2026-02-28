/**
 * Practica_23 - MatrizAutoreferenciada.h
 * Matriz con puntero/referencia al mismo tipo (como ejercicio 12)
 */

#ifndef MATRIZAUTOREFERENCIADA_H
#define MATRIZAUTOREFERENCIADA_H

class MatrizAutoreferenciada {
    int filas_, columnas_;
    double** datos_;
    MatrizAutoreferenciada* siguiente_;  // Puntero al mismo tipo

    void liberar();

public:
    MatrizAutoreferenciada(int filas, int columnas);
    MatrizAutoreferenciada(const MatrizAutoreferenciada& otra);
    MatrizAutoreferenciada& operator=(const MatrizAutoreferenciada& otra);
    ~MatrizAutoreferenciada();

    void setSiguiente(MatrizAutoreferenciada* otra);
    MatrizAutoreferenciada* getSiguiente() const;

    void llenar(double valor);
    MatrizAutoreferenciada multiplicarPorConstante(double k) const;
    MatrizAutoreferenciada multiplicarConSiguiente() const;

    void imprimir() const;
};

#endif // MATRIZAUTOREFERENCIADA_H
