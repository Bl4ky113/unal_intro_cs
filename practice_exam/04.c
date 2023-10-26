/* 
	Program that:
		Dado intervalo dos números enteros, encuentre los números divisibles entre 7 o por 5.
*/

#include <stdio.h>

int main (void) {
	int num_1 = 0;
	int num_2 = 0;

	scanf("%d", &num_1);
	scanf("%d", &num_2);

	for (int i = num_1; i <= num_2; i++) {
		if (i % 5 == 0 || i % 7 == 0) {
			printf("%d\n", i);
		}
	}

	return 0;
}
