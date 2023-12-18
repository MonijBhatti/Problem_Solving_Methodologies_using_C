// 4. Write a program to read and display the values of a union variable with different currencies.
#include <stdio.h>

// Define the union for currency with attributes for dollars, euros, and yen
union Currency {
    float dollars;
    float euros;
    float yen;
};

int main() {
    // Declare a variable of type union Currency
    union Currency myCurrency;

    // Read values from the user for each currency
    printf("Enter amount in dollars: $");
    scanf("%f", &myCurrency.dollars);

    printf("Enter amount in euros: €");
    scanf("%f", &myCurrency.euros);

    printf("Enter amount in yen: ¥");
    scanf("%f", &myCurrency.yen);

    // Display the values
    printf("\nAmounts entered:\n");
    printf("Dollars: $%.2f\n", myCurrency.dollars);
    printf("Euros: €%.2f\n", myCurrency.euros);
    printf("Yen: ¥%.2f\n", myCurrency.yen);

    return 0;
}
