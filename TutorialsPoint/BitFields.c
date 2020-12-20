#include <stdio.h>
#include <string.h>


// define simple structure
struct {
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;


// define a structure with bit fields
struct {
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;


struct {
	unsigned int age : 3;
} Age;


int BitFields() {

	printf("Memory size occupied by statys1 : %d\n", sizeof(status1));
	printf("Memory size occupied by statyss : %d\n", sizeof(status2));

	return 0;
}



int BitFieldDeclaration() {

	Age.age = 4;
	printf("Sizeof(Age) : %d\n", sizeof(Age));
	printf("Age.age : %d\n", Age.age);

	Age.age = 7;
	printf("Age.age : %d\n", Age.age);

	// Age.age gets 3 bits and 8 requires 4 bits so output will be 0
	Age.age = 8; 
	printf("Age.age : %d\n", Age.age);

	return 0;
}