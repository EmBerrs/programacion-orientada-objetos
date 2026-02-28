/**
 * Practica_14 - GestionListasIndirecta.h
 * Acceso indirecto (punteros) a lista de personas
 */

#ifndef GESTIONLISTASINDIRECTA_H
#define GESTIONLISTASINDIRECTA_H

#include "Persona.h"

class GestionListasIndirecta {
    static constexpr int MAX = 5;
    Persona* personas_;

public:
    GestionListasIndirecta();
    ~GestionListasIndirecta();

    GestionListasIndirecta(const GestionListasIndirecta&) = delete;
    GestionListasIndirecta& operator=(const GestionListasIndirecta&) = delete;

    void agregarPersona(const Persona& p, int index);
    void agregarDatosEjemplo();
    void mostrarPersonas() const;
};

#endif // GESTIONLISTASINDIRECTA_H
