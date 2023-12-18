// 2. Write a program to print the multiplication table for a given number using a for loop.

#include <stdio.h>

int main() {
    int number;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the multiplication table for the given number using a for loop
    printf("Multiplication Table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
