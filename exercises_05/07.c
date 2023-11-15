/* 
	Ordene los elementos de un arreglo sin utilizar funciones usando Selection Sort
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

int *sort_arr (int size, int *number_arr) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (number_arr[j] > number_arr[i] && i != j) {
				int holder = number_arr[i];
				number_arr[i] = number_arr[j];
				number_arr[j] = holder;
			}
		}
	}

	return number_arr;
}

int main (void) {
	int* arr;
	int size = ARR_SIZE;

	scanf("%d", &size);

	arr = read_number_arr(size);

	arr = sort_arr(size, arr);

	print_number_arr(size, arr);

	return 0;
}
