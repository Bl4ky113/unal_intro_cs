/* 
	Dados dos arreglos de enteros de igual tamaño, calcule un arreglo que contenga 
	la suma de los elementos correspondientes de los otros dos.
*/


#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 4

int *read_number_arr (int size) {
	int *number_arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		int input = 0;

		scanf("%d", &input);

		number_arr[i] = input;
	}

	return number_arr;
}

void print_number_arr (int size, int *arr) {
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);	
	}

	return;
}

int *sum_number_arr (int size, int *arr_1, int *arr_2) {
	int *sum_arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		sum_arr[i] = arr_1[i] + arr_2[i];
	}

	return sum_arr;
}

int main (void) {
	int *arr_1;
	int *arr_2;
	int *arr_sum;
	int size = ARR_SIZE;

	scanf("%d", &size);

	arr_1 = read_number_arr(size);
	arr_2 = read_number_arr(size);

	arr_sum = sum_number_arr(size, arr_1, arr_2);

	print_number_arr(size, arr_sum);

	return 0;
}
