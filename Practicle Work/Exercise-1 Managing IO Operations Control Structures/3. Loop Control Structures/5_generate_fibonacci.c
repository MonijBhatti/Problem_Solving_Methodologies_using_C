// 5. Write a program to generate the Fibonacci series up to a given number using a for loop.

#include <stdio.h>

int main() {
    int n;

    // Get user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Generate and print the Fibonacci series up to n using a for loop
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d:\n", n);
    printf("%d %d ", first, second);

    for (int i = 2; ; i++) {
        next = first + second;

        if (next > n) {
            break;  // Exit the loop if the next Fibonacci number exceeds n
        }

        printf("%d ", next);

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
