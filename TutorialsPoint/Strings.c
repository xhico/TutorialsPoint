#include <stdio.h>
#include <string.h>


int StringsGreetings() {
	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	printf("Greetings message: %s\n", greeting);

	return 0;
}


int StringsFuncs() {

	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;

	// Copy str1 to str3
	strcpy_s(str3, sizeof str3, str1);
	printf("strcpy_s(str3, sizeof str1, str1): %s\n", str3);

	// Concatenate str1 and str2
	strcat_s(str1, sizeof str1, str2);
	printf("strcat_s(str1, sizeof str2, str2): %s\n", str1);

	// Total lenghth of str1 after concatenation
	len = strlen(str1);
	printf("strlen(str1) :  %d\n", len);
	
	return 0;
}