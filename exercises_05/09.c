/* 
	Program that:
		Encuentre todos los pares de elementos en un arreglo cuya suma sea igual a un número especificado.
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

int get_numbers_sum_equal_value_mask (int value, int size, int *arr) {
	int mask = 0;

	for (int i = 0; i < size; i++) {
		int num_1 = arr[i];
		int add_num_1 = 0;
		int pair_mask = 0;

		for (int j = 0; j < size; j++) {
			if (j == i) {
				continue;
			}

			int num_2 = arr[j];
			int add_num_2 = 0;
			pair_mask = 0;

			if ((num_2 + num_1) != value) {
				continue;
			}

			add_num_2 = 1;
			add_num_1 = 1;

			pair_mask = pair_mask | (add_num_1 << i);
			pair_mask = pair_mask | (add_num_2 << j);
			mask = mask | pair_mask;
		}
	}

	return mask;
}

void print_numbers_arr_from_mask (int mask, int size, int *arr) {
	for (int i = 0; i < size; i++) {
		int index_in_mask = (mask >> i) % 2;

		if (!index_in_mask) {
			continue;
		}

		printf("%d\n", arr[i]);
	}

	return;
}

int main (void) {
	int *arr;
	int sum = 0;
	int size = ARR_SIZE;

	scanf("%d", &sum);
	scanf("%d", &size);

	arr = read_number_arr(size);

	int mask_arr_sum_equal_value = get_numbers_sum_equal_value_mask(sum, size, arr);

	printf("%b\n", mask_arr_sum_equal_value);

	print_numbers_arr_from_mask(mask_arr_sum_equal_value, size, arr);

	return 0;
}
