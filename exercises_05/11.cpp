/* 
	Program that:
		Encuentre los dos elementos de un arreglo cuya suma sea más cercana a cero.
*/

#include <iostream>
#include <climits>
#include <stdlib.h>

int *read_number_arr (int size) {
	int *arr = new int [size];

	for (int i = 0; i < size; i++) {
		int input = 0;

		std::cin >> input;

		arr[i] = input;
	}

	return arr;
}

void print_number_arr (int size, int *arr) {
	for (int *ptr = arr; ptr < (arr + size); ptr++) {
		std::cout << *ptr << '\t';
	}

	return;
}

int *get_pair_min_difference (int size, int *arr) {
	int *pair_arr = new int [2];
	int min_difference = INT_MAX;

	for (int i = 0; i < size; i++) {
		int number_1 = arr[i];
		for (int j = 0; j < size; j++) {
			int number_2 = arr[j];
			int difference = abs(number_1 - number_2);

			if (i == j || difference > min_difference) {
				continue;
			}

			min_difference = difference;
			pair_arr[0] = number_1;
			pair_arr[1] = number_2;

			if (number_1 == number_2) {
				return pair_arr;
			}
		}
	}

	return pair_arr;
}

int main (void) {
	int *arr;
	int *pair;
	int size = 0;

	std::cin >> size;

	arr = read_number_arr(size);

	print_number_arr(size, arr);

	std::cout << std::endl;

	pair = get_pair_min_difference(size, arr);

	print_number_arr(2, pair);

	return 0;
}
