"""
    Program that:
        Calcule el área de un triángulo equilátero
"""

import math

def main () -> None:
    side_length: int = 1
    try:
        side_length = int(input("Medida del lado del Triángulo: "))

        if side_length <= 0:
            raise ValueError('ERROR MEDIDA NO PUEDE SER IGUAL O MENOR A 0')

    except ValueError as e:
        print(f"ERROR: MEDIDA INGRESADA NO VALIDA\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    result: int = calculate_area_triangle(side_length)

    print(f"Area del Triángulo Equilatero: {result}")

def calculate_area_triangle (side: int) -> int:
    return round(((side ** 2) * math.sqrt(3)) / 4, 2)

if __name__ == '__main__':
    main()
