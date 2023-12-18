// 1. Write a program to read data from a file and display it on the screen.

#include <stdio.h>

int main() {
    FILE *file;
    char fileName[100];
    char character;

    // Input the file name from the user
    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open the file for reading
    file = fopen(fileName, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1; // Exit with an error code
    }

    // Read and display the contents of the file character by character
    printf("Contents of the file:\n");
    while ((character = fgetc(file)) != EOF) {
        putchar(character); // Display the character on the screen
    }

    // Close the file
    fclose(file);

    return 0;
}
