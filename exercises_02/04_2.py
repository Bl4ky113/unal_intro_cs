
"""
    Program that:
        Escriba un programa que dado un número de mes, imprima el nombre del mes correspondiente.
        En caso de que el número no corresponda a ningun mes, imprimir Mes invalido
"""

MONTHS: dict[int: str] = {
    1: 'Enero',
    2: 'Febrero',
    3: 'Marzo',
    4: 'Abril',
    5: 'Mayo',
    6: 'Junio',
    7: 'Julio',
    8: 'Agosto',
    9: 'Septiembre',
    10: 'Octubre',
    11: 'Noviembre',
    12: 'Diciembre'
}

MONTHS_NUMBERS: list[int] = MONTHS.keys()

def main () -> None:
    month_number: int = 0

    try:
        month_number = int(input())
    except ValueError as e:
        print(f"ERROR AL INGRESAR LOS VALORES:\n{type(e)}\n{e}")
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")

    if month_number not in MONTHS_NUMBERS:
        print('Mes invalido')
        return
        # raise IndexError(f"Out of Season index: {month_number}")

    print(MONTHS[month_number])

if __name__ == "__main__":
    main()
