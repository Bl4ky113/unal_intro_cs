/* 
	Program that:
		Leer un entero positivo n. Imprimir los n primeros enteros positivos en forma descendente seguidos por el cero. | |
*/

#include <stdio.h>

int main (void) {	
	int number = 0;
	
	scanf("%d", &number);

	for (int i = number; i >= 0; i--) {
		printf("%d\n", i);
	}

	return 0;
}
