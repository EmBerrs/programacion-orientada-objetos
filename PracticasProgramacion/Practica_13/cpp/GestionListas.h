/**
 * Practica_13 - GestionListas.h
 * Lista de personas y coches (arreglos de tipos creados)
 */

#ifndef GESTIONLISTAS_H
#define GESTIONLISTAS_H

#include "Persona.h"
#include "Coche.h"

class GestionListas {
    static constexpr int MAX = 5;
    Persona personas_[MAX];
    Coche coches_[MAX];
    int nPersonas_;
    int nCoches_;

public:
    GestionListas();

    void agregarPersona(const Persona& p);
    void agregarCoche(const Coche& c);
    void agregarDatosEjemplo();

    void mostrarPersonas() const;
    void mostrarCoches() const;
};

#endif // GESTIONLISTAS_H
