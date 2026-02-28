"""
Fractales: triángulo de Sierpinski (repetición por nivel) y polvo de Cantor recursivo.
Cantor: nivel 0 dibuja segmento; nivel n divide en dos mitades con hueco central.
"""


class Fractales:
    def triangulo_sierpinski(self, nivel: int) -> None:
        print(f"Triangulo Sierpinski nivel {nivel}:")
        for i in range(nivel):
            esp = " " * (i * 2)
            print(f"{esp}  *")
            print(f"{esp} ***")
            print(f"{esp}*****")

    def polvo_cantor(self, nivel: int, indent: int) -> None:
        if nivel <= 0:
            print(" " * indent + "___")
            return
        self.polvo_cantor(nivel - 1, indent)
        print(" " * indent + "   ")
        self.polvo_cantor(nivel - 1, indent + 4)
