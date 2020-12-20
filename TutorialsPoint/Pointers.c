#include <stdio.h>

int Pointers() {

	int var1;
	char var2[10];

	printf("Address of var1 variable: %p\n", &var1);
	printf("Address of var2 variable: %p\n", &var2);

	return 0;
}


int UsePointers() {

	// actual variable declaration
	int var = 20;

	//pointer variable declaration
	int* ip;

	ip = &var;

	printf("Address of var variable: %p\n", &var);

	// address stored in pointer variable
	printf("Address stored in ip variable: %p\n", ip);

	// access the value using the pointer
	printf("Value of *ip variable: %d\n", *ip);
}


int NullPointers() {

	int* ptr = NULL;

	printf("The value of ptr is : %p\n", ptr);

	return 0;
}