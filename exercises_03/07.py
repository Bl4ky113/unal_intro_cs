"""
    Program that:
        Lea en x el interés anual. Escribir un programa que calcule cuantos años
        tarda en duplicarse un capital depositado al x%% de interés anual.
"""

def main () -> None:
    annual_interest: float = float(input(""))
    capital: int = 10
    initial_capital: int = 10
    i: int = 0

    while capital < (initial_capital * 2):
        capital += (initial_capital * annual_interest)
        print(capital)
        i += 1

    print(i)

if __name__ == '__main__':
    main()
