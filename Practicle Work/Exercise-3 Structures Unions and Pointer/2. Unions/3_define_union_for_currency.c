// 3. Write a program to define a union for a currency with attributes such as dollars, euros, and yen.

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

    // Initialize the union with different values
    myCurrency.dollars = 100.50;
    printf("Dollars: $%.2f\n", myCurrency.dollars);

    myCurrency.euros = 85.75;
    printf("Euros: €%.2f\n", myCurrency.euros);

    myCurrency.yen = 12000.0;
    printf("Yen: ¥%.2f\n", myCurrency.yen);

    return 0;
}
