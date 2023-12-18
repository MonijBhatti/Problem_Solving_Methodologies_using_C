// 4. Write a program to find the sum of all even elements in an array.

#include <stdio.h>

int main() {
    int size;

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check for a valid array size
    if (size <= 0) {
        printf("Invalid array size. Please enter a size greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    int arr[size];

    // Input: Elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the sum of all even elements in the array
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    // Display the sum of even elements
    printf("Sum of even elements in the array: %d\n", sum);

    return 0;
}
