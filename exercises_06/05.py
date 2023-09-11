"""
    A Program that:
        Dadas dos listas de enteros de igual tamaño, calcule una lista que
        contenga la suma de los elementos correspondientes de las otras dos.
"""

import random

def main () -> None:
    random_list_1: list[int] = [ random.randint(0, 1024) for _ in range(32) ]
    random_list_2: list[int] = [ random.randint(0, 1024) for _ in range(len(random_list_1)) ]
    result_list: list[int] = []

    i: int = 0

    while i < len(random_list_1):
        result_list.append(random_list_1[i] + random_list_2[i])
        i += 1

    print(result_list)

if __name__ == '__main__':
    main()
