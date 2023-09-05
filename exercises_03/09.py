"""
    Escribir un programa que calcule la media de números introducidos por el teclado
    hasta que el número ingresado sea cero (la media no debe incluir el cero).
"""

def main () -> None:
    input_num: int = None
    median_sum: int = 0
    result: int = 0
    i: int = 0


    while input_num != 0:
        input_num = int(input(""))

        median_sum += input_num
        i += 1

    if median_sum == 0 and i == 0:
        return

    result = median_sum / i
    print(f"{result:.2f}")

if __name__ == '__main__':
    main()
