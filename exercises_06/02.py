"""
    Program that:
        Encuentre el valor máximo en una lista, sin utilizar funciones nativas.
"""

import math
import random

def main () -> None:
    random_list = [ random.randint(0, 1024) for _ in range(64) ]
    max_number: int = 0

    for number in random_list:
        if max_number <= number:
            max_number = number

    print(random_list)
    print(max_number)

if __name__ == '__main__':
    main()
