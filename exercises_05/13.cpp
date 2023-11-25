/* 
	Prgoram that:
		Dados dos arreglos sin repetidos, calcule un arreglo que resulta de 
		la unión entre los elementos de los otros dos arreglos. 
		Este último debe ser definido del tamaño exacto.
*/

#include <stdio.h>
#include <stdlib.h>

int *read_number_arr (int size) {
	int *number_arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		scanf("%d", &number_arr[i]);
	}

	return number_arr;
}

int *join_number_arr (int size, int *arr_1, int *arr_2) {
	int *joined_arr = (int *) malloc(sizeof(int) * (size * 2));
	
	for (int i = 0; i < size; i++) {
		joined_arr[i] = arr_1[i];
	}

	for (int i = size; i < size * 2; i++) {
		joined_arr[i] = arr_2[i % size];
	}

	return joined_arr;
}

int *sort_arr (int size, int *arr) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[j] > arr[i] && i != j) {
				int holder = arr[i];
				arr[i] = arr[j];
				arr[j] = holder;
			}
		}
	}

	return arr;
}

void print_arr (int size, int *arr) {
	for (int *ptr = arr; ptr < arr + (size); ptr++) {
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

	arr_3 = join_number_arr(size, arr_1, arr_2);

	arr_3 = sort_arr(size * 2, arr_3);
	print_arr(size * 2, arr_3);

	return 0;
}
