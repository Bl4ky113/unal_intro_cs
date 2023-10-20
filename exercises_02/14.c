/* 
	Program that:
		Diseñe un programa para obtener el grado de eficiencia de un operario de una fábrica 
		de tornillos, de acuerdo a las siguientes condiciones que se le imponen para un 
		período de prueba: a. Menos de 200 tornillos defectuosos. 
		b. Más de 10000 tornillos producidos. El grado de eficiencia se determina de 
		la siguiente manera: 1 Si no cumple ninguna de las condiciones 2 Si sólo 
		cumple la primera condición 3 Si sólo cumple la segunda condición 4 Si cumple 
		las dos condiciones
*/

#include <stdio.h>

int main (void) {
	int screws_made = 0;
	int screws_broken = 0;

	scanf("%d", &screws_made);
	scanf("%d", &screws_broken);

	int condition_1 = screws_broken < 200;
	int condition_2 = screws_made > 10000;
	
	if (!condition_1 && !condition_2) {
		printf("1\n");
	} else if (!condition_1 && condition_2) {
		printf("3\n");
	} else if (condition_1 && !condition_2) {
		printf("2\n");
	} else if (condition_1 && condition_2) {
		printf("4\n");
	}

	return 0;
}
