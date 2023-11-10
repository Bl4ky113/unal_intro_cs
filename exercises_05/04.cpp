
/* 
	Lea el tamaño del arreglo, lea uno a uno sus elementos y calcule su suma y promedio entero
*/

#include <iostream>

int main (void) {
	int size = 0;
	int sum = 0;
	int avg = 0.0;

	std::cin >> size;

	int arr[size];

	for (int i = 0; i < size; i++) {
		int input_num = 0;
		std::cin >> input_num;

		arr[i] = input_num;
	}

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	avg = sum / size;

	std::cout << sum << '\n' << avg << '\n';

	return 0;
}
