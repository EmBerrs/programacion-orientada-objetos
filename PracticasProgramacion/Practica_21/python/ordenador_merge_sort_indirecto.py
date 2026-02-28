"""
OrdenadorMergeSortIndirecto: merge sort sobre listas de referencias.
"""

from typing import List


class AutoPOO:
    def __init__(self, precio: float = 0, anio: int = 0) -> None:
        self._precio = precio
        self._anio = anio

    def get_precio(self) -> float:
        return self._precio


class PersonaPOO:
    def __init__(self, nombre: str = "", edad: int = 0) -> None:
        self._nombre = nombre
        self._edad = edad

    def get_nombre(self) -> str:
        return self._nombre


class OrdenadorMergeSortIndirecto:
    def ordenar_caracteres(self, arr: List[str], refs: List[int]) -> None:
        if len(refs) <= 1:
            return
        mid = len(refs) // 2
        L, R = refs[:mid], refs[mid:]
        self.ordenar_caracteres(arr, L)
        self.ordenar_caracteres(arr, R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if arr[L[i]] <= arr[R[j]]:
                refs[k] = L[i]
                i += 1
            else:
                refs[k] = R[j]
                j += 1
            k += 1
        refs[k:] = L[i:] or R[j:]

    def ordenar_autos(self, refs: List[AutoPOO]) -> None:
        refs.sort(key=lambda x: x.get_precio())

    def ordenar_personas(self, refs: List[PersonaPOO]) -> None:
        refs.sort(key=lambda x: x.get_nombre())
