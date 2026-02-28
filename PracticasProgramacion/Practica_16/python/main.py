"""
Practica_16 - Calculadora recursiva y fractales.
"""

from calculadora_recursiva import CalculadoraRecursiva
from fractales import Fractales

if __name__ == "__main__":
    calc = CalculadoraRecursiva()
    print(f"4*5 (sumas recursivas): {calc.multiplicar(4.0, 5.0)}")
    print(f"2^4 (mults recursivas): {calc.potencia(2.0, 4)}")
    print(f"15/3 (restas recursivas): {calc.dividir(15.0, 3.0)}")

    frac = Fractales()
    frac.triangulo_sierpinski(3)
    print("\nPolvo de Cantor nivel 2:")
    frac.polvo_cantor(2, 0)
