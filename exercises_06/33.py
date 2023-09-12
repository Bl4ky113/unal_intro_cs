"""
    Program that:
        Lea el tamaño de la matriz, lea fila por fila sus elementos y luego calcule la suma de cada una de sus columnas.
"""

def main () -> None:
    matrix_data: list[str] = get_matrix_data()

    matrix: list[list[int]] = create_matrix_from_data(matrix_data)

    result_matrix: list[list[int]] = sum_matrix_values(matrix)

    # print(str_format_matrix(matrix))
    print(str_format_matrix(result_matrix))

def get_matrix_data () -> list[str]:
    matrix_data: list[str] = []
    current_length: int = 0
    waiting_for_data: bool = True
    different_data_sizes: bool = False

    while waiting_for_data:
        try:
            matrix_data.append(input(""))

            if current_length != len(matrix_data[-1]):
                different_data_sizes = True

            if current_length <= len(matrix_data[-1]):
                current_length: int = len(matrix_data[-1])

        except EOFError:
            waiting_for_data = False
            break
        except Exception as error:
            raise error

    if different_data_sizes:
        for i in range(len(matrix_data)):
            matrix_data_slice = matrix_data[i]
            if len(matrix_data_slice) != current_length:
                if matrix_data[i][-1] == ' ':
                    matrix_data[i] = matrix_data[i].strip()

                difference_length = current_length - len(matrix_data[i])

                matrix_data[i] += ' 0' * (difference_length // 2)

    return matrix_data

def create_matrix_from_data (matrix_data: list[str]) -> list[list[int]]:
    new_matrix: list[list[int]] = []

    for i in range(len(matrix_data)):
        new_matrix.append([])

        matrix_content: list[int] = [ int(value) for value in matrix_data[i].split(" ") if value != '']

        new_matrix[i].extend(matrix_content)

    return new_matrix

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

def sum_matrix_values (matrix_to_sum: list[list[int]]) -> list[int]:
    result_matrix: list[int] = []

    for matrix_slice in matrix_to_sum:
        result = sum(matrix_slice)
        result_matrix.append([result])

    return result_matrix

if __name__ == "__main__":
    main()
