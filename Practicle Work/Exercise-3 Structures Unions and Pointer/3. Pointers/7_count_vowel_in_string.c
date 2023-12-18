// 7. Write a program that uses pointers to count the number of vowels in a string.

#include <stdio.h>
#include <ctype.h> // for the isalpha and tolower functions

// Function to count the number of vowels in a string using pointers
int countVowels(const char *str) {
    int count = 0;

    // Iterate through the string using a pointer
    while (*str != '\0') {
        char currentChar = tolower(*str);

        // Check if the current character is a vowel
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            count++;
        }

        // Move to the next character in the string
        str++;
    }

    return count;
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

    // Call the countVowels function
    int vowelCount = countVowels(inputString);

    // Display the result
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
