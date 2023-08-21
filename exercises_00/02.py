"""
    Program that:
        Escriba un programa que calcule la suma de 1**2+2**2+3**2+...+n**2
"""

def main () -> None:
    range_to_sum: int = 0

    try:
        range_to_sum = int(input("Ingrese el rango qué quiere sumar: "))

        if range_to_sum <= 0:
            raise ValueError("El valor ingresado debe ser mayor a 0")

    except ValueError as e:
        print(f"ERROR VALOR INGRESADO INVALIDO:\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    result: int = calc_range_sum(range_to_sum)

    print(f"Resultado de la Sumatoria: \n\t{result}")

def calc_range_sum(range_length: int) -> int:
    sum: int = 0

    for i in range(range_length):
        sum += (i + 1) ** 2

    return sum

if __name__ == '__main__':
    main()
