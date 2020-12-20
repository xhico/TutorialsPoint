#include <stdio.h>

int LocalVariables() {
	int a, b;
	int c;

	a = 10;
	b = 20;
	c = a + b;

	printf("Value of a = % d, b = % d and c = % d\n", a, b, c);

	return 0;
}