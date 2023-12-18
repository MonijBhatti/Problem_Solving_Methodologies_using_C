// 4. Write a program to find the factorial of a given number using a while loop.

#include <stdio.h>

int main() {
    int number, i;
    long long factorial;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Initialize variables
    i = 1;
    factorial = 1;

    // Calculate the factorial of the given number using a while loop
    while (i <= number) {
        factorial *= i;
        i++;
    }

    // Display the result
    printf("Factorial of %d is: %lld\n", number, factorial);

    return 0;
}
