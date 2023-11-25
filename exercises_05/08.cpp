/* 
	Program that:
		Ordene los elementos de un arreglo sin utilizar funciones usando Bubble Sort.
*/

#include <iostream>
#include <stdlib.h>

#define ARR_SIZE 4

int *read_number_arr (int size) {
	int *number_arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		int input = 0;

		std::cin >> input;

		number_arr[i] = input;
	}

	return number_arr;
}

void print_number_arr (int size, int *arr) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << '\n';
	}

	return;
}

int *sort_arr (int size, int *arr) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (j == size - 1) {
				break;
			}

			int value_1 = arr[j];
			in value_2 = arr[j + 1];

			if (value_1 > value_2) {
				arr[j] = value_2;
				arr[j + 1] = value_1;
			}
		}
	}

	return arr;
}

int main (void) {
	int *arr;
	int size = ARR_SIZE;

	std::cin >> size;

	arr = read_number_arr(size);

	arr = sort_arr(size, arr);

	print_number_arr(size, arr);

	return 0;
}
