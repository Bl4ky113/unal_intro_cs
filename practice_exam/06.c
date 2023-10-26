/* 
	Program that:
		Dada los coefiecientes de una ecuación cuadratica determinar cuantas raices tiene.
*/

#include <stdio.h>
#include <math.h>

int calc_number_quadratic_ecuation_solutions (int c_a, int c_b, int c_c) {
	int discriminant = pow(pow(c_b, 2) - (4 * c_a * c_c), 0.5);

	if (discriminant == 0) {
		return 1;
	} else if (discriminant > 0) {
		return 2;
	} else {
		return 0;
	}
}

int main (void) {
	int coefficient_a = 0;
	int coefficient_b = 0;
	int coefficient_c = 0;
	int real_solutions = 0;

	scanf("%d", &coefficient_a);
	scanf("%d", &coefficient_b);
	scanf("%d", &coefficient_c);

	real_solutions = calc_number_quadratic_ecuation_solutions(
		coefficient_a,
		coefficient_b,
		coefficient_c
	);

	printf("%d\n", real_solutions);
}
