// 7. Write a program to reverse a given string using a loop.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input: String from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character

    // Find the length of the string
    int length = strlen(inputString);

    // Reverse the string using a loop
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters at positions i and j
        char temp = inputString[i];
        inputString[i] = inputString[j];
        inputString[j] = temp;
    }

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}
