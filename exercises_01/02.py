"""
    Program that:
        Dado un entero positivo de tres dígitos, escriba un programa que calcule la suma
        de sus dígitos
"""

def main () -> None:
    num_list: list[int] = []

    try:
        amount_num: int = int(input('Ingrese cuantos números quiere sumar: '))
    except ValueError as e:
        print(f"ERROR: CANTIDAD INGRESADA NO VALIDA\n{type(e)}\n{e}")
        return
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")
        return

    while len(num_list) != amount_num:
        try:
            num_input: int = int(input('Ingrese un número: '))

            if num_input < 0 :
                print(f"ERROR: INPUT {num_input} es menor a 0")
                raise Exception(f"INPUT {num_input} es menor a 0")

            num_list.append(num_input)
        except ValueError as e:
            print(f"ERROR: VALOR INGRESADO NO VALIDO\n{type(e)}\n{e}")
        except Exception as e:
            print(f"ERROR:\n{type(e)}\n{e}")

    result_sum: int = sum(*num_list)
    print(f"Resultado Suma: {result_sum}")

def sum (*numbers: int) -> int:
    result: int = 0

    for number in numbers:
        result += number

    return result

if __name__ == '__main__':
    main()
