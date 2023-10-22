/* 
	Program that:
		Escribir un programa que lea 10 datos desde el teclado y sume sólo aquellos que sean negativos.
*/

#include <iostream>

int main (void) {
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		int number = 0;
		std::cin >> number;

		if (number < 0) {
			sum += number;
		}
	}

	std::cout << sum << '\n';
	return 0;
}
