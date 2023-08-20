"""
    Program that:
        ¿Cuántos billetes de cada cantidad (50.000, 20.000 y 10.000) debe entregar un
        cajero automático que sigue las siguientes reglas?:
            a. El usuario puede pedir hasta un máximo de 1.400.000 y mínimo 10.000.
            b. Los valores pedidos son múltiplos de 10.000.
            c. El cajero debe entregar la cantidad máxima de billetes de 50.000 que se
                pueden entregar, luego de billetes de 20.000 y el residuo con 10.000?. Por
                ejemplo, al solicitar 280.000 el programa responde: 5 billetes de 50.000 +
                1 billete de 20.000 y 1 billete de 10.000. Si la solicitud es 40.000 entonces
                se responde: 0 billetes de 50.000 + 2 billetes de 20.000 + 0 billetes de 10.000.
"""

MAX_RETIREMENT = 1_400_000
MIN_RETIREMENT = 10_000

def main () -> None:
    retirement: int = 0
    retirement_copy: int = 0
    retirement_total: int = 0

    num_50_bills: int = 0
    num_20_bills: int = 0
    num_10_bills: int = 0

    while True:
        try:
            retirement = int(input("Ingrese la cantidad a retirar: $"))

            if retirement < MIN_RETIREMENT:
                raise ValueError(f'Valor ingresado es menor a ${MIN_RETIREMENT}')

            if retirement > MAX_RETIREMENT:
                raise ValueError(f'Valor ingresado mayor a ${MAX_RETIREMENT}')

            break

        except ValueError as e:
            print(f"ERROR: Valor ingresado invalido\n{type(e)}\n{e}")
        except Exception as e:
            print(f"ERROR:\n{type(e)}\n{e}")
            return

    retirement_copy = retirement

    num_50_bills = retirement_copy // 50_000
    retirement_copy -= (num_50_bills * 50_000)

    num_20_bills = retirement_copy // 20_000
    retirement_copy -= (num_20_bills * 20_000)

    num_10_bills = retirement_copy // 10_000
    retirement_copy -= (num_10_bills * 10_000)

    retirement_total = (num_50_bills * 50_000) + (num_20_bills * 20_000) + (num_10_bills * 10_000)

    print(f"Retiro de: ${retirement}")
    print(f"\t{num_50_bills} Billetes de $50.000")
    print(f"\t{num_20_bills} Billetes de $20.000")
    print(f"\t{num_10_bills} Billetes de $10.000")
    print(f"\nDando un Total de: ${retirement_total}")

    if retirement_copy > 0:
        print(f"Este cajero no le puede dar los ${retirement_copy} restantes.\nLo lamentamos")

if __name__ == "__main__":
    main()
