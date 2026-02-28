/**
 * Practica_01 - HolaMundo.cpp
 * Implementación de la clase HolaMundo
 */

#include "HolaMundo.h"
#include <iostream>

HolaMundo::HolaMundo() : mensaje_("Hola mundo") {}

HolaMundo::HolaMundo(const std::string& mensaje) : mensaje_(mensaje) {}

void HolaMundo::mostrar() const {
    std::cout << mensaje_ << std::endl;
}

void HolaMundo::setMensaje(const std::string& mensaje) {
    mensaje_ = mensaje;
}

std::string HolaMundo::getMensaje() const {
    return mensaje_;
}
