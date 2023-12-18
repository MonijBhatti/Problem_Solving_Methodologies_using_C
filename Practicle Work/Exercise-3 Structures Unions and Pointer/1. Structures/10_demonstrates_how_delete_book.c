// 10. Write a program to delete a book from a library using a structure and array manipulationtechniques.

#include <stdio.h>
#include <string.h>

// Define the structure for a book
struct Book {
    char title[100];
    char author[50];
    float price;
};

// Function to display the list of books
void displayBooks(struct Book library[], int numBooks) {
    printf("\nList of Books in the Library:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("%d. Title: %s, Author: %s, Price: $%.2f\n", i + 1, library[i].title, library[i].author, library[i].price);
    }
}

// Function to delete a book from the library
void deleteBook(struct Book library[], int *numBooks, int position) {
    if (position < 0 || position >= *numBooks) {
        printf("Invalid position. No book deleted.\n");
        return;
    }

    // Shift books to the left to overwrite the deleted book
    for (int i = position; i < *numBooks - 1; i++) {
        library[i] = library[i + 1];
    }

    // Decrease the number of books in the library
    (*numBooks)--;
    printf("Book deleted successfully.\n");
}

int main() {
    // Declare an array of structures to represent the library
    struct Book library[100]; // Assuming a maximum of 100 books
    int numBooks = 0; // Variable to track the number of books in the library

    // Add some initial books to the library for demonstration
    strcpy(library[numBooks].title, "The Catcher in the Rye");
    strcpy(library[numBooks].author, "J.D. Salinger");
    library[numBooks].price = 12.99;
    numBooks++;

    strcpy(library[numBooks].title, "To Kill a Mockingbird");
    strcpy(library[numBooks].author, "Harper Lee");
    library[numBooks].price = 14.95;
    numBooks++;

    strcpy(library[numBooks].title, "1984");
    strcpy(library[numBooks].author, "George Orwell");
    library[numBooks].price = 10.50;
    numBooks++;

    // Display the initial list of books
    displayBooks(library, numBooks);

    // Input: Book position to delete
    int position;
    printf("\nEnter the position of the book to delete: ");
    scanf("%d", &position);

    // Delete the book
    deleteBook(library, &numBooks, position - 1);

    // Display the updated list of books
    displayBooks(library, numBooks);

    return 0;
}
