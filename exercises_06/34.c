/* 
	Program that:
        Lea dos matrices e imprima su suma.
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

int **sum_number_matrixes (int height, int width, int** matrix_1, int** matrix_2) {
	int **sum_matrix = (int **) malloc(sizeof(int *) * height);

	for (int i = 0; i < height; i++) {
		int *results_arr = (int *) malloc(sizeof(int) * width);
	
		for (int j = 0; j < width; j++) {
			results_arr[j] = matrix_1[i][j] + matrix_2[i][j];
		}

		sum_matrix[i] = results_arr;
	}

	return sum_matrix;
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
	int **matrix_1;
	int **matrix_2;
	int **matrix_sum;
	int height = MATRIX_HEIGHT;
	int width = MATRIX_WIDTH;
	
	scanf("%d", &height);
	scanf("%d", &width);

	matrix_1 = read_number_matrix(height, width);
	matrix_2 = read_number_matrix(height, width);

	matrix_sum = sum_number_matrixes(height, width, matrix_1, matrix_2);

	print_number_matrix(height, width, matrix_sum);
	return 0;
}
