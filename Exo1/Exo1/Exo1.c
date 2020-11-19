#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define carre(x) (x)*(x)
main() {
	int x;
	printf("Entrer x : ");
	scanf_s("%d", &x);
	printf("%d", carre(x));
}