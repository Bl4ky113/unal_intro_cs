/* 
	Program that: 
		Lea en x el interés anual. Escribir un programa que calcule cuantos años 
		tarda en duplicarse un capital depositado al x% de interés anual compuesto.
*/

#include <iostream>
#include <cmath>

int main (void) {
	double annual_interest = 0.0;
	double capital = 100;
	double initial_capital = capital;
	int i = 0;

	std::cin >> annual_interest;

	while (capital < (initial_capital * 2)) {
		double interest = capital * (annual_interest);
		capital += interest;
		i += 1;

		std::cout << capital << '\t' << interest << '\t' << i << '\n';
	}

	std::cout << i << "\n";
}
