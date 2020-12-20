#include <stdio.h>


#define	LENGTH	10
#define	WIDTH	5
#define NEWLINE	'\n'

int DefiningConstants() {
	int area;

	area = LENGTH * WIDTH;
	printf("Area : %d %c", area, NEWLINE);

	return 0;
}