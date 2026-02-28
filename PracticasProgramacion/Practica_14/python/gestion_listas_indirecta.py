"""
GestionListasIndirecta: lista de Persona mediante estructura indexable.
Equivalente a Persona* en C++; acceso por índice = *(personas_ + i).
"""

from persona import Persona


class GestionListasIndirecta:
    MAX = 5

    def __init__(self) -> None:
        self._personas: list[Persona] = [Persona() for _ in range(self.MAX)]

    def agregar_persona(self, p: Persona, index: int) -> None:
        if 0 <= index < self.MAX:
            self._personas[index] = p

    def agregar_datos_ejemplo(self) -> None:
        self.agregar_persona(Persona("Ana", "Garcia", "Lopez", "F", 25), 0)
        self.agregar_persona(Persona("Luis", "Perez", "Sanchez", "M", 30), 1)
        self.agregar_persona(Persona("Maria", "Ruiz", "Diaz", "F", 28), 2)

    def mostrar_personas(self) -> None:
        print("--- Personas (acceso indirecto) ---")
        for i in range(self.MAX):
            p = self._personas[i]
            if p.get_nombre():
                print(f"{p.get_nombre()} {p.get_ap()} {p.get_am()}, "
                      f"{p.get_genero()}, {p.get_edad()} años")
