#include <stdio.h>
#include <string.h>

union Data {
	int i;
	float f;
	char str[20];
};

int Unions() {

	union Data data;
	printf("Memory size occupied by data : %d\n", sizeof(data));


	//Here, we can see that the values of iand f members of union got corrupted
	//because the final value assigned to the variable has occupied the memory
	//locationand this is the reason that the value of str member is getting printed
	//very well.
	data.i = 10;
	data.f = 220.5;
	strcpy_s(data.str, sizeof(data.str), "C Programming");

	printf("data.i : %d\n", data.i);
	printf("data.f : %f\n", data.f);
	printf("data.str : %s\n", data.str);

	return 0;
}