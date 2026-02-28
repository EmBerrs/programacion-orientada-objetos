#include "OrdenadorQuickSort.h"
#include <utility>
#include <string>

int OrdenadorQuickSort::partition(char arr[], int low, int high) {
    char pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j] <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSort::quickSort(char arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSort::ordenarCaracteres(char arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSort::partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j] <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSort::quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSort::ordenarEnteros(int arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSort::partition(AutoPOO arr[], int low, int high) {
    double pivot = arr[high].getPrecio();
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j].getPrecio() <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSort::quickSort(AutoPOO arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSort::ordenarAutos(AutoPOO arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSort::partition(AutoPE arr[], int low, int high) {
    double pivot = arr[high].precio;
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j].precio <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSort::quickSort(AutoPE arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSort::ordenarAutosPE(AutoPE arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSort::partition(PersonaPOO arr[], int low, int high) {
    std::string pivot = arr[high].getNombre();
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j].getNombre() <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSort::quickSort(PersonaPOO arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSort::ordenarPersonas(PersonaPOO arr[], int n) { quickSort(arr, 0, n - 1); }

int OrdenadorQuickSort::partition(PersonaPE arr[], int low, int high) {
    std::string pivot = arr[high].nombre;
    int i = low - 1;
    for (int j = low; j < high; ++j)
        if (arr[j].nombre <= pivot) std::swap(arr[++i], arr[j]);
    std::swap(arr[++i], arr[high]);
    return i;
}
void OrdenadorQuickSort::quickSort(PersonaPE arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void OrdenadorQuickSort::ordenarPersonasPE(PersonaPE arr[], int n) { quickSort(arr, 0, n - 1); }
