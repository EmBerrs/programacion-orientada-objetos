"""
OrdenadorBurbujaIndirecto: ordena arrays de referencias/índices en lugar del dato.
Equivalente a ordenar char*[], int*[] en C++; se intercambian referencias.
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


class OrdenadorBurbujaIndirecto:
    def ordenar_caracteres(self, arr: List[str], refs: List[int]) -> None:
        n = len(refs)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[refs[j]] > arr[refs[j + 1]]:
                    refs[j], refs[j + 1] = refs[j + 1], refs[j]

    def ordenar_enteros(self, arr: List[int], refs: List[int]) -> None:
        n = len(refs)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if arr[refs[j]] > arr[refs[j + 1]]:
                    refs[j], refs[j + 1] = refs[j + 1], refs[j]

    def ordenar_autos(self, refs: List[AutoPOO]) -> None:
        n = len(refs)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if refs[j].get_precio() > refs[j + 1].get_precio():
                    refs[j], refs[j + 1] = refs[j + 1], refs[j]

    def ordenar_personas(self, refs: List[PersonaPOO]) -> None:
        n = len(refs)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if refs[j].get_nombre() > refs[j + 1].get_nombre():
                    refs[j], refs[j + 1] = refs[j + 1], refs[j]
