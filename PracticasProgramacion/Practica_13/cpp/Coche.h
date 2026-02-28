#ifndef COCHE_H
#define COCHE_H

class Coche {
    double precio_;
    int anio_;

public:
    Coche();
    Coche(double precio, int anio);
    double getPrecio() const;
    void setPrecio(double precio);
    int getAnio() const;
    void setAnio(int anio);
};

#endif // COCHE_H
