// 7. Write a program to count the number of words in a file.

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isWhitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

int main() {
    FILE *file;
    char fileName[100];
    char character;
    int wordCount = 0;
    bool inWord = false;

    // Input the name of the file from the user
    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    // Open the file for reading
    file = fopen(fileName, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1; // Exit with an error code
    }

    // Count the number of words in the file
    while ((character = fgetc(file)) != EOF) {
        if (isWhitespace(character)) {
            inWord = false;
        } else {
            // If the current character is not whitespace and the previous character was whitespace,
            // it means we have entered a new word.
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        }
    }

    // Close the file
    fclose(file);

    printf("Number of words in the file: %d\n", wordCount);

    return 0;
}
