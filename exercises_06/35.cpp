/* 
	Program that:
        Dado un número n, imprima el triángulo de Pascal asociado a ese número
*/

#include <iostream>

#define ARR_SEPARATOR '\t'

int factorize_number (int number) {
	if (number == 0) {
		return 1;
	}

	return number * factorize_number(number - 1);
}

int *calculate_pascal_row (int iteration) {
	int num_coefficients = iteration + 1;
	int *result_arr = (int *) malloc(sizeof(int) * num_coefficients);

	for (int i = 0; i < num_coefficients; i++) {
		result_arr[i] = (int) (factorize_number(iteration)) / (factorize_number(iteration - i) * factorize_number(i));
	}

	return result_arr;
}

void print_number_arr (int length, int *arr) {
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ARR_SEPARATOR;
	}

	std::cout << '\n';

	return;
}

int main (void) {
	int number_iterations = 0;

	std::cin >> number_iterations;

	for (int i = 0; i <= number_iterations; i++) {
		int *coefficients_arr = calculate_pascal_row(i);

		print_number_arr(i + 1, coefficients_arr);
	}

	return 0;
}
