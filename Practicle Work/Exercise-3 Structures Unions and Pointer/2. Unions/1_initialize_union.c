// 1. Write a program to define and initialize a union for a variable with attributes such as integer,float, and character.

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

    // Initialize the union with different values
    myVariable.intValue = 10;
    printf("Integer Value: %d\n", myVariable.intValue);

    myVariable.floatValue = 3.14;
    printf("Float Value: %f\n", myVariable.floatValue);

    myVariable.charValue = 'A';
    printf("Character Value: %c\n", myVariable.charValue);

    return 0;
}
