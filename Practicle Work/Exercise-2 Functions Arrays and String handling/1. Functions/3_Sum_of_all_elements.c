//3. Write a program to find the sum of all elements in an array using a function.

#include <stdio.h>

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check for a valid array size
    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1; // Exit the program with an error code
    }

    int arr[size];

    // Input: Elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the function to calculate the sum and display the result
    int sum = calculateSum(arr, size);
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
