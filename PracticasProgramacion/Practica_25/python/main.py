"""
Practica_25 - Escribir y leer XML (datos basicos, arreglos, autos, personas ADT).
"""

from manejador_xml import ManejadorXML

if __name__ == "__main__":
    man = ManejadorXML()
    man.escribir_datos_basicos("datos_basicos.xml")
    man.escribir_arreglo("arreglo.xml")
    man.escribir_autos("autos.xml")
    man.escribir_personas("personas.xml")

    print("Leyendo datos basicos:")
    man.leer_y_mostrar("datos_basicos.xml")
    print("\nLeyendo arreglo:")
    man.leer_y_mostrar("arreglo.xml")
    print("\nLeyendo autos:")
    man.leer_y_mostrar("autos.xml")
    print("\nLeyendo personas (ADT):")
    man.leer_y_mostrar("personas.xml")
