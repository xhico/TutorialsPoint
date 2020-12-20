#include <stdio.h>
#include <string.h>
#include "myFuncs.h"


struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};


int Structures() {

	struct Books Book1;
	struct Books Book2;

	/* book 1 specification */
	strcpy_s(Book1.title, sizeof Book1.title, "C Programming");
	strcpy_s(Book1.author, sizeof Book1.author, "Nuha Ali");
	strcpy_s(Book1.subject, sizeof Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* book 2 specification */
	strcpy_s(Book2.title, sizeof Book2.title, "Telecom Billing");
	strcpy_s(Book2.author, sizeof Book2.author, "Zara Ali");
	strcpy_s(Book2.subject, sizeof Book2.subject, "Telecom Billing Tutorial");
	Book2.book_id = 6495700;

	/* print Book1 info */
	printf("Book 1 title : %s\n", Book1.title);
	printf("Book 1 author : %s\n", Book1.author);
	printf("Book 1 subject : %s\n", Book1.subject);
	printf("Book 1 book_id : %d\n\n", Book1.book_id);

	/* print Book2 info */
	printf("Book 2 title : %s\n", Book2.title);
	printf("Book 2 author : %s\n", Book2.author);
	printf("Book 2 subject : %s\n", Book2.subject);
	printf("Book 2 book_id : %d\n", Book2.book_id);

	printf("------------------\n");

	/* print Book1 info */
	printBook_1(Book1);
	printf("\n");
	/* Print Book2 info */
	printBook_1(Book2);

	printf("------------------\n");


	/* print Book1 info by passing address of Book1 */
	printBook_2(&Book1);
	printf("\n");
	/* print Book2 info by passing address of Book2 */
	printBook_2(&Book2);

	return 0;
}


void printBook_1(struct Books book) {
	printf("Book title : %s\n", book.title);
	printf("Book author : %s\n", book.author);
	printf("Book subject : %s\n", book.subject);
	printf("Book book_id : %d\n", book.book_id);
}


void printBook_2(struct Books* book) {
	printf("Book title : %s\n", book->title);
	printf("Book author : %s\n", book->author);
	printf("Book subject : %s\n", book->subject);
	printf("Book book_id : %d\n", book->book_id);
}