// 7. Write a program to print the sum of digits of a given number using a while loop.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    // Get user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of prime numbers between 1 and n using a for loop
    int sum = 0;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;

        // Check if i is a prime number
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        // If i is a prime number, add it to the sum
        if (isPrime) {
            sum += i;
        }
    }

    // Display the result
    printf("Sum of prime numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
