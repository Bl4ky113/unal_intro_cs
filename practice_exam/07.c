/* 
	Program that:
		Lea n números y que calcule el promedio de los números pares con 4 figuras significantes
*/

#include <stdio.h>

int main (void) {
	int number_inputs = 0;
	int number_added_inputs = 0;
	int sum = 0;
	double average = 0.0;

	scanf("%d", &number_inputs);

	for (int i = 0; i < number_inputs; i++) {
		int number = 0;
		scanf("%d", &number);

		if (number % 2 != 0) {
			continue;
		}

		sum += number;
		number_added_inputs++;
	}

	average = sum / (double) number_added_inputs; 

	printf("%.4lf\n", average);
	return 0;
}
