#include<stdio.h>
#include <string.h>

typedef struct {
    int id;
    char title[100];
    char author[100];
    int year;
} Book;



void addBook(Book books[], int *count){
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar();// เคลียร์ \n หลังรับ int
    printf("Enter Title: ");
    scanf(" %[^\n]", books[*count].title);
    printf("Enter Author: ");
    scanf(" %[^\n]", books[*count].author);
    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
    getchar();// เคลียร์ \n หลังรับ int

    printf("Book added successfully!\n");
    (*count)++;
}
void searchBook(Book books[], int count, char title[]){
    int found = 0;
    for (int i = 0; i < count; i++){
        if (strcmp(books[i].title, title) == 0) {
            printf("Book found:\n");
            printf("ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void displayBooks(Book books[], int count) {
    printf("All books in the library:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d \n Title: %s \n Author: %s \n Year: %d\n",
               books[i].id, books[i].title, books[i].author, books[i].year);
    }
}

int main() {
    Book books[100];
    int count = 0;
    int choice;
    char searchTitle[100];

    do {
        printf("1. Add new book\n");
        printf("2. Search book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addBook(books, &count);
            break;
        case 2:
            printf("Enter title to search: ");
            scanf(" %[^\n]", searchTitle);
            searchBook(books, count, searchTitle);
            break;
        case 3:
            displayBooks(books, count);
            break;
        case 4:
            printf("Exiting program.\n");
            break;    
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

} 