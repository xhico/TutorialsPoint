#include <stdio.h>
#include <string.h>


/*
	Difetence between Typedef and define
	1. typedef is limited to giving symbolic names to types only where as #define
		can be used to define alisa for values as well (1 as ONE)
	2. typedef interpretation isperformed by the compiler whereas #define atatements
		are processed by the pre-processor
*/


typedef struct Books {
	char title[50];
	char author[50];
	char subject[50];
	int book_id;
} Book;


#define TRUE	1
#define FALSE	0


int typedefC() {

	Book book;
	strcpy_s(book.title, sizeof(book.title), "C Programming");
	strcpy_s(book.author, sizeof(book.author), "Nuha Ali");
	strcpy_s(book.subject, sizeof(book.subject), "C Progrmming Tutorial");
	book.book_id = 6495407;

	printf("Book Title : %s\n", book.title);
	printf("Book Author : %s\n", book.author);
	printf("Book Subject : %s\n", book.subject);
	printf("Book id : %d\n", book.book_id);

	return 0;
}


int defineC() {
	printf("Value of TRUE : %d\n", TRUE);
	printf("Value of FALSE : %d\n", FALSE);

	return 0;
}