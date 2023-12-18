//4. Create a program that calculates the sum of digits of a number.

#include <stdio.h>

int sum_of_digits(int number) {
    int digit_sum = 0;

    // Loop to extract each digit and add to the sum
    while (number != 0) {
        digit_sum += number % 10;  // Extract the last digit
        number /= 10;              // Remove the last digit
    }

    return digit_sum;
}

int main() {
    int user_input;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Calculate and display the sum of digits
    int result = sum_of_digits(user_input);
    printf("The sum of digits in %d is: %d\n", user_input, result);

    return 0;
}
