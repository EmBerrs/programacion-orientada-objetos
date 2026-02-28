/**
 * Practica_07 - Auto.h
 * Nuevo tipo de dato: Auto (precio, anio)
 */

#ifndef AUTO_H
#define AUTO_H

class Auto {
private:
    double precio_;
    int anio_;

public:
    Auto();
    Auto(double precio, int anio);

    double getPrecio() const;
    void setPrecio(double precio);
    int getAnio() const;
    void setAnio(int anio);
};

#endif // AUTO_H
