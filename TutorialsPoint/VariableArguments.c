#include <stdio.h>
#include <stdarg.h>

double va_average(int num, ...) {

	va_list valist;
	int i;
	double sum = 0;

	// initialize valist for num number of arguments
	va_start(valist, num);

	// access all the arguments assigned to valist
	for (int i = 0; i < num; i++) {
		sum += va_arg(valist, int);
	}

	// clean memory reserved for valist
	va_end(valist);

	return sum / num;
}


int va_averageTest() {

	printf("Average of 2, 3, 4, 5 = %f\n", va_average(4, 2, 3, 4, 5));
	printf("Average of 5, 10, 15 = %f\n", va_average(3, 5, 10, 15));

	return 0;
}