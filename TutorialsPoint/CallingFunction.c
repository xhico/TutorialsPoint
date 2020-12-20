#include <stdio.h>
#include "myFuncs.h"

int CallingFunctionMax() {

	int a = 100;
	int b = 200;

	int maxValue = max(a, b);
	printf("Max value between %d and %d is : %d\n", a, b, maxValue);

	return 0;
}