"""
    Program that:
        Encuentre el área de un hexágono regular circunscrito en un círculo de radio 6 cm.
"""

import importlib
from typing import Callable

excercise_03 = importlib.import_module('03')
calculate_area_triangle: Callable[[int], int] = excercise_03.calculate_area_triangle

def main () -> None:
    circle_radius: int = 6
    sides_inner_figure: int = 6

    result_area: int = 0

    for _ in range(sides_inner_figure):
        result_area += calculate_area_triangle(circle_radius)

    print(f"Resultados:\n\tÁrea de la sigura de {sides_inner_figure} lados: {result_area}")

if __name__ == "__main__":
    main()
