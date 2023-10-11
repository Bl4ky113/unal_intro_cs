#include <stdio.h>

int main (void) {
	int a = 20, b = 35, c = 42, d = 4, e = 6, f = 8;

	int g = a + b / e * d - f % a / d;
	int h = b + a / f * d - b % d * e;
	int i = c + b / d * f - c % e * f;

	g -= 6;
	h += 2;
	i *= e;

	printf("%d\n", g++);
	printf("%d\n", h++);
	printf("%d\n", i++);

	return 0;
}
