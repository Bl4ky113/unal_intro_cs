"""
    Program that:
        Dado un número n, imprima el triángulo de Pascal asociado a ese número
"""

def main () -> None:
    num_iterations: int = int(input(""))
    pascal_number_list: list = [1]
    i: int = 0

    while i <= num_iterations:
        print(" ".join([ str(value) for value in pascal_number_list ]))

        copy_number_list = pascal_number_list.copy()
        pascal_number_list = []

        for j, number in enumerate(copy_number_list):
            if j < len(copy_number_list) - 1:
                pascal_number_list.append(number + copy_number_list[j + 1])

        i += 1

        pascal_number_list.insert(0, 1)
        pascal_number_list.insert(len(pascal_number_list), 1)

if __name__ == "__main__":
    main()
