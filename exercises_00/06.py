"""
    Program that:
        Escriba un programa que verifique si dos segmentos de línea recta se intersectan.

        FOR OUR SAKE.
            LIMIT X inputs to be from minnor to a greater input 0 -> 1, not 1 -> 0
            If users enters 1 and then 0, change their order: 1 -> 0 | 0 -> 1
"""

Coordinate = tuple[float, float]

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
    line_1 = Line('line_1')
    line_2 = Line('line_2')

    does_lines_intercept, coord_interception_x, coord_interception_y = lines_intercept(line_1, line_2)

    print(f"La línea {line_1.name} y la línea {line_2.name}{' No' if not does_lines_intercept else ''} se intersectan")

    if (not does_lines_intercept or (coord_interception_x == None and coord_interception_y == None )):
        return

    line_is_in_range = check_interception_in_range(line_1, line_2, (coord_interception_x, coord_interception_y))

    print(f"La Intersección de la Línea {line_1.name} y la Línea {line_2.name}{ ' No ' if not line_is_in_range else ' ' }esta en el Segmento Definido")

def lines_intercept (line_1: Line, line_2: Line):
    diff_slope: float = line_1.slope - line_2.slope
    diff_y_intercept: float = line_2.y_intercept - line_1.y_intercept

    if diff_slope == 0:
        if diff_y_intercept == 0:
            print(f"La línea {line_1.name} y la línea {line_2.name} son la misma línea")
            return True, None, None

        print(f"La línea {line_1.name} y la línea {line_2.name} son paralelas")
        return False, None, None

    x_intercept: float = round(diff_y_intercept / diff_slope, 5)
    y_intercept_1: float= round((line_1.slope * x_intercept) + line_1.y_intercept, 5)
    y_intercept_2: float = round((line_2.slope * x_intercept) + line_2.y_intercept, 5)

    print(x_intercept, y_intercept_1, y_intercept_2)

    return (x_intercept, y_intercept_2) == (x_intercept, y_intercept_1), x_intercept, y_intercept_1

def check_interception_in_range (line_1: Line, line_2: Line, coordinate: Coordinate) -> bool:
    line_1_coords = (line_1.final_coords, line_1.initial_coords)
    line_2_coords = (line_2.final_coords, line_2.initial_coords)

    line_1_slope_positive = True if line_1.slope >= 0 else False
    line_2_slope_positive = True if line_2.slope >= 0 else False

    line_1_final_index, line_1_initial_index = 0 if line_1_slope_positive else 1, 1 if line_1_slope_positive else 0
    line_2_final_index, line_2_initial_index = 0 if line_2_slope_positive else 1, 1 if line_2_slope_positive else 0

    in_line_1_range: bool = (line_1.final_coords[0] >= coordinate[0] >= line_1.initial_coords[0]) and (line_1_coords[line_1_final_index][1] >= coordinate[1] >= line_1_coords[line_1_initial_index][1])
    in_line_2_range: bool = (line_2.final_coords[0] >= coordinate[0] >= line_2.initial_coords[0]) and (line_2_coords[line_2_final_index][1] >= coordinate[1] >= line_2_coords[line_2_initial_index][1])

    # print(line_1_coords[line_1_final_index][1], coordinate[1], line_1_coords[line_1_initial_index][1], (line_1_coords[line_1_final_index][1] >= coordinate[1] >= line_1_coords[line_1_initial_index][1]))
    # print(line_2_coords[line_2_final_index][1], coordinate[1], line_2_coords[line_2_initial_index][1], (line_2_coords[line_2_final_index][1] >= coordinate[1] >= line_2_coords[line_2_initial_index][1]))
    # print( line_1.final_coords, line_1.initial_coords, line_2.final_coords, line_2.initial_coords, coordinate)
    # print(in_line_1_range, in_line_2_range)

    return in_line_1_range and in_line_2_range

if __name__ == '__main__':
    main()
