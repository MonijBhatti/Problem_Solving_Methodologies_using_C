// 10. Write a program to remove all the spaces from a given string using a loop.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input: String from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character

    // Remove spaces from the string using a loop
    int length = strlen(inputString);
    int i, j;

    for (i = 0, j = 0; i < length; i++) {
        if (inputString[i] != ' ') {
            inputString[j++] = inputString[i];
        }
    }

    // Null-terminate the modified string
    inputString[j] = '\0';

    // Display the string without spaces
    printf("String without spaces: %s\n", inputString);

    return 0;
}
