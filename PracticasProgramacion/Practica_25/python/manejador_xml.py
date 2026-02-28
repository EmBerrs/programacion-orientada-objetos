"""
ManejadorXML: escribe y lee archivos XML con datos basicos, arreglos, AutoADT y PersonaADT.
Estructura equivalente al C++: declaracion XML, elementos con atributos.
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


def _escape(s: str) -> str:
    return s.replace("&","&amp;").replace("<","&lt;").replace(">","&gt;").replace('"',"&quot;")

class ManejadorXML:
    def escribir_datos_basicos(self, nombre_archivo: str) -> None:
        with open(nombre_archivo, "w") as f:
            f.write('<?xml version="1.0" encoding="UTF-8"?>\n')
            f.write("<datos>\n")
            f.write('  <int valor="42"/>\n')
            f.write('  <double valor="3.14"/>\n')
            f.write('  <char valor="a"/>\n')
            f.write('  <bool valor="true"/>\n')
            f.write("</datos>\n")

    def escribir_arreglo(self, nombre_archivo: str) -> None:
        arr = [1, 2, 3, 4, 5]
        with open(nombre_archivo, "w") as f:
            f.write('<?xml version="1.0" encoding="UTF-8"?>\n')
            f.write("<arreglo>\n")
            for i, v in enumerate(arr):
                f.write(f'  <elemento index="{i}" valor="{v}"/>\n')
            f.write("</arreglo>\n")

    def escribir_autos(self, nombre_archivo: str) -> None:
        autos: List[AutoADT] = [AutoADT(15000, 2020), AutoADT(25000, 2023)]
        with open(nombre_archivo, "w") as f:
            f.write('<?xml version="1.0" encoding="UTF-8"?>\n')
            f.write("<autos>\n")
            for a in autos:
                f.write(f'  <auto precio="{a.precio}" anio="{a.anio}"/>\n')
            f.write("</autos>\n")

    def escribir_personas(self, nombre_archivo: str) -> None:
        personas: List[PersonaADT] = [
            PersonaADT("Juan", "Garcia", "Lopez", "M", 25),
            PersonaADT("Maria", "Perez", "Sanchez", "F", 30),
        ]
        with open(nombre_archivo, "w") as f:
            f.write('<?xml version="1.0" encoding="UTF-8"?>\n')
            f.write("<personas>\n")
            for p in personas:
                f.write(f'  <persona nombre="{_escape(p.nombre)}" ap="{_escape(p.ap)}" am="{_escape(p.am)}" genero="{_escape(p.genero)}" edad="{p.edad}"/>\n')
            f.write("</personas>\n")

    def leer_y_mostrar(self, nombre_archivo: str) -> None:
        try:
            with open(nombre_archivo) as f:
                for linea in f:
                    print(linea.rstrip())
        except OSError:
            print(f"No se pudo abrir {nombre_archivo}")
