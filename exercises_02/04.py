"""
    Program that:
        Considerando que las estaciones del año se numeran como 1 para primavera, 2
        para verano, 3, para otoño y 4 para invierno; diseñe un programa que determine
        el nombre de la estación del año conociendo el número de la estación.
"""

SEASONS: dict[int: str] = {
    1: 'primavera',
    2: 'verano',
    3: 'otoño',
    4: 'invierno'
}

SEASONS_NUMBERS: list[int] = SEASONS.keys()

def main () -> None:
    season_number: int = 0

    try:
        season_number = int(input("season:"))
    except ValueError as e:
        print(f"ERROR AL INGRESAR LOS VALORES:\n{type(e)}\n{e}")
    except Exception as e:
        print(f"ERROR:\n{type(e)}\n{e}")

    if season_number not in SEASONS_NUMBERS:
        raise IndexError(f"Out of Season index: {season_number}")

    print(SEASONS[season_number])

if __name__ == "__main__":
    main()
