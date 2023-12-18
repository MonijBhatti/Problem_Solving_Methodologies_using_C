// 7. Write a program to define and initialize a structure for a book with attributes such as title,author, and price.

#include <stdio.h>

// Define the structure for a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

int main() {
    // Initialize a structure variable for a book
    struct Book book1;

    // Input: Book details
    printf("Enter the title of the book: ");
    fgets(book1.title, sizeof(book1.title), stdin);
    book1.title[strcspn(book1.title, "\n")] = '\0'; // Remove the newline character

    printf("Enter the author of the book: ");
    fgets(book1.author, sizeof(book1.author), stdin);
    book1.author[strcspn(book1.author, "\n")] = '\0'; // Remove the newline character

    printf("Enter the price of the book: ");
    scanf("%f", &book1.price);

    // Display book details
    printf("\nBook Details:\n");
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}
