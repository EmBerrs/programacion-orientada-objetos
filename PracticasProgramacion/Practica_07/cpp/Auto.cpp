#include "Auto.h"

Auto::Auto() : precio_(0.0), anio_(0) {}

Auto::Auto(double precio, int anio) : precio_(precio), anio_(anio) {}

double Auto::getPrecio() const { return precio_; }
void Auto::setPrecio(double precio) { precio_ = precio; }
int Auto::getAnio() const { return anio_; }
void Auto::setAnio(int anio) { anio_ = anio; }
