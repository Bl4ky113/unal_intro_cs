"""
    Program that:
        Lea dos matrices e imprima su suma.
"""

def main () -> None:
    matrix_size: tuple[int, int] = tuple([ int(value) for value in input("").split(" ") if value != '' ])

    matrix_1: list[list[int]] = create_matrix(matrix_size[0], matrix_size[1])
    matrix_2: list[list[int]] = create_matrix(matrix_size[0], matrix_size[1])

    # print(str_format_matrix(matrix_1))
    # print(str_format_matrix(matrix_2))

    result_matrix: list[list[int]] = add_matrixes(matrix_1, matrix_2)

    print(str_format_matrix(result_matrix))

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

def add_matrixes (matrix_1: list[list[int]], matrix_2: list[list[int]]) -> list[list[int]]:
    sum_matrix: list[list[int]] = []

    for i in range(len(matrix_1)):
        sum_matrix.append([])
        for j in range(len(matrix_1[i])):
            sum_matrix[i].append(matrix_1[i][j] + matrix_2[i][j])

    return sum_matrix

if __name__ == "__main__":
    main()
