/**
 * Practica_11 - EstadisticasPuntero.h
 * 5 numeros mediante puntero (acceso indirecto)
 */

#ifndef ESTADISTICASPUNTERO_H
#define ESTADISTICASPUNTERO_H

class EstadisticasPuntero {
    static constexpr int N = 5;
    double* numeros_;

public:
    EstadisticasPuntero();
    ~EstadisticasPuntero();

    EstadisticasPuntero(const EstadisticasPuntero&) = delete;
    EstadisticasPuntero& operator=(const EstadisticasPuntero&) = delete;

    void ingresarNumeros();
    void mostrarResultados() const;

    double getSuma() const;
    double getPromedio() const;
    double getMediana() const;
    double getMaximo() const;
    double getMinimo() const;
};

#endif // ESTADISTICASPUNTERO_H
