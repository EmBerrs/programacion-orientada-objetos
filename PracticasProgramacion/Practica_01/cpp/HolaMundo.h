/**
 * Practica_01 - HolaMundo.h
 * Clase para mostrar mensaje básico en consola
 */

#ifndef HOLAMUNDO_H
#define HOLAMUNDO_H

#include <string>

class HolaMundo {
private:
    std::string mensaje_;

public:
    HolaMundo();
    explicit HolaMundo(const std::string& mensaje);

    void mostrar() const;
    void setMensaje(const std::string& mensaje);
    std::string getMensaje() const;
};

#endif // HOLAMUNDO_H
