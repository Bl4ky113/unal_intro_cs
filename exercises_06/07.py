"""
    Program that:
        Ordene una lista de números sin usar la función sort.
"""

import random

def main () -> None:
    random_list: list[int] = [ random.randint(0, 32) for _ in range(8) ]
    i: int = 0

    print(random_list)

    while i < len(random_list):
        if i == len(random_list) - 1:
            break

        value_1: int = random_list[i]
        value_2: int = random_list[i + 1]

        # print('i: ', i, i + 1)
        # print(random_list[i], random_list[i + 1])

        if random_list[i] > random_list[i + 1]:
            random_list[i] = value_2
            random_list[i + 1] = value_1

            if i != 0:
                i -= 1
        else:
            i += 1

    print(random_list)

if __name__ == '__main__':
    main()
