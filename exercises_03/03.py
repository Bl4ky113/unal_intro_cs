"""
    Program that:
        Escribir un programa que lea un número entero n y,
        usando ciclos, calcule la suma de los números comprendidos entre 1 y n.
"""

def main () -> None:
    range_to_sum: int = int(input(""))
    i: int = 0
    result: int = 0

    while i <= range_to_sum:
        result += i
        i += 1

    print(result)

if __name__ == '__main__':
    main()
