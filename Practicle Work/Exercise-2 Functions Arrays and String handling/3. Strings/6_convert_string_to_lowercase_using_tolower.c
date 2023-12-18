// 6. Write a program to convert a given string to lowercase using the tolower() function.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputString[100];

    // Input: String from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character

    // Convert the string to lowercase using tolower()
    for (int i = 0; i < strlen(inputString); i++) {
        inputString[i] = tolower(inputString[i]);
    }

    // Display the string in lowercase
    printf("String in lowercase: %s\n", inputString);

    return 0;
}
