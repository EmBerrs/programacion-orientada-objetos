#include "OrdenadorBurbuja.h"
#include <utility>

void OrdenadorBurbuja::ordenarCaracteres(char arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbuja::ordenarEnteros(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbuja::ordenarAutos(AutoPOO arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j].getPrecio() > arr[j + 1].getPrecio())
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbuja::ordenarAutosPE(AutoPE arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j].precio > arr[j + 1].precio)
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbuja::ordenarPersonas(PersonaPOO arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j].getNombre() > arr[j + 1].getNombre())
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbuja::ordenarPersonasPE(PersonaPE arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j].nombre > arr[j + 1].nombre)
                std::swap(arr[j], arr[j + 1]);
}
