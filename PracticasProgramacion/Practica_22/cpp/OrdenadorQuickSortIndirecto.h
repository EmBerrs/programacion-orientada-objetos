#ifndef ORDENADORQUICKSORTINDIRECTO_H
#define ORDENADORQUICKSORTINDIRECTO_H

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

class OrdenadorQuickSortIndirecto {
    int partition(char* arr[], int low, int high);
    void quickSort(char* arr[], int low, int high);
    int partition(int* arr[], int low, int high);
    void quickSort(int* arr[], int low, int high);
    int partition(AutoPOO* arr[], int low, int high);
    void quickSort(AutoPOO* arr[], int low, int high);
    int partition(PersonaPOO* arr[], int low, int high);
    void quickSort(PersonaPOO* arr[], int low, int high);

public:
    void ordenarCaracteres(char* arr[], int n);
    void ordenarEnteros(int* arr[], int n);
    void ordenarAutos(AutoPOO* arr[], int n);
    void ordenarPersonas(PersonaPOO* arr[], int n);
};

#endif
