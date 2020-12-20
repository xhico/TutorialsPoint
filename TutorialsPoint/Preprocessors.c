#include <stdio.h>

#define  message_for(a, b) \
	printf(#a " and " #b ": We love you!\n")

#define tokenpaster(n) printf ("token" #n " = %d\n", token##n)

#if !defined (MESSAGE)
#define MESSAGE "You wish!"
#endif

#define MAX(x,y) ((x) > (y) ? (x) : (y))


int PreprocesorsMacros() {

	printf("File : %s\n", __FILE__);
	printf("Date : %s\n", __DATE__);
	printf("Time : %s\n", __TIME__);
	printf("Line : %d\n", __LINE__);

	return 0;
}


int PreprocessorsStringize() {
	message_for(Carole, Debra);

	return 0;
}


int PreprocessorsTokenPasting() {
	int token34 = 40;
	tokenpaster(34);

	return 0;
}


int PreprocessorsDefined() {
	printf("Here is the message : %s\n", MESSAGE);

	return 0;
}


int PreprocessorsParameterized() {
	printf("Max between 20 and 10 is %d", MAX(10, 20));

	return 0;
}