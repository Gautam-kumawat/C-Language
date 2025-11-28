#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
};

void addBook() {
    struct Book b;
    FILE *fp = fopen("library.txt", "a");

    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    printf("Enter Title: ");
    scanf(" %[^\n]", b.title);
    printf("Enter Author: ");
    scanf(" %[^\n]", b.author);

    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);
    printf("Book Added!\n");
}

void viewBooks() {
    struct Book b;
    FILE *fp = fopen("library.txt", "r");

    while (fread(&b, sizeof(b), 1, fp))
        printf("\nID: %d, Title: %s, Author: %s", b.id, b.title, b.author);

    fclose(fp);
}

int main() {
    int choice;
    do {
        printf("\n1. Add Book\n2. View Books\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) addBook();
        else if (choice == 2) viewBooks();
    } while (choice != 3);

    return 0;
}
