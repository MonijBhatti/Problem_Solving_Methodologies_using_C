//4. Write a program that uses pointers to concatenate two strings.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to concatenate two strings using pointers
char* concatenateStrings(const char *str1, const char *str2) {
    // Calculate the total length of the concatenated string
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2 + 1; // Add 1 for the null character

    // Allocate memory for the concatenated string
    char *result = (char *)malloc(totalLen * sizeof(char));

    // Check if memory allocation is successful
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Copy the first string into the result string
    strcpy(result, str1);

    // Concatenate the second string to the result string
    strcat(result, str2);

    return result;
}

int main() {
    char str1[100], str2[100];

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character from the input (if present)
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }

    // Input the second string
    printf("Enter the second string: ");
    f
