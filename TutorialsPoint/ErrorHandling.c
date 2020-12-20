#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int FileError() {

	FILE* fp;
	char errnum;
	char fileName[10] = "tmp.txt";
	char buff[256];


	// Open for read (will fail if file filename doesn't exist)
	fp = fopen_s(&fp, fileName, "r");

	if (fp == 0) {
		printf("The file %s was opened\n", fileName);
		fclose(fp);
	} else {
		printf("The file %s was not opened\n", fileName);

		errnum = errno;
		fprintf(stderr, "Value of errnum: %d\n", errno);
		perror("Error printed by perror");
		fprintf(stderr, "Error opening file : %s\n", strerror_s(buff, sizeof(buff), errno));
	}

	return 0;
}


int ZeroErrors() {

	int dividend = 20;
	int divisor = 0;
	int quotient;

	if (divisor == 0) {
		fprintf(stderr, "Division by zero! Exiting...\n");
		exit(-1);
	}

	quotient = dividend / divisor;
	fprintf(stderr, "Value of quotient : %d\n", quotient);

	return 0;
}


int ProgramExitStatus() {

	int dividend = 20;
	int divisor = 5;
	int quotient;

	if (divisor == 0) {
		fprintf(stderr, "Division by zero! Exiting...\n");
		exit(EXIT_FAILURE);
	}

	quotient = dividend / divisor;
	fprintf(stderr, "Value of quotient : %d\n", quotient);

	exit(EXIT_SUCCESS);
}