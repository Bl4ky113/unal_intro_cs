
#include <iostream>
#include <stdlib.h>

int **crearMatriz(int m, int n) {
	int **matrix = (int **) calloc(m , sizeof(int *));
	
	for (int i = 0; i < m; i++) {
		matrix[i] = (int *) calloc(n, sizeof(int));
	}
	
	return matrix;
}

void leerMatriz (int **matrix, int m, int n) {
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++) {
			int input = 0;
			
			scanf("%d", &input);
			
			matrix[i][j] = input;
		}
	}
	
	return;
}

void imprimirMatriz (int **matrix, int m, int n) {
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++) {
			printf("%d\t", matrix[i][j]);
		}
		
		printf("\n");
	}
	
	return;
}

void borrarMatriz (int **matrix, int m, int _n) {
	for (int i = 0; i < m; i++) {
		delete[] matrix[i];
	}
	
	delete[] matrix;
	
	return;
}

int **hallarTranpuesta (int **matrix, int m, int n) {
	int **inverse_matrix = (int **) malloc(sizeof(int *) * n);
	
	for (int i = 0; i < n; i++) {
		int *inverse_row = (int *) malloc(sizeof(int *) * m);
		
		for (int j = 0; j < m; j++) {
			inverse_row[j] = matrix[j][i];
		}
		
		inverse_matrix[i] = inverse_row;
	}
	
	return inverse_matrix;
}

int **multiplicarEscalar (int **matrix, int m, int n, int escalar) {
	int **mult_matrix = (int **) malloc(sizeof(int *) * m);
	
	for (int i = 0; i < m; i++) {
		int *mult_row = (int *) malloc(sizeof(int) * n); 
		
		for (int j = 0; j < n; j++) {
			mult_row[j] = matrix[i][j] * escalar;
		}
		
		mult_matrix[i] = mult_row;
	}
	
	return mult_matrix;
}

int **sumarMatrices (int **matrix_1, int **matrix_2, int m, int n) {
	int **sum_matrix = (int **) malloc(sizeof(int *) * m);
	
	for (int i = 0; i < m; i++) {
		int *sum_row = (int *) malloc(sizeof(int) * n); 
		
		for (int j = 0; j < n; j++) {
			sum_row[j] = matrix_1[i][j] + matrix_2[i][j];
		}
		
		sum_matrix[i] = sum_row;
	}
	
	return sum_matrix;	
}

int **restarMatrices (int **matrix_1, int **matrix_2, int m, int n) {
	int **sub_matrix = (int **) malloc(sizeof(int *) * m);
	
	for (int i = 0; i < m; i++) {
		int *sub_row = (int *) malloc(sizeof(int) * n); 
		
		for (int j = 0; j < n; j++) {
			sub_row[j] = matrix_2[i][j] - matrix_1[i][j];
		}
		
		sub_matrix[i] = sub_row;
	}
		
	return sub_matrix;
}

int mult_row (int *row_1, int *row_2, int size) {
	int result = 0;
	
	for (int i = 0; i < size; i++) {
		result += (row_1[i] * row_2[i]);
	}
	
	return result;
}

int **multiplicarMatrices (int **matrix_1, int **matrix_2, int m, int n_1, int n_2) {
	int **mult_matrix = (int **) malloc(sizeof(int *) * n_1);
	
	int **aux_matrix_2 = hallarTranpuesta(matrix_2, m, n_2);
	
	for (int i = 0; i < n_1; i++) {
		int *row = (int *) malloc(sizeof(int) * n_2);
		
		for (int j = 0; j < n_2; j++) {
			int value = mult_row(matrix_1[i], aux_matrix_2[j], n_2);
			
			row[j] = value;
		}
		
		mult_matrix[i] = row;
	}
	
	return mult_matrix;
}

int main (void) {
	int **matrix_a;
	int **matrix_b;
	int **matrix_c;
	int m = 0;
	int n = 0;
	int r = 0;
	
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &r);
	
	matrix_a = crearMatriz(m, n);
	matrix_b = crearMatriz(m, n);
	matrix_c = crearMatriz(n, r);
	
	leerMatriz(matrix_a, m, n);
	leerMatriz(matrix_b, m, n);
	leerMatriz(matrix_c, n, r);
	
	printf("\n");
	
	int **inverse_c = hallarTranpuesta(matrix_c, n, r);
	printf("\n");
	imprimirMatriz(inverse_c, r, n);
	
	int **mult_b_r = multiplicarEscalar(matrix_b, m, n, r);
	printf("\n");
	imprimirMatriz(mult_b_r, m, n);
	
	int **sum_a_b = sumarMatrices(matrix_a, matrix_b, m, n);
	printf("\n");
	imprimirMatriz(sum_a_b, m, n);
	
	int **sub_a_b = restarMatrices(matrix_b, matrix_a, m, n);
	printf("\n");
	imprimirMatriz(sub_a_b, m, n);
	
	int **mult_a_c = multiplicarMatrices(matrix_a, matrix_c, m, n, r);
	printf("\n");
	imprimirMatriz(mult_a_c, m, r);
	
	borrarMatriz(matrix_a, m, n);
	borrarMatriz(matrix_b, m, n);
	borrarMatriz(matrix_c, n, r);
	borrarMatriz(inverse_c, r, n);
	borrarMatriz(mult_b_r, m, n);
	borrarMatriz(sum_a_b, m, n);
	borrarMatriz(sub_a_b, m, n);
	borrarMatriz(mult_a_c, m, r);
	
	return 0;
}
