"""
    Program that:
        Lea el tamaño de la matriz, lea fila por fila sus elementos y luego calcule la suma de cada una de sus columnas.
"""

def main () -> None:
    matrix_size: tuple[int, int] = tuple([ int(value) for value in input("").split(" ") if value != '' ])

    matrix = create_matrix(matrix_size[0], matrix_size[1])
    reversed_matrix = reverse_matrix(matrix)

    sum_matrix = sum_matrix_values(reversed_matrix)

    print(str_format_matrix(sum_matrix))

def str_format_matrix (matrix: list[list[int]]) -> str:
    matrix_str: int = ""
    for matrix_slice in matrix:
        matrix_slice_str = ""
        for matrix_value in matrix_slice:
            matrix_slice_str += str(matrix_value) + ' '

        if matrix.index(matrix_slice) != len(matrix) - 1:
            matrix_slice_str += '\n'

        matrix_str += matrix_slice_str

    return matrix_str

def create_matrix (height: int, width: int) -> list[list[int]]:
    base_matrix: list[list[int]] = []

    for i in range(height):
        base_matrix.append([])

        # should not do this. But heck
        matrix_content: list[int] = [ int(value) for value in input("").split(" ") if value != '' ]

        base_matrix[i].extend(matrix_content)

    return base_matrix

def reverse_matrix (matrix_to_reverse: list[list[int]]) -> list[list[int]]:
    matrix_height: int = len(matrix_to_reverse)
    matrix_width: int = len(matrix_to_reverse[0])

    new_matrix: list[list[int]] = []

    for i in range(matrix_width):
        new_matrix.append([])

        for j in range(matrix_height):
            new_matrix[i].append(matrix_to_reverse[j][i])

    return new_matrix

def sum_matrix_values (matrix_to_sum: list[list[int]]) -> list[int]:
    result_matrix: list[int] = []

    for matrix_slice in matrix_to_sum:
        result = sum(matrix_slice)
        result_matrix.append([result])

    return result_matrix

if __name__ == "__main__":
    main()
