/* 
	Program that:
		Un número espía es aquel en el que la suma de todos sus dígitos es igual al producto de todos sus dígitos. 
		Por ejemplo 1412, ya que (1 + 4 + 1 + 2) = (1*4*1*2) = 8. 
		Escriba un programa que imprima los números en determinado rango.
*/

#include <stdio.h>

int check_if_is_number_ninja (int num) {
    int result_sum = 0;
    int result_mul = 1;

    int num_copy = num;
    while (num_copy > 0) {
        result_sum += num_copy % 10;
        num_copy /= 10;
    }

    num_copy = num;
    while (num_copy > 0) {
        result_mul *= num_copy % 10;
        num_copy /= 10;
    }

    return (result_sum == result_mul);
}

int main (void) {
    int start = 0;
    int end = 0;

    scanf("%d\n%d", &start, &end);

    for (int i = start - 1; i < end; i++) {
        int isNinja = check_if_is_number_ninja(i + 1);

        if (isNinja == 1) {
            printf("%d\n", i + 1);
        }
    }

	return 0;
}
