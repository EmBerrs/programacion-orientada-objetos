/**
 * Practica_18 - OrdenadorMergeSort.h
 */

#ifndef ORDENADORMERGESORT_H
#define ORDENADORMERGESORT_H

#include <string>

struct AutoPE {
    double precio;
    int anio;
};

struct PersonaPE {
    std::string nombre;
    int edad;
};

class AutoPOO {
    double precio_;
    int anio_;
public:
    AutoPOO() : precio_(0), anio_(0) {}
    AutoPOO(double p, int a) : precio_(p), anio_(a) {}
    double getPrecio() const { return precio_; }
};

class PersonaPOO {
    std::string nombre_;
    int edad_;
public:
    PersonaPOO() : edad_(0) {}
    PersonaPOO(const std::string& n, int e) : nombre_(n), edad_(e) {}
    std::string getNombre() const { return nombre_; }
};

class OrdenadorMergeSort {
    void merge(char arr[], int l, int m, int r);
    void mergeSort(char arr[], int l, int r);
    void merge(int arr[], int l, int m, int r);
    void mergeSort(int arr[], int l, int r);
    void merge(AutoPOO arr[], int l, int m, int r);
    void mergeSort(AutoPOO arr[], int l, int r);
    void merge(AutoPE arr[], int l, int m, int r);
    void mergeSort(AutoPE arr[], int l, int r);
    void merge(PersonaPOO arr[], int l, int m, int r);
    void mergeSort(PersonaPOO arr[], int l, int r);
    void merge(PersonaPE arr[], int l, int m, int r);
    void mergeSort(PersonaPE arr[], int l, int r);

public:
    void ordenarCaracteres(char arr[], int n);
    void ordenarEnteros(int arr[], int n);
    void ordenarAutos(AutoPOO arr[], int n);
    void ordenarAutosPE(AutoPE arr[], int n);
    void ordenarPersonas(PersonaPOO arr[], int n);
    void ordenarPersonasPE(PersonaPE arr[], int n);
};

#endif // ORDENADORMERGESORT_H
