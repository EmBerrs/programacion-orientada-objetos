"""
GestionListas: arreglos de Persona y Coche (max 5 cada uno).
Composición: 1 GestionListas *-- 5 Persona, *-- 5 Coche.
"""

from persona import Persona
from coche import Coche


class GestionListas:
    MAX = 5

    def __init__(self) -> None:
        self._personas: list[Persona] = []
        self._coches: list[Coche] = []

    def agregar_persona(self, p: Persona) -> None:
        if len(self._personas) < self.MAX:
            self._personas.append(p)

    def agregar_coche(self, c: Coche) -> None:
        if len(self._coches) < self.MAX:
            self._coches.append(c)

    def agregar_datos_ejemplo(self) -> None:
        self.agregar_persona(Persona("Ana", "Garcia", "Lopez", "F", 25))
        self.agregar_persona(Persona("Luis", "Perez", "Sanchez", "M", 30))
        self.agregar_coche(Coche(15000.0, 2020))
        self.agregar_coche(Coche(25000.0, 2023))

    def mostrar_personas(self) -> None:
        print("--- Personas ---")
        for p in self._personas:
            print(f"{p.get_nombre()} {p.get_ap()} {p.get_am()}, "
                  f"{p.get_genero()}, {p.get_edad()} años")

    def mostrar_coches(self) -> None:
        print("\n--- Coches ---")
        for c in self._coches:
            print(f"Anio: {c.get_anio()}, Precio: {c.get_precio()}")
