/*
 *	Program that:
 *		Encuentre la menor diferencia (en valor absoluto) entre dos elementos de un arreglo.
 */

#include <iostream>
#include <stdlib.h>
#include <limits.h>

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

int get_min_diff_number_in_arr (int size, int *arr) {
	int min_diff = INT_MAX;

	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (j == i) {
				continue;
			}

			int difference = abs(arr[i] - arr[j]);

			if (min_diff > difference) {
				min_diff = difference;
			}
		}
	}

	return min_diff;
}

int main (void) {
	int *arr = NULL;
	int size = 0;
	int min_difference = 0;

	std::cin >> size;

	arr = read_number_arr(size);

	min_difference = get_min_diff_number_in_arr(size, arr);

	std::cout << min_difference << '\n';

	return 0;
}
