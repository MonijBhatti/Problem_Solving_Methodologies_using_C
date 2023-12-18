// 7. Write a program to convert a given decimal number to binary using a function.

#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    // Handling the case for 0
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    // Convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // Display the binary equivalent in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    // Input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Call the function to convert and display the binary equivalent
    decimalToBinary(decimal);

    return 0;
}
