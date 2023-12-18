// 8. Write a program to read and display the details of a book using a structure.

#include <stdio.h>

// Define the structure for a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    // Declare a structure variable for a book
    struct Book book;

    // Input: Book details
    printf("Enter the title of the book: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0'; // Remove the newline character

    printf("Enter the author of the book: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0'; // Remove the newline character

    printf("Enter the price of the book: ");
    scanf("%f", &book.price);

    // Display book details
    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: $%.2f\n", book.price);

    return 0;
}
