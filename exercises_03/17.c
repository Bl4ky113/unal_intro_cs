/* 
	Program that:
		Escribir un programa que escriba los números comprendidos entre 1 y 1000. 
		El programa escribirá en la pantalla los números en grupos de 20, 
		solicitando al usuario si quiere o no continuar visualizando el siguiente 
		grupo de números.
*/

#include <stdio.h>
#include <string.h>

int main (void) {
	char continue_input[16] = "yes";
	for (int i = 1; i <= 1000; i++) {
		printf("%d\n", i);

		if (i % 20 == 0) {
			fgets(continue_input, 16, stdin);

			if (strncmp(continue_input, "yes", 3) != 0) {
				break;
			}
		}
	}

	return 0;
}
