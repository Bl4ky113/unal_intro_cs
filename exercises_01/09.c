/* 
	Program that: 
	Encuentre el volumen y el área de la superficie de un cono. Nota: la superficie del cono no debe incluir la tapa.
*/

#include <stdio.h>
#include <math.h>

double calc_cone_volume (int cone_height, int cone_radius) {
	return (1.0 / 3.0) * (pow(cone_radius, 2) * M_PI) * (cone_height);
}

double calc_cone_slant (int height, int radius) {
	return sqrt(pow(radius, 2) + pow(height, 2));
}

double calc_cone_lateral_area(int radius, double slant) {
	return (M_PI * radius * slant);
}

double calc_cone_area (int cone_height, int cone_radius) {
	return calc_cone_lateral_area(cone_radius, calc_cone_slant(cone_height, cone_radius));
}

int main (void) {
	int height = 0;
	int radius = 0;
	scanf("%d", &radius);
	scanf("%d", &height);

	double result_area = calc_cone_area(height, radius);
	double result_volume = calc_cone_volume(height, radius);

	printf("%.2lf\n", result_area);
	printf("%.2lf\n", result_volume);

	return 0;
}
