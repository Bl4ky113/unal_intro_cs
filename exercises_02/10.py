"""
    Program that:
        Dados dos puntos (x1,y1) y (x2,y2) determine si son el mismo punto o, de lo contrario,
        el tipo de línea que pasa entre ellos: horizontal, vertical, recta creciente o recta decreciente.
        En cualquiera de estos casos, hallar la ecuación que lo representa. Siga el formato que aparece en las entradas y salidas.
"""

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

def main () -> None:
    coord_1: Coordinate = Coordinate()
    coord_2: Coordinate = Coordinate()

    # General Generic types
    if (coord_1.x == coord_2.x and coord_1.y == coord_2.y):
        print(f"Punto ({coord_1.x},{coord_2.y})")
        return
    elif (coord_1.x == coord_2.x and coord_1.y != coord_2.y):
        print(f"Linea Vertical x={coord_1.x}")
        return
    elif (coord_1.x != coord_2.x and coord_1.y == coord_2.y):
        print(f"Linea Horizontal y={coord_1.y}")
        return

    # Lines


if __name__ == "__main__":
    main()
