/*
 * =====================================================================================
 *
 *       Filename:  03.c
 *
 *    Description: Escriba un programa que calcule el área total del cuerpo 
 *
 *        Version:  1.0
 *        Created:  08/30/2023 05:49:13 PM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int main (void) {
  double weight = 0.0;
  double height = 0.0;

  double resultMosteller = 0.0;
  double resultDubois = 0.0;
  double resultGehanGeorge = 0.0;
  
  scanf("%lf", &height);
  scanf("%lf", &weight);

  resultMosteller = pow((weight * height) / 3600.0, 1.0 / 2);
  resultDubois = 0.007184 * pow(weight, 0.425) * pow(height, 0.725);
  resultGehanGeorge = (0.0235) * pow(height, 0.42246) * pow(weight, 0.51456);

  printf("%.2lf\n%.2lf\n%.2lf", resultMosteller, resultDubois, resultGehanGeorge);

  return 0;
}
