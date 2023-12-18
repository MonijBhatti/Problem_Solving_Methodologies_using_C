// 2. Write a program to concatenate two strings using the strcat() function.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input: First string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character

    // Input: Second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character

    // Concatenate the two strings using strcat()
    strcat(str1, str2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
