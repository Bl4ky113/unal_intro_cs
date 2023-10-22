"""
	Program that:
		Escriba una función recursiva que calcule el factorial de un número.
"""

def calc_factorial (number: int=1) -> int:
	if number == 0:
		return 1

	return calc_factorial(number - 1) * number

def main () -> None:
	number: int = int(input())

	factorial_number: int = calc_factorial(number)

	print(factorial_number)
	return

if __name__ == "__main__":
	main()
