#include <stdio.h>

/* global variable declaration */
int g;

int GlobalVariables() {

	/* local variable declaration */
	int a, b;

	/* actual initialization */
	a = 10;
	b = 20;
	g = a + b;

	printf("Value of a = %d, b = %d and g = %d\n", a, b, g);

	return 0;
}