"""
Calculadora: cuatro operaciones aritméticas.
División lanza ValueError si divisor es cero.
"""


class Calculadora:
    @staticmethod
    def sumar(a: float, b: float) -> float:
        return a + b

    @staticmethod
    def restar(a: float, b: float) -> float:
        return a - b

    @staticmethod
    def multiplicar(a: float, b: float) -> float:
        return a * b

    @staticmethod
    def dividir(a: float, b: float) -> float:
        if b == 0:
            raise ValueError("División por cero")
        return a / b
