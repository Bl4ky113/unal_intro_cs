"""
    Program that:
        De todos los planetas que orbitan alrededor de TRAPPIST-1 cual es el
        planeta que de acuerdo a su temperatura usted podría habitar más fácilmente.
"""

import json

def main () -> None:
    NORMAL_TEMPERATURE_BOGOTA: float = 16.0
    planets: list[dict] = []
    base_difference: float = None
    choosen_planet: dict = {}

    with open('./src/planets.json') as file:
        planets = json.load(file)

    print(f"Buscando un Planeta con temperaturas cercanas a {NORMAL_TEMPERATURE_BOGOTA}")

    for planet in planets:
        planet_temperature_celsius: float = convert_kelvin_to_celsius(planet['temperature_kelvin'])

        planet_temperature_difference = abs(NORMAL_TEMPERATURE_BOGOTA - planet_temperature_celsius)

        if base_difference == None:
            base_difference = planet_temperature_difference
            choosen_planet = planet

        if base_difference > planet_temperature_difference:
            base_difference = planet_temperature_difference
            choosen_planet = planet

    print(f"Planeta con temperatura más cercana es:\n\tNombre: {choosen_planet['name']}\n\tCon temperatura: {convert_kelvin_to_celsius(choosen_planet['temperature_kelvin'])}")

def convert_kelvin_to_celsius (kelvin: float) -> float:
    return kelvin - 273.15

if __name__ == "__main__":
    main()
