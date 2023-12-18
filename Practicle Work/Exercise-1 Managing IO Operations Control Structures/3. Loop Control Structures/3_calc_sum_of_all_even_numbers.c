// 3. Write a program to calculate the sum of all even numbers from 1 to n using a do-while loop.

#include <stdio.h>

int main() {
    int n, i, sum;

    // Get user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Initialize variables
    i = 2;  // Start from the first even number
    sum = 0;

    // Calculate the sum of even numbers from 1 to n using a do-while loop
    do {
        sum += i;
        i += 2;  // Move to the next even number
    } while (i <= n);

    // Display the result
    printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
