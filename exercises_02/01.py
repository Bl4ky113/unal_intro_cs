"""
    Program that:
        Determine si un número es negativo, positivo o cero.
"""

def main () -> None:
    input_number: int = 0

    try:
        input_number = int(input())

    except ValueError as e:
        print(f"ERROR DEL VALOR INGRESADO\n{type(e)}\n{e}")
        raise ValueError
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        raise Exception

    if input_number > 0:
        print(f"Positivo")
    elif input_number < 0:
        print(f"Negativo")
    else:
        print(f"Cero")

if __name__ == "__main__":
    main()
