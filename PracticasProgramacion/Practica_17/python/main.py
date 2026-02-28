"""
Practica_17 - Burbuja: caracteres, enteros, Auto, Persona (PE y POO).
"""

from ordenador_burbuja import OrdenadorBurbuja, AutoPOO, AutoPE, PersonaPOO, PersonaPE

if __name__ == "__main__":
    ord_ = OrdenadorBurbuja()

    chars = list("zamb")
    ord_.ordenar_caracteres(chars)
    print(f"Chars: {''.join(chars)}")

    enteros = [4, 1, 3, 2]
    ord_.ordenar_enteros(enteros)
    print(f"Enteros: {enteros}")

    autos = [AutoPOO(20000, 2020), AutoPOO(15000, 2022)]
    ord_.ordenar_autos(autos)
    print(f"Autos POO: {[a.get_precio() for a in autos]}")

    autos_pe = [AutoPE(20000, 2020), AutoPE(15000, 2022)]
    ord_.ordenar_autos_pe(autos_pe)
    print(f"Autos PE: {[a.precio for a in autos_pe]}")

    personas = [PersonaPOO("Carlos", 25), PersonaPOO("Ana", 30)]
    ord_.ordenar_personas(personas)
    print(f"Personas POO: {[p.get_nombre() for p in personas]}")

    personas_pe = [PersonaPE("Maria", 28), PersonaPE("Luis", 22)]
    ord_.ordenar_personas_pe(personas_pe)
    print(f"Personas PE: {[p.nombre for p in personas_pe]}")
