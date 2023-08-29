"""
    Exercise that:
        Escribir un programa que lea un número entero n y muestre en pantalla los números pares entre 1 y n.
"""

def main () -> None:
    number: int = int(input(""))
    i: int = 1

    while i <= number:
        if (i % 2 == 0):
            print(i)

        i += 1

if __name__ == '__main__':
    main()
