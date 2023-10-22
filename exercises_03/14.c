/* 
	Program that:
		Dadas dos entradas a y b, calcular la media y la mitad de ese valor sucesivamente hasta alcanzar el cero (1e-6).
*/

#include <stdio.h>
#include <math.h>

#define ZERO 1e-6

int main (void) {
	double num_1 = 0;
	double num_2 = 0;

	scanf("%lf", &num_1);
	scanf("%lf", &num_2);

	double median = (num_1 + num_2) / 2.0;
	printf("%.6lf\n", median);

	while (fabs(median) >= ZERO) {
		median = median / 2.0;
		printf("%.6lf\n", median);
	}

	return 0;
}
