"""
Practica_07 - Auto y Persona (PE y POO).
"""

from auto import Auto
from persona import Persona
from tipos_pe import AutoPE, PersonaPE

if __name__ == "__main__":
    mi_auto = Auto(25000.50, 2023)
    print(f"Auto POO: anio={mi_auto.get_anio()}, precio={mi_auto.get_precio()}")

    auto_pe = AutoPE(precio=18000.0, anio=2021)
    print(f"Auto PE: anio={auto_pe.anio}, precio={auto_pe.precio}")

    persona = Persona("Juan", "Garcia", "Lopez", "M", 25)
    print(f"Persona POO: {persona.get_nombre()} {persona.get_ap()} {persona.get_am()}, "
          f"{persona.get_genero()}, {persona.get_edad()} años")

    persona_pe = PersonaPE(nombre="Maria", ap="Perez", am="Sanchez", genero="F", edad=30)
    print(f"Persona PE: {persona_pe.nombre} {persona_pe.ap} {persona_pe.am}, "
          f"{persona_pe.genero}, {persona_pe.edad} años")
