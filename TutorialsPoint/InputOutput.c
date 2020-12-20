#include <stdio.h>


/*
	Standard File		File Pointer	Device
	Standard input		stdin			Keyboard
	Standard output		stdout			Screen
	Standard error		stderr			Your screen
*/


int InputOutput_1() {

	// getchar and putchar
	// Input interger	-> displays that integer
	// Input string		-> displays nly yhe first letter
	int c;

	printf("Enter value : ");
	c = getchar();

	printf("\nYou entered : ");
	putchar(c);

	return 0;
}


int InputOutput_2() {

	// gets and puts
	char str[100];

	printf("\n\nEnter a value : ");
	gets(str);

	printf("\nYou entered : ");
	puts(str);

	return 0;
}


int InputOutput_3() {

	char str[100];
	int i;

	printf("Enter a value : ");
	scanf_s("%s %d", str, sizeof(str), &i);

	printf("\nYou entered : %s %d", str, i);

	return 0;
}