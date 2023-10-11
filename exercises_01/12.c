/* 
	Program that:
		Encuentre el área de un hexágono regular circunscrito en un círculo de radio dado.
*/

#include <stdio.h>
#include <math.h>

double calc_triangle_area (int side_size) {
	return ((pow(side_size, 2) * sqrt(3)) / 4.0);
}

int main (void) {
	int circle_radius = 0;
	int sides_inner_figure = 6;
	double result_area = 0.0;

	scanf("%d", &circle_radius);

	for (int i = 0; i < sides_inner_figure; i++) {
		result_area += calc_triangle_area(circle_radius);
	}

	printf("%.2lf", result_area);
}
