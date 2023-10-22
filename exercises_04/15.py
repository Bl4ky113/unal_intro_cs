"""
	Program that:
		Escriba una función recursiva que calcule el n-ésimo número de Fibonacci.
"""

def get_fibonacci_number (index: int, current_index: int=0, number_1: int=0, number_2: int=1) -> int:
	if current_index == index:
		return number_1

	return get_fibonacci_number(index, current_index + 1, number_2, number_1 + number_2)

def main () -> None:
	number: int = int(input())

	fibonacci_number: int = get_fibonacci_number(number)

	print(fibonacci_number)
	return

if __name__ == "__main__":
	main()
