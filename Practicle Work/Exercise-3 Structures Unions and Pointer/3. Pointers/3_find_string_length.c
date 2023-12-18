// 3. Write a program that uses pointers to find the length of a string.

#include <stdio.h>

// Function to find the length of a string using pointers
int findStringLength(const char *str) {
    const char *ptr = str; // Initialize a pointer to the beginning of the string

    // Iterate through the string until the null character is encountered
    while (*ptr != '\0') {
        ptr++; // Move the pointer to the next character
    }

    // Calculate the length by subtracting the initial pointer position
    return ptr - str;
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

    // Call the findStringLength function
    int length = findStringLength(inputString);

    // Display the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
