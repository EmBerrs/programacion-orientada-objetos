"""
EstadisticasArreglo: datos en lista fija de 5 elementos.
Métodos get_* realizan el cálculo sobre self._numeros.
"""


class EstadisticasArreglo:
    N = 5

    def __init__(self) -> None:
        self._numeros = [0.0] * self.N

    def ingresar_numeros(self) -> None:
        print("Ingrese 5 numeros en el arreglo:")
        for i in range(self.N):
            self._numeros[i] = float(input(f"numeros[{i}]: "))

    def get_suma(self) -> float:
        return sum(self._numeros)

    def get_promedio(self) -> float:
        return self.get_suma() / self.N

    def get_mediana(self) -> float:
        c = sorted(self._numeros)
        return c[self.N // 2]

    def get_maximo(self) -> float:
        return max(self._numeros)

    def get_minimo(self) -> float:
        return min(self._numeros)

    def mostrar_resultados(self) -> None:
        print(f"\nSuma: {self.get_suma()}")
        print(f"Promedio: {self.get_promedio()}")
        print(f"Mediana: {self.get_mediana()}")
        print(f"Maximo: {self.get_maximo()}")
        print(f"Minimo: {self.get_minimo()}")
