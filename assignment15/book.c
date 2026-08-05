#include<stdio.h>

struct Book
{
	char bname[20];
	int id;
	char author[20];
	float price;
};

struct Book storeBook();
void displayBook(struct Book b);

int main()
{
    struct Book b1, b2, b3;

    b1 = storeBook();
    b2 = storeBook();
    b3 = storeBook();

    displayBook(b1);
    displayBook(b2);
    displayBook(b3);
}

struct Book storeBook()
{
    struct Book b;

    printf("Enter Book Details Bname Id Author Price\n");
    scanf("%s%d%s%f", b.bname, &b.id, b.author, &b.price);

    return b;
}

void displayBook(struct Book b)
{
    printf("\nBook Details\n");
    printf("Bname: %s\n", b.bname);
    printf("ID: %d\n", b.id);
    printf("Author: %s\n", b.author);
    printf("Price: %f\n", b.price);
}