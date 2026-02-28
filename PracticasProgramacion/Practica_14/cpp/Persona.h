#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona {
    std::string nombre_;
    std::string ap_;
    std::string am_;
    std::string genero_;
    int edad_;

public:
    Persona();
    Persona(const std::string& nombre, const std::string& ap, const std::string& am,
            const std::string& genero, int edad);

    std::string getNombre() const;
    void setNombre(const std::string& nombre);
    std::string getAp() const;
    std::string getAm() const;
    std::string getGenero() const;
    int getEdad() const;
};

#endif // PERSONA_H
