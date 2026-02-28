#include "OrdenadorMergeSortIndirecto.h"
#include <utility>

void OrdenadorMergeSortIndirecto::merge(char* arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    char** L = new char*[n1];
    char** R = new char*[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (*L[i] <= *R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSortIndirecto::mergeSort(char* arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSortIndirecto::ordenarCaracteres(char* arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSortIndirecto::merge(int* arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int** L = new int*[n1], ** R = new int*[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (*L[i] <= *R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSortIndirecto::mergeSort(int* arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSortIndirecto::ordenarEnteros(int* arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSortIndirecto::merge(AutoPOO* arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    AutoPOO** L = new AutoPOO*[n1], ** R = new AutoPOO*[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i]->getPrecio() <= R[j]->getPrecio()) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSortIndirecto::mergeSort(AutoPOO* arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSortIndirecto::ordenarAutos(AutoPOO* arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSortIndirecto::merge(PersonaPOO* arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    PersonaPOO** L = new PersonaPOO*[n1], ** R = new PersonaPOO*[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i]->getNombre() <= R[j]->getNombre()) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSortIndirecto::mergeSort(PersonaPOO* arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSortIndirecto::ordenarPersonas(PersonaPOO* arr[], int n) { mergeSort(arr, 0, n - 1); }
