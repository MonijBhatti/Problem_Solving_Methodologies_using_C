// 5. Write a program that uses pointers to reverse a string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to reverse a string using pointers
void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1; // Points to the last character (excluding null terminator)

    // Swap characters from start to end
    while (start < end) {
        // Swap the characters at start and end positions
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character from the input (if present)
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (inputString[i] == '\n') {
            inputString[i] = '\0';
            break;
        }
    }

    // Call the reverseString function
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed String: %s\n", inputString);

    return 0;
}
