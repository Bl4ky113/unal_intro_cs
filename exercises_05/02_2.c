/* 
	Encuentre el valor máximo y mínimo en un arreglo sin utilizar funciones.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int *read_number_arr (int size) {
	int *number_arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		int input = 0;

		fscanf(stdin, "%d", &input);

		number_arr[i] = input;
	}

	return number_arr;
}

void print_number_arr (int size, int *arr) {
	for (int i = 0; i < size; i++) {
		fprintf(stdout, "%d\n", arr[i]);	
	}

	return;
}

int get_max_number_from_arr (int size, int *arr) {
	int max_number = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] > max_number) {
			max_number = arr[i];
		}
	}

	return max_number;
}

int get_min_number_arr (int size, int *arr) {
	int min_number = INT_MAX;

	for (int i = 0; i < size; i++) {
		if (arr[i] < min_number) {
			min_number = arr[i];
		}
	}

	return min_number;
}

int main (void) {
	int *arr;
	int max_number = 0;
	int min_number = 0;
	int arr_size = 0;

	fscanf(stdin, "%d", &arr_size);

	// arr = generate_random_number_arr(arr_size);
	arr = read_number_arr(arr_size);
	
	max_number = get_max_number_from_arr(arr_size, arr);
	min_number = get_min_number_arr(arr_size, arr);

	fprintf(stdout, "%d\n", max_number);
	fprintf(stdout, "%d\n", min_number);
	return 0;
}
