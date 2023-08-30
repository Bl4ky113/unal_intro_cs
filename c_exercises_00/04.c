/*
 * =====================================================================================
 *
 *       Filename:  04.c
 *
 *    Description: Recientemente se descubrieron 7 planetas similares a la Tierra y potencialmente
        habitables que orbitan alrededor de una estrella denominada TRAPPIST-1. El
        sistema solar se encuentra a aproximadamente 369 trillones de kilómetros (Un
        trillón equivale a 1018 kilometros). Asumamos que podemos viajar a la velocidad de
        la luz. ¿A cuántos años luz está ese sistema solar?
 
 *
 *        Version:  1.0
 *        Created:  08/30/2023 06:15:21 PM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>

long double LIGHTYEAR = 9460730472580800.0; // In meters
long DISTANCE_EARTH_TRAPPIST = 369 * 1018000; // In meters

int main (void) {
  printf("%Lf", (DISTANCE_EARTH_TRAPPIST / LIGHTYEAR));
  return 0;
}
