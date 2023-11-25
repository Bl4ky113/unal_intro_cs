/* 
	Program that:
		Dados dos arreglos sin repetidos, calcule el arreglo que resulta de la intersección 
		entre loselementos de los otros dos arreglos. Este último debe ser definido del tamaño exacto.
*/

#include <stdio.h>
#include <stdlib.h>

int *read_number_arr (int size) {
	int *arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	return arr;
}

int *join_number_arr (int size, int *arr_1, int *arr_2) {
	int *joined_arr = (int *) malloc(sizeof(int) * (size * 2) + 1);

	int joined_size = 1;
	int joined_index = joined_size;

	joined_arr[0] = joined_size;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr_1[i] != arr_2[j]) {
					continue;
			}

			joined_arr[joined_index++] = arr_1[i];
			joined_size++;
			printf("%d\n", joined_size);
		}
	}

	joined_arr = realloc(joined_arr, joined_size);
	joined_arr[0] = joined_size;

	return joined_arr;
}

int *sort_arr (int size, int *number_arr, int init_index) {
	for (int i = init_index; i < size; i++) {
		for (int j = init_index; j < size; j++) {
			if (number_arr[j] > number_arr[i] && i != j) {
				int holder = number_arr[i];
				number_arr[i] = number_arr[j];
				number_arr[j] = holder;
			}
		}
	}

	return number_arr;
}

void print_number_arr (int size, int *arr) {
	for (int *ptr = arr; ptr < (arr + size); ptr++) {
		printf("%d\t", *ptr);
	}

	printf("\n");

	return;
}

int main (void) {
	int *arr_1 = NULL;
	int *arr_2 = NULL;
	int *arr_3 = NULL;
	int size = 0;

	scanf("%d", &size);

	arr_1 = read_number_arr(size);
	arr_2 = read_number_arr(size);

	print_number_arr(size, arr_1);
	print_number_arr(size, arr_2);

	arr_3 = join_number_arr(size, arr_1, arr_2);

	arr_3 = sort_arr(arr_3[0], arr_3, 1);

	print_number_arr(arr_3[0], arr_3);

	return 0;
}
