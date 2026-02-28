"""Persona: nombre, ap, am, genero, edad."""


class Persona:
    def __init__(
        self,
        nombre: str = "",
        ap: str = "",
        am: str = "",
        genero: str = "",
        edad: int = 0,
    ) -> None:
        self._nombre = nombre
        self._ap = ap
        self._am = am
        self._genero = genero
        self._edad = edad

    def get_nombre(self) -> str:
        return self._nombre

    def get_ap(self) -> str:
        return self._ap

    def get_am(self) -> str:
        return self._am

    def get_genero(self) -> str:
        return self._genero

    def get_edad(self) -> int:
        return self._edad
