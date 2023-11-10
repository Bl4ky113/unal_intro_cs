/* 
	Encuentre el valor máximo en un arreglo sin utilizar funciones.
*/

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 12

int *generate_random_number_arr (int size) {
	int *number_arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		number_arr[i] = rand();
	}

	return number_arr;
}

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

int get_max_number_from_arr (int size, int *arr) {
	int max_number = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] > max_number) {
			max_number = arr[i];
		}
	}

	return max_number;
}

int main (void) {
	int *arr;
	int max_number = 0;
	int arr_size = ARR_SIZE;

	scanf("%d", &arr_size);

	// arr = generate_random_number_arr(arr_size);
	arr = read_number_arr(arr_size);

	print_number_arr(arr_size, arr);
	
	max_number = get_max_number_from_arr(arr_size, arr);

	printf("%d\n", max_number);

	return 0;
}
