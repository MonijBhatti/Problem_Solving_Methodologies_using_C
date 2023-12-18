// 5. Write a program to check whether a given character is a vowel or consonant using switch Statements.

#include <stdio.h>

int main() {
    char character;

    // Get user input
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to skip leading whitespace

    // Convert the character to lowercase to handle both uppercase and lowercase input
    character = tolower(character);

    // Check if the character is a vowel or consonant using switch statements
    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", character);
            break;
        default:
            printf("%c is a consonant.\n", character);
    }

    return 0;
}
