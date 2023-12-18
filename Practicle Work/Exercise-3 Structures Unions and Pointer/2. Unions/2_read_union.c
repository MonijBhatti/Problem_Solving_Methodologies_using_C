// 2. Write a program to read and display the values of a union variable with multiple data types.

#include <stdio.h>

// Define the union with attributes for integer, float, and character
union Variable {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Declare a variable of type union Variable
    union Variable myVariable;

    // Read values from the user for each attribute
    printf("Enter an integer value: ");
    scanf("%d", &myVariable.intValue);

    printf("Enter a float value: ");
    scanf("%f", &myVariable.floatValue);

    printf("Enter a character value: ");
    scanf(" %c", &myVariable.charValue); // Note the space before %c to consume the newline character

    // Display the values
    printf("\nValues entered:\n");
    printf("Integer Value: %d\n", myVariable.intValue);
    printf("Float Value: %f\n", myVariable.floatValue);
    printf("Character Value: %c\n", myVariable.charValue);

    return 0;
}
