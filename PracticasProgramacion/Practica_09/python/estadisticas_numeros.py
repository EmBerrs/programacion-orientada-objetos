"""
EstadisticasNumeros: 5 valores, cálculo de suma, promedio, mediana, max, min.
Mediana = valor central tras ordenar; para n=5 es el índice 2.
"""


class EstadisticasNumeros:
    N = 5

    def __init__(self) -> None:
        self._numeros = [0.0] * self.N
        self._suma = 0.0
        self._promedio = 0.0
        self._mediana = 0.0
        self._maximo = 0.0
        self._minimo = 0.0

    def ingresar_numeros(self) -> None:
        print("Ingrese 5 numeros:")
        for i in range(self.N):
            self._numeros[i] = float(input(f"Numero {i+1}: "))
        self._calcular()

    def _calcular(self) -> None:
        self._suma = sum(self._numeros)
        self._promedio = self._suma / self.N
        copia = sorted(self._numeros)
        self._mediana = copia[self.N // 2]
        self._maximo = max(self._numeros)
        self._minimo = min(self._numeros)

    def mostrar_resultados(self) -> None:
        print(f"\nSuma: {self._suma}")
        print(f"Promedio: {self._promedio}")
        print(f"Mediana: {self._mediana}")
        print(f"Maximo: {self._maximo}")
        print(f"Minimo: {self._minimo}")
