"""
    Program that:
        Dadas dos listas sin repetidos, calcule la lista que resulta de la unión
        entre los elementos de otras dos listas.
"""

import random

def main () -> None:
    random_list_1: set[int] = set( [ random.randint(-4098, 4089) for _ in range(12) ] )
    random_list_2: set[int] = set( [ random.randint(-4098, 4089) for _ in range(12) ] )

    union_of_lists: set[int] = random_list_1.union(random_list_2)

    print(random_list_1)
    print(random_list_2)
    print(list(union_of_lists))

if __name__ == "__main__":
    main()
