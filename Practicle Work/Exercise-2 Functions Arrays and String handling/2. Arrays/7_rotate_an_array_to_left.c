// 7. Write a program to rotate an array to the left by a given number of positions.

#include <stdio.h>

// Function to rotate the array to the left by 'd' positions
void leftRotateArray(int arr[], int size, int d) {
    // Normalize the value of 'd' in case it's greater than the array size
    d = d % size;

    // Temporary array to store the rotated elements
    int temp[size];

    // Copy the elements to the temporary array after rotation
    for (int i = 0; i < size; i++) {
        temp[i] = arr[(i + d) % size];
    }

    // Copy the rotated elements back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int size, d;

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

    // Input: Number of positions to rotate the array to the left
    printf("Enter the number of positions to rotate the array to the left: ");
    scanf("%d", &d);

    // Call the function to rotate the array to the left
    leftRotateArray(arr, size, d);

    // Display the rotated array
    printf("Array after left rotation by %d positions:\n", d);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
