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

class Line ():
    name: str = 'Line'

    initial_coords: tuple[float]
    final_coords: tuple[float]
    slope: float
    y_intercept: float

    def __init__ (self, x1:int, x2:int, y1:int, y2:int, line_name: str='Line') -> None:
        self.name = line_name

        while True:
            try:
                self.initial_coords = (
                    x1,
                    y1
                )
                self.final_coords = (
                    x2,
                    y2
                )

                if self.initial_coords == self.final_coords:
                    raise ValueError("LAS COORDENADAS INGRESADAS NO PUEDEN SER IGUALES")

                if self.initial_coords[0] > self.final_coords[0]:
                    hold_coords = self.initial_coords
                    self.initial_coords = self.final_coords
                    self.final_coords = hold_coords

                    del hold_coords

                self.calculate_slope()
                self.calculate_y_intercept()
                break

            except ValueError as e:
                print(f"ERROR AL INGRESAR ALGÚN VALOR:\n{type(e)}\n{e}")
            except Exception as e:
                print(f"ERROR:\n{type(e)}\n{e}")
                raise e

    def calculate_slope (self):
        difference_x: float = self.final_coords[0] - self.initial_coords[0]
        difference_y: float = self.final_coords[1] - self.initial_coords[1]

        self.slope = difference_y / difference_x

    def calculate_y_intercept (self):
        self.y_intercept = self.initial_coords[1] - (self.slope * self.initial_coords[0])

def main () -> None:
    coord_1: Coordinate = Coordinate()
    coord_2: Coordinate = Coordinate()

    # General Generic types
    if (coord_1.x == coord_2.x and coord_1.y == coord_2.y):
        print(f"Punto ({coord_1.x:.2f},{coord_2.y:.2f})")
        return
    elif (coord_1.x == coord_2.x and coord_1.y != coord_2.y):
        print(f"Linea Vertical x={coord_1.x:.2f}")
        return
    elif (coord_1.x != coord_2.x and coord_1.y == coord_2.y):
        print(f"Linea Horizontal y={coord_1.y:.2f}")
        return

    # Lines

    line: Line = Line(coord_1.x, coord_2.x, coord_1.y, coord_2.y)

    if line.slope > 0:
        print(f"Recta Creciente y={line.slope:.2f}x{'+' if line.calculate_y_intercept > 0 else '-'}{line.y_intercept:.2f}")
    else:
        print(f"Recta Decreciente y={line.slope:.2f}x{'+' if line.calculate_y_intercept > 0 else '-'}{line.y_intercept:.2f}")

if __name__ == "__main__":
    main()
