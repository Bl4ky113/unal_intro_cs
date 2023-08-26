"""
    Program that:
        Verifique si un punto cualquiera en el plano se encuentra dentro de un
        círculo de radio 15 y centro en (0,0).

        We could check the radius, or distance, of the point from 0, 0. And then
        if it's greather than 15, it's outside
"""

import math

CIRCLE_RADIUS: int = 15

class Coordinate ():
    x: float
    y: float

    def __init__ (self):
        try:
            self.x = float(input("x:"))
            self.y = float(input("y:"))
        except ValueError as e:
            print(f"ERROR AL INGRESAR LOS VALORES:\n{type(e)}\n{e}")
        except Exception as e:
            print(f"ERROR:\n{type(e)}\n{e}")

def main () -> None:
    point = Coordinate()

    # distance_from_zero = math.sqrt(point.x ** 2 + point.y ** 2)
    distance_from_zero = ( (point.x ** 2) + (point.y ** 2) ) ** (1 / 2)

    if distance_from_zero > CIRCLE_RADIUS:
        print("Fuera del Circulo")
        return

    print("Dentro circulo")

if __name__ == '__main__':
    main()
