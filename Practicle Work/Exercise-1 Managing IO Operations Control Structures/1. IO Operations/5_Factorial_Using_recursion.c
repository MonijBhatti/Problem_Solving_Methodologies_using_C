//5. Create a program that calculates the factorial of a number using recursion.

#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int user_input;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Check if the input is non-negative
    if (user_input < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        int result = factorial(user_input);
        printf("The factorial of %d is: %d\n", user_input, result);
    }

    return 0;
}

