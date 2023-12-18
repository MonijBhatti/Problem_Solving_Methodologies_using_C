// 6. Write a program to check whether a given number is prime or not using if-else statements.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int user_input;
    bool isPrime = true;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Check if the number is prime using only if-else statements
    if (user_input <= 1) {
        isPrime = false;  // 1 and numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= user_input; i++) {
            if (user_input % i == 0) {
                isPrime = false;  // If there's a factor, the number is not prime
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", user_input);
    } else {
        printf("%d is not a prime number.\n", user_input);
    }

    return 0;
}
