"""
Sumadora: opera sobre enteros y flotantes.
Sobrecarga implícita vía duck-typing en Python.
"""


class Sumadora:
    @staticmethod
    def sumar(a, b):
        return a + b
