"""
Clase HolaMundo: encapsula un mensaje y su visualización.
Atributo mensaje_ privado; constructores default y parametrizado.
"""


class HolaMundo:
    def __init__(self, mensaje: str = "Hola mundo") -> None:
        self._mensaje = mensaje

    def mostrar(self) -> None:
        print(self._mensaje)

    def set_mensaje(self, mensaje: str) -> None:
        self._mensaje = mensaje

    def get_mensaje(self) -> str:
        return self._mensaje
