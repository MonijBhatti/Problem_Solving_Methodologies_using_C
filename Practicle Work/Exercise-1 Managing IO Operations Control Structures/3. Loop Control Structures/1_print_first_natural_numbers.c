// 1. Write a program to print the first n natural numbers using a while loop.

#include <stdio.h>

int main() {
    int n, i;

    // Get user input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the first n natural numbers using a while loop
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    return 0;
}
