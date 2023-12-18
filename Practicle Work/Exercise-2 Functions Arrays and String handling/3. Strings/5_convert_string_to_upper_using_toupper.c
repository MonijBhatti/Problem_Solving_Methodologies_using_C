// 5. Write a program to convert a given string to uppercase using the toupper() function.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputString[100];

    // Input: String from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character

    // Convert the string to uppercase using toupper()
    for (int i = 0; i < strlen(inputString); i++) {
        inputString[i] = toupper(inputString[i]);
    }

    // Display the string in uppercase
    printf("String in uppercase: %s\n", inputString);

    return 0;
}
