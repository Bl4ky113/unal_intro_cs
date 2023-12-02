/* 
	Encuentre el segundo elemento más grande en un arreglo.
*/

#include <stdio.h>
#include <stdlib.h>

int *read_number_arr (int size) {
	int *number_arr = (int *) malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		fscanf(stdin, "%d", &number_arr[i]);
	}

	return number_arr;
}

void print_number_arr (int size, int *arr) {
	for (int *ptr = arr; ptr < arr + size; ptr++) {
		fprintf(stdin, "%d", *ptr);
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
	int size = 0;
	int second_max_number = 0;

	fscanf(stdin, "%d", &size);

	arr = read_number_arr(size);

	second_max_number = get_second_max_number(size, arr);
	
	fprintf(stdout, "%d\n", second_max_number);

	return 0;
}
