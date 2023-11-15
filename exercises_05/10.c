/* 
	Program that:
		Encuentre los dos elementos de un arreglo con la diferencia más grande entre ellos.
*/

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 16

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

int get_max_number_arr (int size, int *arr) {
	int max_number = 0;

	for (int i = 0; i < size; i++) {
		if (max_number < arr[i]) {
			max_number = arr[i];
		}
	}

	return max_number;
}

int get_min_number_arr (int size, int *arr) {
	int min_number = arr[0];

	for (int i = 0; i < size; i++) {
		if (min_number > arr[i]) {
			min_number = arr[i];
		}
	}

	return min_number;
}

int *get_greatest_difference_numbers_arr (int size, int *arr) {
	int *result_arr = (int *) malloc(sizeof(int) * (size_t) 2);
	int min_number = get_min_number_arr(size, arr);
	int max_number = get_max_number_arr(size, arr);

	result_arr[0] = min_number;
	result_arr[1] = max_number;

	return result_arr;
}

int main (void) {
	int *arr;
	int *numbers_arr;
	int size = ARR_SIZE;

	scanf("%d", &size);

	arr = read_number_arr(size);
	numbers_arr = get_greatest_difference_numbers_arr(size, arr);

	print_number_arr(2, numbers_arr);
	printf("\t%d\n", numbers_arr[1] - numbers_arr[0]);

	return 0;
}
