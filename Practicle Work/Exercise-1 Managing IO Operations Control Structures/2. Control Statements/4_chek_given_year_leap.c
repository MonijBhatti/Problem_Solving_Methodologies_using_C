//4. Write a program to check whether a given year is a leap year or not using if-else statements.

#include <stdio.h>

int main() {
    int year;

    // Get user input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using if-else statements
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
