"""Clase Auto: precio y año. Equivalente a C++ Auto."""


class Auto:
    def __init__(self, precio: float = 0.0, anio: int = 0) -> None:
        self._precio = precio
        self._anio = anio

    def get_precio(self) -> float:
        return self._precio

    def set_precio(self, precio: float) -> None:
        self._precio = precio

    def get_anio(self) -> int:
        return self._anio

    def set_anio(self, anio: int) -> None:
        self._anio = anio
