#include "GestionListas.h"
#include <iostream>

GestionListas::GestionListas() : nPersonas_(0), nCoches_(0) {}

void GestionListas::agregarPersona(const Persona& p) {
    if (nPersonas_ < MAX)
        personas_[nPersonas_++] = p;
}

void GestionListas::agregarCoche(const Coche& c) {
    if (nCoches_ < MAX)
        coches_[nCoches_++] = c;
}

void GestionListas::agregarDatosEjemplo() {
    agregarPersona(Persona("Ana", "Garcia", "Lopez", "F", 25));
    agregarPersona(Persona("Luis", "Perez", "Sanchez", "M", 30));
    agregarCoche(Coche(15000, 2020));
    agregarCoche(Coche(25000, 2023));
}

void GestionListas::mostrarPersonas() const {
    std::cout << "--- Personas ---\n";
    for (int i = 0; i < nPersonas_; ++i)
        std::cout << personas_[i].getNombre() << " " << personas_[i].getAp() << " "
                  << personas_[i].getAm() << ", " << personas_[i].getGenero() << ", "
                  << personas_[i].getEdad() << " años\n";
}

void GestionListas::mostrarCoches() const {
    std::cout << "\n--- Coches ---\n";
    for (int i = 0; i < nCoches_; ++i)
        std::cout << "Anio: " << coches_[i].getAnio() << ", Precio: " << coches_[i].getPrecio() << "\n";
}
