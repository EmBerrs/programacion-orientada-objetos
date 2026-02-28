"""
MatrizAutoreferenciada: contiene siguiente_ como referencia al mismo tipo.
Producto matricial con la matriz apuntada por siguiente_.
"""

from typing import Optional


class MatrizAutoreferenciada:
    def __init__(self, filas: int, columnas: int) -> None:
        self._filas = filas
        self._columnas = columnas
        self._datos = [[0.0] * columnas for _ in range(filas)]
        self._siguiente: Optional[MatrizAutoreferenciada] = None

    def set_siguiente(self, otra: "MatrizAutoreferenciada") -> None:
        self._siguiente = otra

    def get_siguiente(self) -> Optional["MatrizAutoreferenciada"]:
        return self._siguiente

    def llenar(self, valor: float) -> None:
        for i in range(self._filas):
            for j in range(self._columnas):
                self._datos[i][j] = valor

    def multiplicar_por_constante(self, k: float) -> "MatrizAutoreferenciada":
        r = MatrizAutoreferenciada(self._filas, self._columnas)
        for i in range(self._filas):
            for j in range(self._columnas):
                r._datos[i][j] = self._datos[i][j] * k
        return r

    def multiplicar_con_siguiente(self) -> "MatrizAutoreferenciada":
        if self._siguiente is None:
            raise ValueError("No hay matriz siguiente")
        B = self._siguiente
        if self._columnas != B._filas:
            raise ValueError("Dimensiones incompatibles")
        r = MatrizAutoreferenciada(self._filas, B._columnas)
        for i in range(self._filas):
            for j in range(B._columnas):
                s = 0.0
                for k in range(self._columnas):
                    s += self._datos[i][k] * B._datos[k][j]
                r._datos[i][j] = s
        return r

    def imprimir(self) -> None:
        for i in range(self._filas):
            print(" ".join(str(self._datos[i][j]) for j in range(self._columnas)))
