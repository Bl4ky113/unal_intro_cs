"""
    A Program that:
        Imprima todos los números negativos en una lista.
"""

import random

def main () -> None:
    random_list: list[int] = [ random.randint(-1024, 1024) for _ in range(64) ]
    negative_numbers: list[int] = []

    for number in random_list:
        if number < 0:
            negative_numbers.append(number)

    print(negative_numbers)

if __name__ == '__main__':
    main()
