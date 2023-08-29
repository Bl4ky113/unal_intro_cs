"""
    Program that:
        Escribir un programa que lea dos enteros positivos a y b y muestre en pantalla los números múltiplos de 5 comprendidos entre a y b.
"""

def main () -> None:
    min_num: int = int(input(""))
    max_num: int = int(input(""))
    i: int = min_num

    while i <= max_num:
        if (i % 5 == 0):
            print(i)

        i += 1

if __name__ == '__main__':
    main()
