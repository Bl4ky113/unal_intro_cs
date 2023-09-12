"""
    Program that:
        Lea el tamaño de la matriz, lea fila por fila sus elementos y luego imprímala.
"""

def main () -> None:
    matrix_size: tuple[int, int] = tuple(input("").split(" "))

    matrix: list[list[int]] = create_matrix(int(matrix_size[0]), int(matrix_size[1]))

    print(str_format_matrix(matrix))

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

if __name__ == "__main__":
    main()
