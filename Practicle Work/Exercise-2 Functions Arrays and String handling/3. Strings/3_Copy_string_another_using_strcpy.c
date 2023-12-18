// 3. Write a program to copy one string to another using the strcpy() function.

#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];

    // Input: Source string
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = '\0'; // Remove the newline character

    // Copy the source string to the destination using strcpy()
    strcpy(destination, source);

    // Display the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}
