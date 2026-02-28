"""
Practica_18 - Merge Sort.
"""

from ordenador_merge_sort import OrdenadorMergeSort, AutoPOO, AutoPE, PersonaPOO, PersonaPE

if __name__ == "__main__":
    ord_ = OrdenadorMergeSort()
    chars = list("zamb")
    ord_.ordenar_caracteres(chars)
    print(f"Chars: {''.join(chars)}")
    enteros = [4, 1, 3, 2]
    ord_.ordenar_enteros(enteros)
    print(f"Enteros: {enteros}")
    autos = [AutoPOO(20000, 2020), AutoPOO(15000, 2022)]
    ord_.ordenar_autos(autos)
    print(f"Autos: {[a.get_precio() for a in autos]}")
    personas = [PersonaPOO("Carlos", 25), PersonaPOO("Ana", 30)]
    ord_.ordenar_personas(personas)
    print(f"Personas: {[p.get_nombre() for p in personas]}")
