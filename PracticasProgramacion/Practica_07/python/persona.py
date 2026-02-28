"""Clase Persona: nombre, ap, am, genero, edad."""


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

    def set_nombre(self, nombre: str) -> None:
        self._nombre = nombre

    def get_ap(self) -> str:
        return self._ap

    def set_ap(self, ap: str) -> None:
        self._ap = ap

    def get_am(self) -> str:
        return self._am

    def set_am(self, am: str) -> None:
        self._am = am

    def get_genero(self) -> str:
        return self._genero

    def set_genero(self, genero: str) -> None:
        self._genero = genero

    def get_edad(self) -> int:
        return self._edad

    def set_edad(self, edad: int) -> None:
        self._edad = edad
