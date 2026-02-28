#include "OrdenadorBurbujaIndirecto.h"
#include <utility>

void OrdenadorBurbujaIndirecto::ordenarCaracteres(char* arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (*arr[j] > *arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbujaIndirecto::ordenarEnteros(int* arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (*arr[j] > *arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbujaIndirecto::ordenarAutos(AutoPOO* arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j]->getPrecio() > arr[j + 1]->getPrecio())
                std::swap(arr[j], arr[j + 1]);
}

void OrdenadorBurbujaIndirecto::ordenarPersonas(PersonaPOO* arr[], int n) {
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j]->getNombre() > arr[j + 1]->getNombre())
                std::swap(arr[j], arr[j + 1]);
}
