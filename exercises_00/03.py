"""
    Program that:
        Escriba un programa que calcule el área total del cuerpo
"""

import math

def main () -> None:
    weight: float = 0
    height: float = 0

    try:
        height = float(input())
        weight = float(input())

    except ValueError as e:
        print(f"ERROR VALOR INVALIDO:\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    result_mosteller: float = calc_body_surface_area_mosteller(weight, height)
    result_dubois: float = calc_body_surface_area_dubois(weight, height)
    # result_haycock: float = calc_body_surface_area_haycock(weight, height)
    result_gehan_george: float = calc_body_surface_area_gehan_george(weight, height)

    print(f"{result_mosteller:.2f}")
    print(f"{result_dubois:.2f}")
    # print(f"{result_haycock:.2f}")
    print(f"{result_gehan_george:.2f}")

def calc_body_surface_area_mosteller (weight: float, height: float) -> float:
    return math.sqrt((weight * height) / 3600)

def calc_body_surface_area_haycock (weight: float, height: float) -> float:
    return (0.024265) * (weight ** 0.5378) * (height ** 0.3964)

def calc_body_surface_area_dubois (weight: float, height: float) -> float:
    return 0.007184 * (weight ** 0.425) * (height ** 0.725)

def calc_body_surface_area_gehan_george (weight: float, height: float) -> float:
    return 0.0235 * (height ** 0.42246) * (weight ** 0.51456)

if __name__ == '__main__':
    main()
