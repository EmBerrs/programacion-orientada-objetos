"""
OrdenadorMergeSort: divide y conquista. Merge de mitades ordenadas.
O(n log n). Soporta char, int, AutoPOO, AutoPE, PersonaPOO, PersonaPE.
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


class OrdenadorMergeSort:
    def ordenar_caracteres(self, arr: List[str]) -> None:
        if len(arr) <= 1:
            return
        mid = len(arr) // 2
        L, R = arr[:mid], arr[mid:]
        self.ordenar_caracteres(L)
        self.ordenar_caracteres(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        arr[k:] = L[i:] or R[j:]

    def ordenar_enteros(self, arr: List[int]) -> None:
        if len(arr) <= 1:
            return
        mid = len(arr) // 2
        L, R = arr[:mid], arr[mid:]
        self.ordenar_enteros(L)
        self.ordenar_enteros(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        arr[k:] = L[i:] or R[j:]

    def ordenar_autos(self, arr: List[AutoPOO]) -> None:
        if len(arr) <= 1:
            return
        mid = len(arr) // 2
        L, R = arr[:mid], arr[mid:]
        self.ordenar_autos(L)
        self.ordenar_autos(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i].get_precio() <= R[j].get_precio():
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        arr[k:] = L[i:] or R[j:]

    def ordenar_autos_pe(self, arr: List[AutoPE]) -> None:
        arr.sort(key=lambda x: x.precio)

    def ordenar_personas(self, arr: List[PersonaPOO]) -> None:
        if len(arr) <= 1:
            return
        mid = len(arr) // 2
        L, R = arr[:mid], arr[mid:]
        self.ordenar_personas(L)
        self.ordenar_personas(R)
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i].get_nombre() <= R[j].get_nombre():
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1
        arr[k:] = L[i:] or R[j:]

    def ordenar_personas_pe(self, arr: List[PersonaPE]) -> None:
        arr.sort(key=lambda x: x.nombre)
