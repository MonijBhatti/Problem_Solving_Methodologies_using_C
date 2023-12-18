// 9. Write a program to split a given string into words using the strtok() function.

#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];

    // Input: String from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the newline character

    // Split the string into words using strtok()
    char* token = strtok(inputString, " ");

    // Display the words
    printf("Words in the string:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
