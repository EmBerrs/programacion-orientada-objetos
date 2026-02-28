/**
 * Practica_10 - EstadisticasArreglo.h
 * 5 numeros en arreglo: promedio, media, maximo, minimo, suma
 */

#ifndef ESTADISTICASARREGLO_H
#define ESTADISTICASARREGLO_H

class EstadisticasArreglo {
    static constexpr int N = 5;
    double numeros_[N];

public:
    void ingresarNumeros();
    void calcular() const;
    void mostrarResultados() const;

    double getSuma() const;
    double getPromedio() const;
    double getMediana() const;
    double getMaximo() const;
    double getMinimo() const;
};

#endif // ESTADISTICASARREGLO_H
