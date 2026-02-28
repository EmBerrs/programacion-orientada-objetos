"""
CalculadoraSucesiva: mult por sumas iterativas, potencia por mults,
división entera por restas sucesivas. Equivalente a C++ CalculadoraSucesiva.
"""

from calculadora import Calculadora


class CalculadoraSucesiva(Calculadora):
    def multiplicar(self, a: float, b: float) -> float:
        resultado = 0.0
        n = int(abs(b))
        for _ in range(n):
            resultado += abs(a)
        return -resultado if (a < 0) != (b < 0) else resultado

    def dividir(self, a: float, b: float) -> float:
        if b == 0:
            raise ValueError("División por cero")
        cociente = 0
        abs_a, abs_b = abs(a), abs(b)
        while abs_a >= abs_b:
            abs_a -= abs_b
            cociente += 1
        return -cociente if (a < 0) != (b < 0) else cociente

    @staticmethod
    def potencia(base: float, exp: int) -> float:
        if exp < 0:
            return 0.0
        r = 1.0
        for _ in range(exp):
            r *= base
        return r
