"""
    Program that:
        Escribir un programa que pida un número y si el que se introduce por el teclado es
        menor de 100 que vuelva a solicitarlo hasta que se ingrese un valor mayor o igual a 100.
"""

def main () -> None:
    input_num: int = 0

    while input_num < 100:
        input_num = int(input(""))

    print("End")

if __name__ == '__main__':
    main()
