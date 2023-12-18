// 8. Write a program to check whether a given number is a palindrome or not using a while loop.

#include <stdio.h>

int main() {
    int number, digit, sum;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Initialize variables
    sum = 0;

    // Calculate the sum of digits using a while loop
    while (number != 0) {
        digit = number % 10;  // Extract the last digit
        sum += digit;         // Add the digit to the sum
        number /= 10;         // Remove the last digit
    }

    // Display the result
    printf("Sum of digits is: %d\n", sum);

    return 0;
}
