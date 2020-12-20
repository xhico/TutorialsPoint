#include <stdio.h>

// Variables Declaration
extern int a, b;
extern int c;
extern float f;


int VariableDeclaration() {

	// Variable Definition
	int a, b;
	int c;
	float f;

	// Actual Initialization
	a = 10;
	b = 20;

	c = a + b;
	printf("Value of c : %d \n", c);

	f = 70.0 / 3.0;
	printf("Value of f : %f \n", f);

	return 0;
}