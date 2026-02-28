"""
Practica_24 - Escribir y leer CSV (datos basicos, arreglos, autos, personas ADT).
"""

from manejador_csv import ManejadorCSV

if __name__ == "__main__":
    man = ManejadorCSV()
    man.escribir_datos_basicos("datos_basicos.csv")
    man.escribir_arreglo("arreglo.csv")
    man.escribir_autos("autos.csv")
    man.escribir_personas("personas.csv")

    print("Leyendo datos basicos:")
    man.leer_y_mostrar("datos_basicos.csv")
    print("\nLeyendo arreglo:")
    man.leer_y_mostrar("arreglo.csv")
    print("\nLeyendo autos:")
    man.leer_y_mostrar("autos.csv")
    print("\nLeyendo personas (ADT):")
    man.leer_y_mostrar("personas.csv")
