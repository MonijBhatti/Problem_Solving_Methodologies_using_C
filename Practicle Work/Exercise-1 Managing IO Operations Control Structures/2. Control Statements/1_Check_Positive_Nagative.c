//1. Write a program to check whether a given number is positive, negative, or zero using if-else statements.

#include <stdio.h>

int main() {
    int user_input;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Check if the number is positive, negative, or zero
    if (user_input > 0) {
        printf("%d is a positive number.\n", user_input);
    } else if (user_input < 0) {
        printf("%d is a negative number.\n", user_input);
    } else {
        printf("%d is zero.\n", user_input);
    }

    return 0;
}
