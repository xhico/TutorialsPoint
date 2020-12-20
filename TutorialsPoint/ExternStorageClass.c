#include <stdio.h>

int count;
extern void write_extern();

void ExternStorageClass() {
	count = 5;
	write_extern();
}