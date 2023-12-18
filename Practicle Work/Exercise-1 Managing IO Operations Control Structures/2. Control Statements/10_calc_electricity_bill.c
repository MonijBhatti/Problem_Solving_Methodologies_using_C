// 10. Write a program to calculate the electricity bill for a given number of units using if-elseStatements.

#include <stdio.h>

int main() {
    int units;
    double bill;

    // Get user input
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate electricity bill based on the number of units using if-else statements
    if (units < 0) {
        printf("Invalid input. Units consumed should be non-negative.\n");
    } else if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Display the calculated electricity bill
    printf("Electricity Bill for %d units: $%.2lf\n", units, bill);

    return 0;
}
