#include <stdio.h>

// Tutorial: https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/fopen-s-wfopen-s?view=msvc-160

void WrittingFile() {

	FILE* fp;
	char fileName[10] = "tmp.txt";
	errno_t err;
	char buff[255];


	// Delete if previously created
	remove(fileName);


	// Open for read (will fail if file filename doesn't exist)
	err = fopen_s(&fp, fileName, "r");
	if (err == 0) {
		printf("The file %s was opened\n", fileName);
	} else {
		printf("The file %s was not opened\n", fileName);
	}
	printf("---------\n");


	// Open for write
	err = fopen_s(&fp, fileName, "w+");
	if (err == 0) {
		printf("The file %s was opened\n", fileName);
		fprintf(fp, "This is testing for fprintf...\n");
		fputs("This is testing for fputs...\n", fp);
	} else {
		printf("The file %s was not opened\n", fileName);
	}
	printf("---------\n");


	// Close stream if it isn't NULL
	if (fp) {
		err = fclose(fp);
		if (err == 0) {
			printf("The file %s was closed\n", fileName);
		} else {
			printf("The file %s was not closed\n", fileName);
		}
	}
	printf("---------\n");


	// Open for read
/*
	Let's see a little more in detail about what happened here.
	First, fscanf() read just This because after that, it encountered a space,
	second call is for fgets() which reads the remaining line till it encountered
	end of line.
	Finally, the last call fgets() reads the second line completely.
*/
	err = fopen_s(&fp, fileName, "r");
	if (err == 0) {
		fscanf_s(fp, "%s", buff, sizeof(buff));
		printf("1 : %s\n", buff);

		fgets(buff, 255, (FILE*)fp);
		printf("2: %s\n", buff);

		fgets(buff, 255, (FILE*)fp);
		printf("3: %s\n", buff);
	} else {
		printf("The file %s was not opened\n", fileName);
	}

}