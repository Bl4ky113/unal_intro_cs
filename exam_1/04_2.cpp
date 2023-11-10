/* 
	Program that:
		Dado un entero n, 
		dibujar un rectángulo de asteriscos de 2n-1 X 2n con un hueco 
		en forma de rombo como lo muestran los ejemplos.

		********
		***  ***
		**    **
		*      *
		**    **
		***  ***
		********
*/

#include <iostream>
#include <math.h>

#define FILL_CHAR "*"
#define SPACE_CHAR " "

int main (void) {
	int size = 0;
	int height = 0;
	int width = 0;

	std::cin >> size;

	height = (2 * size) - 1;
	width = (2 * size);

	for (int i = 0; i < height; i++) {
		int number_space = i;

		if (i >= size) { //Reached half of the figure, rotate the triangle
			// The row number of the size, the number, in this figure will always be the half 
			number_space = height - (i + 1);
		}

		int count_space = number_space * 2;
		int count_fill = abs(floor(width / (double) 2) - (number_space));

		for (int j = 0; j < width; j++) {
			if (count_fill > 0) { // First part of the line
				std::cout << FILL_CHAR;
				count_fill--;
			} else if (count_space > 0) { // Second part of the line
				std::cout << SPACE_CHAR;
				count_space--;
			} else { // Last part of the line
				std::cout << FILL_CHAR;
			}
		}

		std::cout << '\n';
	}
}
