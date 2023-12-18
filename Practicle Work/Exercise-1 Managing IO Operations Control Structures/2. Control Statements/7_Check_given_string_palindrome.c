// 7. Write a program to check whether a given string is a palindrome or not using if-else statements.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input_string[100];
    bool isPalindrome = true;

    // Get user input
    printf("Enter a string: ");
    scanf("%s", input_string);

    // Check if the string is a palindrome using only if-else statements
    int length = strlen(input_string);
    for (int i = 0; i < length / 2; i++) {
        if (input_string[i] != input_string[length - 1 - i]) {
            isPalindrome = false;  // If characters don't match, the string is not a palindrome
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("%s is a palindrome.\n", input_string);
    } else {
        printf("%s is not a palindrome.\n", input_string);
    }

    return 0;
}
