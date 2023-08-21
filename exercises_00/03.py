"""
    Program that:
        Escriba un programa que calcule el área total del cuerpo
"""

import math

def main () -> None:
    weight: float = 0
    height: float = 0

    try:
        weight = float(input("Ingrese su peso: "))
        height = float(input("Ingrese su altura: "))

    except ValueError as e:
        print(f"ERROR VALOR INVALIDO:\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    result: float = calc_body_surface_area(weight, height)

    print(f"Resultado Área total del cuerpo:\n\t{result}")

def calc_body_surface_area (weight: float, height: float) -> float:
    return math.sqrt(weight * height) / 60

if __name__ == '__main__':
    main()
