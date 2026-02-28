"""
Recursividad: factorial y fibonacci con llamadas recursivas.
Caso base: n<=1 para factorial; n in (0,1) para fibonacci.
"""


class Recursividad:
    def factorial(self, n: int) -> int:
        if n < 0:
            raise ValueError("Factorial de negativo no definido")
        if n in (0, 1):
            return 1
        return n * self.factorial(n - 1)

    def fibonacci(self, n: int) -> int:
        if n < 0:
            raise ValueError("Fibonacci de negativo no definido")
        if n == 0:
            return 0
        if n == 1:
            return 1
        return self.fibonacci(n - 1) + self.fibonacci(n - 2)
