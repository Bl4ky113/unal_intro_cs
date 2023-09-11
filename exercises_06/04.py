"""
    Program that:
        Calcule el promedio y la suma de los elementos en una lista sin utilizar las funciones nativas.
"""

import random

def main () -> None:
    random_list: list[int] = [ random.randint(0, 1024) for _ in range(64) ]
    sum_numbers: int = 0
    average: float = 0

    for number in random_list:
        sum_numbers += number

    average = sum_numbers / len(random_list)

    print(f"{average:.2f}")

if __name__ == '__main__':
    main()
