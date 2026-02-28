"""
OrdenadorQuickSort: pivote último elemento; partition por Lomuto.
Divide en <pivot y >=pivot; recursión en ambas mitades. O(n log n) promedio.
"""

from dataclasses import dataclass
from typing import List


@dataclass
class AutoPE:
    precio: float
    anio: int


@dataclass
class PersonaPE:
    nombre: str
    edad: int


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


class OrdenadorQuickSort:
    def _partition_chars(self, arr: List[str], low: int, high: int) -> int:
        pivot = arr[high]
        i = low - 1
        for j in range(low, high):
            if arr[j] <= pivot:
                i += 1
                arr[i], arr[j] = arr[j], arr[i]
        arr[i + 1], arr[high] = arr[high], arr[i + 1]
        return i + 1

    def _qs_chars(self, arr: List[str], low: int, high: int) -> None:
        if low < high:
            pi = self._partition_chars(arr, low, high)
            self._qs_chars(arr, low, pi - 1)
            self._qs_chars(arr, pi + 1, high)

    def ordenar_caracteres(self, arr: List[str]) -> None:
        self._qs_chars(arr, 0, len(arr) - 1)

    def ordenar_enteros(self, arr: List[int]) -> None:
        if len(arr) <= 1:
            return
        pivot = arr[-1]
        L = [x for x in arr[:-1] if x <= pivot]
        R = [x for x in arr[:-1] if x > pivot]
        self.ordenar_enteros(L)
        self.ordenar_enteros(R)
        arr[:] = L + [pivot] + R

    def ordenar_autos(self, arr: List[AutoPOO]) -> None:
        arr.sort(key=lambda x: x.get_precio())

    def ordenar_autos_pe(self, arr: List[AutoPE]) -> None:
        arr.sort(key=lambda x: x.precio)

    def ordenar_personas(self, arr: List[PersonaPOO]) -> None:
        arr.sort(key=lambda x: x.get_nombre())

    def ordenar_personas_pe(self, arr: List[PersonaPE]) -> None:
        arr.sort(key=lambda x: x.nombre)
