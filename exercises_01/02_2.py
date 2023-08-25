"""
    Exercise that:
        Dado un entero positivo de tres dígitos, escriba un programa que calcule la suma de sus dígitos.
"""

def main () -> None:
    digit: int = 0
    result_sum: int = 0

    try:
        digit = int(input())

    except ValueError as e:
        print(f"ERROR DEL VALOR INGRESADO:\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    for single_digit in str(digit):
        result_sum += int(single_digit)

    print(result_sum)

if __name__ == "__main__":
    main()
