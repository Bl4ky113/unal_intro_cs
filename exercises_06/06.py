"""
    A Program that:
        Encuentre el segundo elemento más grande en una lista.
"""

import random

def main () -> None:
    random_list: list[int] = [ random.randint(0, 10) for _ in range(0, 128) ]
    random_list: set[int] = set(random_list)
    max_number: int = 0
    second_max_number: int = 0

    for number in random_list:
        if max_number <= number:
            second_max_number = max_number
            max_number = number

        if max_number < second_max_number < number:
            second_max_number = number

    print(second_max_number)
    print(max_number)

if __name__ == '__main__':
    main()
