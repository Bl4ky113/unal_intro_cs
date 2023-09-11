"""
    Program that:
        Encuentre todos los pares de elementos en una lista cuya suma
        sea igual a un número especificado.
"""

import random

def main () -> None:
    list_sum: int = int(input(""))

    number_list: list[int] = []
    even_list: list[int] = []
    list_total: int = 0

    while list_total < list_sum:
        random_number: int = random.randint(0, list_sum)

        if (random_number + list_total) > list_sum:
            number_list.append(list_sum - list_total)
            break

        number_list.append(random_number)
        list_total += random_number

    print(number_list)

    for num in number_list:
        if num % 2 == 0:
            even_list.append(num)

    print(even_list)

if __name__ == '__main__':
    main()
