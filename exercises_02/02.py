"""
    Program that:
        Dadas las coordenadas de un triángulo verifique si es equilátero.
"""

def main () -> None:
    NUM_INPUTS: int = 3
    list_num: list[list[float]] = []

    for _ in range(NUM_INPUTS):
        print(f"Arista Número: {_ + 1}")
        coord_list: list[float] = []
        coord_list.append(float(input("Ingrese un coordenada x: ")))
        coord_list.append(float(input("Ingrese la coordenada y: ")))

        list_num.append(coord_list)

        result: bool = calc_distance_points(list_num)

def calc_distance_points (coord_list: list[list[float]]) -> bool:
    if len(coord_list) <= 1:
        return False

    diff_coords: list[float] = []

    for i in range(len(coord_list)):
        coord_first = coord_list[i - 1]
        coord_second = coord_list[i]

        print(coord_first, coord_second)

        diff_coord = (coord_second[0] - coord_first[0]) / (coord_second[1] - coord_first[1])
        

    return True

if __name__ == '__main__':
    main()
