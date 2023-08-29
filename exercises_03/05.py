"""
    Program that:
        Leer un número n múltiplo de 5 y generar la sucesión 5, 10, 15, 20, 25, 30, 35, …, n. El programa debe validar que la entrada sea un múltiplo de 5 
        y sino mostrar un mensaje de error.
"""

def main () -> None:
    multiple: int = int(input(""))
    i: int = 1

    if multiple % 5 != 0:
        print("error")
        return

    while i <= multiple:
        if i % 5 == 0:
            print(i)

        i += 1

if __name__ == '__main__':
    main()
