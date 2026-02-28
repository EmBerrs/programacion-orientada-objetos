"""
Practica_26 - Escribir y leer TXT (datos basicos, arreglos, autos, personas ADT).
"""

from manejador_txt import ManejadorTXT

if __name__ == "__main__":
    man = ManejadorTXT()
    man.escribir_datos_basicos("datos_basicos.txt")
    man.escribir_arreglo("arreglo.txt")
    man.escribir_autos("autos.txt")
    man.escribir_personas("personas.txt")

    print("Leyendo datos basicos:")
    man.leer_y_mostrar("datos_basicos.txt")
    print("\nLeyendo arreglo:")
    man.leer_y_mostrar("arreglo.txt")
    print("\nLeyendo autos:")
    man.leer_y_mostrar("autos.txt")
    print("\nLeyendo personas (ADT):")
    man.leer_y_mostrar("personas.txt")
