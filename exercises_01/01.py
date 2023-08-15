"""
    Program that:
        Escriba un programa que intercambie los valores de dos variables
"""

def main () -> None:
    foo_1 = input('Primer Valor en foo_1: ')
    foo_2 = input('Segundo Valor en foo_2: ')

    print(f"foo_1: {foo_1} \nfoo_2: {foo_2}")

    foo_exange = foo_1
    foo_1 = foo_2
    foo_2 = foo_exange

    print(f"foo_1: {foo_1} \nfoo_2: {foo_2}")
    return

if __name__ == '__main__':
    main()
