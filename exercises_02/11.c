/* 
	Program that:
		Diseñe un programa que lea tres longitudes y determine si forman o no un triángulo. 
		Si es un triángulo, determine de qué tipo de triángulo se trata. 
		Considere que para formar un triángulo se requiere que el lado mayor sea menor que la suma de los otros dos lados.
*/

#include <stdio.h>

int main (void) {
	int sides[3] = {0, 0, 0};
	int greater_side = sides[1];
	int greater_side_index = 0;
	int sides_sumatory = 0;

	scanf("%d", &sides[0]);
	scanf("%d", &sides[1]);
	scanf("%d", &sides[2]);

	if (sides[0] == sides[1] && sides[1] == sides[2]) {
		printf("Equilatero\n");
		return 0;
	} 

	for (int i = 0; i < 3; i++) {
		if (sides[i] > greater_side) {
			greater_side = sides[i];
			greater_side_index = i;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (i != greater_side_index) {
			sides_sumatory += sides[i];
		}
	}

	if (sides_sumatory <= greater_side) {
		printf("No es triangulo\n");
		return 0;
	}

	if (sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2]) {
		printf("Isosceles\n");
		return 0;
	}

	printf("Escaleno\n");
	return 0;
}
