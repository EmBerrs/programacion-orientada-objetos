"""
OrdenadorBurbuja: bubble sort para char[], int[], AutoPOO[], AutoPE[], PersonaPOO[], PersonaPE[].
Comparaciones adyacentes; swap si orden incorrecto. O(n²).
"""

from dataclasses import dataclass
from typing import List, TypeVar

T = TypeVar("T")


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


class OrdenadorBurbuja:
    def ordenar_caracteres(self, arr: List[str]) -> None:
        n = len(arr)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[j] > arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]

    def ordenar_enteros(self, arr: List[int]) -> None:
        n = len(arr)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[j] > arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]

    def ordenar_autos(self, arr: List[AutoPOO]) -> None:
        n = len(arr)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[j].get_precio() > arr[j + 1].get_precio():
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]

    def ordenar_autos_pe(self, arr: List[AutoPE]) -> None:
        n = len(arr)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[j].precio > arr[j + 1].precio:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]

    def ordenar_personas(self, arr: List[PersonaPOO]) -> None:
        n = len(arr)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[j].get_nombre() > arr[j + 1].get_nombre():
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]

    def ordenar_personas_pe(self, arr: List[PersonaPE]) -> None:
        n = len(arr)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[j].nombre > arr[j + 1].nombre:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]
