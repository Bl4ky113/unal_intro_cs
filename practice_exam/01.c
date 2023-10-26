/* 
	Program that:
		Dado un intervalo, [a, b], imprima los números primos tales que la suma de sus dígitos es un número primo
*/

#include <stdio.h>
#include <math.h>

void get_prime_numbers (int start_interval, int end_interval, int *prime_numbers[]) {
	int number_prime_numbers = 0;

	for (int i = start_interval; i < end_interval; i++) {
		int is_prime = 0;
		for (int j = start_interval; j < end_interval; j++) {

			if ((i == 0 || i == 1) || (j == 0 || j ==1)) {
				continue;
			}

			if (i == j) {
				continue;
			}

			if (i % j == 0) {
				is_prime = 0;
				break;
			}

			is_prime = 1;
		}

		if (is_prime) {
			*prime_numbers[number_prime_numbers] = i;
			number_prime_numbers++;
			printf("%d\t\n", *prime_numbers[number_prime_numbers]);
		}
	}
	return;
}

int main (void) {
	int start_interval = 0;
	int end_interval = 0;

	scanf("%d", &start_interval);
	scanf("%d", &end_interval);

	int prime_numbers[end_interval - start_interval];

	get_prime_numbers(start_interval, end_interval, &prime_numbers);

	return 0;
}
