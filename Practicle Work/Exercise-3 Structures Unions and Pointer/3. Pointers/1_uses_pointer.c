// 1. Write a program that uses pointers to swap two integer variables.

#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input values
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("\nValues before swapping:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    // Call the swap function
    swap(&num1, &num2);

    // Display values after swapping
    printf("\nValues after swapping:\n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    return 0;
}
