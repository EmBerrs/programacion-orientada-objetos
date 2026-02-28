#ifndef ORDENADORMERGESORTINDIRECTO_H
#define ORDENADORMERGESORTINDIRECTO_H

#include <string>

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

class OrdenadorMergeSortIndirecto {
    void merge(char* arr[], int l, int m, int r);
    void mergeSort(char* arr[], int l, int r);
    void merge(int* arr[], int l, int m, int r);
    void mergeSort(int* arr[], int l, int r);
    void merge(AutoPOO* arr[], int l, int m, int r);
    void mergeSort(AutoPOO* arr[], int l, int r);
    void merge(PersonaPOO* arr[], int l, int m, int r);
    void mergeSort(PersonaPOO* arr[], int l, int r);

public:
    void ordenarCaracteres(char* arr[], int n);
    void ordenarEnteros(int* arr[], int n);
    void ordenarAutos(AutoPOO* arr[], int n);
    void ordenarPersonas(PersonaPOO* arr[], int n);
};

#endif
