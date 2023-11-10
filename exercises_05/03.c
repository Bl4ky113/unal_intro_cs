
/* 
	Lea el tamaño del arreglo, lea uno a uno sus elementos y finalmente imprímalo.
*/

#include <stdio.h>

int main (void) {
	int size = 0;

	scanf("%d", &size);

	int arr[size];

	for (int i = 0; i < size; i++) {
		int input_num = 0;
		scanf("%d", &input_num);

		arr[i] = input_num;
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			printf("%d\n", arr[i]);
		}
	}

	return 0;
}
