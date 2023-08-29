"""
    Program that:
        Lea un número entero n y, usando ciclos, generar la sucesión: 1, 5, 3, 7, 5, 9, 7, ..., n
        (Hasta la primera aparición de n si n es impar, ó en el caso par; hasta la primera aparición de n-1).
"""

def main () -> None:
    num: int = int(input(""))
    num_to_show: int = 1
    i: int = 1

    while i < num:
        print(num_to_show)

        if i % 2:
            num_to_show += 4
        else:
            num_to_show -= 2

        if num_to_show == num or num_to_show == num - 1:
            print(num_to_show)
            break

        i += 1

if __name__ == '__main__':
    main()
