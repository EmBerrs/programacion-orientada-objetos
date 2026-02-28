"""Tipos PE: estructuras de datos para Auto y Persona."""

from dataclasses import dataclass


@dataclass
class AutoPE:
    precio: float
    anio: int


@dataclass
class PersonaPE:
    nombre: str
    ap: str
    am: str
    genero: str
    edad: int
