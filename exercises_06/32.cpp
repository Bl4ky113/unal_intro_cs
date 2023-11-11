/* 
    Program that:
        Lea el tamaño de la matriz, lea fila por fila sus elementos y luego imprima su transpuesta.
*/

#include <iostream>
#include <stdlib.h>

#define MATRIX_HEIGHT 3
#define MATRIX_WIDTH 3
#define MATRIX_SEPARATOR "\t"

int **read_number_matrix (int height, int width) {
	int **matrix = (int **) malloc(sizeof(int *) * height);

	for (int i = 0; i < height; i++) {
		int *number_row = (int *) malloc(sizeof(int) * width);

		for (int j = 0; j < width; j++) {
			int input = 0;
		
			std::cin >> input;

			number_row[j] = input;
		}

		matrix[i] = number_row;
	}

	return matrix;
}

void print_number_matrix (int height, int width, int** matrix) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			std::cout << matrix[i][j] <<  MATRIX_SEPARATOR;
		}
		std::cout << '\n';
	}

	return;
}

int **reverse_number_matrix (int height, int width, int **matrix) {
	int **reverse_matrix = (int **) malloc(sizeof(int *) * width);

	for (int i = 0; i < width; i++) {
		int *reverse_row = (int *) malloc(sizeof(int) * height);

		for (int j = 0; j < height; j++) {
			reverse_row[j] = matrix[j][i];
		}

		reverse_matrix[i] = reverse_row;
	}

	return reverse_matrix;
}

int main (void) {
	int **matrix;
	int **transpose;
	int height = MATRIX_HEIGHT;
	int width = MATRIX_WIDTH;

	std::cin >> height;
	std::cin >> width;

	matrix = read_number_matrix(height, width);
	transpose = reverse_number_matrix(height, width, matrix);
	
	print_number_matrix(width, height, transpose);

	return 0;
}
