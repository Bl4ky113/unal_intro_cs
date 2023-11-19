/* 
	Program that:
		Dado un arreglo, calcule otro equivalente pero eliminando los repetidos. 
		El último debe ser definido del tamaño exacto.
*/

#include <stdio.h>
#include <stdlib.h>

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
		printf("%d\t", arr[i]);	
	}

	printf("\n");

	return;
}

int get_mask_repeated_numbers_arr (int size, int *arr) {
	int repeated_index_mask = 0;
	int number_passed_mask = 0;

	for (int i = 0; i < size; i++) {
		int number_1 = arr[i];
		for (int j = 0; j < size; j++) {
			int number_2 = arr[j];
			
			if ( (i == j || number_1 != number_2) || ((number_passed_mask >> j) % 2)) {
				continue;
			}

			repeated_index_mask = repeated_index_mask | (1 << j);

			number_passed_mask = number_passed_mask | (1 << i);
			number_passed_mask = number_passed_mask | (1 << j);
		}
	}

	return repeated_index_mask;
}

int *filter_numbers_arr (int size, int *arr) {
	int *filtered_arr = (int *) malloc(sizeof(int) * ++size);
	int filtered_arr_size = size;
	int current_index_filtered_arr = 0;

	filtered_arr[0] = filtered_arr_size;

	int repeated_number_mask = get_mask_repeated_numbers_arr(size, arr);

	for (int i = 0; i < size; i++) {
		int index_in_mask = (repeated_number_mask >> i) % 2;

		if (index_in_mask) {
			filtered_arr = realloc(filtered_arr, --filtered_arr_size);
			continue;
		}

		filtered_arr[current_index_filtered_arr++ + 1] = arr[i];
	}

	filtered_arr[0] = filtered_arr_size;
	return filtered_arr;
}

int main (void) {
	int *arr;
	int *filtered_arr;
	int repeated_numbers_mask = 0;
	int size = 0;

	scanf("%d", &size);
	
	arr = read_number_arr(size);

	print_number_arr(size, arr);

	filtered_arr = filter_numbers_arr(size, arr);

	print_number_arr(filtered_arr[0], filtered_arr);
	printf("\n");

	return 0;
}
