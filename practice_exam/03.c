/*
	Program that:
		Dado un número, muestre la suma de sus dígitos
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
	int number = 0;
	int sum = 0;

	scanf("%d", &number);

	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}

	printf("%d", sum);

	return 0;
}
