"""
IdentificadorTamanios: reporta sizeof equivalente para tipos básicos y creados.
En Python usamos sys.getsizeof; para clases/structs el tamaño es del objeto.
"""

import sys
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


class AutoPOO:
    def __init__(self) -> None:
        self._precio = 0.0
        self._anio = 0


class PersonaPOO:
    def __init__(self) -> None:
        self._nombre = ""
        self._ap = ""
        self._am = ""
        self._genero = ""
        self._edad = 0


class IdentificadorTamanios:
    @staticmethod
    def mostrar_tamanios_basicos() -> None:
        print("--- Tipos basicos ---")
        for t, v in [
            ("int", 0),
            ("float", 0.0),
            ("bool", True),
            ("str (ej)", "x"),
        ]:
            print(f"sizeof({t}) ≈ {sys.getsizeof(v)}")

    @staticmethod
    def mostrar_tamanios_creados() -> None:
        print("\n--- Tipos creados (PE) ---")
        print(f"sizeof(AutoPE)   ≈ {sys.getsizeof(AutoPE(0.0, 0))}")
        print(f"sizeof(PersonaPE)≈ {sys.getsizeof(PersonaPE('','','','',0))}")
        print("\n--- Tipos creados (POO) ---")
        print(f"sizeof(AutoPOO)   ≈ {sys.getsizeof(AutoPOO())}")
        print(f"sizeof(PersonaPOO)≈ {sys.getsizeof(PersonaPOO())}")
