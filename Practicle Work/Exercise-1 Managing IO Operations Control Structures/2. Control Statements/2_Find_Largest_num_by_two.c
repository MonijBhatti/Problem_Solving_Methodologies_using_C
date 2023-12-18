// 2. Write a program to find the largest of two given numbers using if-else statements.

#include <stdio.h>

int main() {
    int num1, num2;

    // Get user input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check which number is larger
    if (num1 > num2) {
        printf("%d is the largest number.\n", num1);
    } else if (num1 < num2) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
