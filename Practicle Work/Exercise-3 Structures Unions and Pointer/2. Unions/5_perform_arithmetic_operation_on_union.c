// 5. Write a program to perform arithmetic operations on a union variable with multiple data type.

#include <stdio.h>

// Define the union with attributes for integers
union ArithmeticUnion {
    int intValue1;
    int intValue2;
};

int main() {
    // Declare a variable of type union ArithmeticUnion
    union ArithmeticUnion myArithmeticUnion;

    // Initialize the union with different integer values
    myArithmeticUnion.intValue1 = 10;
    myArithmeticUnion.intValue2 = 5;

    // Perform arithmetic operations
    int sum = myArithmeticUnion.intValue1 + myArithmeticUnion.intValue2;
    int difference = myArithmeticUnion.intValue1 - myArithmeticUnion.intValue2;
    int product = myArithmeticUnion.intValue1 * myArithmeticUnion.intValue2;
    int quotient = myArithmeticUnion.intValue1 / myArithmeticUnion.intValue2;

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

    return 0;
}
