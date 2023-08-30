/*
 * =====================================================================================
 *
 *       Filename:  02.c
 *
 *    Description: Escriba un programa que calcule la suma de 1**2+2**2+3**2+...+n**2 
 *
 *        Version:  1.0
 *        Created:  08/30/2023 05:41:15 PM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void) {
  int rangeToSum = 0;
  int result = 0;

  scanf("%d", &rangeToSum);

  result = ( rangeToSum * ( rangeToSum + 1 ) * ( (rangeToSum * 2) + 1 ) ) / 6;

  printf("%d", result);

  return 0;
}
