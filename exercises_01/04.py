"""
    Program that:
        Encuentre el volumen y el área de la superficie de un cono.
"""

import math

def main () -> None:
    height: int = 1
    radius: int = 1

    try:
        height = int(input("Ingrese la altura del cono: "))
        radius = int(input("Ingrese el radio del cono: "))

        if height <= 0:
            raise ValueError("La Altura no puede ser menor o igual a 0")

        if radius <= 0:
            raise ValueError("El Radio no puede ser igual o menor que 0")

    except ValueError as e:
        print(f"ERROR INPUT INVALIDO:\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    result_volume: int = calc_cone_volume(height, radius)
    result_area: int = calc_cone_area(height, radius)

    print(f"Resultados:\n\tVolumen: {result_volume}\n\tÁrea Superficie Total: {result_area}")

def calc_cone_volume (height: int, radius: int) -> int:
    return (1 / 3) * math.pi * (radius ** 2) * height

def calc_cone_slant (height: int, radius: int) -> int:
    return math.sqrt(radius ** 2 + height ** 2)

def calc_cone_area (height: int, radius: int) -> int:
    return calc_cone_base_area(radius) + calc_cone_lateral_area(height, radius, calc_cone_slant(height, radius))

def calc_cone_lateral_area (height: int, radius: int, slant: int) -> int:
    return math.pi * radius * slant

def calc_cone_base_area (radius: int) -> int:
    return math.pi * (radius ** 2)

if __name__ == '__main__':
    main()
