
#include <stdio.h>
#include <math.h>

#define SIZE 40

int main (int argc, char **argv) {
  double foo = 2e10;
  double bar = 1e10;

  char foo1 = 'm';

  printf("%g\n", foo * bar);

  printf("%c %d %b\n", foo1, foo1, foo1);

  char foo2[128] = "";
  /*fgets(foo2, 128, stdin);*/

  printf("\n%s\n", foo2);

  float foo3 = 5 / 2;

  printf("%lf\n", foo3);

  int num_1 = 1;
  printf("%d\n", num_1++);

  int num_2 = num_1++;
  printf("%d\n", num_2);

  printf("%d\n", (0 || 0) && (1 && 1));

  printf("Hello World!!!\a\a\a\a\a\n");

  printf("%lf", pow(2.0, 2.0));
  return 0;
}
