#include "Coche.h"

Coche::Coche() : precio_(0), anio_(0) {}
Coche::Coche(double precio, int anio) : precio_(precio), anio_(anio) {}
double Coche::getPrecio() const { return precio_; }
void Coche::setPrecio(double precio) { precio_ = precio; }
int Coche::getAnio() const { return anio_; }
void Coche::setAnio(int anio) { anio_ = anio; }
