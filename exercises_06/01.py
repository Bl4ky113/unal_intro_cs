"""
    A Program that:
        Lea el tamaño de la lista y lea uno a uno sus elementos y que finalmente imprima la lista.
"""

def main () -> None:
    list_size: int = int(input(""))
    element_list: list[str] = []

    for _ in range(list_size):
        element_list.append(input(""))

    print(element_list)

if __name__ == '__main__':
    main()
