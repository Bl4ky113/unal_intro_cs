/* 
	Encuentre el segundo elemento más grande en un arreglo.
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

int get_second_max_number (int size, int* arr) {
	int max_1 = 0;
	int max_2 = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] >= max_1) {
			max_1 = arr[i];
		} 
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] < max_1 && arr[i] > max_2) {
			max_2 = arr[i];
		} 
	}

	return max_2;
}

int main (void) {
	int *arr;
	int size = ARR_SIZE;
	int second_max_number = 0;

	std::cin >> size;

	arr = read_number_arr(size);

	second_max_number = get_second_max_number(size, arr);

	std::cout << second_max_number << '\n';

	return 0;
}
