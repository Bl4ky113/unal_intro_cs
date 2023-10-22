/* 
	Program that:
		Escriba un programa que calcule la distancia más corta de un punto 
		a una línea recta.
*/

#include <cmath>
#include <iostream>

int main (void) {
	double point_x = 0.0;
	double point_y = 0.0;
	double slope = 0.0;
	double intersect = 0.0;
	double distance = 0.0;

	std::cin >> point_x;
	std::cin >> point_y;
	std::cin >> slope;
	std::cin >> intersect;
	
	distance = fabs((slope * point_x) - (point_y + intersect)) / pow(pow(slope, 2) + 1, 0.5);

	std::cout << distance << '\n';

	return 0;
}
