"""
    Program that:
        Encuentre el volumen y el área de la superficie de un cono truncado.
"""

import math

def main () -> None:
    height: int = 1
    radius_bottom: int = 1
    radius_top: int = 1

    try:
        height = int(input("Ingrese la altura del Cono Truncado: "))
        radius_bottom = int(input("Ingrese el rádio de la base inferior del Cono Truncado: "))
        radius_top = int(input("Ingrese el rádio de la base superior del Cono Truncado: "))

        if height <= 0 or radius_bottom <= 0 or radius_top <= 0:
            raise ValueError("VALOR INGRESADO NO PUEDE SER MENOR O IGUAL A 0")

    except ValueError as e:
        print(f"ERROR VALOR INGRESADO NO VALIDO:\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    result_volume: int = calc_cone_volume(height, radius_top, radius_bottom)
    result_area: int = calc_cone_area(height, radius_top, radius_bottom)

    print(f"Resultados:\n\tVolumen: {result_volume}\n\tÁrea Superficie Total: {result_area}")

def calc_cone_volume (height: int, radius_top: int, radius_bottom: int) -> int:
    return ( 1 / 3 ) * math.pi * height * (radius_top ** 2 + radius_top  * radius_bottom + radius_bottom ** 2)

def calc_cone_area (height: int, radius_top: int, radius_bottom: int) -> int:
    return calc_cone_lateral_area(height, radius_top, radius_bottom) + calc_cone_base_area(radius_top) + calc_cone_base_area(radius_bottom)

def calc_cone_lateral_area (height: int, radius_top: int, radius_bottom: int) -> int:
    return math.pi * (radius_top + radius_bottom) * calc_cone_slant(radius_top, radius_bottom, height)

def calc_cone_base_area (radius: int) -> int:
    return math.pi * (radius ** 2)

def calc_cone_slant (radius_top: int, radius_bottom: int, height: int) -> int:
    return math.sqrt(((radius_top - radius_bottom) ** 2) + (height ** 2))

if __name__ == '__main__':
    main()
