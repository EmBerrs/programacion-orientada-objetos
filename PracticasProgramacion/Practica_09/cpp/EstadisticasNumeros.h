/**
 * Practica_09 - EstadisticasNumeros.h
 * Ingresar 5 numeros y calcular promedio, media, maximo, minimo, suma
 */

#ifndef ESTADISTICASNUMEROS_H
#define ESTADISTICASNUMEROS_H

class EstadisticasNumeros {
    double numeros_[5];
    double suma_;
    double promedio_;
    double mediana_;
    double maximo_;
    double minimo_;

public:
    EstadisticasNumeros();

    void ingresarNumeros();
    void calcular();
    void mostrarResultados() const;

    double getSuma() const;
    double getPromedio() const;
    double getMediana() const;
    double getMaximo() const;
    double getMinimo() const;
};

#endif // ESTADISTICASNUMEROS_H
