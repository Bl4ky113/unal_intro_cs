/*
 * =====================================================================================
 *       Filename:  17.cpp
 *    Description:  Program that: Escriba una función que determine el número de cifras de un número en base b sin usar librerías de matemáticas.
 *        Version:  1.0
 *       Compiler:  gcc
 * =====================================================================================
 */

#include <stdio.h>

int get_number_digits_in_base (int number, int base) {
    int number_digits = 0;
    int aux_number = number;

    while (aux_number > 0) {
        aux_number /= base;
        number_digits++;
    }

    return number_digits;
}

int main (void) {
    int number = 0;
    int base = 0;
    int num_digits = 0;

    fscanf(stdin, "%d", &number);
    fscanf(stdin, "%d", &base);

    num_digits = get_number_digits_in_base(number, base);

    fprintf(stdout, "%d\n", num_digits);

    return 0;
}
