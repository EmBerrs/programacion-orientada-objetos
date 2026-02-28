#include "OrdenadorMergeSort.h"
#include <algorithm>
#include <cstring>

void OrdenadorMergeSort::merge(char arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    char* L = new char[n1], * R = new char[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSort::mergeSort(char arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSort::ordenarCaracteres(char arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSort::merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int* L = new int[n1], * R = new int[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSort::mergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSort::ordenarEnteros(int arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSort::merge(AutoPOO arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    AutoPOO* L = new AutoPOO[n1], * R = new AutoPOO[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i].getPrecio() <= R[j].getPrecio()) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSort::mergeSort(AutoPOO arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSort::ordenarAutos(AutoPOO arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSort::merge(AutoPE arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    AutoPE* L = new AutoPE[n1], * R = new AutoPE[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i].precio <= R[j].precio) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSort::mergeSort(AutoPE arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSort::ordenarAutosPE(AutoPE arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSort::merge(PersonaPOO arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    PersonaPOO* L = new PersonaPOO[n1], * R = new PersonaPOO[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i].getNombre() <= R[j].getNombre()) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSort::mergeSort(PersonaPOO arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSort::ordenarPersonas(PersonaPOO arr[], int n) { mergeSort(arr, 0, n - 1); }

void OrdenadorMergeSort::merge(PersonaPE arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    PersonaPE* L = new PersonaPE[n1], * R = new PersonaPE[n2];
    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i].nombre <= R[j].nombre) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L; delete[] R;
}
void OrdenadorMergeSort::mergeSort(PersonaPE arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}
void OrdenadorMergeSort::ordenarPersonasPE(PersonaPE arr[], int n) { mergeSort(arr, 0, n - 1); }
