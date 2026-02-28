"""
OrdenadorQuickSortIndirecto: quick sort sobre listas de referencias.
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


class OrdenadorQuickSortIndirecto:
    def ordenar_caracteres(self, arr: List[str], refs: List[int]) -> None:
        if len(refs) <= 1:
            return
        pivot_val = arr[refs[-1]]
        L = [r for r in refs[:-1] if arr[r] <= pivot_val]
        R = [r for r in refs[:-1] if arr[r] > pivot_val]
        self.ordenar_caracteres(arr, L)
        self.ordenar_caracteres(arr, R)
        refs[:] = L + [refs[-1]] + R

    def ordenar_autos(self, refs: List[AutoPOO]) -> None:
        refs.sort(key=lambda x: x.get_precio())

    def ordenar_personas(self, refs: List[PersonaPOO]) -> None:
        refs.sort(key=lambda x: x.get_nombre())
