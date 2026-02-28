"""
Practica_04 - Calculadora con sobrecarga (0, 2 y 3 parámetros).
"""

from calculadora_sobrecargada import CalculadoraSobrecargada

if __name__ == "__main__":
    calc = CalculadoraSobrecargada()
    print(f"Con 2 params (10, 3): {calc.calcular(10.0, 3.0)}")
    print(f"Con 0 params: {calc.calcular()}")
    print(f"Con 3 params (2, 3, 4): {calc.calcular(2.0, 3.0, 4.0)}")
