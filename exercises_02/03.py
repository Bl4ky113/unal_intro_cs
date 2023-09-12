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
            self.x = float(input())
            self.y = float(input())
        except ValueError as e:
            print(f"ERROR AL INGRESAR LOS VALORES:\n{type(e)}\n{e}")
        except Exception as e:
            print(f"ERROR:\n{type(e)}\n{e}")

class Circle (Coordinate):
    radius: float

    def __init__ (self):
        super().__init__()

        try:
            self.radius = float(input())
        except ValueError as e:
            print(f"ERROR AL INGRESAR LOS VALORES:\n{type(e)}\n{e}")
        except Exception as e:
            print(f"ERROR:\n{type(e)}\n{e}")

def main () -> None:
    circle = Circle()
    point = Coordinate()

    distance_from_zero = ( abs((point.x - circle.x) ** 2) + abs((circle.y - point.y) ** 2) ) ** (1 / 2)

    if distance_from_zero > circle.radius:
        print("no")
        return

    print("yes")

if __name__ == '__main__':
    main()
