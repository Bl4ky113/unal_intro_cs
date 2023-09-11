"""
    Program that:
        Dada una lista, calcule otra lista equivalente pero eliminando los repetidos.
"""

import random

def main () -> None:
    clean_list: list[int] = list(set([ random.randint(-4098, 4098) for _ in range(100_000) ]))

    print(clean_list, len(clean_list)

if __name__ == "__main__":
    main()
