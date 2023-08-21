"""
    Program that:
        Recientemente se descubrieron 7 planetas similares a la Tierra y potencialmente
        habitables que orbitan alrededor de una estrella denominada TRAPPIST-1. El
        sistema solar se encuentra a aproximadamente 369 trillones de kilómetros (Un
        trillón equivale a 1018 kilometros). Asumamos que podemos viajar a la velocidad de
        la luz. ¿A cuántos años luz está ese sistema solar?
"""

LIGHT_YEAR: int = 9_460_730_472_580_800 # In meters
DISTANCE_EARTH_TRAPPIST: int = 369 * 1_018_000 # In meters

def main () -> None:
    print(f"TRAPPIST esta a {DISTANCE_EARTH_TRAPPIST / LIGHT_YEAR} años luz de la tierra")

if __name__ == '__main__':
    main()
