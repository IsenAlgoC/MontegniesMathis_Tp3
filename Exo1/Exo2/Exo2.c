#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main() {
	unsigned long int x = 2868838400;
	int a;
	int b;
	unsigned long int c = 0;
	int p = 4;
	while (c == 0) {
		p = p - 1;
		c = x / pow(256, p);
		a = p + 1;
	}
	p = 8 * a;
	c = 0;
	while (c == 0) {
		p = p - 1;
		c = x / pow(2, p);
		b = p + 1;
	}

	printf("%d", a);
	printf("\n%d", b);
	int i;
	for (i = 1; i <= b; i = i + 1) {
		c = x % 2;
		if (c != 0) {
			printf("\nbit %d : ON", i);
		}
		else {
			printf("\nbit %d : OFF", i);
		}
		x = x >> 1;
	}
	printf("\nBye !");
}