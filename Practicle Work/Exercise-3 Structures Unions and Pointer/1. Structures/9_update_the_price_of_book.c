// 9. Write a program to update the price of a book in a library using a structure.

#include <stdio.h>

// Define the structure for a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

// Function to update the price of a book
void updateBookPrice(struct Book *book, float newPrice) {
    book->price = newPrice;
}

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

    // Display book details before update
    printf("\nBook Details before Update:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: $%.2f\n", book.price);

    // Input: New price for the book
    float newPrice;
    printf("\nEnter the new price for the book: ");
    scanf("%f", &newPrice);

    // Update the price of the book
    updateBookPrice(&book, newPrice);

    // Display book details after update
    printf("\nBook Details after Update:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: $%.2f\n", book.price);

    return 0;
}
