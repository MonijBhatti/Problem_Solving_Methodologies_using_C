// 8. Write a program to find the occurrence of a given character in a string using a loop.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char targetChar;

    // Input: String from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character

    // Input: Character to find
    printf("Enter a character to find its occurrence: ");
    scanf(" %c", &targetChar);

    // Find the occurrence of the character using a loop
    int occurrence = 0;
    for (int i = 0; i < strlen(inputString); i++) {
        if (inputString[i] == targetChar) {
            occurrence++;
        }
    }

    // Display the occurrence of the character
    printf("The character '%c' occurs %d times in the string.\n", targetChar, occurrence);

    return 0;
}
