"""
	Program that:
		Calcule el n-ésimo término de la sucesión de Padovan 
		(P(0)=1, P(1)=1, P(2)=1, P(3)=2, P(4)=2, P(5)=3, P(6)=4, P(7)=5, P(8)=7, P(9)=9, P(10)=12, P(11)=16...)
		para un n arbitrario leído del usuario.
"""

def get_padovan_number (index:int) -> int:
	if index == 0 or index == 1 or index == 2:
		return 1

	return get_padovan_number(index - 2) + get_padovan_number(index - 3)

def main () -> None:
	number: int = int(input())

	padovan_number: int = get_padovan_number(number)

	print(padovan_number)
	return

if __name__ == "__main__":
	main()
