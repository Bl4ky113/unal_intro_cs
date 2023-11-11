/* 
	Program that:
		Lea el tamaño de la matriz, lea fila por fila sus elementos y luego imprímala.	
*/

#include <stdio.h>
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

			scanf("%d", &input);

			number_row[j] = input;
		}

		matrix[i] = number_row;
	}

	return matrix;
}

void print_number_matrix (int height, int width, int** matrix) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			printf("%d%s", matrix[i][j], MATRIX_SEPARATOR);
		}
		printf("\n");
	}

	return;
}

int main (void) {
	int **matrix;
	int height = MATRIX_HEIGHT;
	int width = MATRIX_WIDTH;
	
	scanf("%d", &height);
	scanf("%d", &width);

	matrix = read_number_matrix(height, width);

	print_number_matrix(height, width, matrix);

	return 0;
}
