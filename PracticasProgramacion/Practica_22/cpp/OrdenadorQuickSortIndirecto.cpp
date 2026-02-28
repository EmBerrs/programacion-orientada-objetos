#include "OrdenadorQuickSortIndirecto.h"
#include <utility>
#include <string>

int OrdenadorQuickSortIndirecto::partition(char* arr[], int low, int high) {
    char pivot = *arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (*arr[j] <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSortIndirecto::quickSort(char* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSortIndirecto::ordenarCaracteres(char* arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSortIndirecto::partition(int* arr[], int low, int high) {
    int pivot = *arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (*arr[j] <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSortIndirecto::quickSort(int* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSortIndirecto::ordenarEnteros(int* arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSortIndirecto::partition(AutoPOO* arr[], int low, int high) {
    double pivot = arr[high]->getPrecio();
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j]->getPrecio() <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSortIndirecto::quickSort(AutoPOO* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSortIndirecto::ordenarAutos(AutoPOO* arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSortIndirecto::partition(PersonaPOO* arr[], int low, int high) {
    std::string pivot = arr[high]->getNombre();
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j]->getNombre() <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSortIndirecto::quickSort(PersonaPOO* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSortIndirecto::ordenarPersonas(PersonaPOO* arr[], int n) { quickSort(arr, 0, n - 1); }
