"""
Practica_02 - Suma de 2 números como parámetros.
"""

from sumadora import Sumadora

if __name__ == "__main__":
    calc = Sumadora()
    print(f"Suma de 5 y 3: {calc.sumar(5, 3)}")
    print(f"Suma de 10.5 y 7.3: {calc.sumar(10.5, 7.3)}")
