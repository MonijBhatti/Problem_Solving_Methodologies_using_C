// 4. Write a program to compare two strings using the strcmp() function.

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

    // Compare the two strings using strcmp()
    int result = strcmp(str1, str2);

    // Display the result of the comparison
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically larger than the second string.\n");
    }

    return 0;
}
