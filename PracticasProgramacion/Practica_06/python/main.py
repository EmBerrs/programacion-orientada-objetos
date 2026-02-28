"""
Practica_06 - Calculadora con operaciones por sucesiones.
"""

from calculadora_sucesiva import CalculadoraSucesiva

if __name__ == "__main__":
    calc = CalculadoraSucesiva()
    print(f"4*5 (sumas sucesivas): {calc.multiplicar(4.0, 5.0)}")
    print(f"2^4 (mults sucesivas): {calc.potencia(2.0, 4)}")
    print(f"15/3 (restas sucesivas): {calc.dividir(15.0, 3.0)}")
