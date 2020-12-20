#include <stdio.h>

int BasicTypeCasting() {

	int sum = 17, count = 5;
	double mean;

	mean = (double)sum / count;
	printf("Value of mean : %f\n", mean);

	return 0;
}

int IntegerPromotion() {

	int i = 17;
	char c = 'c'; // ascii value is 99
	int sum;

	sum = i + c;
	printf("Value of sum : %d\n", sum);

	return 0;
}


int ArithmeticConversion() {

	int  i = 17;
	char c = 'c'; /* ascii value is 99 */
	float sum;

	sum = i + c;
	printf("Value of sum : %f\n", sum);

	return 0;
}