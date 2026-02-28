#include "GestionListasIndirecta.h"
#include <iostream>

GestionListasIndirecta::GestionListasIndirecta() : personas_(new Persona[MAX]) {}

GestionListasIndirecta::~GestionListasIndirecta() { delete[] personas_; }

void GestionListasIndirecta::agregarPersona(const Persona& p, int index) {
    if (index >= 0 && index < MAX)
        *(personas_ + index) = p;
}

void GestionListasIndirecta::agregarDatosEjemplo() {
    agregarPersona(Persona("Ana", "Garcia", "Lopez", "F", 25), 0);
    agregarPersona(Persona("Luis", "Perez", "Sanchez", "M", 30), 1);
    agregarPersona(Persona("Maria", "Ruiz", "Diaz", "F", 28), 2);
}

void GestionListasIndirecta::mostrarPersonas() const {
    std::cout << "--- Personas (acceso indirecto) ---\n";
    for (int i = 0; i < MAX; ++i) {
        const Persona& p = *(personas_ + i);
        if (p.getNombre() != "")
            std::cout << p.getNombre() << " " << p.getAp() << " " << p.getAm()
                      << ", " << p.getGenero() << ", " << p.getEdad() << " años\n";
    }
}
