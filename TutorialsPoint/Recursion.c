#include <stdio.h>


unsigned long long int factorial(unsigned int i) {
	if (i <= 1) {
		return 1;
	}
	return i * factorial(i - 1);
}


int factorialTest() {

	int i = 12;
	printf("Factorial of %d is %d", i, factorial(i));

	return 0;
}


int fibonacci(int i) {

	if (i == 0) {
		return 0;
	}

	if (i == 1) {
		return 1;
	}

	return fibonacci(i - 1) + fibonacci(i - 2);
}

int  fibonacciTest() {

	int i;

	for (i = 0; i < 10; i++) {
		printf("%d\t\n", fibonacci(i));
	}

	return 0;
}