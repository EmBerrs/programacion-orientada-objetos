"""
Practica_05 - Calculadora Nueva (herencia).
"""

from calculadora_nueva import CalculadoraNueva

if __name__ == "__main__":
    calc = CalculadoraNueva()
    print(f"5 + 3 = {calc.sumar(5.0, 3.0)}")
    print(f"5 - 3 = {calc.restar(5.0, 3.0)}")
    print(f"5 * 3 = {calc.multiplicar(5.0, 3.0)}")
