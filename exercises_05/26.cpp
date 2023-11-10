/* 
	Lea el tamaño del arreglo, lea uno a uno sus elementos e imprímalo en orden inverso.
*/

#include <iostream>

int main (void) {
	int size = 0;

	std::cin >> size;

	int arr[size];

	for (int i = 0; i < size; i++) {
		int input_num = 0;
		std::cin >> input_num;

		arr[i] = input_num;
	}

	for (int i = size; i > 0; i--) {
		std::cout << arr[i - 1] << '\n';
	}

	return 0;
}
