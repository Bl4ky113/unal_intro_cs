"""
    Program that:
        Escriba una función que, dados tres números l, r y k, retorne cuántos
        números entre l y r (inclusive) son divisibles por k.
"""

def main () -> None:
    num_1: int = int(input(""))
    num_2: int = int(input(""))
    num_3: int = int(input(""))

    num_list: list[int] = get_multiples_from_num_in_range(num_3, range_start=num_1, range_end=num_2)

    print(num_list)

def get_multiples_from_num_in_range(num: int, range_start:int=0, range_end:int=100) -> list[int]:
    num_list: list[int] = []
    i: int = range_start

    while i <= range_end:
        if i % num == 0:
            num_list.append(i)

        i += 1

    return len(num_list)

if __name__ == '__main__':
    main()
