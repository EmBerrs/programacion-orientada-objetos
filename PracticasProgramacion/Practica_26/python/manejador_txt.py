"""
ManejadorTXT: escribe y lee archivos de texto plano con datos basicos, arreglos, AutoADT y PersonaADT.
Formato legible por humanos, similar al C++.
"""

from dataclasses import dataclass
from typing import List


@dataclass
class AutoADT:
    precio: float
    anio: int


@dataclass
class PersonaADT:
    nombre: str
    ap: str
    am: str
    genero: str
    edad: int


class ManejadorTXT:
    def escribir_datos_basicos(self, nombre_archivo: str) -> None:
        with open(nombre_archivo, "w") as f:
            f.write("int: 42\n")
            f.write("double: 3.14\n")
            f.write("char: a\n")
            f.write("bool: true\n")

    def escribir_arreglo(self, nombre_archivo: str) -> None:
        arr = [1, 2, 3, 4, 5]
        with open(nombre_archivo, "w") as f:
            for i, v in enumerate(arr):
                f.write(f"arr[{i}] = {v}\n")

    def escribir_autos(self, nombre_archivo: str) -> None:
        autos: List[AutoADT] = [AutoADT(15000, 2020), AutoADT(25000, 2023)]
        with open(nombre_archivo, "w") as f:
            for i, a in enumerate(autos):
                f.write(f"Auto {i}: precio={a.precio} anio={a.anio}\n")

    def escribir_personas(self, nombre_archivo: str) -> None:
        personas: List[PersonaADT] = [
            PersonaADT("Juan", "Garcia", "Lopez", "M", 25),
            PersonaADT("Maria", "Perez", "Sanchez", "F", 30),
        ]
        with open(nombre_archivo, "w") as f:
            for i, p in enumerate(personas):
                f.write(f"Persona {i}: {p.nombre} {p.ap} {p.am}, {p.genero}, {p.edad} años\n")

    def leer_y_mostrar(self, nombre_archivo: str) -> None:
        try:
            with open(nombre_archivo) as f:
                for linea in f:
                    print(linea.rstrip())
        except OSError:
            print(f"No se pudo abrir {nombre_archivo}")
