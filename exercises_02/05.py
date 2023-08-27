"""
    Program that:
        Diseñe un programa que determine el mayor valor de cuatro números a, b, c, d. leídos del usuario.
"""

NUM_NUMBERS: int = 4

def main () -> None:
    num_list: list[float] = []
    max_num: float = 0

    for _ in range(NUM_NUMBERS):
        try:
            num_list.append(float(input("num: ")))
        except ValueError as e:
            print(f"ERROR AL INGRESAR UN VALOR:\n{type(e)}\n{e}")
        except Exception as e:
            print(f"ERROR:\n{type(e)}\n{e}")
            raise Exception

    for num in num_list:
        if num > max_num:
            max_num = num

    print(max_num)

if __name__ == "__main__":
    main()
