/* 
	Program that:
		A partir de una fortuna a heredar, determinar cuanto dinero se tiene que dar a
		José quien le dejaron 4/3 de lo que le dejaron a Carlos,
		Carlos quien le dejaron 1/3 de toda la herencia y 
		Marta quien le dejaron la mitad de lo que le dejaron a José
*/

#include <stdio.h>

void calc_fortune (int fortune, double *j_fortune, double *c_fortune, double *m_fortune) {
	*c_fortune = fortune / (double) 3;
	*j_fortune = 4 * *c_fortune / (double) 3;
	*m_fortune = *j_fortune / (double) 2;
	return;
}

int main (void) {
	int fortune = 0;
	double joseph_fortune = 0.0;
	double carl_fortune = 0.0;
	double marth_fortune = 0.0;

	scanf("%d", &fortune);

	calc_fortune(fortune, &joseph_fortune, &carl_fortune, &marth_fortune);

	printf("Carlos:\t$%.2lf\n", carl_fortune);
	printf("Jose:\t$%.2lf\n", joseph_fortune);
	printf("Martha:\t$%.2lf\n", marth_fortune);

	return 0;
}
