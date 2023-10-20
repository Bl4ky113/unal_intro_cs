/* 
	Program that:
		Diseñe un programa que determine el mayor valor de cuatro números 
		a, b, c, d leídos del usuario.
*/

#include <iostream>

int main (void) {
	int numbers[4] = {0, 0, 0, 0};
	int greater_number = numbers[0];

	for (int i = 0; i < 4; i++) {
		scanf("%d", &numbers[i]);
	}
	
	for (int i = 0; i < 4; i++) {
		if (numbers[i] > greater_number) {
			greater_number = numbers[i];
		}
	}

	printf("%d\n", greater_number);

	return 0;
}
