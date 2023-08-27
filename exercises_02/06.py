"""
    Program that:
        En una playa de estacionamiento cobran $5000 por hora o fracción. Diseñe un
        programa que determine cuánto debe pagar un cliente por el estacionamiento de
        su vehículo, conociendo el tiempo de estacionamiento en horas y minutos.
        Debe validar los datos de entrada
"""

HOUR_PRICE = 5_000
MINUTE_PRICE = HOUR_PRICE / 60

def main () -> None:
    total_parking_minutes: int = 0
    parking_minutes: int = 0
    parking_hours: int = 0
    payment_amount: float = 0

    try:
        parking_hours = int(input("Hours: "))
        parking_minutes = int(input("Minures: "))

        if ( parking_hours < 0 ) or ( parking_minutes < 0 ):
            raise ValueError('MINUTES OR HOURS CAN\'T LESS THAN 0')

        if ( parking_hours == 0 ) and ( parking_minutes == 0 ):
            raise ValueError('MINUTES AND HOURS CAN\'T BE 0 AT THE SAME TIME')

    except ValueError as e:
        print(f"ERROR ENTERING AN INPUT:\n{type(e)}\n{e}")
        raise e
    except Exception as e:
        print(f"Error:\n{type(e)}\n{e}")
        raise e

    total_parking_minutes += parking_minutes + (parking_hours * 60)

    payment_amount = total_parking_minutes * MINUTE_PRICE

    print(payment_amount)

if __name__ == "__main__":
    main()
