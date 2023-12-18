//2. Write a program to find the maximum of two given numbers using a function.

#include <stdio.h>

// Function to find the maximum of two numbers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    // Input from user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to find the maximum and display the result
    int max = findMax(num1, num2);
    printf("The maximum of %d and %d is: %d\n", num1, num2, max);

    return 0;
}
