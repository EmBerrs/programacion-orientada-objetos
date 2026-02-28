"""
CalculadoraRecursiva: mult = a + mult(a, b-1); potencia = base * potencia(base, exp-1);
división entera por restas recursivas hasta a < b.
"""


class CalculadoraRecursiva:
    def multiplicar(self, a: float, b: float) -> float:
        bi = int(b)
        if bi == 0:
            return 0.0
        if bi > 0:
            return a + self.multiplicar(a, bi - 1)
        return -self.multiplicar(a, -bi)

    def potencia(self, base: float, exp: int) -> float:
        if exp < 0:
            return 0.0
        if exp == 0:
            return 1.0
        return base * self.potencia(base, exp - 1)

    def dividir(self, a: float, b: float) -> float:
        if b == 0:
            raise ValueError("División por cero")
        if a < 0 and b > 0:
            return -self.dividir(-a, b)
        if a > 0 and b < 0:
            return -self.dividir(a, -b)
        if a < 0 and b < 0:
            return self.dividir(-a, -b)
        if a < b:
            return 0
        return 1 + self.dividir(a - b, b)
