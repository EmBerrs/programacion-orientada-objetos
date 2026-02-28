/**
 * Practica_17 - OrdenadorBurbuja.h
 * Burbuja: caracteres, enteros, tipo creado (PE y POO)
 */

#ifndef ORDENADORBURBUJA_H
#define ORDENADORBURBUJA_H

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
    int getEdad() const { return edad_; }
};

class OrdenadorBurbuja {
public:
    void ordenarCaracteres(char arr[], int n);
    void ordenarEnteros(int arr[], int n);
    void ordenarAutos(AutoPOO arr[], int n);
    void ordenarAutosPE(AutoPE arr[], int n);
    void ordenarPersonas(PersonaPOO arr[], int n);
    void ordenarPersonasPE(PersonaPE arr[], int n);
};

#endif // ORDENADORBURBUJA_H
