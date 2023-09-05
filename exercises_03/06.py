"""
    Program that:
        Leer un entero positivo n. Imprimir los n primeros enteros
        positivos en forma descendente.
"""

def main () -> None:
    number: int = int(input(""))
    i: int = number

    while i >= 0:
        print(i)
        i -= 1

if __name__ == '__main__':
    main()
