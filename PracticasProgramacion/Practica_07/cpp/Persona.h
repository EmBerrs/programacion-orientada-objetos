/**
 * Practica_07 - Persona.h
 * Nuevo tipo: Persona (nombre, ap, am, genero, edad) POO
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre_;
    std::string ap_;   // apellido paterno
    std::string am_;   // apellido materno
    std::string genero_;
    int edad_;

public:
    Persona();
    Persona(const std::string& nombre, const std::string& ap, const std::string& am,
            const std::string& genero, int edad);

    std::string getNombre() const;
    void setNombre(const std::string& nombre);
    std::string getAp() const;
    void setAp(const std::string& ap);
    std::string getAm() const;
    void setAm(const std::string& am);
    std::string getGenero() const;
    void setGenero(const std::string& genero);
    int getEdad() const;
    void setEdad(int edad);
};

#endif // PERSONA_H
