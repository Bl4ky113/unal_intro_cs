/* 
	Program that:
		Encuentre el volumen y el área de la superficie de un cono truncado.
*/ 

#include <cmath>
#include <iostream>
#include <math.h> // for M_PI

double calc_cone_volume (int height, int radius_bottom, int radius_top) {
	return ( 1.0 / 3.0 ) * M_PI * height * (pow(radius_top, 2) + radius_top * radius_bottom + pow(radius_bottom, 2));
}

double calc_cone_slant (int radius_top, int radius_bottom, int height) {
	return sqrt(pow(radius_top - radius_bottom, 2) + pow(height, 2));
}

double calc_cone_lateral_area (int height, int radius_bottom, int radius_top) {
	return M_PI * (radius_top + radius_bottom)  * calc_cone_slant(radius_top, radius_bottom, height);
}

double calc_cone_base_area (int radius) {
	return M_PI * pow(radius, 2);
}

double calc_cone_area (int height, int radius_bottom, int radius_top) {
	return calc_cone_lateral_area(height, radius_bottom, radius_top) + \
		calc_cone_base_area(radius_bottom) + \
		calc_cone_base_area(radius_top);
}

int main (void) {
	int radius_bottom = 0;
	int radius_top = 0;
	int height = 0;

	std::cin >> radius_bottom;
	std::cin >> radius_top;
	std::cin >> height;

	std::cout.setf(std::ios::fixed);
	std::cout.precision(5);
	std::cout << calc_cone_area(height, radius_bottom, radius_top) << '\n'; 
	std::cout << calc_cone_volume(height, radius_bottom, radius_top);
	return 0;
}
