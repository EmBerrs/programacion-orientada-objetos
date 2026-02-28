"""
Practica_22 - Quick Sort indirecto.
"""

from ordenador_quick_sort_indirecto import OrdenadorQuickSortIndirecto, AutoPOO, PersonaPOO

if __name__ == "__main__":
    ord_ = OrdenadorQuickSortIndirecto()
    chars = list("zamb")
    refs = list(range(4))
    ord_.ordenar_caracteres(chars, refs)
    print(f"Chars: {''.join(chars[i] for i in refs)}")
    a1, a2 = AutoPOO(20000, 2020), AutoPOO(15000, 2022)
    ord_.ordenar_autos([a1, a2])
    print(f"Autos: {[a1.get_precio(), a2.get_precio()]}")
    p1, p2 = PersonaPOO("Carlos", 25), PersonaPOO("Ana", 30)
    ord_.ordenar_personas([p1, p2])
    print(f"Personas: {[p1.get_nombre(), p2.get_nombre()]}")
