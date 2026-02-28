"""
Practica_03 - Calculadora básica.
"""

from calculadora import Calculadora

if __name__ == "__main__":
    calc = Calculadora()
    print(f"5 + 3 = {calc.sumar(5.0, 3.0)}")
    print(f"5 - 3 = {calc.restar(5.0, 3.0)}")
    print(f"5 * 3 = {calc.multiplicar(5.0, 3.0)}")
    print(f"6 / 3 = {calc.dividir(6.0, 3.0)}")
