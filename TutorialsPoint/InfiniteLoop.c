#include <stdio.h>

int InfiniteLoop() {

	for (; ; ) {
		printf("This loop will run forever.\n");
	}

	return 0;
}