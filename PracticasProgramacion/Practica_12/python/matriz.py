"""
Matriz: producto por escalar y producto matricial.
datos_ como lista de listas; producto A*B exige columnas_A == filas_B.
"""


class Matriz:
    def __init__(self, filas: int, columnas: int) -> None:
        self._filas = filas
        self._columnas = columnas
        self._datos = [[0.0] * columnas for _ in range(filas)]

    def llenar(self, valor: float) -> None:
        for i in range(self._filas):
            for j in range(self._columnas):
                self._datos[i][j] = valor

    def set_val(self, f: int, c: int, v: float) -> None:
        self._datos[f][c] = v

    def get_val(self, f: int, c: int) -> float:
        return self._datos[f][c]

    def multiplicar_por_constante(self, k: float) -> "Matriz":
        r = Matriz(self._filas, self._columnas)
        for i in range(self._filas):
            for j in range(self._columnas):
                r._datos[i][j] = self._datos[i][j] * k
        return r

    def multiplicar(self, b: "Matriz") -> "Matriz":
        if self._columnas != b._filas:
            raise ValueError("Dimensiones incompatibles")
        r = Matriz(self._filas, b._columnas)
        for i in range(self._filas):
            for j in range(b._columnas):
                s = 0.0
                for k in range(self._columnas):
                    s += self._datos[i][k] * b._datos[k][j]
                r._datos[i][j] = s
        return r

    def imprimir(self) -> None:
        for i in range(self._filas):
            print(" ".join(str(self._datos[i][j]) for j in range(self._columnas)))
