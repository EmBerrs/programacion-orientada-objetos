"""
Practica_20 - Burbuja ordenamiento indirecto (índices/referencias).
"""

from ordenador_burbuja_indirecto import OrdenadorBurbujaIndirecto, AutoPOO, PersonaPOO

if __name__ == "__main__":
    ord_ = OrdenadorBurbujaIndirecto()
    chars = list("zamb")
    refs = [0, 1, 2, 3]
    ord_.ordenar_caracteres(chars, refs)
    print(f"Chars: {''.join(chars[i] for i in refs)}")
    enteros = [4, 1, 3, 2]
    refs_i = [0, 1, 2, 3]
    ord_.ordenar_enteros(enteros, refs_i)
    print(f"Enteros: {[enteros[i] for i in refs_i]}")
    a1, a2 = AutoPOO(20000, 2020), AutoPOO(15000, 2022)
    refs_a = [a1, a2]
    ord_.ordenar_autos(refs_a)
    print(f"Autos: {[r.get_precio() for r in refs_a]}")
    p1, p2 = PersonaPOO("Carlos", 25), PersonaPOO("Ana", 30)
    refs_p = [p1, p2]
    ord_.ordenar_personas(refs_p)
    print(f"Personas: {[r.get_nombre() for r in refs_p]}")
