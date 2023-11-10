/* 
	Program that:
		Escribir un programa que escriba los números comprendidos entre 1 y 1000. 
		El programa escribirá en la pantalla los números en grupos de 20, 
		solicitando al usuario si quiere o no continuar visualizando el siguiente 
		grupo de números.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RANGE_LIMIT 1000
#define BUFFER_LIMIT 3

int main (void) {
	for (int i = 0; i < RANGE_LIMIT; i++) {

		if (i % 20 == 0) {
			char *confirmation_buffer;
			size_t buffer_size = BUFFER_LIMIT;

			confirmation_buffer = (char *) malloc(buffer_size * sizeof(char));

			getline(&confirmation_buffer, &buffer_size, stdin);

			if (strcmp(confirmation_buffer, "yes\n") != 0) {
				break;
			}
		}

		printf("%d\n", i + 1);
	}

	return 0;
}
