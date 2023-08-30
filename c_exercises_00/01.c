/*
 * =====================================================================================
 *
 *       Filename:  01.c
 *
 *    Description: Escriba un programa que calcule la suma de 1+2+3+...+n. 
 *
 *        Version:  1.0
 *        Created:  08/30/2023 05:30:57 PM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>

int main (void) {
  int rangeToSum = 0;
  int result = 0;

  scanf("%d", &rangeToSum);

  result = ( rangeToSum * (rangeToSum + 1) ) / 2;

  printf("%d", result);

  return 0;
}
