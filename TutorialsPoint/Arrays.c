#include <stdio.h>

int Arrays() {

	// n is an array of 10 integers
	int n[10];

	// counters for for
	int i, j;

	// initialize elements of array n to 0
	for (i = 0; i < 10; i++) {
		n[i] = i + 100;
	}

	for (j = 0; j < 10; j++) {
		printf("Element[%d] = %d\n", j, n[j]);
	}

	return 0;
}