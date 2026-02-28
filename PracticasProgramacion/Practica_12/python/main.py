"""
Practica_12 - Matrices: A * constante, A * B.
"""

from matriz import Matriz

if __name__ == "__main__":
    a = Matriz(2, 2)
    b = Matriz(2, 2)
    a.llenar(1.0)
    b.llenar(2.0)

    print("A * 3:")
    ac = a.multiplicar_por_constante(3.0)
    ac.imprimir()

    print("\nA * B:")
    c = a.multiplicar(b)
    c.imprimir()
