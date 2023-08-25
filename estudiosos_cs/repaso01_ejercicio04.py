# Calcular área y volumen de un cono dada su generatriz y radio #

# Importar librería para poder usar pi #

import math

# Introducir valores base del cono #

radio = int(input("Ingrese el valor del radio del cono\n\t"))
generatriz = int(input("Ingrese el valor de la generatriz del cono\n\t"))

# Calcular la altura usando teorema de Pitagóras #

altura = math.sqrt(radio**2 + generatriz**2)

if generatriz**2 < (radio**2 + altura**2):
    print("Los valores insertados no permiten la construcción de un cono")
else:
    # Calcular el área de la superficie #
    abase = ((math.pi) * radio**2)
    alateral = ((math.pi) * radio * generatriz)
    atotal = abase + alateral

    # Calcular el volumen del cono #

    vol = ((abase * altura) / 3)

    # Mostrar el valor del área y volumen del cono #

    print('El valor del área es:\n\t', atotal, '\n\t El valor del volumen es:', vol)