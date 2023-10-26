/* 
	Program that:
		Dadas unas coordenadas, determinar en que caudrante del plano catersiano se encuentra
*/

#include <stdio.h>

int main (void) {
	int coord_x = 0;
	int coord_y = 0;
	int positive_x = 0;
	int positive_y = 0;
	
	scanf("%d", &coord_x);
	scanf("%d", &coord_y);

	// Check if the point in an Axis
	if (coord_x == 0 && coord_x == coord_y) {
		printf("cero\n");
		return 0;
	}

	if (coord_x == 0) {
		printf("eje x\n");
		return 0;
	}

	if (coord_y == 0) {
		printf("eje y\n");
		return 0;
	}

	// Check the point quadrant
	positive_x = coord_x > 0;
	positive_y = coord_y > 0;

	if (positive_x && positive_y) {
		printf("cuadrante 1\n");
	} else if (!positive_x && positive_y) {
		printf("cuadrante 2\n");
	} else if (!positive_x && !positive_y) {
		printf("cuadrante 3\n");
	} else if (positive_x && !positive_y) {
		printf("cuadrante 4\n");
	}

	return 0;
}
