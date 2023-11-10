/* 
	Program that:
		Un millonario tenía tres hijos: Carlos, Jose y Martha. Al morir dejó la siguiente herencia: 
		A José le dejó 4/3 de lo que le dejó a Carlos. 
		A Carlos le dejó 1/3 de su fortuna. 
		A Marta Le dejó la mitad de lo que le dejó a José. 
		Escriba un programa que lea el valor de la fortuna e imprima cuánto le tocó a cada uno.
*/

#include <stdio.h>

void calc_fortunes (double fortune, double *j_f, double *c_f, double *m_f) {
    *c_f = fortune / (double) 3;
    *j_f = 4 * *c_f / (double) 3;
    *m_f = *j_f / (double) 2;
    return;
}

int main (void) {
    double fortune = 0.0;
    double j_fortune = 0.0;
    double c_fortune = 0.0;
    double m_fortune = 0.0;
    
    scanf("%lf", &fortune);
    
    calc_fortunes(fortune, &j_fortune, &c_fortune, &m_fortune);
    
    printf("Carlos:\t$%.2lf\n", c_fortune);
    printf("Jose:\t$%.2lf\n", j_fortune);
    printf("Martha:\t$%.2lf\n", m_fortune);
    
	return 0;
}
