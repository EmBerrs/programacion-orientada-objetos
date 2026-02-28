"""Coche: precio y año."""


class Coche:
    def __init__(self, precio: float = 0.0, anio: int = 0) -> None:
        self._precio = precio
        self._anio = anio

    def get_precio(self) -> float:
        return self._precio

    def get_anio(self) -> int:
        return self._anio
