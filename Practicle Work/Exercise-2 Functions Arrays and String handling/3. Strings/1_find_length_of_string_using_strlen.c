// 1. Write a program to find the length of a given string using the strlen() function.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Input: String from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    str[strcspn(str, "\n")] = '\0';

    // Calculate the length of the string using strlen()
    int length = strlen(str);

    // Display the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
