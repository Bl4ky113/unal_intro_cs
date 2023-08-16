"""
    Program that:
        Encuentre el volumen y el área de la superficie de un toro (?)

        Ahhh, a 'toro' is a geometric figure that's shaped like a donut!
"""

import math

def main () -> None:
    radius_inner: int = 1
    radius_outer: int = 1

    try:
        radius_inner = int(input("Ingrese la medida del Radio Interno: "))
        radius_outer = int(input("Ingrese la medida del Radio Externo: "))

        if radius_inner <= 0 or radius_outer <= 0:
            raise ValueError("VALOR INGRESADO NO PUEDE SER IGUAL O MENOR A 0")

    except ValueError as e:
        print(f"ERROR EL VALOR INGRESADO NO ES VALIDO:\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    result_volume: int = calc_torus_volume(radius_inner, radius_outer)
    result_area: int = calc_torus_area(radius_inner, radius_outer)

    print(f"Resultados del Toro:\n\tVolumen: {result_volume}\n\tÁrea de la Superficie: {result_area}")

def calc_torus_volume (radius_small: int, radius_big: int) -> int:
    return 2 * math.pi ** 2 * radius_big * radius_small ** 2

def calc_torus_area (radius_small: int, radius_big: int) -> int:
    return 4 * math.pi ** 2 * radius_big * radius_small

if __name__ == '__main__':
    main()
