/*
 * =====================================================================================
 *       Filename:  09.c
 *    Description:  Program that: con una funcion determinar si un número es primo o no, retronando un valor booleano
 *        Version:  1.0
 *       Compiler:  gcc
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum Bool {
	false, 
	true
} Bool;

Bool is_number_prime (int number) {
	Bool is_prime = 1;

	for (int i = 1; i < number; i++) {
		if ( (number % i) == 0 && (( number != i ) && (i != 1)) ) {
			is_prime = 0;
			return is_prime;
		}
	}

	return is_prime;
}

void print_bool (Bool value) {
	switch (value) {
		case false:
			fprintf(stdout, "false");
			break;
		case true:
			fprintf(stdout, "true");
			break;
		default:
			fprintf(stderr, "ERROR boolean VALUE OUT OF BOUNDS");
			break;
	}

	return;
}

int main (void) {
	int number = 0;
	Bool is_prime = 0;

	fscanf(stdin, "%d", &number);

	is_prime = is_number_prime(number);
	print_bool(is_prime);

	return 0;
}
