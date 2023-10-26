/* 
	Program that:
		Read number -> hexadecimal number
*/

#include <stdio.h>

int main (void) {
	int number = 0;

	scanf("%d", &number);

	printf("%b", number);

	return 0;
} 
