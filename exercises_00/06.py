"""
    Program that:
        Escriba un programa que verifique si dos segmentos de línea recta se intersectan.
"""

class Line ():
    name: str = 'Line'

    initial_coords: tuple[float]
    final_coords: tuple[float]
    slope: float
    y_intercept: float

    def __init__ (self, line_name: str='Line') -> None:
        self.name = line_name

        while True:
            try:
                self.initial_coords = (
                    float(input(f"Ingrese la Coordenada Inicial X de la línea {self.name}: ")),
                    float(input(f"Ingrese la Coordenada Inicial Y de la línea {self.name}: "))
                )
                self.final_coords = (
                    float(input(f"Ingrese la Coordenada Final X de la línea {self.name}: ")),
                    float(input(f"Ingrese la Coordenada Final Y de la línea {self.name}: "))
                )

                if self.initial_coords == self.final_coords:
                    raise ValueError("LAS COORDENADAS INGRESADAS NO PUEDEN SER IGUALES")

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
    line_1 = Line('line_1')
    line_2 = Line('line_2')

    does_lines_intercept: bool = lines_intercept(line_1, line_2)

    print(f"La línea {line_1.name} y la línea {line_2.name}{' No' if not does_lines_intercept else ''} se intersectan")

def lines_intercept (line_1: Line, line_2: Line) -> bool:
    diff_slope: float = line_1.slope - line_2.slope
    diff_y_intercept: float = line_2.y_intercept - line_1.y_intercept

    if diff_slope == 0:
        if diff_y_intercept == 0:
            print(f"La línea {line_1.name} y la línea {line_2.name} son la misma línea")
            return True

        print(f"La línea {line_1.name} y la línea {line_2.name} son paralelas")
        return False

    x_intercept: float = diff_y_intercept / diff_slope
    y_intercept_1: float= (line_1.slope * x_intercept) + line_1.y_intercept
    y_intercept_2: float = (line_2.slope * x_intercept) + line_2.y_intercept

    return (x_intercept, y_intercept_2) == (x_intercept, y_intercept_1)

if __name__ == '__main__':
    main()
