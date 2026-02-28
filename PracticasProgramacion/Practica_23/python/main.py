"""
Practica_23 - Matriz con puntero al mismo tipo (siguiente_).
"""

from matriz_autoreferenciada import MatrizAutoreferenciada

if __name__ == "__main__":
    a = MatrizAutoreferenciada(2, 2)
    a.llenar(1.0)
    b = MatrizAutoreferenciada(2, 2)
    b.llenar(2.0)
    a.set_siguiente(b)
    c = a.multiplicar_con_siguiente()
    print("A * B (via siguiente):")
    c.imprimir()
